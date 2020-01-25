#include<iostream>
using namespace std;
int main()
{
    int N,num[10000],i,j,in = 0,out=0,length = 0;
    cin>>N;
    if(N<10000){
        for(i=0;i<N;i++){
            length++;
            cin>>num[i];
        }

        for(i=0;i<N;i++){
            for(j=10;j<=20;j++){
                if(num[i] == j){
                    in++;
                }
            }
        }
    }



    cout <<in<<" in"<<endl;
    cout <<length-in<<" out"<<endl;
    return 0;
}
