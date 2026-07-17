#include<stdio.h>

int main (){

    int a,b,result;
    char escolha;

    scanf("%d %d",&a,&b);

    printf("Escolha a operacao: + - * /\n");
    scanf(" %c",&escolha);
//mult
    if(escolha == '*'){
        result = a * b;
    }
//divisao
    if(escolha == '/'){
        result = a / b;
    

    printf("Escolha a operacao: + - * /\n");
    scanf(" %c",&escolha);
    
    if(escolha=="-"){
    result = a + b;
    }
    //subtracao
    if(escolha=="+"){
    result = a + b;
    }
    return 0;
}