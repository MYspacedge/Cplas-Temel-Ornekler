#include<iostream>
#include <stdlib.h>   
#include <time.h>    

using namespace std;

int main()
{
	int Sayilar[5];
	srand(time(0));
	for(int i=0;i<5;i++)
	{
			Sayilar[i] = rand();
			cout<<Sayilar[i]<<endl;		
	}	
}

