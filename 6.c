#include<stdio.h>
int main(){
    // why is int not giving same answer as float when W1,W2,I1,I2 are already integers?
    float W1, I1, W2, I2;
    W1 = 15, I1 = 5, W2 = 25, I2 = 4;
    float average_value = (W1*I1 + W2*I2)/(I1 + I2);
    printf("The average value is %f", average_value);
    return 0;
}