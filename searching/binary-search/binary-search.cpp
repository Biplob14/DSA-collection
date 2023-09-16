//elements should be in order
#include <iostream>
using namespace std;

int binary_srch(int arr[], int right, int key){
    int left = 0, mid;

    while(left <= right){
        mid = left + (right - left)/2;
        if (left == right)
            return -1;
        if (arr[mid] == key)
            return mid+1;

        if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid -1;
    }
}

int main()
{
    int arr[] = {1, 3, 4, 6, 7, 11, 13, 15, 16, 18, 22, 23, 27}, len, key;

    len = sizeof(arr) / sizeof(arr[0]);
    key = 13;
    cout << "Key found ind: " << binary_srch(arr, len-1, key);

    return 0;
}
