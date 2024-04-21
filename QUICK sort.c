#include<stdio.h>
#include<conio.h>
#define n 10
int main()
{
	int a,b[n],c=0,d,e[n],f[n],i,j,x=1,y=0,z=0;
	printf("enter how many element:");
	scanf("%d",&a);
	printf("enter the element: \n");
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
		c=c+1;
	}
    while(z<=a)
    {
    	printf("hii");
        d=b[c-1];
    for(j=0;j<a;j++)
    {
    	if(d>b[j])
    	{
		   	e[x]=b[j];
		   	x++;
		}
	    else if(d<b[j])
		{
			f[y]=b[j];
			y++;
		}	
	}
	for(j=0;j<a;j++)
    {
    	if(e[j]==NULL)
    	{
    		b[x-1]=d;
    		break;	
		}
    	b[j]=e[j];
    }
    for(j=0;j<a;j++)
    {
    	b[x+j]=f[j];
    }
    z=z+1;
    }
    printf("the sorted array is:");
    for(i=0;i<a;i++)
    {
    	printf("%d \t",b[i]);
	}
    return 0;	
}
