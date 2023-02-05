#include<stdio.h>
#include<stdlib.h>

float hesap(float a,float b,char islem){
	
	switch(islem){
	 
	case '+' : return a+b; break;
	case '-' : return a-b; break;
	case '*': return a*b; break;
	case '/': return a/b; break;
	default: printf("tanimsiz islem secimi\n");
	
	}
	
	
}

int main(){
	float a,b,c,sonuc;
	char islem; 

	while(1){
		printf("\n1-Hesap Makinesi\n2-Cikis\nSeciminiz:\n");
		scanf("%d",&c);
		if(c==1){	
			printf("ilk sayiyi giriniz: \n");
			scanf("%d",&a);
			printf("ikinci sayiyi giriniz: \n");
			scanf("%d",&b);
			printf("islem tipini giriniz: \n");
			scanf("%s",&islem);
			sonuc = hesap(a,b,islem);	
			printf("sonuc= %f ",sonuc);
			}
		else break;
	}
		
	return 0;
}
