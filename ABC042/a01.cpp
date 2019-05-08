#include <bits/stdc++.h>


int main(){
    std::cin.tie(0);
    std::ios::sync_with_stdio(false);

    std::vector<int> abc(3);

    for(int i = 0;i<3;++i)
        std::cin >>abc[i];
    
    std::sort(abc.begin(),abc.end());

    if(abc[0] == 5 && abc[1] == 5 && abc[2] == 7)
        std::cout <<"YES\n" << std::endl ;
    else
        std::cout <<"NO\n" << std::endl ;

    return 0;
}