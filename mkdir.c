// https://www.gnu.org/software/libc/manual/html_node/Permission-Bits.html

#include <stdio.h>
#include <sys/stat.h> // Contains the "mkdir" function

int main(void){
// Gives user read, write, and execute permissions to directory
    char *dirname="blegh";
    mkdir(dirname,S_IRWXU);
    return 0;
}
