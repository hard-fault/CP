#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

#define maxn 100000 + 5

pair<int, int> e[maxn + maxn];
int Tn, i, n, m, a[maxn], l, r, lft, en, balance;
bool okay;

int main (int argc, char * const argv[]) {
	scanf("%d", &Tn);
	while (Tn--) {

		scanf("%d %d", &n, &m);// n is size of the permutation , m is number of rules

		for(i = 1; i <= n; i++)
            scanf("%d", &a[i]);//a has the requiered Permutation
		en = 0;

		for(i = 1; i <= m; i++) {
			scanf("%d %d", &l, &r);
			e[++en] = make_pair(l, 1);
			e[++en] = make_pair(r + 1, -1);
		}

		sort(e + 1, e + en + 1);
		balance = 0;
		for(i = 1; i <= en; i++) {
			balance += e[i].second;
			if (balance == 1 && e[i].second == 1) lft =  e[i].first;
			if (balance == 0) sort(a + lft, a + e[i].first);
		}

		okay = true;
		for(i = 1; i <= n; i++) if (a[i] != i) okay = false;
		if (okay) puts("Possible"); else puts("Impossible");
	}
    return 0;
}
