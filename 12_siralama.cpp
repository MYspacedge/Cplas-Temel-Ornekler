#include<iostream>
#include <stdlib.h>   
#include <time.h>    

using namespace std;

int main()
{
	int Sayilar[10];
	srand(time(0));

	for(int i=0;i<10;i++)
	{
			Sayilar[i] = rand()%100;
			cout<<Sayilar[i]<<endl;		
	}
	for(int i=0;i<10;i++)
	{
			for(int j=0;j<10;j++)
				{
					if(Sayilar[i]>Sayilar[j])
					{
						int temp=Sayilar[i];
						Sayilar[i]=Sayilar[j];
						Sayilar[j]=temp;
					}
				}		
	}	
	cout<<"-------------"<<endl;
	for(int i=0;i<10;i++)
	{
			cout<<Sayilar[i]<<endl;		
	}
}

