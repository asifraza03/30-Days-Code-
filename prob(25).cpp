
//Problem(25) - Seperate even to the left & odd to the right using vector.

#include <iostream>
#include <vector>
using namespace std;

void edit(vector<int> &v) {
    int left = 0;
    int right = v.size() - 1;
    while (left < right) {
        if (v[left] % 2 == 1 && v[right] % 2 == 0) {
            // swap(v[left], v[right]);
 int temp = v[left];
            v[left] = v[right];
            v[right] = temp;
            left++;
            right--;
        }
        if (v[left] % 2 == 0) {
            left++;
        }
        if (v[right] % 2 == 1) {
            right--;
        }
    }
    return;
}

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int elem;
        cin >> elem;
        v.push_back(elem);
    }
    edit(v);
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}
