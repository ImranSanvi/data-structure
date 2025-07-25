#include<bits/stdc++.h>
#include <stdlib.h>
using namespace std;

struct node {
  int data;
  struct node *left;
  struct node *right;
};

// New node creation
struct node *get_newNode(int data) {
  struct node *new_node = (struct node *)malloc(sizeof(struct node));

  new_node->data = data;
  new_node->left = NULL;
  new_node->right = NULL;
  return new_node;
}

//Insert Node
struct node *in_sert(struct node *root ,int value){
    if(root == NULL){
        return get_newNode(value);
    }

    if(root->data < value){
        root ->right = in_sert(root->right , value);
    }

    else if(root->data > value){
        root ->left = in_sert(root->left , value);
    }

    return root;
};


// Traverse Preorder
void traversePreOrder(struct node *temp) {
  if (temp != NULL) {
    cout << " " << temp->data;
    traversePreOrder(temp->left);
    traversePreOrder(temp->right);
  }
}

// Traverse Inorder
void traverseInOrder(struct node *temp) {
  if (temp != NULL) {
    traverseInOrder(temp->left);
    cout << " " << temp->data;
    traverseInOrder(temp->right);
  }
}


// Traverse Postorder
void traversePostOrder(struct node *temp) {
  if (temp != NULL) {
    traversePostOrder(temp->left);
    traversePostOrder(temp->right);
    cout << " " << temp->data;
  }
}


struct node * minValueNode(struct node* node){
   struct node* current = node;
   while (current && current->left != NULL)
      current = current->left;
   return current;
}


struct node* deleteNode(struct node* root, int data){
   if (root == NULL) return root;
      if (data < root->data)
         root->left = deleteNode(root->left, data);
      else if (data > root->data)
         root->right = deleteNode(root->right, data);
   else{
      if (root->left == NULL){
         struct node *temp = root->right;
         free(root);
         return temp;
      }
      else if (root->right == NULL){
         struct node *temp = root->left;
         free(root);
         return temp;
      }
      struct node* temp = minValueNode(root->right);
      root->data = temp->data;
      root->right = deleteNode(root->right, temp->data);
   }
   return root;
}

int main() {

  struct node *root = NULL;
  int n;
  cin >> n;
  for(int i=1; i<=n; i++){
   int a;
   cin >> a;
  root = in_sert(root , a);

  }


  cout << "preorder traversal:  ";
  traversePreOrder(root);
  cout << endl;

  cout << "\nInorder traversal:  ";
  traverseInOrder(root);
  cout << endl;

  cout << "\nPostorder traversal:  ";
  traversePostOrder(root);
  cout << endl;

  int b,c;
  cin >> b;
  root = deleteNode(root , b);

  cout << "\nInorder traversal:  ";
  traverseInOrder(root);
  cout << endl;

  return 0;
}
