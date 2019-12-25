// 指针数组 类型名 *数组名[数组长度]
// 将若干字符串按字母顺序排序
#include <stdio.h>
#include <string.h>
int main()
{
    void sort(char *name[], int n);
    void print(char *name[], int n);
    char *name[]={"Follow", "Great", "FORTRAN", "Computer"};
    sort(name, 4);
    print(name, 4);
    return 0;
}

void print(char *name[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%s\n", name[i]);
    }
    
}

void sort(char *name[], int n)
{
    char *temp; int i, j, k;
    for (i = 0; i < n-1; i++)
    {
        k=i;
        for (j = i+1; j < n; j++)
        {
            if(strcmp(name[k], name[j])) k=j;
        }
        if(k!=i)
        {
            temp=(char *)name[i];
            name[i]=name[k];
            name[k]=temp;
        }
    }
    
}



