#include"Map.h"
#include<utility>
#include"Line.h"
#include <graphics.h>
using namespace std;

Map::Map(int num)
{
	m_angle = 25;
	m_size = 200;
	draw(500, 900, -90, m_size, num);
}

void Map::draw(float x, float y, float angle,float l,int num)
{
	//根据层数设置画线宽度
	setlinestyle(PS_ENDCAP_FLAT, num);
	Line L(x, y, angle, l);
	L.draw();
	if (num == 0)
	{
		Line l1(x, y, angle, l);
		l1.draw();	
		pair<float, float> p;
		p = Line::get_point(x, y, angle, l);

	}
	else
	{
		pair<float, float> p;
		p = Line::get_point(x, y, angle, l);
		//左分支
		draw(p.first, p.second, angle - m_angle, 3 / 4.0 * l, num - 1);
		//右分支
		draw(p.first, p.second, angle + m_angle, 3 / 4.0 * l, num - 1);
	}
}

