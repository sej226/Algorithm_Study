#include<iostream>
#include<vector>

using namespace std;

int toBinary(int n) {
	vector<int> v;
	int len = 0;
	int cnt = 0;

	while (n / 2 != 0)
	{
		v.push_back(n % 2);
		n = n / 2;
	}

	len = v.size() + 1;

	for (int i = 0; i<len - 1; i++) {
		if (v[i] == 1) {
			cnt++;
		}
	}
	v.clear();

	return cnt + 1;
}

int nextBigNumber(int n)
{
	int answer = 0;
	int num;

	num = toBinary(n);

	while (1) {
		n++;
		if (num == toBinary(n))
			break;
	}
	answer = n;

	return answer;
}
int main()
{
	int n = 78;

	//아래는 테스트 출력을 위한 코드입니다.
	cout << nextBigNumber(n);
}
