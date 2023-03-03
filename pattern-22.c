#include<stdio.h>

int main(){
	int r , c;
	char d='A';
	
	for(r=1; r<=5 ; r++){
		for(c=1; c<=r; c++){
			printf(" %c", d++);
		}
		printf("\n");
	}
	return 0;
}
