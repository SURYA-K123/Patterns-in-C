int main()
{
    int numOfRows;
    printf("Enter Number of Rows :");
    scanf("%d",&numOfRows);
    for (int i=1;i<=numOfRows;i++)
    {
        for (int j=0;j<=numOfRows-i;j++)
        {
            printf(" ");
        }
        for (int k=2;k<=i*2;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
