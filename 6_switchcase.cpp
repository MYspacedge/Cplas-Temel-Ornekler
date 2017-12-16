#include<iostream>

using namespace std;

int main()
{
 	int Islem;
 	double Sayi1,Sayi2,Sonuc;
	cout<<"Sayi1 Girin : ";
	cin>>Sayi1;
	cout<<"Sayi2 Girin : ";
	cin>>Sayi2;
	cout<<"Toplama : 1 \nCikarma : 2 \nCarpma : 3 \nBolme : 4 "<<endl;
	cout<<"Islemi Girin : ";
	cin>>Islem;
	switch(Islem)
	{
		case 1:		
      			Sonuc=Sayi1+Sayi2;
      			cout<<"Islem sonucu : "<<Sonuc<<endl;
      			break;
		case 2:		
      			Sonuc=Sayi1-Sayi2;
      			cout<<"Islem sonucu : "<<Sonuc<<endl;
      			break;
      	case 3:		
      			Sonuc=Sayi1*Sayi2;
      			cout<<"Islem sonucu : "<<Sonuc<<endl;
      			break;
      	case 4:		
      			Sonuc=Sayi1/Sayi2;
      			cout<<"Islem sonucu : "<<Sonuc<<endl;
      			break;
      	default :		
      			cout<<"Yanlis Islem girdiniz..";
    }
       			
       
    
   


	
}
