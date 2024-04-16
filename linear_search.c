#include<stdio.h>
int main()
{
    int a;
    printf("Enter the how many in the list:");
    scanf("%d",&a);

    int b[a];
    int c;

    for ( int i = 0; i < a; i++)
    {
        printf("Enter the %d element", i + 1 );
        scanf("%d", &b[i]);
    }
    
    printf("Enter the search element :");
    scanf("%d", &c);
    for (int j = 0; j < a; j++){
        if (b[j] == c)
        {
            printf("Search element in the %d position",  j + 1 );
            return 0;
        }
        else if( j == (  a - 1 ) )
        {
            printf("Not present in the list");
        }
    }return 0;
}

