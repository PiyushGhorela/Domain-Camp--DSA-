#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=1 ; i <= 10; i++){
        if(n>=1 && n<100){
            cout<< n*i <<endl;
        }
    }
    if (n<1 || n>100){
    cout<<"please enter number between 1 to 100";
    }
    return 0;
}
//return multiple table for a given number upto 100