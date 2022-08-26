int main()
{
    int numOfRows;
    printf("Enter the odd number of rows :");
    scanf("%d",&numOfRows);
    if (numOfRows%2==1)
    {
        for (int i=1;i<=(numOfRows/2)+1;i++)
        {
            for (int j=1;j<=numOfRows;j++)
            {
                if (j<=i || j>numOfRows-i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        for (int m=numOfRows;m>=3;m-=2)
        {
            for (int n=numOfRows;n>=1;n--)
            {
                if (n<=m/2 || n>numOfRows-(int)(m/2))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("Enter a odd number");
    }
    return 0;
}
