#include<stdio.h>
void main()
{
    int a;
    printf("Enter the how many in the list:");
    scanf("%d",&a);

    char b[a][1000];
    char c[1000];

    for ( int i = 0; i < a; i++)
    {
        printf("Enter the %d element", i + 1 );
        scanf(" %[^\n]%*c", &b[i]);
    }
    
    printf("Enter the search element :");
    scanf(" %[^\n]%*c", &c);
    for (int j = 0; j < a; j++){
        if (strcmp(b[j], c) == 0)
        {
            printf("Search element in the %d position",  j + 1 );
            break;
        }
        else if( j == (  a - 1 ) )
        {
            printf("Not present in the list");
        }
    }
}

