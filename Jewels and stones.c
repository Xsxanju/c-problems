#include <stdio.h>
#include <string.h>
int numJewelsInStones(char* jewels, char* stones) {
    int jewelCount = 0;
    int isJewel[128] = {0};
    for (int i = 0; jewels[i] != '\0'; i++) {
        isJewel[(int)jewels[i]] = 1;
    }
    for (int i = 0; stones[i] != '\0'; i++) {
        if (isJewel[(int)stones[i]]) {
            jewelCount++;
        }
    }
    return jewelCount;
}
