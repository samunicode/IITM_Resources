#include<stdio.h>
struct employee
{
char name[50];
int emp_no;
float basic_pay,hra,net_pay;
};
int main()
{
int n,i,sum=0,average;
printf("Enter number of employees:");
scanf("%d",&n);
struct employee e[n];
for(i=0;i<n;i++)
{
    printf("Enter Name:");
    scanf("%s",e[i].name);
    printf("Enter Employee Number:");
    scanf("%d",&e[i].emp_no);
    printf("Enter Basic Pay:");
    scanf("%f",&e[i].basic_pay);
    printf("Enter hra:");
    scanf("%f",&e[i].hra);
    e[i].net_pay=e[i].hra+e[i].basic_pay;
    sum=sum+ e[i].net_pay;
}
average=sum/n;
for(i=0;i<=n;i++)
{
    if(e[i].net_pay>=average){
        printf("Employee Data with Net Salary more than average salary:\n");
        printf("Name: %s\n Emp No: %d\nBasicPay: %f\nHRA:%f\nNetPay:%f\n",e[i].name,e[i].emp_no,e[i].basic_pay,e[i].hra,e[i].net_pay);
    }
}
return 0;
}