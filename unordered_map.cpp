#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
  unordered_map<string, int> m;
  m.emplace("tv", 100);
  m.emplace("laptop", 120);
  m.emplace("watch", 10);
  m.emplace("headphones", 220);

  for(auto p: m){
    cout << p.first << " " << p.second << endl;
  }
  return 0;
}