#include <stdio.h>
#include<stdlib.h>

void findMinCoins(int N) {
    int denominations[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int i = 0;
    
    while (N > 0) {
        while (N >= denominations[i]) {
            printf("%d ", denominations[i]);
            N -= denominations[i];
        }
        i++;
    }
}

int main() {
    int N = 1234;
    findMinCoins(N);
    return 0;
}
