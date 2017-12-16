#include<iostream>

using namespace std;

int main()
{
 	int Sayi1,Sayi2;
 	bool sonuc;
	cout<<"Sayi1 Girin : ";
	cin>>Sayi1;
	cout<<"Sayi2 Girin : ";
	cin>>Sayi2;
    sonuc = Sayi1==Sayi2;
	if(sonuc)
	{
		cout<<"Sayilar birbirine esit"<<endl;
	}
	
	sonuc = Sayi1>=Sayi2;
	if(sonuc)
	{
		cout<<"Sayi1 Sayi2'den buyuk veya esit"<<endl;
	}
	
	sonuc = Sayi1<=Sayi2;
	if(sonuc)
	{
		cout<<"Sayi2 Sayi1'den buyuk veya esit"<<endl;
	}
	
	sonuc = (Sayi1>0) && (Sayi2>0);
	if(sonuc)
	{
		cout<<"Iki sayida 0 dan buyuk "<<endl;
	}
	
	sonuc = (Sayi1>0) || (Sayi2>0);
	if(sonuc)
	{
		cout<<"Iki sayidan herhangi biri 0 dan buyuk veya ikiside buyuk "<<endl;
	}
	 
	
}
