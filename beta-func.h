//include
#include <stdio.h>
#include <string.h>
//define
#define LIST_NUMBER 10
#define Show_Input_Str printf("please input : ")
#define GET_INPUT(str,n1,n2,n3) scanf("%4s %d %d %d",&str,&n1,&n2,&n3)
#define NEXT printf("\n")
#define ADD(x,y,z) list[z] = x + y;
#define MUL(x,y,z) list[z] = x * y;
#define DIV(x,y,z) list[z] = x / y;
#define BIGGER_LIST printf("n1 or n2 is bigger than LIST_NUMBER!\n")
//data structure
struct com
{
    char com[4];
    int number_1,number_2,number_3;
};
int list[LIST_NUMBER] = {0,0,0,0,0,0,0,0,0,0};
//function
void show_help(){
    printf("Algorithm -- \n"
                "\tadd is add\n"
                "\tmul is multiply\n"
                "\tdiv is divide\n"
            "Algorithm of list -- \n"
                "\tadp is add(path)\n"
                "\tmup is multiply(path)\n"
                "\tdip is divide(path\n"
            "Operate of list --\n"
                "\tmov is move\n"
                "\tcpy is copy\n"
                "\tsal is show all list member\n"
            "Other -- \n"
                "\thel is help\n"
                "\text is exit\n"
                "\tman : I don't know how to say it,but you can try .\n"
                "\t\tformat : man 0 0 0\n");
}
void man_func();
void find_do(char str[],int n1, int n2, int n3){
    if (strcmp(str,"hel") == 0){
        show_help();
    }else if (strcmp(str,"sal") == 0){
        for (int i = 0;i < LIST_NUMBER;i++){
            if (i == 5){
                printf("\n\t%d",list[i]);
            }else{
                printf("\t%d",list[i]);
            }
        }
        NEXT; // see line 8
    }else if (n3 >= LIST_NUMBER){
        printf("it is bigger than LIST_NUMBER!\n");
    }else if (strcmp(str,"add") == 0){
        ADD(n1,n2,n3);
        printf("%d\n",list[n3]);
    }else if (strcmp(str,"adp") == 0){
        if (n1 >= LIST_NUMBER || n2 >= LIST_NUMBER){
            BIGGER_LIST;// see line 12
        }else{
            ADD(list[n1],list[n2],list[n3]);
            printf("%d\n",list[n3]);
        }
    }else if (strcmp(str,"mul") == 0){
        MUL(n1,n2,n3);
        printf("%d\n",list[n3]);
    }else if (strcmp(str,"mup") == 0){
        if (n1 >= LIST_NUMBER || n2 >= LIST_NUMBER){
            BIGGER_LIST; // see line 12
        }else{
            MUL(list[n1],list[n2],list[n3]);
            printf("%d\n",list[n3]);
        }
    }else if (strcmp(str,"div") == 0){
        DIV(n1,n2,n3);
        printf("%d\n",list[n3]);
    }else if (strcmp(str,"dip") == 0){
        if (n1 >= LIST_NUMBER || n2 >= LIST_NUMBER){
            BIGGER_LIST;
        }else{
            DIV(list[n1],list[n2],list[n3]);
            printf("%d\n",list[n3]);
        }
    }else if (strcmp(str,"mov") == 0){
        int temp = list[n1];
        list[n1] = list[n2];
        list[n2] = temp;
        printf("%d\t%d\n",list[n1],list[n2]);
    }else if (strcmp(str,"cpy") == 0){
        list[n2] = list[n1];
        printf("%d\t%d\n",list[n1],list[n2]);
    }else if (strcmp(str,"man") == 0){
        man_func();
    }
}
void search_cmd(char cmd[]){
    if (strcmp(cmd,"hel") == 0){
        printf("this cmd can show all cmd\nformat : hel 0 0 0\n");
    }else if (strcmp(cmd,"ext") == 0){
        printf("this program will exit if you input this\nformat : ext 0 0 0\n");
    }else if (strcmp(cmd,"add") == 0 || strcmp(cmd,"mul") == 0|| strcmp(cmd,"div") == 0){
        printf("add is addition and subtraction\n"
                "mul and div is mulitly and divide\n"
                "format : cmd number number save_list_address\n");
    }else if (strcmp(cmd,"adp") == 0 || strcmp(cmd,"mup") == 0 || strcmp(cmd,"dip") == 0){
        printf("adp,mup,dip's function and add,mul,div's is same,but it's operate list_number\n"
               "format : cmd list_address list_address save_list_address\n");
    }else if (strcmp(cmd,"sal") == 0){
        printf("this cmd can print all list menber\nformat : cmd 0 0 0\n");
    }else if (strcmp(cmd,"mov") || strcmp(cmd,"cpy")){
        printf("mov is move list_menber \n cpy is copy list_menber\n"
               "format : cmd list_address list_address 0\n");
    }else{
        printf("not found\n");
    }
}
void man_func(){
    char cmd[4];
    printf("input qui will exit this function\n");
    while(1){
        printf("search cmd : ");
        scanf("%s",cmd);
        if (strcmp(cmd,"qut") == 0){
            break;
        }else{
            search_cmd(cmd);
        }
    }
}



