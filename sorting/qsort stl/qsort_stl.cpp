#include<iostream>
#include<stdio.h>
#include<cstdlib> //header for qsort stl
using namespace std;

int values[] = {88, 56, 100, 2, 25};
/*the comparison function below:
-returns a negative integer if the first argument is less than the second
-returns a positive integer if the first argument is greater than the second
-zero if both arguments are equal
*/
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}


int main()
{
    int n;
    int arr_size = sizeof(values)/sizeof(values[0]);
    cout<<"Before sorting the list is: ";
    for(n = 0; n < arr_size; n++){
        cout<<values[n]<<" ";
    }
    qsort(values, arr_size, sizeof(int), cmpfunc);

    cout<<endl<<"After sorting the list is: ";
    for(n = 0; n< arr_size; n++){
        cout<<values[n]<<" ";
    }

    return 0;
}

//https://www.tutorialspoint.com/c_standard_library/c_function_qsort.htm
