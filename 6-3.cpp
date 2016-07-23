#include <stdio.h>
int main(void)
{
	float num1, num2, num3, num4;//浮動小数点数も表示する。
	
	printf("第1番目の抵抗値を入力してください。	\n");
	scanf_s("%f", &num1);//floatなので%dではなく、%fを使う。
	
	printf("第2番目の抵抗値を入力してください。\n");
	scanf_s("%f",&num2);//7行目と同じ。
	num3=num1 + num2;
	num4=num1*num2;
	/*%.の後に数を入力することで、少なくとも小数点以下その数の値まで表示する。*/
	printf("2つの抵抗値の直列接続の合成抵抗値は%.2f(Ω)です。\n",num3);
	printf("2つの抵抗値の並列接続の合成抵抗値は%.2f(Ω)です。\n", num4/num3);
	return 0;
}