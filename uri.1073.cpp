#include<iostream>
using namespace std;
int main()
{
    int N,i;
    cin>> N;
       if((N>5)&&(N < 2000)){
         for(i=2;i<=N;i+=2){
                cout << i<<"^"<<2<<" = "<<i*i<<endl;
         }
       }
    return 0;
}
