#include <stdio.h>
int Parite(int n)
{
	if(n%2==0)
	return 1;
  return 0;
}
int main()
{
	int a;
	printf("entre nombre :");
	scanf("%d",&a);
	if(Parite(a))
	printf("votre nombre est paire");
	else
	printf("votre nombre est impair");
	return 0;
}
