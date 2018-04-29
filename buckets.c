#include<stdio.h>

int main () {
	int n,m,r; scanf("%d%d%d", &n,&m,&r);
	int w;
	if(r == 0) {
		while(scanf("%d", &w) != EOF) {
			if(w <= n) n-= w;
			else if(w <= m) m -= w;
			printf("%d %d\n", n, m);
		}
	} else {
		while(scanf("%d", &w) != EOF) {
			if(w > n && w > m);
			else if(w <= n && w > m) n -= w;
			else if(w <= m && w > n) m -= w;
			else if(n <= m) n -= w;
			else if(n >= m) m -= w;
			printf("%d %d\n", n, m);
		}
	}
	return 0;
}