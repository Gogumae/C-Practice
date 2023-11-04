#include <iostream>
using namespace std;

int main() {

    int caseNum;
    int stdNum;
    cin >> caseNum;

    float* caseAvg = new float[caseNum];

    int i = 0;
    while(i < caseNum) {
        cin >> stdNum;
        int* score = new int[stdNum];
        int sum = 0;

        int j = 0;
        while(j < stdNum) {
            cin >> score[j];
            sum += score[j];
            j++;
        }

        float avg = sum / stdNum;

        int k = 0;
        float count = 0;
        while(k < stdNum) {
            if(score[k] > avg) {
                count++;
            }
            k++;
        }

        caseAvg[i] = count / stdNum * 100;
        i++;
    }

    cout << fixed;
    cout.precision(3);

    int t = 0;
    while(t < caseNum) {
        cout << caseAvg[t] << '%' << endl;
        t++;
    }

    return 0;

}