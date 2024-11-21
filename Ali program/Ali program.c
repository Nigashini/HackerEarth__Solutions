#include <stdio.h>
#include <string.h>

int main() {
    char tag[10];
    scanf("%s", tag);

    if ((tag[0] + tag[1] ) % 2 != 0 || 
        (tag[3] + tag[4]) % 2 != 0 || 
        (tag[4] + tag[5] ) % 2 != 0 || 
        (tag[7] + tag[8] ) % 2 != 0) {
        printf("invalid\n");
        return 0;
    }

    if (tag[2] == 'A' || tag[2] == 'E' || tag[2] == 'I' || 
        tag[2] == 'O' || tag[2] == 'U' || tag[2] == 'Y') {
        printf("invalid\n");
        return 0;
    }

    printf("valid\n");
    return 0;
}