#include<stdio.h>
#include<math.h>

// faktöriyel hesabý//

int main(){
	int n;
		printf ("Pozitif n tamsayisini giriniz: \n");
		scanf("%d",&n);
		while (n<0){
			printf ("Pozitif olmayan bir sayý girdiniz. Pozitif bir sayý giriniz: \n");
			scanf("%d", &n);
		}
		int sonuc=1;
		while(n!=0){
			sonuc*=n;
			n--;
			}		
		printf("sonuc=%d",sonuc);
	
	return 0;	
	
}
