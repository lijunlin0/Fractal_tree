#include<iostream>
#include<graphics.h>
#include<conio.h>
#include "Map.h"
using namespace std;
const int WIDTH = 1000;
const int HEIGHT = 1000;
using namespace std;

int main()
{
	initgraph(WIDTH, HEIGHT);
	Map m(10);
	system("pause");
	return 0;
}