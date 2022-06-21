#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void gotoxy(int x, int y);

void bossScreen() {
	gotoxy(30, 0);
	printf("□□□□□□□□□□□□□□□□□□□□□□□□□");
	gotoxy(30, 1);
	printf("□                   보스전                     □");
	gotoxy(30, 2);
	printf("□□□□□□□□□□□□□□□□□□□□□□□□□");
	gotoxy(3, 15);
	printf("┌──────────┐");
	gotoxy(3, 16);
	printf("│          │");
	gotoxy(3, 17);
	printf("│ 광주공고 │");
	gotoxy(3, 18);
	printf("│          │");
	gotoxy(3, 19);
	printf("│ 체력 :   │");
	gotoxy(3, 20);
	printf("│ 5000     │");
	gotoxy(3, 21);
	printf("│          │");
	gotoxy(3, 22);
	printf("│ 공격력 : │");
	gotoxy(3, 23);
	printf("│ 500      │");
	gotoxy(3, 24);
	printf("│          │");
	gotoxy(3, 25);
	printf("└──────────┘");

	gotoxy(20, 12);
	printf("□□□□□□□□□□□");
	gotoxy(20, 13);
	printf("□                  □");
	gotoxy(20, 14);
	printf("□ 대덕,부산 소마고 □");
	gotoxy(20, 15);
	printf("□                  □");
	gotoxy(20, 16);
	printf("□                  □");
	gotoxy(20, 17);
	printf("□   체력 :         □");
	gotoxy(20, 18);
	printf("□                  □");
	gotoxy(20, 19);
	printf("□                  □");
	gotoxy(20, 20);
	printf("□   공격력 :       □");
	gotoxy(20, 21);
	printf("□                  □");
	gotoxy(20, 22);
	printf("□                  □");
	gotoxy(20, 23);
	printf("□                  □");
	gotoxy(20, 24);
	printf("□                  □");
	gotoxy(20, 25);
	printf("□□□□□□□□□□□");

	
	gotoxy(45, 8);
	printf("◈◈◈◈◈◈◈◈◈◈◈◈◈◈");
	gotoxy(45, 9);
	printf("◈                        ◈");
	gotoxy(45, 10);
	printf("◈                        ◈");
	gotoxy(45, 11);
	printf("◈       서울대학교       ◈");
	gotoxy(45, 12);
	printf("◈                        ◈");
	gotoxy(45, 13);
	printf("◈                        ◈");
	gotoxy(45, 14);
	printf("◈   체력 :               ◈");
	gotoxy(45, 15);
	printf("◈                        ◈");
	gotoxy(45, 16);
	printf("◈                        ◈");
	gotoxy(45, 17);
	printf("◈   공격력 :             ◈");
	gotoxy(45, 18);
	printf("◈                        ◈");
	gotoxy(45, 19);
	printf("◈                        ◈");
	gotoxy(45, 20);
	printf("◈                        ◈");
	gotoxy(45, 21);
	printf("◈                        ◈");
	gotoxy(45, 22);
	printf("◈                        ◈");
	gotoxy(45, 23);
	printf("◈                        ◈");
	gotoxy(45, 24);
	printf("◈                        ◈");
	gotoxy(45, 25);
	printf("◈◈◈◈◈◈◈◈◈◈◈◈◈◈");

	gotoxy(75, 5);
	printf("★★★★★★★★★★★★★★★★★★★★");
	gotoxy(75, 6);
	printf("★☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆★");
	gotoxy(75, 7);
	printf("★☆            『최종전』          ☆★");
	gotoxy(75, 8);
	printf("★☆                                ☆★");
	gotoxy(75, 9);
	printf("★☆           하버드 대학교        ☆★");
	gotoxy(75, 10);
	printf("★☆                                ☆★");
	gotoxy(75, 11);
	printf("★☆                                ☆★");
	gotoxy(75, 12);
	printf("★☆   체력 :                       ☆★");
	gotoxy(75, 13);
	printf("★☆                                ☆★");
	gotoxy(75, 14);
	printf("★☆                                ☆★");
	gotoxy(75, 15);
	printf("★☆   공격력 :                     ☆★");
	gotoxy(75, 16);
	printf("★☆                                ☆★");
	gotoxy(75, 17);
	printf("★☆                                ☆★");
	gotoxy(75, 18);
	printf("★☆                                ☆★");
	gotoxy(75, 19);
	printf("★☆                                ☆★");
	gotoxy(75, 20);
	printf("★☆                                ☆★");
	gotoxy(75, 21);
	printf("★☆                                ☆★");
	gotoxy(75, 22);
	printf("★☆                                ☆★");
	gotoxy(75, 23);
	printf("★☆                                ☆★");
	gotoxy(75, 24);
	printf("★☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆★");
	gotoxy(75, 25);
	printf("★★★★★★★★★★★★★★★★★★★★");

	gotoxy(75, 5);
	printf("☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆");
	gotoxy(75, 6);
	printf("☆★★★★★★★★★★★★★★★★★★☆");
	gotoxy(75, 7);
	printf("☆★            『최종전』          ★☆");
	gotoxy(75, 8);
	printf("☆★                                ★☆");
	gotoxy(75, 9);
	printf("☆★           하버드 대학교        ★☆");
	gotoxy(75, 10);
	printf("☆★                                ★☆");
	gotoxy(75, 11);
	printf("☆★                                ★☆");
	gotoxy(75, 12);
	printf("☆★   체력 :                       ★☆");
	gotoxy(75, 13);
	printf("☆★                                ★☆");
	gotoxy(75, 14);
	printf("☆★                                ★☆");
	gotoxy(75, 15);
	printf("☆★   공격력 :                     ★☆");
	gotoxy(75, 16);
	printf("☆★                                ★☆");
	gotoxy(75, 17);
	printf("☆★                                ★☆");
	gotoxy(75, 18);
	printf("☆★                                ★☆");
	gotoxy(75, 19);
	printf("☆★                                ★☆");
	gotoxy(75, 20);
	printf("☆★                                ★☆");
	gotoxy(75, 21);
	printf("☆★                                ★☆");
	gotoxy(75, 22);
	printf("☆★                                ★☆");
	gotoxy(75, 23);
	printf("☆★                                ★☆");
	gotoxy(75, 24);
	printf("☆★★★★★★★★★★★★★★★★★★☆");
	gotoxy(75, 25);
	printf("☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆");
}

void main() {
	bossScreen();
	int input;
	scanf("%d", &input);
}

void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
