#include <iostream>
#include <vector>
using namespace std;

void misteri(vector<int>& v, int a) {
    for (int i = 0; i < v.size(); i++) {
        v[i] *= a;
    }
}

int main() {
    vector<int> v = {1, 2, 3};
    misteri(v, 10);

    int total = 0;
    for (int x : v) {
        total += x;
    }
    cout << total << endl;
}