// Name: Ali Bayati 
// Chips and salsa  


#include<iostream>
#include<string>

using namespace std; 
int valid(string [] ,int);
int hisort(int[],int);
int lowsort(int[], int);
int saleTotal(int[], int);

int main() 
{
	string salsa[5] = { "Mild","Medium","Sweet","Hot","Zesty" };
	int x, numOfJar[5] , heighst , lowest  ,total;
	cout << "Enter the number of jars sold last month for each salsa:" << endl;

	for (x = 0; x<5; x++)
	{
		cout << "*  " << salsa[x] << "  :";
		numOfJar[x] = valid(salsa,x);

	}
	cout << endl << endl;
	
	heighst = hisort(numOfJar, 5);
	
	lowest = lowsort(numOfJar, 5);

	total = saleTotal(numOfJar, 5);

	
	cout << "                  Slaes Report " << endl << endl;

	for (x = 0; x<5; x ++)
	{
		cout << "*  " << salsa[x] << "  : ";
		cout << numOfJar[x] << endl;
	}

	cout << endl << endl;
	cout << "Total sales :" << total<<endl;
	cout << "Highest selling salsa :" << "(" << salsa[heighst] << ")" << " sold jars : " <<"("<< numOfJar[heighst]<<")" << endl;
	cout << "lowest selling salsa :" << "(" << salsa[lowest] << ")" << " sold jars : " << "("<<numOfJar[lowest]<<")" << endl;


	return 0;

}
int valid(string sjar[], int x)
{
	int numjar;
	cin >> numjar;
	while (numjar <0)
	{
		cout << "Error ! number of jars sold can't be negative please try again !"<<endl;
		cout << "*  " << sjar[x] << "  :";
		cin >> numjar;
	}
	return numjar;

}

int hisort(int njar[], int x)
{
	int hi = 0,i;

	for (i = 1; i < x; i++)
	{
		if (njar[i]>njar[hi])

			hi = i;
	}
	return hi; 

}

int lowsort(int njar[], int x)
{
	int low = 0, i;
	for (i = 1; i < x; i++)
	{
		if (njar[i]<njar[low])

			low = i;
	}
	return low;



}

int saleTotal(int njar[], int x)
{
	int sum = 0, i;

	for (i = 0; i < x; i++)
	{
		sum += njar[i];

	}
	return sum; 

}
/*Output 
Enter the number of jars sold last month for each salsa:
*  Mild  :1225
*  Medium  :1943
*  Sweet  :1067
*  Hot  :2453
*  Zesty  :2098


Slaes Report

*  Mild  : 1225
*  Medium  : 1943
*  Sweet  : 1067
*  Hot  : 2453
*  Zesty  : 2098


Total sales :8786
Highest selling salsa :(Hot) sold jars : (2453)
lowest selling salsa :(Sweet) sold jars : (1067)
Press any key to continue . . .


*/