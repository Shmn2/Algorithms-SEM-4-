#include<iostream>
using namespace std;

int fact(int n)
{
    if(n<=0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}


int main()
{
    cout<<"factorial : "<<fact(5)<<endl;

    return 0;
}

