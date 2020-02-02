#include <stdio.h>
#include <iostream>
/**
 * @file alds1_1_a_insertion_sort.cpp
 * 挿入ソートでは各計算ステップのいて、配列は「ソート済みのぶ分裂」
 * と「未ソートのぶ分裂」の2つの部分列に分ける
 * 挿入ソートは安定なソートアルゴリズム。
 * 計算量はO(N^2)
 * ある程度整列されたデータに対しては高速に動作する特徴を持つ
 */

void trace(int A[], int N);
void insertionSort(int A[], int N);

int main() {
	int N, i, j;
	int A[100];

	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	trace(A, N);
	insertionSort(A, N);

	return 0;
}

// 配列の要素を順番に出力
void trace(int A[], int N) {
	int i;
	for (i = 0; i < N; i++) {                  
		if (i > 0) {
			std::cout << (" "); // りんセスする要素の間に1つの空白を出力する
		}
		std::cout << A[i];
	}
	std::cout << std::endl;
}

/**
 * @fn
 * 挿入ソート
 * @param A[N] サイズがNの整数型配列
 * @param i 未ソートの部分列の先頭を示すループ変数
 * @param v A[i]の値を一時的に保持しておくための変数
 * @param j ソート済みの部分列からvを挿入するための位置を探すループ変数
 */
void insertionSort(int A[], int N) {
	int j, i, v;
	for (i = 1; i < N; i++) {
		v = A[i];
		j = i - 1;
		while (j >= 0 && A[j] > v) {
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = v;
		trace(A, N);
	}
}




