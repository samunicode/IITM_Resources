#include<stdio.h>
#include<math.h>
int factorial(int num){
    if (num==1||num==0)
    {
        return 1;
    }
    return (num*factorial(num-1));
}
int main(){
    float x;
    float ans;
    scanf("%f", &x);

    ans=(((pow(x,1))/factorial(2))-((pow(x,3))/factorial(4))+((pow(x,5))/factorial(6))-((pow(x,7))/factorial(8)));

    printf("%f",ans);
    return 0;
}