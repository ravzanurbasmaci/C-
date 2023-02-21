#include <stdlib.h>
#include<stdio.h>
int main() {
	int diyezSayisi=0;
	int j=0;
	int i=0;
	printf("diyez sayisini giriniz:\n ");
	scanf("%d",&diyezSayisi);
	for (i=0; i<diyezSayisi;i++){
		for (j=0;j<=i; j++){
			printf("#");
		}
		printf("\n");
	}


	return 0;
}
