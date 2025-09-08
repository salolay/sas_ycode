#include<stdio.h>

void InverserChaine(char chaine[]){

    int taille=0;
    int i=0;
    while(chaine[i]!= '\0'){
        taille++;
        i++;
    }

    char inverser[taille+1];
    int j=taille-1;
    i=0;
    while(j>=0){
        inverser[i]=chaine[j];
        i++;
        j--;
    }
    inverser[i]='\0';

//    int i=taille-1,j=0;
//    while(i >= 0){
//        inverser[j]= chaine[i];
//        i--;
//        j++;
//    }

    printf("inverse est :  %s", inverser);
}

int main()
{
    char ch[100];
    printf("entrez la chaine :");
    scanf("%[^\n]",ch);

    InverserChaine(ch);

    return 0;
}
