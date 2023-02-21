#include <stdio.h>
#include <string.h>
#include <stdbool.h>


titleCase(char *txt);

void main(){

    char s[100] = "henrik wirblad heter jag";
    titleCase(s);
    printf(" %s", s);

}

titleCase(char *txt){

    bool beforeWasSpace = false;
    txt[0] = toupper(txt[0]);

    for(int i = 1; i < strlen(txt); i++){

        if(beforeWasSpace){
            txt[i] = toupper(txt[i]);
            beforeWasSpace = false;
        }
        
        else if(txt[i] == ' ')
            beforeWasSpace = true;
    }
}