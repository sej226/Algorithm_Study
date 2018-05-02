#include<iostream>
#include<vector>
#include<algorithm>
#include <functional> // greater 사용위해
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

	//아래는 테스트 출력을 위한 코드입니다.
	cout << getMinSum(tA, tB);
}