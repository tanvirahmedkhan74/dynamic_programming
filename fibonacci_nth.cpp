#include<iostream>
#include<map>

typedef long long int ll;

std::map<ll, ll> memo;

// Optimized version using dp
ll fib(ll n){
    if(memo.find(n) != memo.end()) return memo[n];

    if(n <= 2) return 1;
    memo[n] = fib(n-1) + fib(n-2);

    return memo[n];
}

int main(){
    std::cout << fib(50) << "\n";
    for(auto it: memo){
        std::cout << it.first << " " << it.second << "\n";
    }
}