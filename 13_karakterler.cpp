#include<iostream>
#include<string>

using namespace std;

int main()
{
	string ad,soyad;
	cout<<"Adinizi Giriniz:"; 
	cin>>ad;
	cout<<"Soyadinizi Giriniz:"; 
	cin>>soyad;
	double kilo,boy;
	cout<<"Boyunuzu Giriniz:"; 
	cin>>boy;
	cout<<"Kilonuzu Giriniz:"; 
	cin>>kilo;
	
	double indeks=kilo/(boy*boy);
	cout<<ad<<" "<<soyad<<" Vucut Kitle Indeksiniz :"<<indeks; 
	
}

