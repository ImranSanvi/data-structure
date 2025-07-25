#include<bits/stdc++.h>
using namespace std;

//class Node{
//public:
//    float val;
//    char ch;
//    Node *next;
//    Node -> next;
//    Node ->next_to_next;
//
//    Node(float f , char c){
//        val = f;
//        ch = c;
//        next = NULL:
//        next_to_next = NULL;
//    }
//};


class node{
    public:
        int data;
        node * next;
};

class linkedList{
    public :
     node *head;

    linkedList(){
        head = NULL;
    }

    node* createNewNode(int value){
        node *newNode = new node;
        newNode -> data = value;
        newNode -> next = NULL;
        return newNode;
    }

    void insertAtHead(int value){
        node *a = createNewNode(value);

        if(head == NULL){
            head = a;
            return;
        }

        else{
            a -> next = head;
            head = a;
        }
    }

    void insertAtAnyPos(int index , int value){
        if(index == 0){
            insertAtHead(value);
            return;
        }

        node *a = head;
        int cur_index=0;
        while(cur_index != index-1){
            a = a->next;
            cur_index++;
        }

        node *newNode = createNewNode(value);
        newNode ->next = a -> next;
        a -> next = newNode;
    }

    void insertAtEnd(int value){
        node *a = createNewNode(value);
        if(head == NULL){
            head = a;
            return;
        }
        node *tmp = head;
        while(tmp->next != NULL){
            tmp = tmp->next;
        }
        tmp -> next = a;
    }

    void inserAfterValue(int target , int value){
        node *a = head;
        int c = 0;
        while(a != NULL){
            if(a->data == target){
                break;
            }
            a = a->next;
            node *newNode = createNewNode(value);
            newNode -> next = a -> next;
            a -> next = newNode;
        }
        if( a == NULL){
            cout << "This value not Found!" << endl;
        }
    }

    void deleteFromHead(){
        if(head == NULL){
            return;
        }
        node *a = head;
        head = a -> next;
    }

    void deleteFromIndex(int index){
        if(index == 0){
            deleteFromHead();
            return;
        }

        int cur_index = 0;
        node *a = head;
        while(cur_index != index-1){
           a = a-> next;
           cur_index++;
        }
        node *b = a->next;
        a->next = b->next;
    }

    void removeLast(){
        node *a = head;
        if( a== NULL){
            cout << "empty List"<< endl;
            return;
        }
        while(a ->next ->next != NULL){
            a = a->next;
        }
        a->next = NULL;
    }

    node * Merge(node *left , node * right){
        if(!left)return right;
        if(!right)return left;

        node *result;
        if(left->data <= right->data){
            result = left;
            result -> next = Merge(left->next , right);
        }
        else{
            result = right;
            result -> next = Merge(left , right->next);
        }
    }

    node * getMid(node * head){
        if(head == NULL){
            return head;
        }

        node * slow = head;
        node * fast = head -> next;
        while(fast!=NULL && fast->next != NULL){
            slow = slow -> next;
            fast = fast->next -> next;
        }
        return slow;
    }

    node * mergeSort(node * head){
        if(head == NULL || head->next == NULL){
            return head;
        }

        node * mid = getMid(head);
        node * left = head;
        node * right = mid->next;
        mid ->next = NULL;

        left = mergeSort(left);
        right = mergeSort(right);

        return Merge(left , right);
    }

    void sortList(){
        head = mergeSort(head);
    }

    void traverse(){

        if(head == NULL){
            cout << "Linked List is empty" << endl;
        }

        else{
            node *temp = head;
            while(temp != NULL){
                cout << temp -> data << " ";
                temp = temp -> next;
            }
            cout << endl;
        }
    }

    int searchValue(int value){
       if(head == NULL){
            cout << "Linked List is empty" << endl;
        }

        else{
            node *temp = head;
            int c=0;
            while(temp != NULL){
                if(temp -> data == value){
                    return c+1;
                }
                else {
                    c++;
                    temp = temp -> next;
                }
            }
        }
        return -1;
    }

    int getValue(int index){

            node *temp = head;
            int c=0;
            while(temp != NULL){
                if(index == c){
                    return temp->data;
                }
                else {
                    c++;
                    temp = temp -> next;
                }
            }
        return -1;
    }

    int getSize(){
        int c = 0;
        if(head == NULL){
            return c;
        }

        else{

            node *temp = head;
            while(temp != NULL){
                c++;
                temp = temp->next;
            }

            return c;
        }

    }

    void printReverse(node *a){
        if(a == NULL){
            return;
        }
        printReverse(a -> next);
        cout << a->data << " ";
    }

    void printReverse1(){
        printReverse(head);
    }

};

int main(){

    linkedList l;

    l.insertAtHead(5);
    l.insertAtHead(2);
    l.insertAtHead(10);
    l.insertAtHead(7);

    cout << "size =  " << l.getSize() << endl;
    cout << "Linked List :";
    l.traverse();

    l.insertAtEnd(122);
    l.sortList();
    l.traverse();

//    l.insertAtAnyPos(2 , 20);
//    cout << "New size = " << l.getSize() << endl;
//    cout << "Linked List :";
//    l.traverse();
//
//    cout << "value at index 2 : "<< l.getValue(2) << endl;
//
//    l.deleteFromHead();
//    cout << "After delete from head : ";
//    l.traverse();
//
//    l.deleteFromIndex(2);
//    cout << "After delete from index 2 : ";
//    l.traverse();
//
//    l.inserAfterValue(5 , 15);
//    cout << "insert after value ";
//    l.traverse();
//
//    cout << "Reverse linked List : ";
//    l.printReverse1();

    return 0;
}

ListNode * insertionSort(ListNode * head){
      if (!head || !head->next) return head;

        ListNode* sorted = nullptr;

        ListNode* curr = head;
        while (curr) {
            ListNode* nextNode = curr->next;

            if (!sorted || sorted->val >= curr->val) {
                
                curr->next = sorted;
                sorted = curr;
            } else {
             
                ListNode* temp = sorted;
                while (temp->next && temp->next->val < curr->val) {
                    temp = temp->next;
                }
                curr->next = temp->next;
                temp->next = curr;
            }

            curr = nextNode;
        }

        return sorted;
    }
