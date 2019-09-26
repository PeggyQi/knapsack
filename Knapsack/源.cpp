
#include <iostream>
#include <Windows.h>
using namespace std;


int zeroOnePackOpt(int V, int C[], int size, int W[]) {
	// ��ֹ��Ч����
	if (V <= 0) {
		return 0;
	}

	int n = size;

	int dp[101] = { 0 };
	for (int i = 0; i < 101; ++i) {
		cout << dp[i] << " ";
	}

	// �����յ�����£���ֵΪ 0
	dp[0] = 0;

	for (int i = 0; i < n; ++i) {
		for (int j = V; j >= C[i]; --j) {
			dp[j] = max(dp[j], dp[j - C[i]] + W[i]);
		}
	}

	return dp[V];

}
int main() {
	int v = 100;
	int c[3] = { 101, 2, 3 };
	int w[3] = { 101, 2, 3 };
	int x = zeroOnePackOpt(v, c, 3, w);
	cout << "�����ܷŵ�����ֵΪ:" << x << endl;
	system("pause");

}