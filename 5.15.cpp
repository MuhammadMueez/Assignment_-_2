# include <iostream>
using namespace std;

int main()
 
{

	for (int i=1; i<=10;i++)
	{
		for ( int j=10; j>=i; j--)
		{
			cout<< "*";
		}
		cout<<"\n";
	}
}

// also try for line 10

// for ( int j=1; j<=i; j++)
