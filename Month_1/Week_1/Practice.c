#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    if (argc <=1){
        printf("Enter a CLI prompt after the file.\n");
    }
    else
    {
        for (int i = 0; i < argc; i++)
        {
            printf("%s\n", argv[i]);
        }
    }
}