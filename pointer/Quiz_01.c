#include <stdio.h>

//��ȯ���� �Ű������� �ִٸ� ������ �ǹ̸� �����Ͻÿ�
void order(int* cal, int* coca, int* sunny, int* pocari, int* pocket);
//return �Ǵ� ���� ����. order�Լ������� �������� �ٲ۴�.
//�Ű����� cal�� �����ͷ� �ּҰ��� �޾� order�Լ� ������ ���δ�.

void main(void)
{
	int pocket = 3000;
	int coca = 700, sunny = 600, pocari = 800;
	int num;

	while (1)
	{
		printf("**����ݾ� : %d**\n", pocket);
		printf("1. ��ī�ݶ�:700��\n");
		printf("2. �����:600��\n");
		printf("3. ��ī������Ʈ:800��\n");
		printf("������ ������ ��ư�� �Է��Ͻÿ� ");
		scanf_s("%d", &num);

		order(&num, &coca, &sunny, &pocari, &pocket);

		printf("**����ݾ� : %d**\n", pocket);

		if (pocket < sunny)
			break;
	}
}

void order(int* cal, int* coca, int* sunny, int* pocari, int* pocket)
{
	switch (*cal) {
	case 1: *pocket -= *coca;
		break;
	case 2: *pocket -= *sunny;
		break;
	case 3: *pocket -= *pocari;
		break;
	}
}