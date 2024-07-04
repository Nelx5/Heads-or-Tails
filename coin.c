#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int heads = 0, tails = 0;
    
    // 乱数生成器を初期化
    srand(time(NULL));
    
    printf("Tossing a coin...\n");
    
    for (int i = 1; i <= 3; i++) {
        // 0か1のランダムな数を生成
        int result = rand() % 2;
        
        if (result == 0) {
            printf("Round %d: Heads\n", i);
            heads++;
        } else {
            printf("Round %d: Tails\n", i);
            tails++;
        }
    }
    
    printf("Heads: %d, Tails: %d\n", heads, tails);
    
    return 0;
}