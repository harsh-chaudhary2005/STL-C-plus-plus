#include<iostream>
#include<vector>
using namespace std;
int main(){
  /* vector<int> vec = {1, 2, 3, 4, 5};
  for(int val : vec){
    cout << val << " ";
  }
  cout <<endl; */

 /* //use of vec(size, value)
  vector<int> vec(3, 10);
  for(int val : vec){
    cout << val << " ";
  }
  cout <<endl; */


    //Use of vec2(vec1)
 /*vector<int> vec1{1, 2, 3, 4, 5};
  vector<int> vec2(vec1);

  for (int val : vec2)
  {
    cout << val << " ";
  }
  cout << endl;*/

  //Erase, insert, clear function
  vector<int> vec = {1, 2, 3, 4, 5};

  vec.erase(vec.begin());

  for(int val : vec){
    cout << val << " ";
  }
  cout << endl;
  vec.insert(vec.begin() + 2, 0);
  for(int val : vec){
    cout << val << " ";
  }
  cout << endl;

  vec.clear();
  for(int val : vec){
    cout << val << " ";
  }
  cout << endl;

  return 0;
}