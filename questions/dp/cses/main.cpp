#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int dp[5001][5001];

long editDistance(string& a, string& b) {
    memset(dp, -1, sizeof(dp));

    for(int i = 0; i < a.size(); i++) {
        for(int j = 0; j < b.size(); j++) {
            if(i == 0 && j == 0) {
                if(a[i] == b[j]) dp[i][j] = 0;
                else dp[i][j] = 1;
            } else if(i == 0) {
                if(a[i] == b[j]) dp[i][j] = j;
                else dp[i][j] = 1 + dp[i][j-1];
            } else if(j == 0) {
                if(a[i] == b[j]) dp[i][j] = i;
                else dp[i][j] = 1 + dp[i-1][j];
            } else {
                if(a[i] == b[j]) dp[i][j] = dp[i-1][j-1];
                else dp[i][j] = 1 + min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1]));
            }
        }
    }

    return dp[a.size()-1][b.size()-1];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;

    cin >> a >> b;

//    memset(dp, -1, sizeof(dp));

    long ans = editDistance(a, b);
    cout << ans << endl;

    return 0;
}
