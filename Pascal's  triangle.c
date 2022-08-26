int main()
{
    int a;
    printf("Enter the number of rows :");
    scanf("%d",&a);
    int b[a];
    int c[a];
    for (int i=0;i<a;i++)
    {
        c[0]=1;
        if (i>=2)
        {
            for (int j=1;j<i;j++)
            {
               c[j]=b[j-1]+b[j];
            }
        }
        c[i]=1;
        for (int k=0;k<=i;k++)
        {
            b[k]=c[k];
            printf("%d ",c[k]);
        }
        printf("\n");
    }
    return 0;
}
