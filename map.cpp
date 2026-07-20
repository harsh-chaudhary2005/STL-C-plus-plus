#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> m;

    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphone"] = 50;
    m["tablets"] = 120;

    for (auto p : m) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}