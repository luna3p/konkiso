#include <stdio.h>
int main(void)
{
	float num1, num2, num3, num4;//���������_�����\������B
	
	printf("��1�Ԗڂ̒�R�l����͂��Ă��������B	\n");
	scanf_s("%f", &num1);//float�Ȃ̂�%d�ł͂Ȃ��A%f���g���B
	
	printf("��2�Ԗڂ̒�R�l����͂��Ă��������B\n");
	scanf_s("%f",&num2);//7�s�ڂƓ����B
	num3=num1 + num2;
	num4=num1*num2;
	/*%.�̌�ɐ�����͂��邱�ƂŁA���Ȃ��Ƃ������_�ȉ����̐��̒l�܂ŕ\������B*/
	printf("2�̒�R�l�̒���ڑ��̍�����R�l��%.2f(��)�ł��B\n",num3);
	printf("2�̒�R�l�̕���ڑ��̍�����R�l��%.2f(��)�ł��B\n", num4/num3);
	return 0;
}