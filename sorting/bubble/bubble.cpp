//https://youtu.be/ZUI0VQ9JvDw
#include<iostream>
using namespace std;

void bubble(int a[], int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]) swap(a[j], a[j+1]);
        }
    }
}

void print(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main()
{
    int a[] = {8, 9, 3, 4, 6 , 2, 34, 87, 32}, n=9;
    bubble(a, n);
    print(a, n);

    return 0;
}
