/**
 * @file
 * シェルソートはほぼ整列されたデータに対しては高速に動作するという
 * 挿入ソートの特徴を活かす高速なアルゴリズム。一定の間隔gだけ離れた
 * 要素のみを対象とした挿入ソートを繰り返す。
 * gの列として例えば、{4, 3, 2, 1}として1ずつ変えていく。
 * g = 1 のときに間隔が1の挿入ソート、つまり通常の挿入ソートとなる。
 * g = G_{i}の 選び方は多くの研究がされており、g_{n+1} = 3g_{n}+1の
 * 数列を用いると、計算量がO(N^{1.25})となることが予測されている。
 */

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;


long long cnt;
int l;
int A[1000000];
int n;
std::vector<int> G;

//間隔gを指定した挿入ソート
void insertionSort(int A[], int n, int g) {
	for (int i = g; i < n; i++) {
		int v = A[i];
		int j = i - g;
		while (j >= 0 && A[j] > v) {
			A[j + g] = A[j];
			j -= g;
			cnt++;
		}
		A[j + g] = v;
	}
}

void shellSort(int A[], int n) {
	// 数列G = {1, 4, 13, 40, 121, 364, 1093, ...}を生成
	for (int h = 1; ; ) {
		if (h > n) {
			break;
		}
		G.push_back(h);
		h = 3*h + 1;
	}

	for (int i = G.size() - 1; i >= 0; i--) { //逆順にG[i] = gを指定
		insertionSort(A, n, G[i]);
	}
}

int main() {
	cin >> n;
	// より速い入力scanf関数を使用
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
	cnt = 0;

	shellSort(A, n);

	cout << G.size() << endl;

	for (int i = G.size() - 1;  i >= 0; i--) {
		printf("%d", G[i]);
		if (i) {
			printf(" ");
		}
	}
	printf("\n");
	printf("%d\n", int(cnt));
	for (int i = 0; i < n; i++) {
		printf("%d\n", A[i]);
	}

	return 0;
}








