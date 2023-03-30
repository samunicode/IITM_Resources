#include<stdio.h>
 
int main(){
    int a, b, c, d, e;
    printf("The first integer is\n");
    scanf("%d", &a);
     
    printf("The second integer is\n");
    scanf("%d", &b);
     
    printf("The third integer is\n");
    scanf("%d", &c);
     
    printf("The fourth integer is\n")  ;
    scanf("%d", &d);
     
    printf("The fifth integer is\n");
    scanf("%d", &e);

    if (a%2==1)
    {
     if (b%2==1)
      {
         if (c%2==1)
            {
             if (d%2==1)
                {
                 if (e%2==1)
                    {
                        printf("The sum of odd integers is %d", a+b+c+d+e );
                    }
                     else
                    {
                     printf("The sum of odd integers is %d", a+b+c+d );
                    }
                }else
                {
                  if (e%2==1)
                    {
                      printf("The sum of odd integers is %d", a+b+c+e );
                    }
                   else
                    {
                     printf("The sum of odd integers is %d", a+b+c );
                    }
                }
            } else
            { if(d%2==1)
               {if (e%2==1)
                   {
                     printf("The sum of odd integers is %d", a+b+d+e );
                    }
                     else
                    {
                     printf("The sum of odd integers is %d", a+b+d );
                    }
                }else
                {
                 if(e%2==1)
                    {
                        printf("The sum of odd integers is %d", a+b+e );
                    }
                    else
                    {
                     printf("The sum of odd integers is %d", a+b);
                    }
                }
            }
        }else
       {
             if(c%2==1 && d%2==1 && e%2==1)
             {
                printf("The sum of odd integers is %d", a+c+d+e );
            }
             else if(c%2==1 && d%2==1 && e%2==0)
            {
                printf("The sum of odd integers is %d", a+c+d );
            }
             else if(c%2==1 && d%2==0 && e%2==0)
            {
                printf("The sum of odd integers is %d", a+c );
            }
             else if(c%2==1 && d%2==0 && e%2==1)
            {
                printf("The sum of odd integers is %d", a+c+e );
            }
             else if(c%2==0 && d%2==1 && e%2==1)
            {
                printf("The sum of odd integers is %d", a+d+e );
            }
             else if(c%2==0 && d%2==1 && e%2==0)
            {
                printf("The sum of odd integers is %d", a+d );
            }
             else if(c%2==0 && d%2==0 && e%2==1)
            {
                printf("The sum of odd integers is %d", a+e );
            }
             else if(c%2==0 && d%2==0 && e%2==0)
            {
                printf("The sum of odd integers is %d", a );
            }
        }
    }else
    {    if(b%2==1 && c%2==1 && d%2==1 && e%2==1)
       {
         printf("The sum of odd integers is %d", b+c+d+e);
        }
         else if(b%2==1 && c%2==1 && d%2==1 && e%2==0)
       {
         printf("The sum of odd integers is %d", b+c+d);
        }
         else if(b%2==1 && c%2==1 && d%2==0 && e%2==1)
       {
         printf("The sum of odd integers is %d", b+c+e);
        }
         else if(b%2==1 && c%2==1 && d%2==0 && e%2==0)
       {
         printf("The sum of odd integers is %d", b+c);
        }
         else if(b%2==1 && c%2==0 && d%2==1 && e%2==1)
       {
         printf("The sum of odd integers is %d", b+d+e);
        }
         else if(b%2==1 && c%2==0 && d%2==1 && e%2==0)
       {
         printf("The sum of odd integers is %d", b+d);
        }
         else if(b%2==1 && c%2==0 && d%2==0 && e%2==1)
       {
         printf("The sum of odd integers is %d", b+e);
        }
         else if(b%2==1 && c%2==0 && d%2==0 && e%2==0)
       {
         printf("The sum of odd integers is %d", b);
        }
     else if(b%2==0 && c%2==1 && d%2==1 && e%2==1)
       {
         printf("The sum of odd integers is %d", c+d+e);
        }
         else if(b%2==0 && c%2==1 && d%2==1 && e%2==0)
       {
         printf("The sum of odd integers is %d", c+d);
        }
         else if(b%2==0 && c%2==1 && d%2==0 && e%2==1)
       {
         printf("The sum of odd integers is %d", c+e);
        }
         else if(b%2==0 && c%2==1 && d%2==0 && e%2==0)
       {
         printf("The sum of odd integers is %d", c);
        }
         else if(b%2==0 && c%2==0 && d%2==1 && e%2==1)
       {
         printf("The sum of odd integers is %d", d+e);
        }
         else if(b%2==0 && c%2==0 && d%2==1 && e%2==0)
       {
         printf("The sum of odd integers is %d", d);
        }
         else if(b%2==0 && c%2==0 && d%2==0 && e%2==1)
       {
         printf("The sum of odd integers is %d", e);
        }
         else if(b%2==0 && c%2==0 && d%2==0 && e%2==0)
       {
         printf("The sum of odd integers is %d", 0);
        }
    }  
    return 0;
}