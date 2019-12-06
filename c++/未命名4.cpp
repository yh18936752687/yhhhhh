#include<stdio.h>
int main(){
	int s;
	int isFinished = 0;
	
	while ( !isFinished ) {
	  printf("enter the student's score:");
      scanf("%d",&s);
      if(s >= 0 && s <=100){
      	switch(s/10){
	         case 10:printf("great");break;
	         case 9:printf("you");break;
	         case 8:printf("liang");break;
	         case 7:printf("zhong");break;
	         case 6:printf("jige");break;
	         default:printf("bujige");break;
	  }
	  isFinished = 1;
}else{
	printf("your enter a wrong num.\n");
     }
}
}
