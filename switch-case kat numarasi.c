#include <stdio.h>

int main(){
	
	char n; 
	printf("Kat numarasini giriniz: \n");
	scanf("%c",&n);
	
	switch (n)
	{ case '0' : printf("Giris kati\n");
	  break;
	  case '1' : printf("Halkla Iliskiler\n");
	  break;
	  case '2' : printf("Muhasebe\n");
	  break;
	  case '3' : printf("Ýdari Birimler\n");
	  break;
	  default: printf("Kat bilgisi yanlis\n");
	}
	
	return 0;
}

