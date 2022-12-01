#include <cstdlib>
#include <iostream>

using namespace std;

char comparesize(int a, int b)
{
	char compare[3]={'=','>','<'};
	int k=0;
	k=a-b;
	while((k!=1 && k!=-1)&&k!=0)
	{
		k/=2;
	}
	cout<<"left : "<<a<<", right : "<<b<<", compare : "<<compare[k]<<endl;
	return compare[k];
}

void comparetest(void)
{
	char result;
	result = comparesize(rand()%100, rand()%100);
}

int main(void)
{
	comparetest();
	return 0;
}
