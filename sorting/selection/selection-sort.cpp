//find the next smallest number and put it in place
#include<iostream>
using namespace std;
//function for sorting
void selection(int a[], int n){
    for(int i = 0;i < n; i++){

        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]) swap(a[i], a[j]);
        }
    }
}
//function for printing array
print(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main()
{
    int a[] = {8, 9, 3, 4, 6 , 2, 34, 87, 32}, n=9;
    selection(a, n);
    print(a, n);


    return 0;
}
