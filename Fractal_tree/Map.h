#pragma once
#include<utility>

class Map
{
public:
	Map(int num);
private:
	//树的角度
	int m_angle;
	//树的长度
	int m_size;
	void draw(float x,float y,float l,float angle, int num);
};
