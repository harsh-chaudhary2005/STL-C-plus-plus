#include<iostream>
using namespace std;
int main(){
  /*pair<int, int> p = {1, 3};

  cout <<p.first << endl;
  cout <<p.second << endl;*/
  pair<int, pair<string, int>> p = {2021, {"Boom", 2026}};
   cout <<p.first << endl;
  cout <<p.second.first << endl;
  cout <<p.second.second << endl;

  return 0;
}