#include <stdio.h>

//반환형과 매개변수가 있다면 각각의 의미를 서술하시오
void order(int* cal, int* coca, int* sunny, int* pocari, int* pocket);
//return 되는 값은 없다. order함수에서는 변수값만 바꾼다.
//매개변수 cal은 포인터로 주소값을 받아 order함수 내에서 쓰인다.

void main(void)
{
	int pocket = 3000;
	int coca = 700, sunny = 600, pocari = 800;
	int num;

	while (1)
	{
		printf("**현재금액 : %d**\n", pocket);
		printf("1. 코카콜라:700원\n");
		printf("2. 써니텐:600원\n");
		printf("3. 포카리스웨트:800원\n");
		printf("구매할 물건의 버튼을 입력하시오 ");
		scanf_s("%d", &num);

		order(&num, &coca, &sunny, &pocari, &pocket);

		printf("**현재금액 : %d**\n", pocket);

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