#include<stdio.h>
int main(){
	int a;
	printf("����һ�����:");
	scanf("%d",&a);
	if((a % 4 == 0 && a % 100 !=0)||(a % 400 ==0))
	printf("%d������",a);
	else
	printf("%d��������",a);
}
