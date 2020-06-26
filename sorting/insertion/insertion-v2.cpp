//from small to big numbers
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertion_sort (int arr[], int length){
    int j, temp;

    for (int i = 0; i < length; i++){
        j = i;
        while (j > 0 && arr[j] < arr[j-1]){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
}

int main()
{
    int a[] = {8, 9, 3, 4, 6 , 2, 34, 87, 32}, n=9;

    insertion_sort(a, n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
