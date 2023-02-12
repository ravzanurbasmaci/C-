#include <stdio.h>
#include <math.h>

// 2.derece polinom köklerini hesaplayan kod

int main(){
	int a,b,c,D;
	float x1,x2;
	
	printf("a katsayisini giriniz: \n");
	scanf("%d",&a);
	printf("b katsayisini giriniz: \n");
	scanf("%d",&b);
	printf("c katsayisini giriniz: \n");
	scanf("%d", &c);
	D=b*b-4*a*c;
	
	if (D>0){
		x1=(-b+sqrt(D))/2*a;
		x2=(-b-sqrt(D))/2*a;
		printf("x1=%f x2=%f",x1,x2);
		}
	else if (D==0) {
		x1=x2=-b/(2*a);
		printf("x1=x2=%f",x1);
		}
	else printf("reel kök yoktur");
	
	return 0;

}
