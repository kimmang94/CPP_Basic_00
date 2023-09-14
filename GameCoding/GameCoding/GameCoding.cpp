#include <iostream>
using namespace std;

// [리턴타입] [함수이름]()


//각에서 0도 초과 90도 미만은 예각, 90도는 직각, 
//90도 초과 180도 미만은 둔각 180도는 평각으로 분류합니다. 
//각 angle이 매개변수로 주어질 때 예각일 때 1, 직각일 때 2, 둔각일 때 3, 평각일 때 4를 return하도록 solution 함수를 완성해주세요.

int TestFunction(int n)
{
    int answer = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0 )
        {
            answer += i;
        }
    }
    cout << answer << endl;
    return answer;
}



int main()
{
	TestFunction(10);
}

