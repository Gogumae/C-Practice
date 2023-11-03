#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    int alphabet[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    cin >> word;

    int i = 0;

    while(word[i] != '\0') {  //단어의 한 글자씩 읽어 알파벳 배열에 개수 기록
        if(word[i] >= 97) {
            word[i] = word[i] - 32;
        }

        alphabet[word[i] - 65]++;

        i++;
    }

    int j = 0;
    int max_count = 0;
    int max_char;

    while(j < 26) {
        if(max_count < alphabet[j]) {
            max_count = alphabet[j];
            max_char = j;
        }

        j++;
    }

    int k = 0;

    while(k < 26) {
        if(max_count == alphabet[k]) {
            if(max_char != k) {
                max_count = -1;
                max_char = -1;
            }
        }

        k++;
    }

    if(max_char == -1) {
        cout << '?';
        return 0;
    }
    else {
        char character = max_char + 65;
        cout << character;
        return 0;
    }
}