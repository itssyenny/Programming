#include<stdio.h>
#include<string.h>
#define MAX_D 32769
int f[MAX_D][300], invited[MAX_D], count[MAX_D];

int main() {
    int v, e; scanf("%d%d", &v, &e);
 
    for(int i = 0; i < e; i++) {
        int a, b; scanf("%d%d", &a, &b);
        f[a][count[a]++] = b;
        f[b][count[b]++] = a;
    }
    int x;
    while(scanf("%d", &x) != EOF) {
        invited[x] = 1;
 
        for(int j = 0; j < count[x]; j++) {
            invited[f[x][j]] = 1;
        }
    }
 
    for(int i = 0; i < v; i++) {
        if(!invited[i]) printf("%d\n", i);
    }
 
    return 0;
}