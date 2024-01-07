#include<bits/stdc++.h>
// How many ways to reach from start to end in a
// m x n grid ?

typedef long long int ll;

std::map<std::pair<int, int>, ll> memo;

ll grid_traveller(ll m, ll n){
    std::pair<int, int> curr_pair = std::make_pair(std::min(m, n), std::max(m,n));
    if(memo.find(curr_pair) != memo.end()) return memo[curr_pair];

    if(m == 0 || n == 0) return 0;
    if(m == 1 || n == 1) return 1;
    memo[curr_pair] = grid_traveller(m -1, n) + grid_traveller(m, n - 1);
    return memo[curr_pair];
}

int main(){
    std::cout << grid_traveller(18, 18) << "\n";
    std::cout << grid_traveller(150, 300) << "\n";
}