int fillcup(int c)
{
c=5;
return c;
}
int main()
{
int r=0;
int cup=fillcup(r);
printf("%d\n",r);
printf("%d",*(&cup));
return 0;
}

