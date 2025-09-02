#include <stdio.h>
#include <stdlib.h>

#include<stdio.h>
int main() {
	char nom[10],prenom[10],email[40],sexe;
	int age;
	printf("entre votre nom :");
	scanf("%s",nom);
	
	printf("entre votre prenom :");
	scanf("%s",prenom);
	
	printf("entre votre age :");
	scanf("%d",&age);
	
	printf("entre votre adresse mail :");
	scanf("%s",email);
	
	printf("entre votre sexe (m ou f) :");
	scanf("%s",&sexe);
	
	printf("Vos informations \n");
	
	printf("Nom : %s\n", nom);
	printf("Prenom : %s\n", prenom);
	printf("Age : %d\n", age);
	printf("Sexe : %c\n",sexe);
	printf("Adresse Email : %s\n", email);
	return 0;
}

