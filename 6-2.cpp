#include <stdio.h>

int main(void)
{
	float num1, num2, num3;
	/*���͂����l��num1�ɑ������B*/
	printf("x�̒l�̒��������\n");
	scanf_s("%f", &num1);
	/*���͂����l��num2�ɑ������B*/
	printf("y�̒l�̒��������\n");
	scanf_s("%f", &num2);
	/*���͂����l��num3�ɑ������B*/
	printf("z�̒l�̒��������\n");
	scanf_s("%f", &num3);
	
	printf("�O�ӂ̒�����x,y,z�̒����̂̑̐ς�%0.1f�ł��B\n", num1*num2*num3);//�������num1,num2,num3��̐ς̎��ɓ��Ă͂߂Čv�Z����B
	printf("�܂������̂̕\�ʐς�%0.1f�ł��B\n", (num1*num2+num2*num3+num3*num1)*2);//�������num1,num2,num3��\�ʐς̎��ɓ��Ă͂߂Čv�Z����B
	return 0;
}