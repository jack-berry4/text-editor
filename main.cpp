#include <iostream>
#include <unistd.h>


int main() {
    char c;

    do {
        read(STDIN_FILENO, &c, 1);
        if (c == 'q'){
            return 0;
        }
    } while(c != -1);
    return 0;
}