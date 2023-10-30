#include <iostream>
using namespace std;


int main() {
    long long a, b;

    cin >> a >> b;

    if(a < 1 || b < 1) {
        return 0;
    }

    if(a > b) {
        long long temp;
        temp = a;
        a = b;
        b = temp;
    }

    if(a == b) {
        cout << 0 << endl;
    }
    else {
        cout << b - a - 1 << endl;
    }

    int count = b - a - 1;
    int i = 0;

    while(i < count) {
        cout << a + 1 + i << ' ';
        i++;
    }

    return 0;
}