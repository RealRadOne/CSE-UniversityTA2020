#include<stdio.h>
void fillcup(int *c)
{
*c=5;
}
int main()
{
int cup=0;
fillcup(&cup);
printf("%d",cup);
return 0;
}

