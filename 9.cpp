#include <iostream>
using namespace std;

int main() {
    for(int c=0;c<=1000;c++)
    for(int b=0;b<=1000;b++)
    for(int a=0;a<=1000;a++)
    {
        if(a+b+c==1000)
        {
            int x,y;
            y=c*c;
            x=a*a;
            x+=b*b;
            if(x==y)
            {
                cout<<a*b*c;
                return 0;
            }
        }
    }
	return 0;
}

