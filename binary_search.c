#include<stdio.h>
int main()
{
    int a,c;
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
        for( int yy = y+1; yy < a; yy++)
        {
            if(b[y]>b[yy])
            {
                int temp=b[y];
                b[y]=b[yy];
                b[yy]=temp;
            }
        }
    }

    printf("This sort array ");

    for ( int u = 0; u < a; u++)
    {
        printf("%d\n",b[u]);
    }


    printf("Enter the search element :");
    scanf(" %d", &c);

    int f = 0;
    int l = a;
    


    while (f <= l) { 
        int m = (f + l) / 2;
        if (b[m] == c) {
            printf("Search element found at position %d.\n", m + 1);
            return 0;
        }
        if (b[m] < c) {
            f = m + 1;
        } else {
            l = m - 1;
        }
    }
    printf("Not present");
    return 0;
} 

