#include<stdio.h>
#include<math.h>

// fakt�riyel hesab�//

int main(){
	int n;
		printf ("Pozitif n tamsayisini giriniz: \n");
		scanf("%d",&n);
		while (n<0){
			printf ("Pozitif olmayan bir say� girdiniz. Pozitif bir say� giriniz: \n");
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
