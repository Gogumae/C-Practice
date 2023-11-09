#include <iostream>
using namespace std;

int dp[12];

int plusDP(int n) {
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    int i = 4;
    while(i <= n) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
        i++;
    }

    return dp[n];
}

int main() {
    int caseNo;
    cin >> caseNo;

    int* caseArr = new int[caseNo];

    int i = 0;

    while(i < caseNo) {
        cin >> caseArr[i];
        i++;
    }

    i = 0;

    while(i < caseNo) {
        cout << plusDP(caseArr[i]) << endl;
        i++;
    }

    return 0;
}

