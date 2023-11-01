#include <iostream>
using namespace std;

int main() {
    int input;
    int new_num = 0;
    int cycle = 0;

    cin >> input;

    if(input < 0 || input > 99) {
        return 0;
    }

    if(input / 10 == 0) {
        cycle++;
        new_num = input * 11;
    }
    else {
        new_num = input % 10 * 10 + (input / 10 + input % 10) % 10;
        cycle++;
    }

    while(new_num != input) {
        new_num = new_num % 10 * 10 + (new_num / 10 + new_num % 10) % 10;
        cycle++;
    }

    cout << cycle;

    return 0;
}