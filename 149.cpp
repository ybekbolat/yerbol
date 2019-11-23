#include <bits/stdc++.h>
using namespace std;

int main() {
    srand(time(0));
    int size = rand() % 10 + 3;
    char c[size];
    int x, y;
    for (int i = 0; i < size; i++) {
        c[i] = char(rand() % 26 + 'a');
    }
    for (int i = 0; i < 1; i++){
        x = rand() % size;
        y = rand() % size;
        if (x != y) {
            break;
        }
        else {
            i = 0;
        }
    }
    c[x] = '!';
    c[y] = '!';
    for (int i = 0 ; i < size; i++){
        cout << c[i] << " ";
    }
    return 0;
}
