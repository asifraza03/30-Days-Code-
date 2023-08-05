#include <iostream>
using namespace std;

void revstr(string& s)
{
    int len = s.length();
    int n = len - 1;
    for (int i = 0; i<=n; i++) 
    {
        swap(s[i], s[n]);
        n--;
    }
}

int main()
{
    string s;
    cin >> s;

    revstr(s);

    cout << s << endl;

    return 0;
}
