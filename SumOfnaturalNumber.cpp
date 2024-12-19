#include <iostream>
using namespace std;
int main()
{
    int n, sum=0;
    cout<<"enter positive integer : ";
    cin>>n;
    if(n>=1 & n<=10000){
        int sum = n*(n+1)/2;
        cout<< sum;
    }
    else
    {
        cout<<"Please enter integer between 1 to 10000";
    }
    return 0;
}
//sum of n natural number