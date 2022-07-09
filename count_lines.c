#include <stdio.h>

int main(void){
    char *filename="count_words.c";
    FILE *fp;
    char s[1024];
    int linecount=0;
    fp=fopen(filename,"r");
// Keep reading lines until the EOF is reached; increment every time
    while (fgets(s,sizeof(s),fp) != NULL)
        linecount++;
    fclose(fp);
    return linecount;
}
