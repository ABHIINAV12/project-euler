#include <iostream>
using namespace std;

int main() {
    long long sum=0;
    int arr[2000000];
	for(int i=0;i<2000000;i++)
	arr[i]=0;
	for(int i=2;i<2000000;i++)
	{
	    if(arr[i]==0)
	    {
	       sum+=i;
	       for(int j=i*2;j<2000000;j+=i)
	       arr[j]=1;
	    }
	}
	cout<<sum;
	return 0;
}

