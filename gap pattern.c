int main()
{
    int numOfRows;
    printf("Enter the number of rows :");
    scanf("%d",&numOfRows);
    for (int i=1;i<=numOfRows;i++)
    {
        for (int j=1;j<=i;j++)
        {
            if (j==1 || j==i)
            {
                printf("%d",j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
