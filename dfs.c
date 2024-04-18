#include <stdio.h>
#include <string.h>

void dd(int s, char a[], char connected_nodes[][s*5], char ss[], int y, int t);
int indexx(char h, char a[], int s);

int main() {
    int s, d;
    printf("How many nodes or vertices present in the graph or tree: ");
    scanf("%d", &s);
    char a[s];
    char connected_nodes[s][s*5];

    for (int i = 0; i < s; i++) {
        printf("Enter the %d node: ", i + 1);
        scanf(" %c", &a[i]);

        printf("How many nodes are connected to %c: ", a[i]);
        scanf("%d", &d);

        printf("Enter the connected nodes orderly without spaces: ");
        for (int j = 0; j < d; j++) {
            scanf(" %c", &connected_nodes[i][j]);
        }
    }
    char ss[s];
    int y = 0;
    int t = 0;
    dd(s, a, connected_nodes, ss, y, t);

    return 0;
}


int indexx(char h, char a[], int s) {
    for (int i = 0; i < s; i++) {
        if (a[i] == h) {
            return i;
        }
    }
    // Return -1 if h is not found in a[]
    return -1;
}

void dd(int s, char a[], char connected_nodes[][s*5], char ss[], int y, int t) {
    int g = 0;
    for (int u = 0; u < s; u++) {
        /*printf("%c\n", a[u]);*/
        for (int i = 0; i < t; i++) {
            if (a[u] == ss[i]) {
                g = 1;
            }
        }
        if (g == 0) {
            ss[t] = a[u]; // Remember to append the t value
            y = indexx(a[u], a, s);
            int p = strlen(connected_nodes[y]);
            char o[p];
            strcpy(o, connected_nodes[y]);
            t++;
            dd(p, o, connected_nodes, ss, y, t);
        }

    }
}
