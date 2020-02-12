//Solution-1
int* twoSum(int* a, int n, int target) 
{
int * b = malloc(2 * sizeof(int));
for(int i=0;i<n-1;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(a[i]+a[j]==target)
        {
            b[0]=i;
            b[1]=j;
        }
    }
}
return(b);
}
