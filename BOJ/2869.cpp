#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int a, b, v;
	cin >> a;
	cin >> b;
	cin >> v;

	int dist = v - a;
	int speed = a - b;
	int answer = dist / speed;

	// 남은 거리가 있을 경우 하루 더 더해준다.
	if (dist % speed != 0)
		answer += 1;

	cout << answer + 1;
}