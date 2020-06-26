//from smaller number to greater number
#include<iostream>
using namespace std;

void insertion_sort(int a[], int n)
{
    int i, j, item;

    for(i=1;i<n;i++){
        item = a[i]; //putting value temporarily
        j=i-1;
        //for ascending order a[j]>item
        //for descending order a[j]<item
        while(j>=0 && a[j]>item){
            a[j+1] = a[j];
            j--;
        }
        //cout<<" J: "<<j+1<<endl;
        a[j+1] = item;
    }
}

int main()
{
    int a[] = {8, 9, 3, 4, 6 , 2, 34, 87, 32}, n=9;
    insertion_sort(a, n);
    //print sorted array
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
