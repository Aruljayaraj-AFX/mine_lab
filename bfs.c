#include <stdio.h>
#include <stdbool.h>

int visited[100];
int j=0;
int v=0;

void bfs(int v, int a, char c[a], int o[a][a]) 
{
    for (int i = 0; i < a; ++i)
    {
         if ((o[v][i]==1) && (visited[i] != 1)) 
        {
            printf("%c",c[i]);
            visited[i]=1;
        }
    }
    if(v!=5)
    {
        v++;
        bfs(v,a, c, o);
    }

}

int main() {

    int a;
    printf("How many nodes are present in the graph or tree: ");
    scanf("%d", &a);
    char c[a];
    for (int i = 0; i < a; i++) {
        printf("Enter the node %d: ", i + 1);
        scanf(" %c", &c[i]);  
    }
    int o[a][a];

    for (int u = 0; u < a; u++) {
        for (int uu = 0; uu < a; uu++) {
            printf("Enter 1 if %c and %c are connected, otherwise 0: ", c[u], c[uu]);
            scanf("%d", &o[u][uu]);
        }
    }


    printf("Breath First Search Path:\n");
    for (int i = 0; i < a; ++i) {
        visited[i] = 0;
    }
    j++;
    printf("%c",c[v]);
    visited[v]=1;
    bfs(v,a, c, o); 

    printf("\n");
    return 0;
}
