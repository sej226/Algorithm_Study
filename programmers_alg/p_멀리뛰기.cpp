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

	//�Ʒ��� �׽�Ʈ�� ����� ���� ���� �ڵ��Դϴ�.
	cout << jumpCase(test);
}
