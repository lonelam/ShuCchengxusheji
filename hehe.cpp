
#include <bits/stdc++.h>
using namespace std;

int n; // ������������N
bool opr[10]; // ������һ��bool���鱣������n-1�����ţ�������true��ʾ�Ӻ�"+"����false��ʾ����"-"��
bool found = false; // ��ʾ�Ƿ��ҵ�һ��⣬���û�ҵ��Ļ���Ҫ��������"None"
// dfs��������������״̬��deep��ʾ�ݹ���ȣ�����ö�ٵ��ڼ���������ߵķ��ţ�sum��ʾ֮ǰ���ֱ��ʽ��ֵ��
// ���ö����ɺ�sum��ֵ�պ�Ϊ0����������鷽����������Ҫ�������Ĺ�������opr���鱣��״̬��
void dfs(int deep, int sum) {
    // ����������������ʽ�����϶�Ӧ��ֵ��
    if (deep == n) {
        if (sum == 0) {
            found = true;
            // �������潫���շ��������������ʽ������Ŀ������
            // ���ǵû���Ŷ��
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
    // �������������������ȷ���߼���
    opr[deep] = true;
    dfs(   deep+1, sum +  deep+1);
    opr[deep] = false ;
    dfs(  deep+1 , sum - deep -1 );
}

// main�������Լ����Ŷ������~
int main() {
    scanf("%d",&n);
    dfs(1,1);
    if(!found)
        printf("None\n");
    return 0;
}
