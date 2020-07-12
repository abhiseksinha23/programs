#include <bits/stdc++.h>

using namespace std;

vector<int> p, rk;

int getp(int v) {
	if (v == p[v]) return v;
	return p[v] = getp(p[v]);
}

long long res;

long long get(int cnt) {
	return cnt * 1ll * (cnt - 1) / 2;
}

void merge(int u, int v) {
	u = getp(u);
	v = getp(v);
	
	if (rk[u] < rk[v]) swap(u, v);
	
	res -= get(rk[u]);
	res -= get(rk[v]);
	
	rk[u] += rk[v];
	
	res += get(rk[u]);
	
	p[v] = u;
}

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int n, m;
	cin >> n >> m;
	
	res = 0;
	p = rk = vector<int>(n, 1);
	iota(p.begin(), p.end(), 0);
	
	vector<pair<int, pair<int, int>>> e(n - 1);
	for (int i = 0; i < n - 1; ++i) {
		cin >> e[i].second.first >> e[i].second.second >> e[i].first;
		--e[i].second.first;
		--e[i].second.second;
	}
	
	vector<pair<int, int>> q(m);
	vector<long long> ans(m);
	for (int i = 0; i < m; ++i) {
		cin >> q[i].first;
		q[i].second = i;
	}
	
	sort(e.begin(), e.end());
	sort(q.begin(), q.end());
	
	int pos = 0;
	for (int i = 0; i < m; ++i) {
		while (pos < n - 1 && e[pos].first <= q[i].first) {
			int u = e[pos].second.first;
			int v = e[pos].second.second;
			merge(u, v);
			++pos;
		}
		ans[q[i].second] = res;
	}
	
	for (int i = 0; i < m; ++i) {
		cout << ans[i] << " ";
	}
	cout << endl;
	
	
