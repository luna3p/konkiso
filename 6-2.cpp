#include <stdio.h>

int main(void)
{
	float num1, num2, num3;
	/*入力した値をnum1に代入する。*/
	printf("xの値の長さを入力\n");
	scanf_s("%f", &num1);
	/*入力した値をnum2に代入する。*/
	printf("yの値の長さを入力\n");
	scanf_s("%f", &num2);
	/*入力した値をnum3に代入する。*/
	printf("zの値の長さを入力\n");
	scanf_s("%f", &num3);
	
	printf("三辺の長さがx,y,zの直方体の体積は%0.1fです。\n", num1*num2*num3);//代入したnum1,num2,num3を体積の式に当てはめて計算する。
	printf("また直方体の表面積は%0.1fです。\n", (num1*num2+num2*num3+num3*num1)*2);//代入したnum1,num2,num3を表面積の式に当てはめて計算する。
	return 0;
}