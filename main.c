#include <stdio.h>
#include "func.h"
int main(){
    int o1,o2,o3,cmd;
    printf("Now is a small program\n"
           "This is a bid change edition,\n"
           "if you don't how to play it,\n"
           "please input 0 0 0 0");
    while (1){
        input_cmd(&cmd,&o1,&o2,&o3);
        if (cmd == 1){
            printf("Thanks to play\n"
                   "Bye!\n");
            break;
        } else{
            find(cmd,o1,o2,o3);
        }
    }
    return 0;
}