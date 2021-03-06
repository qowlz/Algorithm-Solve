#include <iostream>
#define MAX 9
using namespace std;

int n, m;
int arr[MAX] = {};

void dfs(int cnt)
{
	// 경로의 개수가 조건에 만족할 만큼 모였으면 지금까지 도달한 경로들을 프린트 해준다.
	if (cnt == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << arr[i] << ' ';
		}
		cout << '\n';
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			arr[cnt] = i;
			dfs(cnt + 1);
		}
	}
}

int main() {
	cin >> n >> m;
	dfs(0);

	return 0;
}