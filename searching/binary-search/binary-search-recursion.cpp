#include <iostream>
using namespace std;

int binary_srch(int arr[], int left, int right, int key){
    int mid = left + (right - left) / 2;

    if (arr[mid] == key)
        return mid + 1;
    if (arr[mid] > key)
        binary_srch(arr, left, mid-1, key);
    else
        binary_srch(arr, mid + 1, right, key);

}

int main()
{
    int arr[] = {1, 3, 4, 6, 7, 11, 13, 15, 16, 18, 22, 23, 27}, len, key;

    len = sizeof(arr) / sizeof(arr[0]);
    cin >> key;
    cout << "value found in: " << binary_srch(arr, 0, len-1, key);
    return 0;
}
