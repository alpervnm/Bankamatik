#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int secim,para,miktar,i,fatura;
	printf("para miktarinizi giriniz: ");
	scanf("%d",&para);
	for(i=0;i<=2;i++){
		gozunaydin:
	printf("Yapmak istediginiz islemi seciniz;\n 1)Bakiye goruntuleme\n 2)Para Cekme\n 3)Para Yatirma\n 4)Fatura Odeme\n 5)Cikis\n");
	scanf("%d",&secim);
	system("CLS");
	switch(secim)
	{
	 	case 1:
	 		system("cls");
	 		printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
	 		printf("\n\n\nGuncel bakiyeniz: %d\n\n\n",para);
	 		printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
			i=0;
			break;
		case 2 :
			system("CLS");
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
			printf("Ne kadar para cekmek istiyorsunuz?\n");
			scanf("%d",&miktar);
			if(para<miktar){
				printf("\nYetersiz bakiye, Isleminiz gerceklestirilemedi!!\n");
				goto gozunaydin;
			}
			else{
			
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");		
			printf("\nIslem oncesi bakiyeniz: %d",para);
			printf("\nCekmek istediginiz miktar: %d ",miktar);
			para-=miktar;
			printf("\nGuncel bakiyeniz: %d \n\n\n",para);
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");}
			
			i=0;
			break;
		case 3:	
		    system("CLS");
		    printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
			printf("\nNe kadar para yatirmak istiyorsunuz?\n");
			scanf("%d",&miktar);
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
			printf("\nIslem oncesi bakiyeniz: %d",para);
			printf("\nYatirmak istediginiz miktar: %d",miktar);
			para+=miktar;
			printf("\nGuncel bakiyeniz: %d\n\n\n",para);
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
			i=0;
			break;
		case 4:
			system("cls");
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
			printf("Hangi faturanizi odemek istersiniz?\n1)Elektrik\n2)Dogal gaz\n3)SU\n4)Geri don");
			scanf("%d",&fatura);
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
			switch(fatura){
				case 1:
					if(para<200){
				printf("\nYetersiz bakiye, Isleminiz gerceklestirilemedi!!\n");
				goto gozunaydin;
			}
			else
					
					para=para-200;
					printf("Elektrik faturaniz basariyla odenmistir\nTESEKKUR EDERIZ...\n\n Guncel bakiyeniz:%d",para);
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
					i=0;
					goto gozunaydin;
					break;
				case 2:
						if(para<400){
				printf("\nYetersiz bakiye, Isleminiz gerceklestirilemedi!!\n");
				goto gozunaydin;}
				
					else
						para=para-400;
					printf("Dogalgaz faturaniz basariyla odenmistir\nTESEKKUR EDERIZ...\n\n Guncel bakiyeniz:%d",para);
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
					i=0;
					goto gozunaydin;
					break;
				case 3:	if(para<80){
				printf("\nYetersiz bakiye, Isleminiz gerceklestirilemedi!!\n");
				goto gozunaydin;}
				else
					para=para-80;
					printf("Su faturaniz basariyle odenmistir\nTESEKKUR EDERIZ...\n\n Guncel bakiyeniz:%d",para);
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
					i=0;
					goto gozunaydin;
					break;
				case 4:
					goto gozunaydin;
				default:
				printf("\n\nhatali tuslama yaptiniz!!!\n");
				i=0;
				goto gozunaydin;
				break;
			}
		case 5:
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
			printf("\nIyi gunler dileriz...\n");
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
			i=10;
			break;
		default:
				printf("\n\nhatali tuslama yaptiniz!!!\n");
				i=0;
				break;
	}}
	getch();}
	
	

