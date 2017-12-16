#include<iostream>

using namespace std;

int main()
{
 	
 	double sonuc,Vize,Final;
	cout<<"Vize notunu Girin : ";
	cin>>Vize;
	cout<<"Final notunu Girin : ";
	cin>>Final;
    sonuc = (Vize*0.4)+(Final*0.6);
    cout<<"Notunuz: "<<sonuc<<endl;
   
	if(sonuc >= 90)
	{
		cout<<"Notunuzun harf karsiligi: AA"<<endl;
	}
	else if(sonuc>=70 && sonuc<90)
	{
		cout<<"Notunuzun harf karsiligi: BA"<<endl;
	}
	else if(sonuc>=60 && sonuc<70)
	{
		cout<<"Notunuzun harf karsiligi: BB"<<endl;
	}
	else if(sonuc>=50 && sonuc<60)
	{
		cout<<"Notunuzun harf karsiligi: CB"<<endl;
	}
	else if(sonuc>=40 && sonuc<50)
	{
		cout<<"Notunuzun harf karsiligi: CC"<<endl;
	}
	else
	{
		cout<<"Notunuzun harf karsiligi: FF"<<endl;
	}

	

	
}
