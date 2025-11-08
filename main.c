#include <stdio.h>
int input(int *object,int *object_1,int *object_2,int *object_3){
    printf("please input number code and body\nif you don't know these code,please input 0: ");
    scanf("%d%d%d%d",object,object_1,object_2,object_3);
    return 0;
}
int main() {
    int cmd,object_F,object_S,object_T;
    int temp;
    int list[10] = {0,0,0,0,0,0,0,0,0,0};
    printf("this is a worriest fake system ");
    while(1){
        input(&cmd,&object_F,&object_S,&object_T);
        if (cmd == 0){
            printf("0 -- help\n"
                   "1 -- exit\n"
                   "2 -- add\n"
                   "3 -- move\n"
                   "4 -- print list all member\n"
                   "5 -- copy number\n"
                   "6 -- how to use cmd\tinput:6 cmd(you don't know how to use this cmd) 0 0 0\n"
                   "7 -- times numbers\n"
                   "100 -- show body\n");
        }
        else if (cmd == 1){
            break;
        }
        else if (cmd == 2){
            list[object_T] = object_F +object_S;
        }
        else if (cmd == 3){
            list[object_S] = list[object_F];
            list[object_F] = 0;
        }
        else if (cmd == 4){
            for (int set = 0;set < 10; set++){
                printf("| %d |\t",list[set]);
            }
            printf("\n");
        }
        else if (cmd == 5){
            list[object_S] = list[object_F];
        }
        else if (cmd == 6){
            if (object_F == 0){
                printf("this cmd can list all cmd\n"
                       "input: 0 0 0 0\n");
            }
            else if (object_F == 1){
                printf("this cmd can exit this\n"
                       "input: 1 0 0 0");
            }
            else if (object_F == 2){
                printf("this cmd can add 2 number to path\n"
                       "input: 2 number(need to add number) number(like before) path(you want to save where)\n");
            }
            else if (object_F == 3){
                printf("this cmd and move this path number to other path\n"
                       "input: 3 path(from path) path(to path) 0\n");
            }
            else if (object_F == 4){
                printf("this cmd can list all number\n"
                       "input: 4 0 0 0\n");
            }
            else if (object_F == 5){
                printf("this cmd can copy path number to other path\n"
                       "input: 5 number(from path) number(to path) 0\n");
            }
            else if (object_F == 7){
                printf("this cmd can times number\n"
                       "input: 7 number(need to times) number(like before) path(to save path)");
            }
        }
        else if (cmd == 7){
            list[object_T] = object_F * object_S;
        }
        else if (cmd == 100){
            printf("this version support time and add how to use cmd\n"
                   "writer by haswell\n"
                   "\t a worriest fake system\n"
                   "2025/11/8 version:0.0.1(beta)\n");
        }
    }
    return 0;
}