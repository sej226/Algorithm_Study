#include<iostream>
using namespace std;
int expressions(int testCase)
{
	int answer = 0;
	int sum = 0;

	for (int i = 1; i <= testCase; i++) {
		for (int j = i; j <= testCase; j++) {
			sum += j;
			if (sum == testCase)
				answer++;
		}
		sum = 0;
	}


	return answer;
}

int main()
{
	int testNo = 15;
	int testAnswer = expressions(testNo);
	// �Ʒ��� �׽�Ʈ�� ����� ���� ���� �ڵ��Դϴ�.
	cout << testAnswer;
}
