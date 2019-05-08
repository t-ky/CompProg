#include <iostream>
using namespace std;
typedef long long ll;

static const int mod = 1000000007;
int main(){
    ll a, b, c;
    cin >> a >> b >> c;
    printf("%lld\n", a * b % mod * c % mod);
    return 0;
}