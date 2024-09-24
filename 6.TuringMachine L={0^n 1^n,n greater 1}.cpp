// implementation of Turing Machine L= {0 power (n) 1 power (n) | n>=1}

#include<stdio.h>
#include<conio.h>
#include<string.h>
int current=0;
int main(){
    char inputstr[20], c;
    int i = 0;
    for(i=0; i<strlen(inputstr); i++){
        inputstr[i] = '\0';
    }
    printf("Enter input string:");
    gets(inputstr);
    i=0;
    while(1){
        c = inputstr[i];
        switch(current){
            case 0:
                if(c=='0'){
                    inputstr[i]='x';
                    i++;
                    current = 1;
                }
                else if(c=='y'){
                    i++;
                    current = 3;
                }
                else{
                    current = -1;
                }
                break;
            case 1:
                if(c=='0'){
                    i++;
                }
                else if(c=='y'){
                    i++;
                    current = 1;
                }
                else if(c=='1'){
                    inputstr[i]='y';
                    i--;
                    current = 2;
                }
                break;
            case 2:
                if(c=='x'){
                    i++;
                    current = 0;
                }
                else if(c=='0' || c=='y'){
                    i--;
                }
                else{
                    current = -1;
                }
                break;
            case 3:
                if(c=='y'){
                    i++;
                }
                else if(c=='\0'){
                    printf("String is accepted by TM\n");
                    return 0;
                }
                else{
                    current = -1;
                }
                break;
            default:
                printf("String is rejected by TM\n");
                return 0;
        }
    }
    return 0;
}
