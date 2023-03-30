#include<stdio.h>
#include<math.h>
int main(){
    int count=0;
    int r1, r2;
    printf("You want to find prime numbers between:\n");
    scanf("%d", &r1);
    printf("And\n");
    scanf("%d", &r2);
    printf("\n");
    
    if (r1==1)
    {
        r1=2;
    }
    
    for (int i = r1; i < r2; i++)
    {
        int k=0;
        for (int j = 2; j <= pow(i,0.5); j++)
        {
            if (i%j==0)
            {
                k=i;
                break;
            }
            
        }
        if (i!=k)
        {
            printf("%3d ", i);
            count+=1;
        }
        
    }
    printf("\nThe number of prime numbers between %d and %d are %d", r1, r2, count);

    return 0;
}