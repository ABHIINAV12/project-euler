#include <iostream>
using namespace std;

int main() {
	int arr[1000000];
	for(int i=0;i<1000000;i++)
	arr[i]=0;
	int c=0;
	for(int i=2;i<1000000;i++)
	{
	    if(arr[i]==0)
	    {
	       c++;
	       if(c==10001)
	       {
	           cout<<i;
	           return 0;
	       }
	       for(int j=i*2;j<1000000;j+=i)
	       arr[j]=1;
	    }
	}
	return 0;
}
