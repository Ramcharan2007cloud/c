#include <stdio.h>
#include <string.h>

int main() {
    char s[105];
    scanf("%s", s);

    int count1 = 0, count2 = 0, count3 = 0;

    // Count how many 1s, 2s, and 3s are in the string
    int i;
    for (i = 0; s[i]; i++) {
        if (s[i] == '1') count1++;
        else if (s[i] == '2') count2++;
        else if (s[i] == '3') count3++;
    }

    // Print sorted result
    int first = 1; // to handle '+' placement
    for (i = 0; i < count1; i++) {
        if (!first) printf("+");
        printf("1");
        first = 0;
    }
    for ( i = 0; i < count2; i++) {
        if (!first) printf("+");
        printf("2");
        first = 0;
    }
    for ( i = 0; i < count3; i++) {
        if (!first) printf("+");
        printf("3");
        first = 0;
    }

    return 0;
}

