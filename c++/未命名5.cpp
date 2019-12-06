#include<stdio.h>
int main(){
	float p,q,m,pay;
	char y,z;
	printf("请输入汽油品种a;b;c，服务类型f(自己加)或e(协助加),加油量:");
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
