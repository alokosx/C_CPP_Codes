#include <iostream>
using namespace std;

void fun(int arr[]) {
  int n = sizeof(arr)/sizeof(arr[0]);
  for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}
int main() {
  int arr[] = {10,20,30,40,50};
  int n = sizeof(arr)/sizeof(arr[0]);
  for(int i = 0; i < n; i++) {
    cout << arr[i]<< " ";
  }
  cout << "\n";
  fun(arr); /* fun(arr) returns only 10 20 cause array is passed as a
  pointer to function i.e. of size 8 instead of original size of array */
  return 0;
}

