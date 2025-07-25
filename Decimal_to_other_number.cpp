/* Decimal to Binary */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int bi[20], number, i=0, j;
    cin >> number;

    while(number  != 0)
    {
        bi[i] = number % 2;
        number = number / 2;
        i++;
    }

    for(j=i-1; j>=0; j--)  {
       cout << bi[j];
    }

    return 0;
}


/* Decimal To Octal */
int main()
{
    int oc[20], number, i=0, j;
    cin >> number;

    while(number  != 0)
    {
        oc[i] = number % 8;
        number = number / 8;
        i++;
    }

    for(j=i-1; j>=0; j--)  {
       cout << oc[j];
    }
    cout << endl;
    return 0;
}

/* Decimal To Hexadecimal */
int main()
{
    char hexa[20];
    int number, i=0, j;
    cin >> number;

    while(number  != 0)
    {
        int temp = number % 16;

        if(temp <10){
            hexa[i] = temp +48;
            i++;
        }

        else{
            hexa[i] = temp + 55;
            i++;
        }
        number = number / 16;
    }

    for(j=i-1; j>=0; j--)  {
       cout << hexa[j];
    }
    cout << endl;

    return 0;
}

