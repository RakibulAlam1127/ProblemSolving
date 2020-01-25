#include<stdio.h>
int main()
{
    int num[100],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }

    if(num[i] == 0){
       printf("NULL");
    }else if(num[i] > 0 ){
      //positive
      if(num[i] % 2 == 0){
        //even
        printf("EVEN POSITIVE");
      }else{
          //odd
           printf("ODD POSITIVE");
      }
    }else{
      //Negative
      if(num[i]%2 == 0){
        //even
        printf("EVEN NEGATIVE");
      }else{
        //odd
        printf("ODD NEGATIVE");
      }

      return 0;

}
