#include <stdio.h>
#include <time.h>
int main()
{
 time_t t;
 struct tm *tmp;
 time(&t);
 /* adds 45 days to current date */
 t += 45 * 24 * 60 * 60;
 tmp = localtime(&t);
 printf("%02d/%02d/%02d\n", tmp->tm_mon+1, tmp->tm_mday, tmp->tm_year % 100);
 return 0;
}