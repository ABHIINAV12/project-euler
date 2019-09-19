#include <iostream>
using namespace std;

int main() {
    string s;
    cin>>s;
    int arr[10005];
    for(int i=0;i<1000;i++)
    arr[i]=s[i]-'0';
    long long m=0,p=1;
    for(int i=0;i<=s.length()-13;i++)
    {
        p=1;
        for(int j=i;j<i+13;j++)
        p*=arr[j];
        if(p>m)
        m=p;
    }
    cout<<m;
	return 0;
}

