#include<stdio.h>
int main(){
	float p,q,m,pay;
	char y,z;
	printf("����������Ʒ��a;b;c����������f(�Լ���)��e(Э����),������:");
	scanf("%c,%c,%f",&y,&z,&m);
	switch(y)
	{
		case 'a':p=1.5;break;
		case 'b':p=1.35;break;
		case 'c':p=1.18;break;
	}
	switch(z)
	{
		case 'f':q=0.95;break;
		case 'e':q=0.9;break;
	}
		pay=p*q*m;
		printf("pay=%.2f",pay);
		return 0;
}
