#include <stdio.h>
#include <string.h>
void main()
{
    int n, i, a;
    char first[2], mid[2], last[2];
    scanf("%d", &n);
    char str[100];
    char ans[n][100];
    char chn[100];
    for (i = 0; i < n; i++)
    {
        gets(str);
        a = strlen(str);
        if (a <= 10)
        {
            strcpy(ans[i], str);
        }
        else
        {
            first[0] = ans[i][0];
            mid[0] = a - 2;
            last[0] = ans[i][a - 1];
            strcat(chn, first);
            strcat(chn, mid);
            strcat(chn, last);
            strcpy(ans[i], chn);
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%s", ans[i]);
    }
}