#include <stdlib.h>
#include <stdio.h>
int main(){
	int *arr = calloc(25, sizeof(int));
	for(int i=0; i<25; i++){
		arr[i] = (i+1)*2;
		printf("%i\n", arr[i]);
	}
	printf("\n\n");
	int a =	arr[25];
       	int b = arr[26]; 
	a = a+1;
	b = b+2;
	return 0;
}
