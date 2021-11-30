#include<stdio.h>
void main()
{
	float p,c,m,e,com,per;
	printf("Plz Enter your physic's mark(maximum 100)=");
	scanf("%f",&p);
	printf("Plz Enter your chemistry's mark(maximum 100)=");
	scanf("%f",&c);
	printf("Plz Enter your maths's mark(maximum 100)=");
	scanf("%f",&m);
	printf("Plz Enter your english's mark(maximum 100)=");
	scanf("%f",&e);
	printf("Plz Enter your computer's mar(maximum 100)k=");
	scanf("%f",&com);
	per=((p+c+m+e+com)*100)/500;
	printf("your percentage=%f",per);
}