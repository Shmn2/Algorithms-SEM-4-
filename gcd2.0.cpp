#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    int r = a%b;
    while( r !=0)
    {
        a=b;
        b= r;
        r = a%b;


    }
    return b;

}

int main()
{
    cout<<"GCD : "<<gcd(5,10);
    return 0;
}
