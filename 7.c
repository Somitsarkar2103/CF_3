#include <stdio.h>
#include <string.h>
 
int main() {
    char s[101];
    int freq[26] = {0};
    int distinct = 0;
 
    scanf("%s", s);
 
    for (int i = 0; i < strlen(s); i++) {
        int index = s[i] - 'a';
 
        if (freq[index] == 0) {
            freq[index] = 1;
            distinct++;
        }
    }
 
    if (distinct % 2 == 0) {
        printf("CHAT WITH HER!\n");
    } else {
        printf("IGNORE HIM!\n");
    }
 
    return 0;
}