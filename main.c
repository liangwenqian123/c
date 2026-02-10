#include "beta-func.h"
int main(){
    struct com body;
    printf("welcome to use it\nif you don't know how to use it\nplease input hel 0 0 0\nnotice: the third 0 can't bigger than %d\n",LIST_NUMBER);
    while(1){
        Show_Input_Str;
        GET_INPUT(body.com,body.number_1,body.number_2,body.number_3);
        NEXT;
        if (strcmp(body.com,"ext") == 0){
            break;
        }else{
            find_do(body.com,body.number_1,body.number_2,body.number_3);
        }
    }
    return 0;
}