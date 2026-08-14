#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  vector<int> vec = {1, 2, 3, 4};
  cout << binary_search(vec.begin(), vec.end(), 2) << endl;
  
  return 0;
}
