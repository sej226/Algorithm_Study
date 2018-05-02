#include<cstdio>
#include<vector>
using namespace std;

int tiling(int n)
{
	vector<int> dp;

	dp.push_back(0);
	dp.push_back(1);
	dp.push_back(2);

	for (int i = 3; i <= n; i++) {
		dp.push_back((dp[i - 2] + dp[i - 1]) % 100000);
	}
	return dp[n];

}
int main()
{
	int t;

	scanf("%d", &t);
	printf("%d\n", tiling(t));
}
