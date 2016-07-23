#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char str; 

	printf("小文字を入力してください。\n"); //小文字を入力する。
	scanf_s("%c", &str);
	str = toupper(str);//演算子を代入する。
	printf("大文字は%cです。", str);//大文字を出力。

	return 0;
}