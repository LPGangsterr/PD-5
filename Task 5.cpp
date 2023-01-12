#include <iostream>
#include <windows.h>
using namespace std;
void printMaze()
{
cout << "#######################################################################" << endl;
cout << "||..P..................................................     ......   ||" << endl;
cout << "||.. %%%%%%%%%%%%%%%          ...      %%%%%%%%%%%%  |%|..   %%%%    ||" << endl;
cout << "||..         |%|  |%|      |%|...      |%|       |%| |%|..    |%|    ||" << endl;
cout << "||..         |%|  |%|      |%|...      |%|       |%| |%|..    |%|    ||" << endl;
cout << "||..         %%%%%%%  . .  |%|...      %%%%%%%%%%%%%    ..   %%%%.   ||" << endl;
cout << "||..         |%|      . .  |%|...     ..............|%| ..       .   ||" << endl;
cout << "||..         %%%%%%%%%. .  |%|...     %%%%%%%%%%%   |%| ..   %%%%.   ||" << endl;
cout << "||..               |%|.               |%|......     |%| ..    |%|.   ||" << endl;
cout << "||..               |%|.               |%|......|%|      ..    |%|.   ||" << endl;
cout << "||..|%|  |%|%%|%|. |%|. |%|              ......|%|      ..|%| |%|.   ||" << endl;
cout << "||..|%|  |%|  |%|..     %%%%%%%%%%%%%%%  ......|%|       .|%|.       ||" << endl;
cout << "||..|%|  |%|  |%|..              ...|%|     %%%%%%      . |%|.       ||" << endl;
cout << "||..|%|           .              ...|%|             |%| ..|%|.       ||" << endl;
cout << "||..|%|  %%%%%%%%%%%%%%%         ...|%|%%%%%%%%     |%| ..|%|%%%%%   ||" << endl;
cout << "||...............................................   |%| ..........   ||" << endl;
cout << "||   ............................................          .......   ||" << endl;
cout << "||..|%|  |%|..     %%%%%%%%%%%%%%%%%%%  ......|%|   |%| ..|%|.       ||" << endl;
cout << "||..|%|  |%|..                   ...|%|    %%%%%%   |%| ..|%|.       ||" << endl;
cout << "||..|%|      .                   ...|%|             |%| ..|%|.       ||" << endl;
cout << "||..|%|  %%%%%%%%%%              ...|%|%%%%%%%%%    |%| ..|%|%%%%%   ||" << endl;
cout << "||................................................  |%| ..........   ||" << endl;
cout << "||  ..............................................         .......   ||" << endl;
cout << "#######################################################################" << endl;
}
void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
main()
{
	int x = 4;
	int y = 1;
	bool gameRunning = true;
	system("cls");
	printMaze();
	gotoxy(x,y);
	cout  <<  "P";
	while (gameRunning)
	{
if(GetAsyncKeyState(VK_UP))
{
	gotoxy(x,y);
	cout  <<  " ";
	y = y-1;
	gotoxy(x,y);
	cout  <<  "P";
}
if(GetAsyncKeyState(VK_DOWN))
{
	gotoxy(x,y);
	cout  <<  " ";
	y = y+1;
	gotoxy(x,y);
	cout  <<  "P";
}
if(GetAsyncKeyState(VK_LEFT))
{
	gotoxy(x,y);
	cout  <<  " ";
	x = x-1;
	gotoxy(x,y);
	cout  <<  "P";
}
if(GetAsyncKeyState(VK_RIGHT))
{
	gotoxy(x,y);
	cout  <<  " ";
	x = x+1;
	gotoxy(x,y);
	cout  <<  "P";
}	
	Sleep(200);
}
}