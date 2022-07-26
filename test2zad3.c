#include <stdio.h>
#include <strings.h>
#include <string.h>
int changeNotDuo(char num){
switch(num){
case '0':return"!";
break;
case '1':return"#";
break;
case '2':return"/";
break;
case '3':return"~";
break;
case '4':return"=";
break;
case '5':return"‘";
break;
case '6':return"\\";
break;
case '7':return">";
break;
case '8':return".";
break;
case '9':return",";
break;
default:
printf("invalid number");
}
}


int changeDuo(char num){
  
switch(num){
case '0':return "A";
break;
case '1':return "B";
break;
case '2':return"C";
break;
case '3':return"D";
break;
case '4':return"E";
break;
case '5':return"F";
break;
case '6':return"G";
break;
case '7':return"H";
break;
case '8':return"I";
break;
case '9':return"M";
break;
default:
printf("invalid number");
}
}


void realchange(char*num,int size){

if(size%2==0){
    for(int i=0;i<size;i+2){
        changeDuo(num[i]);
    }
    for(int i=1;i<size;i+2){
        changeNotDuo(num[i]);
    }
}
    if(size%2==1){
    for(int i=0;i<size;i+2){
        changeNotDuo(num[i]);
    }
    for(int i=1;i<size;i+2){
        changeDuo(num[i]);
    }
}

}

int main(){
 char num[501];
 fgets(num,500,stdin);
realchange(num,strlen(num));
for(int i=0;i<strlen(num);i++){
    printf("%c",num[i]);
}
    return 0;
}