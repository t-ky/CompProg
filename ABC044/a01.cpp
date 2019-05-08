#include <iostream>

using namespace std;

int main(){
    int n,k,x,y;
    cin >> n;
    cin >> k;
    cin >> x;
    cin >> y;

    int sum = 0;
    for(int i=1;i<=k;++i){
        sum += x;
    }
    for(int j=1;j <=n-k;++j){
        sum += y;
    }
    cout << sum;
    return 0;
}
