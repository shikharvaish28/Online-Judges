// https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/shubham-and-xor-8526868e/description/

// Use Permutation and combination to solve in less time

#include <bits/stdc++.h>

using namespace std;

int main(){
    int i,j,n,a;
    long long ans = 0;
    unordered_map<int, int> mp;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
    scanf("%d", &a);
    mp[a]++;
    ans -= (1ll) * (mp[a] - 1) * (mp[a] - 2) / 2;
    ans += (1ll) * (mp[a]) * (mp[a] - 1) / 2;
    }
    printf("%lld\n", ans);
return 0;
}