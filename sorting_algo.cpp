#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int arr[5] = {4, 2, 9, 15, 7};

  sort(arr, arr + 5, greater<int>()); //greater<int>() reverse kr rha h

  for(int val : arr){
    cout << val << " ";
  }
  cout << endl;
  return 0;
}