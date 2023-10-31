#include <iostream>
#include <cmath>
using namespace std;


int main() {
    long long a, b;
    long long sum = 0;

    cin >> a >> b;

    if(a > b) {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }

    if((b - a) % 2 == 1) {
        sum = (a + b) * (b - a + 1) / 2;
    }
    else {
        sum = (a + b) * (b - a) / 2 + (a + b) / 2;
    }

    if(sum < -2147483648 || sum > 2147483647) {
        return 0;
    }

    cout << sum;

    return 0;
}