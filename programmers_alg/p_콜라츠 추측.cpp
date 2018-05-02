#include<vector>
#include<iostream>
using namespace std;

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

vector<int> gcdlcm(int a, int b)
{
	vector<int> answer;

	if (a < b)
		swap(a, b);

	if (b == 0)
		answer.push_back(a);
	else
		gcdlcm(b, a%b);

	return answer;
}

int main()
{
	int a = 3, b = 12;
	vector<int> testAnswer = gcdlcm(a, b);

	cout << testAnswer[0] << " " << testAnswer[1];
}
