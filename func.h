#include <stdio.h>
#define MEMBER_NUMBER 10
int list[MEMBER_NUMBER] = {0,0,0,0,0,0,0,0,0,0};
int addition(int object_1,int object_2){
    return object_1+object_2;
}
int multiply(int object_1,int object_2){
    return object_1 * object_2;
}
int divide(int object_1,int object_2){
    return (int) object_1 / object_2;
}
void input_cmd(int *cmd,int *object_1,int *object_2,int *object_3){
    printf("_/");
    scanf("%d%d%d%d",cmd,object_1,object_2,object_3);
    printf("\n");
}
void help_cmd(int object_cmd,int object_option){
    switch (object_option) {
        case 0:
            printf("Algorithm -- \n"
                   "\t2 is add\n"
                   "\t3 is multiply\n"
                   "\t4 is divide\n"
                   "Algorithm of list -- \n"
                   "\t5 is add(path)\n"
                   "\t6 is multiply(path)\n"
                   "\t7 is divide(path\n"
                   "Operate of list --\n"
                   "\t8 is move\n"
                   "\t9 is copy\n"
                   "\t10 is show all list member\n"
                   "Other -- \n"
                   "\t 0 is help\n"
                   "\t 1 is exit\n");
            break;
        case 1:
            switch (object_cmd) {
                case 0:
                    printf("format : 0 cmd option(0,1) 0\n");
                    break;
                case 1:
                    printf("format : 1 0 0 0\n");
                    break;
                case 2:
                    printf("format : 2 add.number add.number save.list.path\n");
                    break;
                case 3:
                    printf("format : 3 multiply.number multiply.number save.list.path\n");
                    break;
                case 4:
                    printf("format : 4 divide.number divide.number save.list.path\n");
                    break;
                case 5:
                    printf("format : 5 add.list.path add.list.path save.list.path\n");
                    break;
                case 6:
                    printf("format : 6 multiply.list.path multiply.list.path save.list.path\n");
                    break;
                case 7:
                    printf("format : 7 divide.list.path divide.list.path save.list.path\n");
                    break;
                case 8:
                    printf("format : 8 move_from.list.path move_to.list.path 0\n");
                    break;
                case 9:
                    printf("format : 9 copy_from.list.path copy_to.list.path 0\n");
                    break;
            }
    }
}
void find(int cmd,int object_1,int object_2,int object_3){
    switch (cmd) {
        case 0:
            help_cmd(object_1,object_2);
            break;
        case 2:
            list[object_3] = addition(object_1,object_2);
            break;
        case 3:
            list[object_3]=multiply(object_1,object_2);
            break;
        case 4:
            list[object_3] = divide(object_1,object_2);
            break;
        case 5:
            list[object_3] = addition(list[object_1],list[object_2]);
            break;
        case 6:
            list[object_3] = multiply(list[object_1],list[object_2]);
            break;
        case 7:
            list[object_3] = divide(object_1,object_2);
            break;
        case 8:
            list[object_2] = list[object_1];
            list[object_1] = 0;
            break;
        case 9:
            list[object_2] = list[object_1];
            break;
        case 10:
            for (int set = 0;set < MEMBER_NUMBER;set++){
                printf("|%d| \t",list[set]);
            }
            printf("\n");
            break;
    }
}
