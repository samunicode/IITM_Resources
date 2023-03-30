#include<stdio.h>
 
int Cyclesort(int size, int arr[]){
    for (int i = 0; i < size; i++)
    {
        // cout<<(i+1)<<endl;
        for (int j = 0; (j < size-1)&&(arr[i]!=(i+1)); j++)
        {
            int temp=arr[i];
            if (temp==(size+1)) break;
            arr[i]=arr[i]+arr[temp-1];
            arr[temp-1]=arr[i]-arr[temp-1];
            arr[i]=arr[i]-arr[temp-1];
            // for(int k=0; k<size; k++) cout<<arr[k]<<" ";
            // cout<<endl;
        }
    }
    return 1;
}

int main(){
    int n;
    printf("Please give the value of n: ");
    scanf("%d", &n);
    int arr[n-1];
    printf("Please give the elements of the array: ");
    for(int i = 0; i < (n-1); i++) scanf("%d",&arr[i]);
    Cyclesort(n-1,arr);
    int k=n;
    for (int i = 0; (i<(n-1)); i++)
        if(arr[i]!=(i+1))
            k=(i+1);
    printf("%d", k);
    return 0;
}