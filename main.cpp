#include <iostream>

using namespace std;

int main()
{
	/*
	int Number1 = 65;
	char Number2 = 'A';
	float Number3 = 3.0f;
	int Number[10] = {0,};

	cout << Number1 + Number2 << endl;
	cout << Number1 - Number2 << endl;
	cout << Number1 / Number2 << endl;
	cout << Number1 * Number2 << endl;


	int Korean[22] = {0,};
	int Mathmatics[22] = {0,};
	int English[22] = {0,};

	int Total[22] = {0,};
	float Average[22]={0,};

	for (int i = 0; i < 22; i++)
	{
		Total[i] = Korean[i] + Mathmatics[i] + English[i];
		Average[i] = (float)Total[i] / 3;
	}


	bool Result = true;

	if (Result)
	{
		cout << "공격" << endl;
	}
	else
	{
		cout << "대기" << endl;
	}

	int Screen[8][8] =
	{
		{1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1}
	};
	int PlayerX = 1;
	int PlayerY = 1;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{

			if (Screen[j][i] == 1)
			{
				cout << "*";
			}
			if (Screen[j][i] == 0)
			{
				cout << " ";
			}
			cout << endl;
		}
	}
	*/
	//점
	/*
	int LineCount = 0;
	cin >> LineCount;
	/*
	for (int Line = 1; Line <= LineCount; Line++)
	{
		for (int Blank = 1; Blank <= LineCount - Line; Blank++)
		{
			cout << " ";
		}
		for (int Count = 1; Count <= Line; Count++)
		{
			cout << "*";
		}

		cout << endl;
	}


	for (int Line = 1; Line <= LineCount; Line++)
	{
		for (int Blank = 1; Blank <= LineCount - Line; Blank++) {
			cout << " ";
		}
		for (int Count = 1; Count <= (2 * Line) - 1; Count++) {
			cout << "*";
		}
		cout << endl;
	}
	*/
	int Map[10][10] =
	{
		{1,1,1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1}
	};

	int PlayerX = 1;
	int PlayerY = 1;
	char Key = 0;

	for (;;) {
		cin >> Key; //wasd
		if (Key == 'w')
		{
			PlayerY--;
		}
		else if (Key == 's')
		{
			PlayerY++;
		}
		else if (Key == 'a')
		{
			PlayerX--;
		}
		else if (Key == 'd')
		{
			PlayerX++;
		}
		system("cls");
		for (int Y = 0; Y < 10; Y++)
		{
			for (int X = 0; X < 10; X++)
			{
				if (PlayerX == X && PlayerY == Y)
				{
					cout << "P";
				}
				else if (Map[Y][X] == 0)
				{
					cout << " ";
				}
				else if (Map[Y][X] == 1)
				{
					cout << "*";
				}
			}
			cout << endl;
		}
	}
	/*
	//GameLoop
	for (;;) //Frame, 60FPS
	{
		Input();
		Process();
		Render();
	}
	*/
	return 0;
}