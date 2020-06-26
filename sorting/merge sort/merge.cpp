 #include<iostream>
 using namespace std;

 void merge_sort(int arr[], int left, int right){

    if(left >= right) return ;  //base case runs if left and right have same value

    int mid = left + (right-left)/2; //prevent overflow for bigger array
    merge_sort(arr, left, mid);
    merge_sort(arr, mid+1, right);

    int i, j, k, temp[right];
    for(i = left, j = mid+1, k = left; k<=right; k++){
        if(i == mid + 1) temp[k] = arr[j++]; //if left side array completed then right side value will assign automatic
        else if(j == right + 1) temp[k] = arr[i++]; //if right side completed then left will automatic assign
        else if(arr[i] < arr[j]) temp[k] = arr[i++];
        else temp[k] = arr[j++];
    }
    //reassign array from temp to arr
    for(i=left; i<=right; i++){
        arr[i] = temp[i];
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 }

 int main()
 {
     int arr[] = {4, 2, 9, 8, 10, 1, 12, 7, 3};
     int arr_size = sizeof(arr)/sizeof(arr[0]);

     merge_sort(arr, 0, arr_size-1);

     for(int i = 0; i<arr_size; i++){
        cout<<arr[i]<<" ";
     }
     return 0;
 }
