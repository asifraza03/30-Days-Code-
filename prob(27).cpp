//Problem(27) - Print sum of range from l to r using vector.



#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    
    int l, r;
    cin >> l >> r;
    int count = 0;

    // Change the loop condition and indexing
    for (int i = l; i <= r; i++) {
        count += v[i];
    }
    
    cout << count << endl;
    return 0;
}
