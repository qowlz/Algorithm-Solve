#include <iostream>
#define MAX 9
using namespace std;

int n, m;
int arr[MAX] = {};

void dfs(int cnt)
{
	// ����� ������ ���ǿ� ������ ��ŭ ������ ���ݱ��� ������ ��ε��� ����Ʈ ���ش�.
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