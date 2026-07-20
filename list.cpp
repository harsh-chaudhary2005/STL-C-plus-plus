#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    // All functions like erase, clear, begin, end, rbegin, rend exists in list like vector
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(4);
    l.push_front(5);
    l.push_front(6);

    for(int val : l){
        cout << val << " ";
    }
    cout << endl;
  return 0;
}