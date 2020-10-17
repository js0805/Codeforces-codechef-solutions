// https://codeforces.com/contest/25/problem/A
// Created by https://github.com/shrey27tri01 

#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    if (3 <= n && n <= 100) {
        int array[n];
        for (int i = 0; i < n; i++) {
            cin >> array[i];
        }
        int evenCount = 0, oddCount = 0;
        for (int i = 0; i < n; i++) {
            if (array[i] % 2 == 0) {
                evenCount += 1;
            } else if (array[i] % 2 == 1) {
                oddCount += 1;
            }
        }
        if (evenCount == 1) {
            for (int i = 0; i < n; i++) {
                if (array[i] % 2 == 0) {
                    printf("%d", i + 1);
                }
            }
        }
        if (oddCount == 1) {
            for (int i = 0; i < n; i++) {
                if (array[i] % 2 == 1) {
                    printf("%d", i + 1);
                }
            }
        }
    }
    return 0;
}
