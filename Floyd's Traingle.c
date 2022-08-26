int main()
{
   int num,i,j,k=1;
   printf("Enter the number of rows ");
   scanf("%d",&num);
   for (i=1;i<=num;i++)
   {
       for (j=1;j<=i;j++)
       {
           printf("%d ",k);
           k+=1;
       }
       printf("\n");
   }
   return 0;
}
