#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    vector<int> abc(3);
    for (int i = 0; i < 3; ++i)
        cin >> abc[i];
    sort(abc.begin(), abc.end());

    if (abc[0] == 5 && abc[1] == 5 && abc[2] == 7)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
