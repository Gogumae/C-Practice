#include <iostream>

int dp0[41];
int dp1[41];

void fibonacci(int n) {

    dp0[0] = 1;
    dp1[0] = 0;
    dp0[1] = 0;
    dp1[1] = 1;

    int i = 2;
    while(i <= n) {
        dp0[i] = dp0[i - 1] + dp0[i - 2];
        dp1[i] = dp1[i - 1] + dp1[i - 2];
        i++;
    }
}

int main() {
    int caseNo;
    std::cin >> caseNo;

    int i = 0;
    while(i < caseNo) {
        int input = 0;
        std::cin >> input;

        fibonacci(input);
        std::cout << dp0[input] << ' ' << dp1[input] << '\n';
        i++;
    }

    return 0;
}