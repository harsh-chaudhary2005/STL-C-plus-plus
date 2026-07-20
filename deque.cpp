#include<iostream>
#include<deque>
using namespace std;
int main(){
    //All functions are similar as vector and list
  deque<int> d = {1, 2, 3}; //double ended queue

  for(int val : d){
    cout << val << " ";

  }
  cout << endl;
  return 0;
}