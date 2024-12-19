#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cout<<"Enter limit: ";
    cin>>n;
    for(int i=0; i<=n ; i++){
        if(i%2!=0){
            sum = sum + i;            
        }
    }
    cout<<sum<<endl;
    return 0;
}
//sum of odd number in natural number upto n