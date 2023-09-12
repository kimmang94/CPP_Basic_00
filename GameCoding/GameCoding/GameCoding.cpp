#include <iostream>
using namespace std;

int main()
{
	// 별찍기

	int n = 0;
	cout << "몇개 몇줄의 별을 찍을까요?" << endl << "입력 : ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << '*' ;
		}
		cout << endl;
	}
	 //구구단

	cout << "몇단을 출력할까요? " << endl << "단 입력 : ";
	cin >> n;


	for (int i = n; i <= n; i++)
	{
		cout << i << " 단" << endl;
		for (int j = 1; j <= 9; j++)
		{
			cout << i << "*" << j << "=" << i * j << endl;
		}
	}


	// 간단한 전투
	int playerHp = 100;
	int monsterHp = 100;

	int playerDamage = 10;
	int monsterDamage = 5;

	while (true)
	{
		cout << "PlayerHp : " << playerHp << endl;
		cout << "MonsyerHp : " << monsterHp << endl;

		playerHp -= monsterDamage;
		monsterHp -= playerDamage;

		if (playerHp <= 0 || monsterHp <= 0)
		{
			cout << "PlayerHp : " << playerHp << endl;
			cout << "MonsyerHp : " << monsterHp << endl;

			cout << "몬스터 처치" << endl;
			break;
		}
	}

	// 가위 바위 보
	const int ROCK = 0;
	const int SCISSORS = 1;
	const int PAPER = 2;

	int playerChoice = 0;

	srand(time(0));
	int compuyerChoice = rand() % 3;

	cout << "0 : 바위 1 : 가위 2 : 보" << endl << "나의 선택 >";
	cin >> playerChoice;

	if (playerChoice == ROCK)
	{
		switch (compuyerChoice)
		{
			case ROCK:
				cout << "나의선택 : 바위 컴퓨터의 선택 : 바위 비겼습니다" << endl;
				break;
			case SCISSORS:
				cout << "나의선택 : 바위 컴퓨터의 선택 : 가위 이겼습니다" << endl;
				break;
			case PAPER:
				cout << "나의선택 : 바위 컴퓨터의 선택 : 보 졌습니다" << endl;
				break;
			default:
				break;
		}
		
	}
	else if (playerChoice == SCISSORS)
	{
		switch (compuyerChoice)
		{
			case ROCK:
				cout << "나의선택 : 가위 컴퓨터의 선택 : 바위 졌습니다" << endl;
				break;
			case SCISSORS:
				cout << "나의선택 : 가위 컴퓨터의 선택 : 가위 비겼습니다" << endl;
				break;
			case PAPER:
				cout << "나의선택 : 가위 컴퓨터의 선택 : 보 이겼습니다" << endl;
				break;
			default:
				break;
		}
	}
	else if (playerChoice == PAPER)
	{
		switch (compuyerChoice)
		{
			case ROCK:
				cout << "나의선택 : 보 컴퓨터의 선택 : 바위 이겼습니다" << endl;
				break;
			case SCISSORS:
				cout << "나의선택 : 보 컴퓨터의 선택 : 가위 졌습니다" << endl;
				break;
			case PAPER:
				cout << "나의선택 : 보 컴퓨터의 선택 : 보 비겼습니다" << endl;
				break;
			default:
				break;
		}
	}
	else
	{
		cout << "1 : 바위 2 : 가위 3 : 보 를 선택해 주세요" << endl;
	}




}

