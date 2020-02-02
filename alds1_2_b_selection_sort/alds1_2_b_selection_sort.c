/**
 * @file
 * 選択ソートは各計算ステップで１つの最小値を選択していく直感的なアルゴリズム
 * 各計算ステップにおいて、配列は「ソート済みの部分列」と「未ソートの部分列」
 * とに分けられる。
 * 以下の処理をN-1回繰り返す
 * 1. 未ソートの部分から最小の要素の位置minjを特定する。
 * 2. minjの位置にある要素と未ソートの部分の戦闘要素を交換する。
 * | 5 4 8 7 9 3 1 --> | 1 4 8 7 9 3 5
 * 1 | 4 8 7 9 3 5 --> 1 | 3 8 7 9 4 5
 * 1 3 | 8 7 9 4 5 --> 1 3 | 4 7 9 8 5
 * 1 3 4 | 7 9 8 5 --> 1 3 4 | 5 9 8 7
 * 1 3 4 5 | 9 8 7 --> 1 3 4 5 | 7 8 9
 * 1 3 4 5 7 | 8 9
 * 1 3 4 5 7 8 9 |
 * つまり選択ソートは計算量のオーダーがO(N^2)となるアルゴリズム
 */

#include <stdio.h>

/**
 * @fn 
 * @param A[N] サイズがNの整数型配列
 * @param i 未ソートの部分の戦闘を指すループ変数で、配列の先行から末尾に
 * むかって移動する
 * @param minj 各ループの処理でi番目からN-1番目までの要素で最小のものの位置
 * @param j 未ソートの部分から最小値の位置(minj)を探すためのループ変数
 * @brief 0オリジン
 */
int selectionSort(int A[], int N) {
	int i, j, t, sw = 0, minj;
	for (i = 0; i < N -1; i++) {
		minj = i;
		for (j = i; j < N; j++) {
			if (A[j] < A[minj]) {
				minj = j;
			}
		}
		t = A[i]; A[i] = A[minj]; A[minj] = t;
		if (i != minj) {
			sw++;
		}
	}
	return sw;
}

int main() {
	int A[100], N, i, sw;

	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}

	sw = selectionSort(A, N);

	for (i = 0; i < N; i++) {
		if (i > 0) {
			printf(" ");
		}
		printf("%d", A[i]);
	}
	printf("\n");
	printf("%d\n", sw);

	return 0;
}

