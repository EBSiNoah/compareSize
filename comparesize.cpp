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

int comparesizeBig(int a, int b)
{
	int compare[3]={b,b,a};
	int k=0;
	k=a-b;
	while((k!=1 && k!=-1)&&k!=0)
	{
		k/=2;
	}
	cout<<"left : "<<a<<", right : "<<b<<", big one : "<<compare[k+1]<<endl;
	return compare[k+1];
}

int comparesizeSmall(int a, int b)
{
	int compare[3]={a,b,b};
	int k=0;
	k=a-b;
	while((k!=1 && k!=-1)&&k!=0)
	{
		k/=2;
	}
	cout<<"left : "<<a<<", right : "<<b<<", small one : "<<compare[k+1]<<endl;
	return compare[k+1];
}

void comparetest(void)
{
	char result;
	result = comparesizeBig(rand()%100, rand()%100);
	result = comparesizeSmall(rand()%100, rand()%100);
}

int main(void)
{
	comparetest();
	return 0;
}
