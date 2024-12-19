#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a positive integer:  ";
    cin>>n;
    
    if (n <= 1) {
        cout << "Not Prime" << endl;
        return 0;
    }
    for(int i=2; i<= sqrt(n) ; i++)
    {
        if (n % i ==0 ){
            cout<<"Not Prime"<<endl;
            return 0;
        }
    }
    cout<<"Prime"<<endl;
    return 0;
}
//check if a entered number is prime or not