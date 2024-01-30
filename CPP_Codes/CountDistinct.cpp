#include <iostream>
using namespace std;
int countDistinct(int arr[],int n){
  int count = 0;
  bool isDistinct = true;
  for(int i=0;i<n;i++){
    isDistinct = true;
    for (int j=i-1;j>=0;j--){
      if(arr[i]==arr[j]){
       isDistinct= false;
       break;
      }
    }
    if(isDistinct)
     count++;
  }
  return count;
}

int main(){
  int n;
  cout << "Enter size of array: ";
  cin >> n;
  int arr[n];
  cout << "Enter " << n << " elements of array:"<<endl;
  for(int i=0;i<n;i++)
   cin >> arr[i];
  cout << "No. of distinct elements in array is:" << countDistinct(arr,n) << endl;
  return 0;
}