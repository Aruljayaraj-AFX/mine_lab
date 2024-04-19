#include <stdio.h>

int visited[100]; 

void dfs(int v, int a, char c[a], int o[a][a]) {
    printf("%c ", c[v]);
    visited[v] = 1;
    for (int i = 0; i < a; ++i) {
        if ((o[v][i]==1) && (visited[i] != 1)) {
            dfs(i, a, c, o);
        }
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

    printf("\nDepth First Search Path:\n");
    for (int i = 0; i < a; ++i) {
        visited[i] = 0;
    }
    dfs(0, a, c, o); 
    printf("\n");

    return 0;
}
