#include <stdio.h>

int main(){
		
	int i=0, loop;
	printf("Kelipatan Pengulangan\n");
	printf("Batas pengulangan     = ");
	scanf("%i", &loop);
	
	while(i<=loop){
		printf("%i\n",i);
		i++;
		i+=2;
		
	}
	
}
