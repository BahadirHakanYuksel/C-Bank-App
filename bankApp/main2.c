#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	int   yap , i; float cuzdan;
	printf("\n--- BANK APP ---\n\n");
	printf("Hesabiniza bakiye belirleyin : "); scanf("%f",&cuzdan);	
	yap = 1 ;
if(cuzdan > 0){


for(i = 0 ; i < yap ; i++)
{
		float  sec , yatir , cek , kalan ,son ,islem;
	a:

	printf("1.Para Cekme\n2.Para Yatirma\n");
	printf("Choose Action : "); scanf("%f",&sec);
	
	if(sec==1.00){
		
		printf("\nCekmek Istediginiz Miktar: "); scanf("%f",&cek);
		if (cuzdan >= cek){
		kalan = cuzdan - cek ;
		printf("\nONCE Cuzdan : %.2f TL",cuzdan);
		printf("	Cekilen Para : - %.2f TL",cek);
		printf("\nCuzdan : %.2f TL",kalan);
		cuzdan = kalan ;
		}
		else if ( cek<0){printf("Hatali Giris Yaptiniz\nGirilen deger negatif olamaz !");}
		
		else {printf("-----Yetersiz Bakiye-----");}
	}
	else if (sec == 2.00)
	{
		printf("\nYatirmak Istediginiz Miktar : "); scanf("%f",&yatir);
		if(yatir>0){
		
		son = cuzdan + yatir ;
		printf("\nONCE Cuzdan : %.2f TL",cuzdan);
		printf("	Yatirilan miktar : + %.2f TL",yatir);
		printf("\nCuzdandaki Miktar : %.2f TL",son);
		cuzdan = son ;
		}
		else{
			printf("Hatali Giris Yaptiniz\n0 ve Negatif deger yatiramazsiniz !");
		}
	}
	else{printf("Hatali Giris Yaptiniz !");}
	printf("\n\nBaska islem yapmak icin 1'e isleminizi sonlandirmak icin 2'ye basiniz : "); scanf("%f",&islem);
	
	if(islem == 1.00){goto a; }
	else if(islem == 2.00){ printf("-----Isleminiz Sonlanmistir------"); }
	else{ printf("Hatali Giris Yaptiniz !"); }
	
}

}
else{
	printf("Hatali Giris Yaptiniz \nBakiyeye 0 ve negatif deger yukleyemzsiniz !");
}	
		
	return 0;
}
