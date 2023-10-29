#include <iostream>
#include <cmath>

int custom_pow(int a, int b) {
    int i = 0;
    int temp = (a * a);

    while(i <= b + 1) {
        temp = (temp * a) % 10;
        i++;
    }

    return temp;
}

int main() {
    int testcase;
    int a, b;

    std::cin >> testcase;

    int* result = new int[testcase];

    for(int i = 0; i < testcase; i++) {
        std::cin >> a;
        std::cin >> b;
        result[i] = custom_pow(a, b);
        if(result[i] == 0) {
            result[i] = 10;
        }
    }

    for(int j = 0; j < testcase; j++) {
        std::cout << result[j] << std::endl;
    }

    return 0;
}