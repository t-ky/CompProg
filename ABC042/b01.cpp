#include <iostream>
#include <string> 
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    cin.tie(0);
    ios::sync_with_stdio(false);

    int n,l;
    cin >> n >> l;

    vector<string> s(n);

    for(int i= 0; i<n; ++i){
        cin >> s[i];
    }

    sort(s.begin(),s.end());

    for(auto x :s){
        cout << x;
    }
    cout << endl;
    return 0;
}