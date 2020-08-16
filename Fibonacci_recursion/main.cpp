#include <bits/stdc++.h>
using namespace std;

void fibonacci_Series(int n)
{
    int a = 0, b = 1,next;

    if (n < 1)
        return;

    for (int i = 1; i <= n; i++)
    {
        cout<<b<<" ";
        next = a + b;
        a = b;
        b = next;
    }
}
int fibonacci(int pos){
    if(pos<=1){
        return pos;
    }
    else{
        return fibonacci(pos-1)+fibonacci(pos-2);
    }
}

int main()
{
    int choice;
    cout<<"1)Printing the fibonacci Series.\n2)Find the item in the fibonacci Series.\nWrite the choice : ";
    cin>>choice;
    switch(choice){
        case 1: int n,pos;
                cout<<"\nWrite the number of items u want to see in the fibonacci Series : ";
                cin>>n;
                fibonacci_Series(n);
                break;
        case 2: cout<<"Write the position no. to see the item in fibonacci Series : ";
                cin>>pos;
                cout<<fibonacci(pos);
                break;
    }
    return 0;
}
