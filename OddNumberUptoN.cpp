#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter limit : ";
    cin>>n;
    for(int i=0;i<=n;i++){
        if(i%2!=0)
        {
        cout<<i<<endl;
        }
    }
    return 0;
}
//returns odd numbers in n natural numbers