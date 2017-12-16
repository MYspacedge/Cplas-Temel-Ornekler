#include<iostream>

using namespace std;

int Faktoriyel(int s)
{
	int sonuc=1;
	for(int i=1;i<=s;i++)
	{
		sonuc *=i;
	}
	return sonuc;
}

int Ustalma(int taban,int us)
{
	int sonuc=1;
	for(int i=1;i<=us;i++)
	{
		sonuc *=taban;
	}
	return sonuc;
}
int main()
{
     int sayi;
	 cout<<"Sayi giriniz: ";
	 cin>>sayi;
	 cout<<sayi<<" sayisinin faktoriyeli :"<<Faktoriyel(sayi)<<endl;
	 
	 cout<<"----------------------------"<<endl;
	 
	  int us,taban;
	  cout<<"Tabani giriniz : ";
	  cin>>taban;
	  cout<<"Ustu giriniz : ";
	  cin>>us;
	  
	  cout<<taban<<"^"<<us<<" : "<<Ustalma(taban,us);
	  
	  
}

