#include<stdio.h>
int main()
{
	int a =11 , b =33 , c =55 ;
	 
	if (a > b){
		 if(a > c){
		printf("A is max");
	}else{
		 printf("C is max");
	}
 }else{
     if(b > c){
	    printf("B is max");
   }else{
     	printf("C is max");
   }
}
}