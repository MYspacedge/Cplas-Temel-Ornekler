#include<iostream>

using namespace std;

void Degistir(int s1,int s2)
{	
		int temp=s1;
	    s1=s2;
	    s2=temp;
		cout<<"------Degistirildi-------"<<endl;
		cout<<"sayi1 : "<<s1<<"  Bellekteki adresi :"<<&s1<<endl;
		cout<<"sayi2 : "<<s2<<"  Bellekteki adresi :"<<&s2<<endl;
}

int main()
{
     int sayi1,sayi2;
	 cout<<"Sayi1 giriniz: ";
	 cin>>sayi1;
	 cout<<"Sayi2 giriniz: ";
	 cin>>sayi2;
	 Degistir(sayi1,sayi2);
}

