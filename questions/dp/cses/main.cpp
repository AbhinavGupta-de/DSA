#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int highLimit = 1e6 + 1;

long dp[highLimit];

long diceCombinations(int target) {
    if(target < 0) return 0;
    if(target == 0) return 1;

    if(dp[target] != -1) return dp[target];

    long ways = 0;

    for(int i = 1; i <= 6; i++) {
        ways += diceCombinations(target - i);
        ways %= MOD;
    }

    return dp[target] = ways;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int target;

    cin >> target;

    memset(dp, -1, sizeof(dp));

    long ans = diceCombinations(target);
    cout << ans << endl;

    return 0;
}
