#include <stdio.h>
long long derangement(int n);
int main()
{
    int n;
    scanf("%d",&n);
    long long result = derangement(n);
    printf("%lld \n",result);
    return 0;
}
// 计算错排数量的函数
long long derangement(int n)
{
    if (n == 0) return 1; // D(0) = 1
    if (n == 1) return 0; // D(1) = 0
    // 使用动态规划计算错排数量
    long long D[n+1];
    D[0]=1;
    D[1]=0;
    for (int i=2;i<=n;i++)
	{
        D[i]=(i-1)*(D[i-1]+D[i-2]);
    }
    return D[n];
}