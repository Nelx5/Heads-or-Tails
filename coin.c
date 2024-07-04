#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int heads = 0, tails = 0;
    char str[100];
    
    srand(time(NULL));

    printf("Who are you?\n");
    scanf("%s", str);
    printf("Hello, %s!\n", str);
    
    printf("Tossing a coin...\n");
    
    for (int i = 1; i <= 3; i++) {
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