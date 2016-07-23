#include <stdio.h>

int main(void)
{
	int num1, num2,num3;//整数のみ表示
	printf("5桁を入力してください。\n");
	scanf_s("%d", &num1);
	num2 = num1 / 1000;//3桁以下を小数点以下にする。
	printf("上2桁は%dです。\n",num2);//少数点以下を切り捨てて表示する。
	num3 = num1 - num2 * 1000;//12345-12000を計算する。
	printf("下3桁は%dです。\n",num3);//上の結果を表示する。
	return 0;
}
