#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int gameStudent=3, securityStudent=0, itStudent=0, random;

void gotoxy(int x, int y);
void LoadingCom();

void gamecom() {
	random = rand() % 100 + 1;
	if (gameStudent == 0) {
		gotoxy(20, 18);
		printf("인원이 부족합니다.");
		return 0;
	}
	gotoxy(20, 18);
	printf("                    ");
	LoadingCom();
	gotoxy(20, 18);
	printf("                    ");
	gotoxy(20, 18);
	switch (gameStudent)
	{
	case 1:
		if (random <= 20) {
			printf("success");
		}
		else
			printf("fail");
		gameStudent -= 1;
		break;
	case 2:
		if (random <= 40) {
			printf("success");
		}
		else
			printf("fail");
		gameStudent -= 2;
		break;
	case 3:
		if (random <= 66) {
			printf("success");
		}
		else
			printf("fail");
		gameStudent -= 3;
		break;

	default:
		break;
	}
	featurescreen();
}

void securitycom() {
	random = rand() % 100 + 1;
	if (securityStudent == 0) {
		gotoxy(20, 18);
		printf("인원이 부족합니다.");
		return 0;
	}
	gotoxy(20, 18);
	printf("                    ");
	LoadingCom();
	gotoxy(20, 18);
	printf("                    ");
	gotoxy(20, 18);
	switch (securityStudent)
	{
	case 1:
		if (random <= 25) {
			printf("success");
		}
		else
			printf("fail");
		securityStudent -= 1;
		break;
	case 2:
		if (random <= 55) {
			printf("success");
		}
		else
			printf("fail");
		securityStudent -= 2;
		break;
	case 3:
		if (random <= 80) {
			printf("success");
		}
		else
			printf("fail");
		securityStudent -= 3;
		break;

	default:
		break;
	}
	featurescreen();
}

void itcom() {
	random = rand() % 100 + 1;
	if (itStudent == 0) {
		gotoxy(20, 18);
		printf("인원이 부족합니다.");
		return 0;
	}
	gotoxy(20, 18);
	printf("                    ");
	LoadingCom();
	gotoxy(20, 18);
	printf("                    ");
	gotoxy(20, 18);
	switch (itStudent)
	{
	case 1:
		if (random <= 33) {
			printf("success");
		}
		else
			printf("fail");
		itStudent -= 1;
		break;
	case 2:
		if (itStudent <= 66) {
			printf("success");
		}
		else
			printf("fail");
		itStudent -= 2;
		break;
	case 3:
		if (itStudent <= 99) {
			printf("success");
		}
		else
			printf("fail");
		itStudent -= 3;
		break;

	default:
		break;
	}
	featurescreen();
}

int featurescreen() {
	gotoxy(30, 0);
	printf("□□□□□□□□□□□□□□□□□□□□□□□□□");
	gotoxy(30, 1);
	printf("□                   기능대회                   □");
	gotoxy(30, 2);
	printf("□□□□□□□□□□□□□□□□□□□□□□□□□");
	gotoxy(0, 0);
	printf("내 기능반 학생 수");
	gotoxy(0, 1);
	printf("▶ 게임 개발 : %d", gameStudent);
	gotoxy(0, 2);
	printf("▶ 사이버 보안 : %d", securityStudent);
	gotoxy(0, 3);
	printf("▶ IT 네트워크 : %d", itStudent);
	gotoxy(20, 5);
	printf("□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□");
	gotoxy(20, 6);
	printf("□                                                                  □");
	gotoxy(20, 7);
	printf("□     게임 개발 대회 나가기( T )                                   □");
	gotoxy(20, 8);
	printf("□     (확률 : 1명 20%%, 2명 40%%, 3명 66%%)                           □");
	gotoxy(20, 9);
	printf("□                                                                  □");
	gotoxy(20, 10);
	printf("□     사이버 보안 대회 나가기 ( Y )                                □");
	gotoxy(20, 11);
	printf("□     (확률 : 1명 25%%, 2명 55%%, 3명 80%%)                           □");
	gotoxy(20, 12);
	printf("□                                                                  □");
	gotoxy(20, 13);
	printf("□     IT 네트워크(<--우웩) 대회 나가기 ( U )                       □");
	gotoxy(20, 14);
	printf("□     (확률 : 1명 33%%, 2명 66%%, 3명 99%%)                           □");
	gotoxy(20, 15);
	printf("□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□");
	gotoxy(20, 17);
}

int main() {
	srand((unsigned)time(NULL));

	featurescreen();

	char InputKey = "";
	do {
		
		InputKey = _getch();
		if (InputKey == 't') {
			gamecom(gameStudent);
		}
		else if (InputKey == 'y') {
			securitycom(securityStudent);
		}
		else if (InputKey == 'u') {
			itcom(itStudent);
		}
		
	} while (InputKey != 'q');
}

void LoadingCom() {
	gotoxy(20, 18);
	printf("기능 대회 진행중");

	Sleep(1000);
	printf(".");
	Sleep(1000);
	printf(".");
	Sleep(1000);
	printf(".");
}

void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
