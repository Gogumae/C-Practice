#include <iostream>
#include <cmath>
using namespace std;

int arr[1000000] = {0};

int main() {
    int start, end;
    cin >> start >> end;

    int i = start;
    while(i <= end) {
        int j = 2;
        while(j <= sqrt(i)) {  //에라토스테네스의 체... n = ab일때 둘 중 하나는 n의 제곱근보다 작을 것이다
            if(i % j == 0) {
                arr[i] = 1;
                break;  //소수가 아닌것을 확인하면 냅다 다음 수로 넘어가야 한다
            }
            else {
                j++;
            }
        }

        if(arr[i] == 0 && i != 1) {  //1은 소수가 아니다!
            cout << i << '\n';  //endl보다 '\n'이 훨씬 빠르다!
        }
        i++;
    }

    return 0;
}