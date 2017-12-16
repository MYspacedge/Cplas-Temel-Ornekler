#include<iostream>

using namespace std;

int main()
{
	int Sayilar[5];
	for(int i=0;i<5;i++)
	{
			Sayilar[i]=i;
			cout<<Sayilar[i]<<endl;
	}
	
	cout<<"--------------------"<<endl;
	
	int Sayilar2[5];
	for(int i=4;i>=0;i--)
	{
			Sayilar2[i]=i;
			cout<<Sayilar2[i]<<endl;
	}	
}

