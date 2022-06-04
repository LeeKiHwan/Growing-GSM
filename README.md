#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gamecom(int student) {
	switch (student)
	{
	case 0:
		printf("인원이 부족합니다.");
		break;
	case 1:
		student = rand() % 100 + 1;
		if (student <= 20) {
			printf("success");
		}
		else
			printf("fail");
		break;
	case 2:
		student = rand() % 100 + 1;
		if (student <= 40) {
			printf("success");
		}
		else
			printf("fail");
		break;
	case 3:
		student = rand() % 100 + 1;
		if (student <= 66) {
			printf("success");
		}
		else
			printf("fail");
		break;

	default:
		break;
	}
}

int securitycom(int student) {
	switch (student)
	{
	case 0:
		printf("인원이 부족합니다.");
		break;
	case 1:
		student = rand() % 100 + 1;
		if (student <= 25) {
			printf("success");
		}
		else
			printf("fail");
		break;
	case 2:
		student = rand() % 100 + 1;
		if (student <= 55) {
			printf("success");
		}
		else
			printf("fail");
		break;
	case 3:
		student = rand() % 100 + 1;
		if (student <= 80) {
			printf("success");
		}
		else
			printf("fail");
		break;

	default:
		break;
	}
}

int itcom(int student) {
	switch (student)
	{
	case 0:
		printf("인원이 부족합니다.");
		break;
	case 1:
		student = rand() % 100 + 1;
		if (student <= 33) {
			printf("success");
		}
		else
			printf("fail");
		break;
	case 2:
		student = rand() % 100 + 1;
		if (student <= 66) {
			printf("success");
		}
		else
			printf("fail");
		break;
	case 3:
		student = rand() % 100 + 1;
		if (student <= 99) {
			printf("success");
		}
		else
			printf("fail");
		break;

	default:
		break;
	}
}

int main() {
	srand((unsigned)time(NULL));

	int game, security, it, choose;

	printf("겜개 기능대회 인원 >> ");
	scanf("%d", &game);
	printf("보안 기능대회 인원>> ");
	scanf("%d", &security);
	printf("IT 기능대회 인원 >> ");
	scanf("%d", &it);

	printf("어느 대회에 나가시겠습니까? (겜개 : 1  보안 : 2  IT : 3)\n>>");
	scanf("%d", &choose);

	switch (choose)
	{
	case 1:
		gamecom(game);
		break;
	case 2:
		securitycom(security);
		break;
	case 3:
		itcom(it);
		break;
	default:
		break;
	}

}
