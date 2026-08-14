#include<iostream>
#include<set>
using namespace std;
int main(){
  set<int> s; //if we use multiset here then it can also accept duplicate values 
              //if we use unordered_set then it will give random output
  

  s.insert(1);
  s.insert(2);
  s.insert(3);
  s.insert(4);
  s.insert(5);

  cout << "lower bound = " << *(s.lower_bound(4)) << endl;
  cout << "upper bound = " << *(s.upper_bound(4)) << endl;
    //All functions like count, erase, find, size and empty are similar as map
  for(auto val : s){
    cout << val << " ";
  }
  cout << endl;
  return 0;
}
