#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int T, ans = 1;
    vector < int > X, Y, month;
    cin >> T;
    while (T--)
    {
        int x, y;
        cin >> x >> y;
        X.push_back(x);
        Y.push_back(y);

        if (x >= y)
        {
            month.push_back(0);
        }
        else
        {
            month.push_back((y - 1) / x);
        }
    }
    for (int i: month)
    {
        cout << i << endl;
    }
    return 0;
}