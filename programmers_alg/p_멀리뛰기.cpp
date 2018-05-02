#include<iostream>
#include<vector>
using namespace std;

int jumpCase(int n)
{
	int answer = 0;

	if (n == 1)
		answer = 1;
	else if (n == 2)
		answer = 2;
	else
		answer = jumpCase(n - 1) + jumpCase(n - 2);

	return answer;
}
int main()
{
	int test = 4;

	//아래는 테스트로 출력해 보기 위한 코드입니다.
	cout << jumpCase(test);
}
