#include <stdio.h>

int main(void)
{
	float num1, num2;
	/*底辺の値をnum1に代入する。*/
	printf("底辺の値を入力してください。\n");
	scanf_s("%f", &num1);
	/*高さの値をnum2に代入する。*/
	printf("高さの値を入力してください。\n");
	scanf_s("%f", &num2);
	/*代入したnum1とnum2で三角形の面積を出す。
	また%.の後に数字を入力することで、少数点以下でその数字分表示される。*/
	printf("三角形の面積は%.1fです。\n", num1*num2 / 2);
	return 0;
}