#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> vec;
  //pushback, popback functions and emplace back functions
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);
  vec.push_back(5);
  vec.emplace_back(6);


  vec.pop_back();
  for(int val : vec){ //for integer value in our vector(vec)
    cout << val << " ";
  }
  cout << endl;

  cout << vec.size() << endl;
  cout << vec.capacity() << endl;
  //use of at()
  cout << "val at idx 2 is " << vec[2] << " or " << vec.at(2) << endl;

  //Use of front and back
  cout << "front " << vec.front() << endl;
  cout << "back " << vec.back() << endl;

  return 0;
}