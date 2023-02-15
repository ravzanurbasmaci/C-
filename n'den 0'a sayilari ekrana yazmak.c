#include<stdlib.h>
#include<stdio.h>

int main(int argc, char** argv) {
	int n,i;
	printf("n sayisini giriniz: \n");
	scanf("%d",&n);
	for(i=n;i>=0;i--){
		printf("%d\n",i);
	}
	return 0;
}
