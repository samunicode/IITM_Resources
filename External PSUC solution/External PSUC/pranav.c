#include <stdio.h>
#include <string.h>
int main()
{
 int n,count;
 char x[100],y[100];
 gets(x);
 gets(y);
 n=strlen(y);
 for(int i=0;i<strlen(x);i++)
 {
 count=0;
 for(int j=0;j<n;j++)
 {
 if(x[i+j]==y[j]) count++;
 }
 if(count==n) printf("%d ",i);
 }
}
