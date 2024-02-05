#include<iostream>
using namespace std;

void print(int arr[], int start, int end,  int key) {
for (int i = start; i <= end; i++)
{
   cout << arr[i] << " ";
}
cout << endl;

}


bool binarysearch(int arr[], int start, int end,  int key) {

cout << endl;
print(arr, start, end, key);


//base case
if(start > end) {
    return false;
}
int mid = start + (end-start)/2;
cout << "Value of mid is " << arr[mid] << endl;

if(arr[mid] == key ){
    return true;
}
if(arr[mid] < key ){
   return binarysearch(arr,mid+1,end,key);
}
else{
    return binarysearch(arr, start, mid-1, key);
}

}




int main(int argc, char const *argv[])
{
    int arr[6] = {2,4,6,10,14,18};
    int size = 6;
    int start = 0;
    int end = 5;
    int key = 14;

    int ans = binarysearch(arr, start, end, key);
    cout << ans << endl;
    return ans;
}
