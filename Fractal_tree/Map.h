#pragma once
#include<utility>

class Map
{
public:
	Map(int num);
private:
	//���ĽǶ�
	int m_angle;
	//���ĳ���
	int m_size;
	void draw(float x,float y,float l,float angle, int num);
};
