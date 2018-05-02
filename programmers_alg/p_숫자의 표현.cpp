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
	// 아래는 테스트로 출력해 보기 위한 코드입니다.
	cout << testAnswer;
}
