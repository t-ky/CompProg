#include <iostream>

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int sum;

    for(int i=1;i<=n;++i){
        sum += i;
    }

    cout << sum << endl;

return 0;
}