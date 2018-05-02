#include<iostream>
#include<vector>
using namespace std;

int hopscotch(vector<vector<int> > board)
{
	int answer = 0;
	int len = board.size();

	for (int i = 1; i < len; i++) {
		for (int j = 0; j < 4; j++) {
			for (int k = 0; k < 4; k++) {
				if (j != k && answer < board[i - 1][k])
					answer = board[i - 1][k];
			}
			board[i][j] += answer;
			answer = 0;
		}
	}

	for (int i = 0; i < 4; i++) {
		if (answer < board[len - 1][i])
			answer = board[len - 1][i];
	}

	return answer;
}

int main()
{
	vector<vector<int> > test{ { 1,2,3,5 },{ 5,6,7,8 },{ 4,3,2,1 } };
	//아래는 테스트로 출력해 보기 위한 코드입니다.
	cout << hopscotch(test);
}