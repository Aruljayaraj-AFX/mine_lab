#include <stdio.h>
#include <stdlib.h>

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

void fy(int b[100], int e)
{
  int r = e/2;
  int y=7;
  while(y!=0)
  { 
    y=0;
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
    printf("After heap sort ");
    for(int o = 0; o < e; o++)
    {
        printf("%d\n",b[o]);
    }
  }
 
} 

void leftgr(int b[100], int a)
{
  int t = 0;
  printf("\nEnter the left child of %d: ", b[a]);
  int p = (2 * a) + 1;
  scanf("%d", &b[p]);
  printf("Enter if %d has a left child (1) or not (0): ", b[p]);
  scanf("%d", &t);
  if (t == 1)
  {
    leftgr(b, p);
  }
  gomin(b,a);
}


void gomin(int b[100], int a)
{
  
  int t;
  printf("\nEnter the right child of %d: ", b[a]);
  int p = (2 * a) + 2;
  scanf("%d", &b[p]);
  printf("Enter if %d has a left child (1) and right (0) and none(9): ", b[p]);
  printf("check%d",b[p]);
  scanf("%d", &t);
  if (t == 1)
  {
    leftgr(b, p);
  }
  else if (t == 0){
    gomin(b,p);
  }
}

int main()
{
  int b[200];
  int a = 0;
  int e=0;


  printf("if no l or r child means data sit the value 0");
  printf("enter the no of node in the tree");
  scanf("%d",&e);

  for (int k = 0; k < 200; k++)
  {
    b[k] = 0;
  }

  printf("Enter the root node data: ");
  scanf("%d", &b[a]);
  leftgr(b, a);

  printf("This before heap of the tree \n");
  for (int k = 0; k < (2*e); k++)
  {
    printf("%d\n",b[k]);
  }

  fy(b,e);

  return 0;
}
