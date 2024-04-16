#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    char b[100];
    int c = 0;

    printf("Enter the string ");
    scanf("%[^\n]%*c",&a);
    
    printf("Enter the string ");
    scanf("%[^\n]%*c",&b);

    int bp = strlen(a);
    int p = strlen(b);

    
    for ( int i = 0; i < bp; i++)
    {
        printf("%c\n",a[i]);
        printf("%c\n",b[c]);
        if( a[i] == b[c] )
        {
            c = c + 1;
        
        if( c == p)
        {
            printf("Yes,serach str is present" );
            return 0;
        }
        }
        else
        {
            c = 0;
        }

    } return 0;

}