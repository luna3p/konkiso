#include <stdio.h>

int main(void)
{
	int num1, num2,num3;//�����̂ݕ\��
	printf("5������͂��Ă��������B\n");
	scanf_s("%d", &num1);
	num2 = num1 / 1000;//3���ȉ��������_�ȉ��ɂ���B
	printf("��2����%d�ł��B\n",num2);//�����_�ȉ���؂�̂Ăĕ\������B
	num3 = num1 - num2 * 1000;//12345-12000���v�Z����B
	printf("��3����%d�ł��B\n",num3);//��̌��ʂ�\������B
	return 0;
}
