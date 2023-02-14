#include<stdio.h>
#include<stdlib.h>

int main(){

	int a,b,toplam,i;
	toplam=0;
	printf("ilk sayiyi giriniz\n");
	scanf("%d",&a);
	printf("ikinci sayiyi giriniz\n");
	scanf("%d",&b);
	for(i=a; i<=b;i++){
		if (i%2==1){
			toplam=toplam+i;
		}
		else {
		top2=top;
		}
	}
	printf ("Toplam=%d\n",toplam);
	
	return 0;	
}
