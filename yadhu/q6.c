void multiply(int r1,int c1,int r2,int c2,int arr1[r1][c1],int arr2[r2][c2])
{
    int mul[r1][c2];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            mul[i][j]=0;
            for(int k=0;k<c1;k++)
            {
                mul[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }

    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
        printf("%d ",mul[i][j]);
        }
        printf("\n");
    }


}
void main()
{
    int r1,c1,r2,c2;
    printf("enter the rows of array1\n");
    scanf("%d",&r1);
    printf("enter the columns of array1\n");
    scanf("%d",&c1);
    int arr1[r1][c1];
    printf("ENTER THE ELEMENTS OF ARRAY1\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("enter the rows of array2\n");
    scanf("%d",&r2);
    printf("enter the columns of array2\n");
    scanf("%d",&c2);
    int arr2[r2][c2];
    printf("ENTER THE ELEMENTS OF ARRAY2\n");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    if(c1!= r2)
    printf("multiplication not possible\n");
    else
    multiply(r1,c1,r2,c2,arr1,arr2);


}