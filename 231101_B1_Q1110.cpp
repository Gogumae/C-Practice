#include <iostream>
using namespace std;

int main() {
    int input;
    int right;
    int sum;
    int sum_right;
    int new_num = 0;
    int cycle = 0;

    cin >> input;

    if(input < 0 || input > 99) {
        return 0;
    }

    if(input / 10 == 0) {
        cycle++;
        right = input;
        new_num = input * 11;
    }
    else {
        right = input % 10;
        sum = input / 10 + right;
        sum_right = sum % 10;
        new_num = right * 10 + sum_right;
        cycle++;
    }

    while(new_num != input) {
        right = new_num % 10;
        sum = new_num / 10 + right;
        sum_right = sum % 10;
        new_num = right * 10 + sum_right;
        cycle++;
    }

    cout << cycle;

    return 0;
}