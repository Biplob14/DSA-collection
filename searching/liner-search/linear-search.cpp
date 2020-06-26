#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int key){
    for(int i = 0; i < n; i++)
        if(arr[i] == key)
            return i;

    return -1;
}

int main()
{
    int arr[] = {98, 23, 34, 12, 9, 2, 43, 54, 5, 8}, length, key;

    length = sizeof(arr) / sizeof(arr[0]);
    cin >> key;
    int pos = linear_search(arr, length, key);
    if(pos == -1)
        cout << "Element not found\n";
    else
        cout << "Element found in " << pos << endl;
    return 0;
}
