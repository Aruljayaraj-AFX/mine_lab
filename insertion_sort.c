#include<stdio.h>
int main()
{
    int a;
    printf("Enter the how many in the list:");
    scanf("%d",&a);
    int b[a];

    for ( int i = 0; i < a; i++)
    {
        printf("Enter the %d element", i + 1 );
        scanf(" %d", &b[i]);
    }

    for( int y = 0; y < a; y++)
    {
        for( int yy = 0; yy < y+1 ; yy++)
        {
            if(b[y]<b[yy])
            {
                int temp=b[y];
                b[y]=b[yy];
                b[yy]=temp;
            }
        }   
    }

    printf("This sort array \n");

    for ( int u = 0; u < a; u++)
    {
        printf("%d\n",b[u]);
    }
}
