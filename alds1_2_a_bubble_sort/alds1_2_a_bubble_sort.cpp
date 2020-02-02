/**
* @file bubble_sort.cpp
* バブルソートでは挿入ソートと同様に各計算ステップにおいて、
* 配列は「ソート済みの部分列」と「未ソートの部分列」とに
* 分けられる。
* 順序が逆になっている隣接要素がなくなるまで次の処理を繰り返す。
* 1. 配列の末尾から隣接する要素おw順番に比べていき、
* 大小関係が逆ならば交換する。
* | 5 3 2 4 1 
* | 5 3 2 1 4 --> | 5 3 1 2 4  --> | 5 1 3 2 4 --> | 1 5 3 2 4
* 1 | 5 3 2 4 --> 1 | 5 2 3 4  --> 1 | 2 5 3 4
* 1 2 | 5 3 4 --> 1 2 | 3 5 4
* 1 2 3 | 5 4 --> 1 2 3 | 4 5
* 1 2 3 4 5 |
*
* 外側のループが1回終了する毎にソート済みの要素が増えていく。
* 従って外ぐぁのループは最大でもN回実行され、内側のループ処理の
* 範囲は狭くなっていく。
*/


#include <iostream>

/**
 * @fn bubble_sort
 * @A[N] サイズがNの整数型配列
 * @param i 未ソート部分の先頭を指すループ変数で、配列の戦闘１から末尾
 * に向かって移動する。
 * @param j 未ソートの部分の隣り合う要素を比較するためのループ変数で、
 * Aの末尾であるN-1から開始し、i + 1まで減少する。
 */
int bubbleSort(int A[], int N) {
	int sw = 0;
	bool flag = 1;

	for (int i = 0; flag; i++) {
		flag = 0;
		for (int j = N - 1; j >= i + 1; j--) {
			if (A[j] < A[j - 1]) {
				// 隣接要素を交換する
				std::swap(A[j], A[j - 1]);
				flag = 1;
				sw++;
			}
		}
	}
	return sw;
}

int main() {
	int A[100], N, sw;
	std::cin >> N;
	for (int i = 0; i < N; i++) {
		std::cin >> A[i];
	}

	sw = bubbleSort(A, N);

	for (int i = 0; i < N; i++) {
		if (i) {
			std::cout << " ";
		}
		std::cout << A[i];
	}

	std::cout << std::endl;
	std::cout << sw << std::endl;

	return 0;
}

