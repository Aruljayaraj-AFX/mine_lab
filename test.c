#include<stdio.h>

void lost(int b[],int e, int r)
{
    int y=7;
    while(y!=0)
    { 
        y=0;
        for (int i = 0; i < r; i++)
        {
            int f =(2*i)+1;
            int l =(2*i)+2;

            if(l<6)
            {
                if(b[i]>b[f])
                {
                    int temp = b[i];
                    b[i] = b[f];
                    b[f] = temp;
                    y=y+1;
                }
                if(b[i]>b[l])
                {
                    int temp = b[i];
                    b[i] = b[l];
                    b[l] = temp;
                    y=y+1;
                }
            }
        }
    } 
}

int main()
{
    int b[] = {12,10,9,5,6,0,1};
    int e = 7;
    int r = e/2;
    int y=7;
    while(y!=0)
    { y=0;
    for (int i = 0; i < r; i++)
    {
        int f =(2*i)+1;
        int l =(2*i)+2;

        if(b[i]>b[f])
        {
            int temp = b[i];
            b[i] = b[f];
            b[f] = temp;
            y=y+1;
        }
        if(b[i]>b[l])
        {
            int temp = b[i];
            b[i] = b[l];
            b[l] = temp;
            y=y+1;
        }
        
    }
    }

    if(b[0] == 0)
    {
        int u = b[0];
        b[0] = b[e-1];
        b[e-1] = u;
        lost(b,e,r);
    }
    for(int o = 0; o < e; o++)
    {
        printf("%d\n",b[o]);
    }

}