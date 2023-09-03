//การเขียนโปรแกรมแบบทำซ้ำโดยการถามตอบ
#include <stdio.h>
#include <string.h>
void main()
{
    int w,h,area;
    char ny[1] = "y";
    while (strcmp(ny,"y") == 0) {
        printf("ป้อนความกว้าง ? ");
        scanf("%d",&w);
        printf("ป้อนความยาว? ");
        scanf("%d",&h);
        area = w * h;
        printf("พื้นที่  = %d",area);
        printf("\n\nต้องการคำนวณต่อหรือไม่ [y/n] ? ");
        scanf("%s",ny);
    }
}