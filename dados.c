#include <stdio.h>

typedef struct 
{

int peso;
int altura;

}PesoAltura;

int main(){
    PesoAltura pessoa;
    pessoa.peso= 70;
    pessoa.altura=160;
    
    printf("O peso é %i e sua altura é %i\n",pessoa.peso,pessoa.altura);

    if(pessoa.altura >= 170){
        printf("pode passar!");
    } 
    else{
        printf("Alá o anao kkkk");
    };

    return 0;
};


