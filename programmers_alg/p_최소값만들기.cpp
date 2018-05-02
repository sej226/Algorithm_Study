#include<iostream>
#include<vector>
#include<algorithm>
#include <functional> // greater �������
using namespace std;

int getMinSum(vector<int> A, vector<int> B)
{
	int answer = 0;
	int len = A.size();

	sort(A.begin(), A.end());
	sort(B.begin(), B.end(), greater<int>());

	for (int i = 0; i < len; i++) {
		answer += (A[i] * B[i]);
	}

	return answer;
}
int main()
{
	vector<int> tA{ 1,2 }, tB{ 3,4 };

	//�Ʒ��� �׽�Ʈ ����� ���� �ڵ��Դϴ�.
	cout << getMinSum(tA, tB);
}