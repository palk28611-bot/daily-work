//print even numbers up to 30 => 2 4 6 8
#include<stdio.h>
int main()
{
	int i;
	i = 1;
	while(i<=30){
		if(i% 2 == 0){
			printf("%d", i);
		}
		i += 1;
	}
}