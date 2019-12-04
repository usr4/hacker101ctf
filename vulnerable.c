#include <stdio.h>
#include <string.h>

void read_all_stdin(char* str) {
    int c;
    int i = 0;
    
    do {
        c = fgetc(stdin);
        if (feof(stdin)) {
            break;
        }
	
        str[i] = c;
        i++;
    } while(1);
}

int main(void) {
    char str[32];
    
    memset(str, '\0', 32);
    read_all_stdin(str);

    if (str[0] == '\0') {
        puts("What is your name?");
    } else {
        printf("Hello %s!\n", str);
    }
    
    return 0;
}
