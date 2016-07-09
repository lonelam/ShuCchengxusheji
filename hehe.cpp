
#include <bits/stdc++.h>
using namespace std;

int n; // 保存读入的整数N
bool opr[10]; // 可以用一个bool数组保存所有n-1个符号，我们用true表示加号"+"，用false表示减号"-"。
bool found = false; // 表示是否找到一组解，如果没找到的话需要在最后输出"None"
// dfs函数，保存两个状态：deep表示递归深度，就是枚举到第几个数字左边的符号；sum表示之前部分表达式的值。
// 如果枚举完成后sum的值刚好为0，则输出这组方案。我们需要在搜索的过程中用opr数组保存状态。
void dfs(int deep, int sum) {
    // 请在下面的条件表达式中填上对应的值。
    if (deep == n) {
        if (sum == 0) {
            found = true;
            // 请在下面将最终方案输出，方案格式参照题目描述。
            // 最后记得换行哦。
            for(int i=1;i<n;i++)
            {
                printf("%d",i);
                if(opr[i])
                {
                    printf("+");

                }
                else
                {
                    printf("-");
                }
            }
            printf("%d=0\n",n);

        }
        return ;
    }
    // 请在下面的语句中填出正确的逻辑。
    opr[deep] = true;
    dfs(   deep+1, sum +  deep+1);
    opr[deep] = false ;
    dfs(  deep+1 , sum - deep -1 );
}

// main函数请自己完成哦，加油~
int main() {
    scanf("%d",&n);
    dfs(1,1);
    if(!found)
        printf("None\n");
    return 0;
}
