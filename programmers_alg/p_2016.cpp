#include<iostream>
#include<string>
using namespace std;

string getDayName(int a, int b)
{
	string answer = "";
	string day[7] = { "SUM", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	int lastday[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int nowMonth = 0;

	for (int i = 0; i < a - 1; i++) {
		nowMonth += lastday[i];
	}
	nowMonth += (b - 1);

	nowMonth += 5;
	answer = day[nowMonth % 7];

	return answer;
}
int main()
{
	int a = 5, b = 24;

	//아래는 테스트 출력을 위한 코드입니다.
	cout << getDayName(a, b);
}
