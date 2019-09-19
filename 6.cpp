#include <iostream>
using namespace std;

int main() {
	long long tp=0,tx=0;
	for(int i=0;i<=100;i++)
	{
	    tp+=i;
	    tx+=i*i;
	}
	tp*=tp;
	tp-=tx;
	cout<<tp;
	return 0;
}














