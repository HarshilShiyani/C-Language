#include<stdio.h>
void main()
{
	float km,m,f,in,cm;
	printf("Plz Enter value in kilometer=");
	scanf("%f",&km);
	f=km*3280.84;
	in=km*39370.1;
	cm=km*100000;
	m=km*1000;
	printf("in feet=%f\n",f);
	printf("in inch=%f\n",in);
	printf("in centimeter=%f\n",cm);
	printf("in meter=%f\n",m);
}