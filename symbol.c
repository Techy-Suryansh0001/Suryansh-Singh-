#include <stdio.h>
int main(){
    char a;
    printf("enter a symbol : ");
    scanf("%c",&a);
    if((a>='A' && a<='Z')||(a>='a'&& a<='z')){
        printf("%c is a alphabet",a);
    }
    else if(a>='0'&& a<='9'){
        printf("%c is a digit",a);
    }
    else{
        printf("%c is a special character",a);
    }
    return 0;
    
}