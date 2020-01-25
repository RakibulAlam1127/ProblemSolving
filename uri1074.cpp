#include<iostream>
using namespace std;
int main()
{
 int N,i,num[1000];
  cin >> N;
  for(i= 0;i < N;i++){
     cin>>num[i];
  }
  for(i=0;i<N;i++){

     if(num[i] == 0){
           cout << "NULL\n";
    }else if(num[i] > 0 ){
      if(num[i] % 2 == 0){
        cout <<"EVEN POSITIVE\n";
      }else{
           cout <<"ODD POSITIVE\n";
      }
    }else{

      if(num[i]%2 == 0){

        cout <<"EVEN NEGATIVE\n";
      }else{

        cout <<"ODD NEGATIVE\n";
      }

    }

     }

    return 0;
}
