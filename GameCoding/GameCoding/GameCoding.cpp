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

	// 가위 바위 보
	int rock = 1;
	int scissors = 2;
	int paper = 3;

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

	int playerChoice = 0;
	int compuyerChoice = 1;
	cout << "1 : 바위 2 : 가위 3 : 보" << endl << "나의 선택 >";
	cin >> playerChoice;

	if (playerChoice == rock)
	{
		cout << "바위" << endl;

	}
	else if (playerChoice == scissors)
	{
		cout << "가위" << endl;
	}
	else if (playerChoice == paper)
	{
		cout << "보" << endl;
	}
	else
	{
		cout << "1 : 바위 2 : 가위 3 : 보 를 선택해 주세요" << endl;
	}




}

