#include <stdio.h>

int main(void)
{
	float num1, num2;
	/*��ӂ̒l��num1�ɑ������B*/
	printf("��ӂ̒l����͂��Ă��������B\n");
	scanf_s("%f", &num1);
	/*�����̒l��num2�ɑ������B*/
	printf("�����̒l����͂��Ă��������B\n");
	scanf_s("%f", &num2);
	/*�������num1��num2�ŎO�p�`�̖ʐς��o���B
	�܂�%.�̌�ɐ�������͂��邱�ƂŁA�����_�ȉ��ł��̐������\�������B*/
	printf("�O�p�`�̖ʐς�%.1f�ł��B\n", num1*num2 / 2);
	return 0;
}