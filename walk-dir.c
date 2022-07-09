// https://www.geeksforgeeks.org/c-program-list-files-sub-directories-directory/

#include <stdio.h>
#include <dirent.h>

int main(void){
    char *my_dir;
    char *fname;
    struct dirent *de;
    DIR *src_dir=opendir(my_dir);
    while ((de=readdir(src_dir)) != NULL) {
        fname=de->d_name;
        if ((strlen(fname) == 1 && fname[0] == '.') || (strlen(fname) == 2 && fname[0] == '.' && fname[1] == '.'))
            continue;
    }
    closedir(src_dir);
    return 0;
}
