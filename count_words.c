#include <stdio.h>
#include <string.h> // Essential for "strlen" call

int main(void){
    char *sentence="There is so much spam in this here factory. There is spam there, there is spam here, there is spam everywhere! Wherever shall I go to get that there spam, then? Perhaps here? Perhaps there? Perhaps everywhere? But not all at once, of course.";
    char *pattern="spam";
// So I don't have to call "strlen" during the loop
    int pattern_len=strlen(pattern);
// Tracks the number of occurrences in a given word
    int spam_count=0;
// Find the pattern in the string
    while ((sentence=strstr(sentence,pattern)) != NULL){
// Set the pattern to the longest substring excluding the pattern; repeat
        sentence+=pattern_len;
        spam_count++;
    }
    return spam_count;
}
