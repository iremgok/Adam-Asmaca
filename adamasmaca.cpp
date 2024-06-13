#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<string.h>
#include<locale.h>


char kelimeler[][50] = {"elma","armut","kiraz","mandalina","portakal","ayva","kivi","erik","incir","hurma","karadut","frambuaz","karpuz","kayýsý","muz"}   ; 
char sehirler[][50] = {"adana","adýyaman","afyonkarahisar","aðrý","aksaray","amasya","ankara","antalya","ardahan","artvin","aydýn","balýkesir","bartýn","batman","bayburt","bilecik","bingöl","bitlis","bolu","burdur","bursa","çanakkale","çankýrý","çorum","denizli","diyarbakýr","düzce","edirne","elazýð","erzincan","erzurum","eskiþehir","gaziantep","giresun","gümüþhane","hakkari","hatay","ýðdýr","ýsparta","istanbul","izmir","kahramanmaraþ","karabük","karaman","kars","kastamonu","kayseri","kýrýkkale","kýrklareli","kýrþehir","kilis","kocaeli","konya","kütahya","malatya","manisa","mardin","mersin","muðla","muþ","nevþehir","niðde","ordu","osmaniye","rize","sakarya","samsun","siirt","sinop","sivas","þanlýurfa","þýrnak","tekirdað","tokat","trabzon","tunceli","uþak","van","yalova","yozgat","zonguldak"};
char ulkeler[][50] = {"almanya", "italya", "hindistan", "amerika", "fransa", "hollanda", "danimarka", "brezilya", "rusya", "arjantin", "yunanistan", "yugoslavya", "portekiz", "kanada", "endonezya", "japonya", "iran", "kazakistan", "azerbaycan", "belarus", "bulgaristan", "estonya", "etiyopya", "filipinler", "finlandiya", "gine", "irlanda", "ingiltere", "jamaika", "katar", "kamerun", "kolombiya", "kenya", "libya", "macaristan", "malta", "moldova", "meksika", "nijer", "tacikistan", "tayvan", "ukrayna", "vietnam"};
char isimler[][50] = {"irem", "ahmet", "furkan", "fatih", "elif", "yaren", "berfin", "zeynep", "didem", "zeliha", "abdullah", "mustafa", "ibrahim", "burak", "fuat", "aleyna", "alara", "altuner", "alperen", "atlas", "bilge", "berfu", "berra", "talha", "taha", "ceyda", "ceylin", "hasan", "ceren", "deniz", "ecrin", "osman", "bartu", "melih", "berkay", "murat", "doruk"};
char *kelime;
char *tahmin; 
int size; 


void kelimeOlustur1() 
{
	printf("\nMeyveler Kategorisini Seçtiniz Oyun Baþlýyor...\n\n");
	int indis= rand() %15; 
	kelime= kelimeler[indis];
	size= strlen(kelime) ; 	
	tahmin= (char*)	 malloc( size+1 * sizeof(char) ); 
	int i=0; 
	while( i<size)
	{
		tahmin[i]= '-'; 
		i++; 		
	}
	tahmin[i] = '\0' ; 
	 
	printf("Kelimenin Uzunluk   : %d \n", size); 
	printf("Tahmininiz   :  %s \n", tahmin); 
	
}

void kelimeOlustur2() 
{
	printf("\nÞehirler Kategorisini Seçtiniz Oyun Baþlýyor...\n\n");
	int indis= rand() %81; 
	kelime= sehirler[indis];
	size= strlen(kelime) ; 	
	tahmin= (char*)	 malloc( size+1 * sizeof(char) ); 
	int i=0; 
	while( i<size)
	{
		tahmin[i]= '-'; 
		i++; 		
	}
	tahmin[i] = '\0' ; 
	 
	printf("Kelimenin Uzunluk   : %d \n", size); 
	printf("Tahmininiz   :  %s \n", tahmin);
	 
}

void kelimeOlustur3() 
{
	printf("\nÜlkeler Kategorisini Seçtiniz Oyun Baþlýyor...\n\n");
	int indis= rand() % 43; 
	kelime= ulkeler[indis];
	size= strlen(kelime) ; 	
	tahmin= (char*)	 malloc( size+1 * sizeof(char) ); 
	int i=0; 
	while( i<size)
	{
		tahmin[i]= '-'; 
		i++; 		
	}
	tahmin[i] = '\0' ; 
	
	printf("Kelimenin Uzunluk   : %d \n", size); 
	printf("Tahmininiz   :  %s \n", tahmin); 
	
}

void kelimeOlustur4() 
{
	printf("\nÝsimler Kategorisini Seçtiniz Oyun Baþlýyor...\n\n");
	int indis= rand() % 37; 
	kelime= isimler[indis];
	size= strlen(kelime) ; 	
	tahmin= (char*)	 malloc( size+1 * sizeof(char) ); 
	int i=0; 
	while( i<size)
	{
		tahmin[i]= '-'; 
		i++; 		
	}
	tahmin[i] = '\0' ; 
	
	printf("Kelimenin Uzunluk   : %d \n", size); 
	printf("Tahmininiz   :  %s \n", tahmin); 
	
}


int harfKontrol( char harf ) 
{
	int i=0, sonuc=0; 
	while( i<size )
	{
		if( harf == kelime[i] ) 
		{
			tahmin[i] = harf; 
			sonuc=1; 
		}

		i++; 
	}	
	printf("\n"); 
	return sonuc; 	
}


int kelimeKontrol() 
{
	int i=0;
	int sonuc=1;  	
	while( i<size )
	{
		if( tahmin[i] =='-' )
		{
			sonuc=0;			
		}
		i++; 
	}
	printf("Tahmininiz   : %s\n", tahmin) ;  
	
	return sonuc; 	
}

void cizim(int durum)
{
	switch(durum)
	{
		case 1:
	printf("					__________________	 \n");
	printf("					||		| 	\n");
	printf("					|| 		| 	\n");
	printf("					||				 \n");
	printf("					||  				\n");
	printf("					||			 	\n");
	printf("					||					\n");
	printf("					||					 \n");
	printf("					||				 	\n");
	printf("					||	 \n");
	printf("   		 	           _____||_____ 	\n");
	break;
	case 2:
		printf("					__________________	 \n");
	printf("					||		| 	\n");
	printf("					|| 		| 	\n");
	printf("					||            (. .) \n");
	printf("					||  			  	\n");
	printf("					||				 	\n");
	printf("					||				  	\n");
	printf("					||				  	 \n");
	printf("					||				  	\n");
	printf("					||	 \n");
	printf("   		 	           _____||_____ 	\n");
	break;
	case 3:	
		printf("		 			__________________	 \n");
	printf("					||		| 	\n");
	printf("					|| 		| 	\n");
	printf("					||            (. .) \n");
	printf("					||  		| 	\n");
	printf("					||				 	\n");
	printf("					||				 	\n");
	printf("					||				  	 \n");
	printf("					||				  	\n");
	printf("					||	 \n");
	printf("   		 	           _____||_____ 	\n");	
	break;
	case 4:
		printf("		 			__________________	 \n");
	printf("					||		| 	\n");
	printf("					|| 		| 	\n");
	printf("					||            (. .) \n");
	printf("					||  		| 	\n");
	printf("					||		| 	\n");
	printf("					||				   	\n");
	printf("					||				  		 \n");
	printf("					||				  	\n");
	printf("					||	 \n");
	printf("   		 	           _____||_____ 	\n");
	break;
	case 5:	
		printf("					__________________	 \n");
	printf("					||		| 	\n");
	printf("					|| 		| 	\n");
	printf("					||            (. .) \n");
	printf("					||  		| 	\n");
	printf("					||	    	|  	\n");
	printf("					||		| 	\n");
	printf("					||				  		 \n");
	printf("					||				  	\n");
	printf("					||	 \n");
	printf("   		 	           _____||_____ 	\n");
	break;
	case 6:	
		printf("					__________________	 \n");
	printf("					||		| 	\n");
	printf("					|| 		| 	\n");
	printf("					||            (. .) \n");
	printf("					||  		| 	\n");
	printf("					||		|  	\n");
	printf("					||		| 	\n");
	printf("					||		|		 \n");
	printf("					||				  	\n");
	printf("					||	 \n");
	printf("   		 	           _____||_____ 	\n");
	break;
	case 7:
		printf("					__________________	 \n");
	printf("					||		| 	\n");
	printf("					|| 		| 	\n");
	printf("					||            (. .) \n");
	printf("					||  		| 	\n");
	printf("					||	      / |  	\n");
	printf("					||		| 	\n");
	printf("					||		|		 \n");
	printf("					||				  	\n");
	printf("					||	 \n");
	printf("   		 	           _____||_____ 	\n");
	break;
	case 8:	
		printf("					__________________	 \n");
	printf("					||      	| 	\n");
	printf("					|| 		| 	\n");
	printf("					||            (. .) \n");
	printf("					||  	        | 	\n");
	printf("					||	      / | \\ 	\n");
	printf("					||		| 	\n");
	printf("					||		|		 \n");
	printf("					||				  	\n");
	printf("					||	 \n");
	printf("   		 	           _____||_____ 	\n");
	break;
	case 9:	
		printf("					__________________	 \n");
	printf("					||		| 	\n");
	printf("					|| 		| 	\n");
	printf("					||            (. .) \n");
	printf("					||              | 	\n");
	printf("					||	      / | \\ 	\n");
	printf("					||	        | 	\n");
	printf("					||		|		 \n");
	printf("					||	       /  	\n");
	printf("					||	 \n");
	printf("   		 	           _____||_____ 	\n");	
	break;
	case 10:
		printf("					__________________	 \n");
	printf("					||		| 	\n");
	printf("					|| 		| 	\n");
	printf("					||            (. .) \n");
	printf("					||		| 	\n");
	printf("					||            / | \\ 	\n");
	printf("					||		| 	\n");
	printf("					||	    	|		 \n");
	printf("					||	       / \\	 \n");
	printf("					||	 \n");
	printf("   		 	  	   _____||_____ 	\n");	
	break;
	default:
		printf("Adaminiz Henuz Asilmaya Baslamadi.\n\n");
		break;
		
}
}


int main() 
{
	setlocale(LC_ALL, "Turkish");
	system("cls"); 
	printf("\n\n\t\tHANGMAN OYUNU \n\n\n"); 
	printf("\t***ARAYÜZE HOÞGELDÝNÝZ***\n");
	printf("  Oyuna Baþlamadan Önce Kurallarý Okuyunuz!\n");
	printf("1- Oyunumuz tek kiþilik kelime tahmin oyunudur.\n");
	printf("2- Oyunumuz 4 kategoriden oluþmaktadýr.\n");
	printf("3- Oyunumuzda 10 yanlýþ canýnýz vardýr eðer canlarýnýz bitmeden tahmin edemezseniz adam asýlýr.\n\n");
	printf("  **Oyuna Baþlayabilirsiniz**\n\n");
	srand(time(0)) ; 
	int kategori;
	printf(" Lütfen Aþaðýdaki Kategorilerden Birini Seçiniz: ");
	printf("\n1- Meyveler\n");
	printf("2- Þehirler\n");
	printf("3- Ülkeler\n");
	printf("4- Ýsimler\n");
	scanf(" %d" , &kategori);
	
	if(kategori==1)
	kelimeOlustur1();
	
	else if(kategori==2)
	kelimeOlustur2();
	
	else if(kategori==3)
	kelimeOlustur3();
	
	else if(kategori==4)
	kelimeOlustur4();
	
	else
	{
	printf("Yanlýþ Bir Giriþ Yaptýnýz Tekrar Deneyiniz.\n");
	return 0;
	}

	char harf; 
	int durum=0, sonuc1, sonuc2 ; 
	
	while( durum < 10  )
	{
		durum++; 
		printf("Harf Giriniz   : ") ;scanf(" %c", &harf) ; 
		if(harfKontrol(harf) )  
		durum--; 
		
		cizim(durum); 
		
		if(kelimeKontrol ())
		{
			printf("\n ***TEBRIKLER KAZANDINIZ*** :) \n") ; 
			break; 			
		}				
	}
	
	if(durum==10)
	{
		printf("\n KAYBETTÝNÝZ :((  \n");
		printf("Doðru Kelime  : %s", kelime); 
	}
	
	return 0; 
}

