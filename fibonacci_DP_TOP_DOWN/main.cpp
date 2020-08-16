#include <iostream>

using namespace std;

int arr[50];
int fib(int n){
    if(arr[n]!=-1){
        return arr[n];
    }
    else{
        arr[n] = fib(n-1) + fib(n-2);
        return arr[n];
    }

}

int main()
{
    for(int i=0;i<50;i++){
        arr[i] = -1;
    }
    arr[0] = 0;
    arr[1] = 1;
    int n;
    cout<<"Give the position : ";
    cin>>n;
    int result = fib(n);
    cout<<"The element in this position : "<<result<<"\n";
    return 0;
}

