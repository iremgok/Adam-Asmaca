#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<string.h>
#include<locale.h>


char kelimeler[][50] = {"elma","armut","kiraz","mandalina","portakal","ayva","kivi","erik","incir","hurma","karadut","frambuaz","karpuz","kay�s�","muz"}   ; 
char sehirler[][50] = {"adana","ad�yaman","afyonkarahisar","a�r�","aksaray","amasya","ankara","antalya","ardahan","artvin","ayd�n","bal�kesir","bart�n","batman","bayburt","bilecik","bing�l","bitlis","bolu","burdur","bursa","�anakkale","�ank�r�","�orum","denizli","diyarbak�r","d�zce","edirne","elaz��","erzincan","erzurum","eski�ehir","gaziantep","giresun","g�m��hane","hakkari","hatay","��d�r","�sparta","istanbul","izmir","kahramanmara�","karab�k","karaman","kars","kastamonu","kayseri","k�r�kkale","k�rklareli","k�r�ehir","kilis","kocaeli","konya","k�tahya","malatya","manisa","mardin","mersin","mu�la","mu�","nev�ehir","ni�de","ordu","osmaniye","rize","sakarya","samsun","siirt","sinop","sivas","�anl�urfa","��rnak","tekirda�","tokat","trabzon","tunceli","u�ak","van","yalova","yozgat","zonguldak"};
char ulkeler[][50] = {"almanya", "italya", "hindistan", "amerika", "fransa", "hollanda", "danimarka", "brezilya", "rusya", "arjantin", "yunanistan", "yugoslavya", "portekiz", "kanada", "endonezya", "japonya", "iran", "kazakistan", "azerbaycan", "belarus", "bulgaristan", "estonya", "etiyopya", "filipinler", "finlandiya", "gine", "irlanda", "ingiltere", "jamaika", "katar", "kamerun", "kolombiya", "kenya", "libya", "macaristan", "malta", "moldova", "meksika", "nijer", "tacikistan", "tayvan", "ukrayna", "vietnam"};
char isimler[][50] = {"irem", "ahmet", "furkan", "fatih", "elif", "yaren", "berfin", "zeynep", "didem", "zeliha", "abdullah", "mustafa", "ibrahim", "burak", "fuat", "aleyna", "alara", "altuner", "alperen", "atlas", "bilge", "berfu", "berra", "talha", "taha", "ceyda", "ceylin", "hasan", "ceren", "deniz", "ecrin", "osman", "bartu", "melih", "berkay", "murat", "doruk"};
char *kelime;
char *tahmin; 
int size; 


void kelimeOlustur1() 
{
	printf("\nMeyveler Kategorisini Se�tiniz Oyun Ba�l�yor...\n\n");
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
	printf("\n�ehirler Kategorisini Se�tiniz Oyun Ba�l�yor...\n\n");
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
	printf("\n�lkeler Kategorisini Se�tiniz Oyun Ba�l�yor...\n\n");
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
	printf("\n�simler Kategorisini Se�tiniz Oyun Ba�l�yor...\n\n");
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
	printf("\t***ARAY�ZE HO�GELD�N�Z***\n");
	printf("  Oyuna Ba�lamadan �nce Kurallar� Okuyunuz!\n");
	printf("1- Oyunumuz tek ki�ilik kelime tahmin oyunudur.\n");
	printf("2- Oyunumuz 4 kategoriden olu�maktad�r.\n");
	printf("3- Oyunumuzda 10 yanl�� can�n�z vard�r e�er canlar�n�z bitmeden tahmin edemezseniz adam as�l�r.\n\n");
	printf("  **Oyuna Ba�layabilirsiniz**\n\n");
	srand(time(0)) ; 
	int kategori;
	printf(" L�tfen A�a��daki Kategorilerden Birini Se�iniz: ");
	printf("\n1- Meyveler\n");
	printf("2- �ehirler\n");
	printf("3- �lkeler\n");
	printf("4- �simler\n");
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
	printf("Yanl�� Bir Giri� Yapt�n�z Tekrar Deneyiniz.\n");
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
		printf("\n KAYBETT�N�Z :((  \n");
		printf("Do�ru Kelime  : %s", kelime); 
	}
	
	return 0; 
}

