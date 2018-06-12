#include <iostream>
using namespace std;

void input()
{
	int mezo[101][101];
	int sor=0,oszlop=0;
	int vmi=0;
	cin>>sor>>oszlop;
	for(int i=0;i<oszlop-1;i++)
	{
		for(int j=0;j<sor-1;j++)
		{
			cin>>vmi;
			mezo[j][i]=vmi;
		}
	}
}
int main()
{
	int kivag=0;
	input();
	return 0;
}