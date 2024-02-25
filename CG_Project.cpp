#include<iostream>
#include<graphics.h>
#include<cstdlib>
#include <cstring> 
#include <string>
#include <fstream>

using namespace std;
void r1(),r2(),r3(),r4(),r5(),r();
int x,y,a1,a2,a3,a4,a5,a6,a7,a8;
int r_num,r_1,r_2,r_3,r_4,r_5,r_6,r_7,r_8;
string match;


void r()
{
	outtextxy(400,310, "           ||||||     ||||||   ");
	outtextxy(400,325, "          |||  |||   |||  |||  ");
	outtextxy(400,340, "          |||  |||   |||  |||  ");
	outtextxy(400,355, "          |||        |||  |||  ");
	outtextxy(400,370, "          ||| |||||| |||  |||  ");
	outtextxy(400,385, "          |||  |||   |||  |||  ");
	outtextxy(400,400, "           ||||||     ||||||   ");
}
void r1()
{
	outtextxy(400,310, "            ||||     ");
	outtextxy(400,325, "          ||||||     ");
	outtextxy(400,340, "             |||     ");
	outtextxy(400,355, "             |||     ");
	outtextxy(400,370, "             |||     ");
	outtextxy(400,385, "             |||     ");
	outtextxy(400,400, "           |||||||   ");
}
void r2()
{
	outtextxy(400,310, "           ||||||    ");
	outtextxy(400,325, "          |||  |||   ");
	outtextxy(400,340, "              |||    ");
	outtextxy(400,355, "             |||     ");
	outtextxy(400,370, "            |||      ");
	outtextxy(400,385, "           |||       ");
	outtextxy(400,400, "          ||||||||   ");
}
void r3()
{
	outtextxy(400,310, "           ||||||    ");
	outtextxy(400,325, "          ||   |||   ");
	outtextxy(400,340, "              |||    ");
	outtextxy(400,355, "           |||||     ");
	outtextxy(400,370, "              |||    ");
	outtextxy(400,385, "          ||   |||   ");
	outtextxy(400,400, "           ||||||    ");
}
void r4()
{
	outtextxy(400,310, "             ||||     ");
	outtextxy(400,325, "            |||||     ");
	outtextxy(400,340, "          ||  |||     ");
	outtextxy(400,355, "         ||   |||     ");
	outtextxy(400,370, "        |||||||||||   ");
	outtextxy(400,385, "              |||     ");
	outtextxy(400,400, "              |||     ");
}
void r5()
{
	outtextxy(400,310, "          ||||||||    ");
	outtextxy(400,325, "          |||         ");
	outtextxy(400,340, "          |||         ");
	outtextxy(400,355, "          ||||||      ");
	outtextxy(400,370, "              |||     ");
	outtextxy(400,385, "          |||  |||    ");
	outtextxy(400,400, "           ||||||     ");
}


void count1()
{
	r5();
	delay(1000);
	cleardevice();
	r4();
	delay(1000);
	cleardevice();
	r3();
	delay(1000);
	cleardevice();
	r2();
	delay(1000);
	cleardevice();
	r1();
	delay(1000);
	cleardevice();
	r();
	delay(1000);
	cleardevice();
}
void count()
{
	r3();
	delay(1000);
	cleardevice();
	r2();
	delay(1000);
	cleardevice();
	r1();
	delay(1000);
	cleardevice();
	r();
	delay(1000);
	cleardevice();
}


void A(int m,int n)
{
	outtextxy(400+m,310+n, "    ||||||    ");
	outtextxy(400+m,325+n, "   |||  |||   ");
	outtextxy(400+m,340+n, "   |||  |||   ");
	outtextxy(400+m,355+n, "   ||||||||   ");
	outtextxy(400+m,370+n, "   |||  |||   ");
	outtextxy(400+m,385+n, "   |||  |||   ");
	outtextxy(400+m,400+n, "   |||  |||   ");
}
void B(int m,int n)
{
	outtextxy(400+m,310+n, "   |||||||    ");
	outtextxy(400+m,325+n, "   |||  |||   ");
	outtextxy(400+m,340+n, "   |||  |||   ");
	outtextxy(400+m,355+n, "   |||||||    ");
	outtextxy(400+m,370+n, "   |||  |||   ");
	outtextxy(400+m,385+n, "   |||  |||   ");
	outtextxy(400+m,400+n, "   |||||||    ");
}
void C(int m,int n)
{
	outtextxy(400+m,310+n, "    ||||||    ");
	outtextxy(400+m,325+n, "   |||  |||   ");
	outtextxy(400+m,340+n, "   |||  |||   ");
	outtextxy(400+m,355+n, "   |||        ");
	outtextxy(400+m,370+n, "   |||  |||   ");
	outtextxy(400+m,385+n, "   |||  |||   ");
	outtextxy(400+m,400+n, "    ||||||    ");
}
void D(int m,int n)
{
	outtextxy(400+m,310+n, "   |||||||    ");
	outtextxy(400+m,325+n, "   |||  |||   ");
	outtextxy(400+m,340+n, "   |||  |||   ");
	outtextxy(400+m,355+n, "   |||  |||   ");
	outtextxy(400+m,370+n, "   |||  |||   ");
	outtextxy(400+m,385+n, "   |||  |||   ");
	outtextxy(400+m,400+n, "   |||||||    ");
}
void E(int m,int n)
{
	outtextxy(400+m,310+n, "   ||||||||   ");
	outtextxy(400+m,325+n, "   |||        ");
	outtextxy(400+m,340+n, "   |||        ");
	outtextxy(400+m,355+n, "   ||||||     ");
	outtextxy(400+m,370+n, "   |||        ");
	outtextxy(400+m,385+n, "   |||        ");
	outtextxy(400+m,400+n, "   ||||||||   ");
}
void F(int m,int n)
{
	outtextxy(400+m,310+n, "   ||||||||   ");
	outtextxy(400+m,325+n, "   |||        ");
	outtextxy(400+m,340+n, "   |||        ");
	outtextxy(400+m,355+n, "   ||||||     ");
	outtextxy(400+m,370+n, "   |||        ");
	outtextxy(400+m,385+n, "   |||        ");
	outtextxy(400+m,400+n, "   |||        ");
}
void G(int m,int n)
{
	outtextxy(400+m,310+n, "      ||||||     ");
	outtextxy(400+m,325+n, "     |||  |||    ");
	outtextxy(400+m,340+n, "     |||  |||    ");
	outtextxy(400+m,355+n, "     |||         ");
	outtextxy(400+m,370+n, "     ||| ||||||  ");
	outtextxy(400+m,385+n, "     |||  |||    ");
	outtextxy(400+m,400+n, "      ||||||    ");
}
void H(int m,int n)
{
	outtextxy(400+m,310+n, "   |||  |||   ");
	outtextxy(400+m,325+n, "   |||  |||   ");
	outtextxy(400+m,340+n, "   |||  |||   ");
	outtextxy(400+m,355+n, "   ||||||||   ");
	outtextxy(400+m,370+n, "   |||  |||   ");
	outtextxy(400+m,385+n, "   |||  |||   ");
	outtextxy(400+m,400+n, "   |||  |||   ");
}
void I(int m,int n)
{
	outtextxy(400+m,310+n, "   |||||||   ");
	outtextxy(400+m,325+n, "     |||     ");
	outtextxy(400+m,340+n, "     |||     ");
	outtextxy(400+m,355+n, "     |||     ");
	outtextxy(400+m,370+n, "     |||     ");
	outtextxy(400+m,385+n, "     |||     ");
	outtextxy(400+m,400+n, "   |||||||   ");
}
void J(int m,int n)
{
	outtextxy(400+m,310+n, "   ||||||||   ");
	outtextxy(400+m,325+n, "      |||     ");
	outtextxy(400+m,340+n, "      |||     ");
	outtextxy(400+m,355+n, "      |||     ");
	outtextxy(400+m,370+n, "  ||| |||     ");
	outtextxy(400+m,385+n, "  ||| |||     ");
	outtextxy(400+m,400+n, "   |||||      ");
}
void K(int m,int n)
{
	outtextxy(400+m,310+n, "   |||   |||  ");
	outtextxy(400+m,325+n, "   |||  |||   ");
	outtextxy(400+m,340+n, "   ||| |||    ");
	outtextxy(400+m,355+n, "   ||||||     ");
	outtextxy(400+m,370+n, "   ||| |||    ");
	outtextxy(400+m,385+n, "   |||  |||   ");
	outtextxy(400+m,400+n, "   |||   |||  ");
}
void L(int m,int n)
{
	outtextxy(400+m,310+n, "   |||        ");
	outtextxy(400+m,325+n, "   |||        ");
	outtextxy(400+m,340+n, "   |||        ");
	outtextxy(400+m,355+n, "   |||        ");
	outtextxy(400+m,370+n, "   |||        ");
	outtextxy(400+m,385+n, "   |||        ");
	outtextxy(400+m,400+n, "   ||||||||   ");
}
void M(int m,int n)
{
	outtextxy(400+m,310+n, "   ||||   ||||  ");
	outtextxy(400+m,325+n, "   ||| ||| |||  ");
	outtextxy(400+m,340+n, "   |||  |  |||  ");
	outtextxy(400+m,355+n, "   |||     |||  ");
	outtextxy(400+m,370+n, "   |||     |||  ");
	outtextxy(400+m,385+n, "   |||     |||  ");
	outtextxy(400+m,400+n, "   |||     |||  ");
}
void N(int m,int n)
{
	outtextxy(400+m,310+n, "   ||||   |||   ");
	outtextxy(400+m,325+n, "   ||| |  |||    ");
	outtextxy(400+m,340+n, "   ||| || |||    ");
	outtextxy(400+m,355+n, "   ||| || ||| ");
	outtextxy(400+m,370+n, "   ||| || |||  ");
	outtextxy(400+m,385+n, "   |||  | |||  ");
	outtextxy(400+m,400+n, "   |||   ||||  ");
}
void O(int m,int n)
{
	outtextxy(400+m,310+n, "    ||||||    ");
	outtextxy(400+m,325+n, "   |||  |||   ");
	outtextxy(400+m,340+n, "   |||  |||   ");
	outtextxy(400+m,355+n, "   |||  |||   ");
	outtextxy(400+m,370+n, "   |||  |||   ");
	outtextxy(400+m,385+n, "   |||  |||   ");
	outtextxy(400+m,400+n, "    ||||||    ");
}
void P(int m,int n)
{
	outtextxy(400+m,310+n, "   |||||||    ");
	outtextxy(400+m,325+n, "   |||  |||   ");
	outtextxy(400+m,340+n, "   |||  |||   ");
	outtextxy(400+m,355+n, "   |||||||    ");
	outtextxy(400+m,370+n, "   |||        ");
	outtextxy(400+m,385+n, "   |||        ");
	outtextxy(400+m,400+n, "   |||        ");
}
void Q(int m,int n)
{
	outtextxy(400+m,310+n, "    ||||||    ");
	outtextxy(400+m,325+n, "   |||  |||   ");
	outtextxy(400+m,340+n, "   |||  |||   ");
	outtextxy(400+m,355+n, "   |||  |||   ");
	outtextxy(400+m,370+n, "   ||| ||||   ");
	outtextxy(400+m,385+n, "   |||  ||||  ");
	outtextxy(400+m,400+n, "    |||||| || ");
}
void R(int m,int n)
{
	outtextxy(400+m,310+n, "   |||||||    ");
	outtextxy(400+m,325+n, "   |||  |||   ");
	outtextxy(400+m,340+n, "   |||  |||   ");
	outtextxy(400+m,355+n, "   |||||||    ");
	outtextxy(400+m,370+n, "   |||  |||   ");
	outtextxy(400+m,385+n, "   |||  |||   ");
	outtextxy(400+m,400+n, "   |||  |||   ");
}
void S(int m,int n)
{
	outtextxy(400+m,310+n, "    ||||||    ");
	outtextxy(400+m,325+n, "   |||  |||   ");
	outtextxy(400+m,340+n, "   |||        ");
	outtextxy(400+m,355+n, "     |||||    ");
	outtextxy(400+m,370+n, "        |||   ");
	outtextxy(400+m,385+n, "   |||  |||   ");
	outtextxy(400+m,400+n, "    ||||||    ");
}
void T(int m,int n)
{
	outtextxy(400+m,310+n, "  |||||||||   ");
	outtextxy(400+m,325+n, "     |||      ");
	outtextxy(400+m,340+n, "     |||      ");
	outtextxy(400+m,355+n, "     |||      ");
	outtextxy(400+m,370+n, "     |||      ");
	outtextxy(400+m,385+n, "     |||      ");
	outtextxy(400+m,400+n, "     |||      ");
}
void U(int m,int n)
{
	outtextxy(400+m,310+n, "   |||  |||    ");
	outtextxy(400+m,325+n, "   |||  |||    ");
	outtextxy(400+m,340+n, "   |||  |||    ");
	outtextxy(400+m,355+n, "   |||  |||    ");
	outtextxy(400+m,370+n, "   |||  |||    ");
	outtextxy(400+m,385+n, "   |||  |||    ");
	outtextxy(400+m,400+n, "    ||||||     ");
}
void V(int m,int n)
{
	outtextxy(400+m,310+n, "   |||   |||    ");
	outtextxy(400+m,325+n, "   |||   |||    ");
	outtextxy(400+m,340+n, "   |||   |||    ");
	outtextxy(400+m,355+n, "   |||   |||    ");
	outtextxy(400+m,370+n, "   |||   |||    ");
	outtextxy(400+m,385+n, "    ||| |||    ");
	outtextxy(400+m,400+n, "      |||     ");
}
void W(int m,int n)
{
	outtextxy(400+m,310+n, "   |||     |||    ");
	outtextxy(400+m,325+n, "   |||     |||    ");
	outtextxy(400+m,340+n, "   |||     |||    ");
	outtextxy(400+m,355+n, "   |||     |||    ");
	outtextxy(400+m,370+n, "   |||  |  |||    ");
	outtextxy(400+m,385+n, "   ||| ||| |||    ");
	outtextxy(400+m,400+n, "   ||||   ||||   ");
}
void X(int m,int n)
{
	outtextxy(400+m,310+n, "  |||     |||   ");
	outtextxy(400+m,325+n, "   |||   |||    ");
	outtextxy(400+m,340+n, "    ||| |||     ");
	outtextxy(400+m,355+n, "    |||||||     ");
	outtextxy(400+m,370+n, "    ||| |||     ");
	outtextxy(400+m,385+n, "   |||   |||    ");
	outtextxy(400+m,400+n, "  |||     |||   ");
}
void Y(int m,int n)
{
	outtextxy(400+m,310+n, "  |||     |||    ");
	outtextxy(400+m,325+n, "   |||   |||     ");
	outtextxy(400+m,340+n, "    ||| |||      ");
	outtextxy(400+m,355+n, "      |||        ");
	outtextxy(400+m,370+n, "      |||        ");
	outtextxy(400+m,385+n, "      |||        ");
	outtextxy(400+m,400+n, "      |||        ");
}
void Z(int m,int n)
{
	outtextxy(400+m,310+n, "   |||||||||   ");
	outtextxy(400+m,325+n, "         ||    ");
	outtextxy(400+m,340+n, "        ||     ");
	outtextxy(400+m,355+n, "      ||       ");
	outtextxy(400+m,370+n, "     ||        ");
	outtextxy(400+m,385+n, "    ||         ");
	outtextxy(400+m,400+n, "   |||||||||   ");
}
void loop()
{
	switch(r_1)
	{
		case 1:
			A(a1,a1);
			break;
		case 2:
			B(a1,a1);
			break;
		case 3:
			C(a1,a1);
			break;
		case 4:
			D(a1,a1);
			break;
		case 5:
			E(a1,a1);
			break;
		case 6:
			F(a1,a1);
			break;
		case 7:
			G(a1,a1);
			break;
		case 8:
			H(a1,a1);
			break;
		case 9:
			I(a1,a1);
			break;
		case 10:
			J(a1,a1);
			break;
		case 11:
			K(a1,a1);
			break;
		case 12:
			L(a1,a1);
			break;
		case 13:
			M(a1,a1);
			break;
		case 14:
			N(a1,a1);
			break;
		case 15:
			O(a1,a1);
			break;
		case 16:
			P(a1,a1);
			break;
		case 17:
			Q(a1,a1);
			break;
		case 18:
			R(a1,a1);
			break;
		case 19:
			S(a1,a1);
			break;
		case 20:
			T(a1,a1);
			break;
		case 21:
			U(a1,a1);
			break;
		case 22:
			V(a1,a1);
			break;
		case 23:
			W(a1,a1);
			break;
		case 24:
			X(a1,a1);
			break;
		case 25:
			Y(a1,a1);
			break;
		case 26:
			Z(a1,a1);
			break;
	}
	switch(r_2)
	{
		case 1:
			A(-a2,-a2);
			break;
		case 2:
			B(-a2,-a2);
			break;
		case 3:
			C(-a2,-a2);
			break;
		case 4:
			D(-a2,-a2);
			break;
		case 5:
			E(-a2,-a2);
			break;
		case 6:
			F(-a2,-a2);
			break;
		case 7:
			G(-a2,-a2);
			break;
		case 8:
			H(-a2,-a2);
			break;
		case 9:
			I(-a2,-a2);
			break;
		case 10:
			J(-a2,-a2);
			break;
		case 11:
			K(-a2,-a2);
			break;
		case 12:
			L(-a2,-a2);
			break;
		case 13:
			M(-a2,-a2);
			break;
		case 14:
			N(-a2,-a2);
			break;
		case 15:
			O(-a2,-a2);
			break;
		case 16:
			P(-a2,-a2);
			break;
		case 17:
			Q(-a2,-a2);
			break;
		case 18:
			R(-a2,-a2);
			break;
		case 19:
			S(-a2,-a2);
			break;
		case 20:
			T(-a2,-a2);
			break;
		case 21:
			U(-a2,-a2);
			break;
		case 22:
			V(-a2,-a2);
			break;
		case 23:
			W(-a2,-a2);
			break;
		case 24:
			X(-a2,-a2);
			break;
		case 25:
			Y(-a2,-a2);
			break;
		case 26:
			Z(-a2,-a2);
			break;
	}
	switch(r_3)
	{
		case 1:
			A(a3,-a3);
			break;
		case 2:
			B(a3,-a3);
			break;
		case 3:
			C(a3,-a3);
			break;
		case 4:
			D(a3,-a3);
			break;
		case 5:
			E(a3,-a3);
			break;
		case 6:
			F(a3,-a3);
			break;
		case 7:
			G(a3,-a3);
			break;
		case 8:
			H(a3,-a3);
			break;
		case 9:
			I(a3,-a3);
			break;
		case 10:
			J(a3,-a3);
			break;
		case 11:
			K(a3,-a3);
			break;
		case 12:
			L(a3,-a3);
			break;
		case 13:
			M(a3,-a3);
			break;
		case 14:
			N(a3,-a3);
			break;
		case 15:
			O(a3,-a3);
			break;
		case 16:
			P(a3,-a3);
			break;
		case 17:
			Q(a3,-a3);
			break;
		case 18:
			R(a3,-a3);
			break;
		case 19:
			S(a3,-a3);
			break;
		case 20:
			T(a3,-a3);
			break;
		case 21:
			U(a3,-a3);
			break;
		case 22:
			V(a3,-a3);
			break;
		case 23:
			W(a3,-a3);
			break;
		case 24:
			X(a3,-a3);
			break;
		case 25:
			Y(a3,-a3);
			break;
		case 26:
			Z(a3,-a3);
			break;
	}
	switch(r_4)
	{
		case 1:
			A(-a4,a4);
			break;
		case 2:
			B(-a4,a4);
			break;
		case 3:
			C(-a4,a4);
			break;
		case 4:
			D(-a4,a4);
			break;
		case 5:
			E(-a4,a4);
			break;
		case 6:
			F(-a4,a4);
			break;
		case 7:
			G(-a4,a4);
			break;
		case 8:
			H(-a4,a4);
			break;
		case 9:
			I(-a4,a4);
			break;
		case 10:
			J(-a4,a4);
			break;
		case 11:
			K(-a4,a4);
			break;
		case 12:
			L(-a4,a4);
			break;
		case 13:
			M(-a4,a4);
			break;
		case 14:
			N(-a4,a4);
			break;
		case 15:
			O(-a4,a4);
			break;
		case 16:
			P(-a4,a4);
			break;
		case 17:
			Q(-a4,a4);
			break;
		case 18:
			R(-a4,a4);
			break;
		case 19:
			S(-a4,a4);
			break;
		case 20:
			T(-a4,a4);
			break;
		case 21:
			U(-a4,a4);
			break;
		case 22:
			V(-a4,a4);
			break;
		case 23:
			W(-a4,a4);
			break;
		case 24:
			X(-a4,a4);
			break;
		case 25:
			Y(-a4,a4);
			break;
		case 26:
			Z(-a4,a4);
			break;
	}
	switch(r_5)
	{
		case 1:
			A(a5,0);
			break;
		case 2:
			B(a5,0);
			break;
		case 3:
			C(a5,0);
			break;
		case 4:
			D(a5,0);
			break;
		case 5:
			E(a5,0);
			break;
		case 6:
			F(a5,0);
			break;
		case 7:
			G(a5,0);
			break;
		case 8:
			H(a5,0);
			break;
		case 9:
			I(a5,0);
			break;
		case 10:
			J(a5,0);
			break;
		case 11:
			K(a5,0);
			break;
		case 12:
			L(a5,0);
			break;
		case 13:
			M(a5,0);
			break;
		case 14:
			N(a5,0);
			break;
		case 15:
			O(a5,0);
			break;
		case 16:
			P(a5,0);
			break;
		case 17:
			Q(a5,0);
			break;
		case 18:
			R(a5,0);
			break;
		case 19:
			S(a5,0);
			break;
		case 20:
			T(a5,0);
			break;
		case 21:
			U(a5,0);
			break;
		case 22:
			V(a5,0);
			break;
		case 23:
			W(a5,0);
			break;
		case 24:
			X(a5,0);
			break;
		case 25:
			Y(a5,0);
			break;
		case 26:
			Z(a5,0);
			break;
	}
	switch(r_6)
	{
		case 1:
			A(0,a6);
			break;
		case 2:
			B(0,a6);
			break;
		case 3:
			C(0,a6);
			break;
		case 4:
			D(0,a6);
			break;
		case 5:
			E(0,a6);
			break;
		case 6:
			F(0,a6);
			break;
		case 7:
			G(0,a6);
			break;
		case 8:
			H(0,a6);
			break;
		case 9:
			I(0,a6);
			break;
		case 10:
			J(0,a6);
			break;
		case 11:
			K(0,a6);
			break;
		case 12:
			L(0,a6);
			break;
		case 13:
			M(0,a6);
			break;
		case 14:
			N(0,a6);
			break;
		case 15:
			O(0,a6);
			break;
		case 16:
			P(0,a6);
			break;
		case 17:
			Q(0,a6);
			break;
		case 18:
			R(0,a6);
			break;
		case 19:
			S(0,a6);
			break;
		case 20:
			T(0,a6);
			break;
		case 21:
			U(0,a6);
			break;
		case 22:
			V(0,a6);
			break;
		case 23:
			W(0,a6);
			break;
		case 24:
			X(0,a6);
			break;
		case 25:
			Y(0,a6);
			break;
		case 26:
			Z(0,a6);
			break;
	}
	switch(r_7)
	{
		case 1:
			A(0,-a7);
			break;
		case 2:
			B(0,-a7);
			break;
		case 3:
			C(0,-a7);
			break;
		case 4:
			D(0,-a7);
			break;
		case 5:
			E(0,-a7);
			break;
		case 6:
			F(0,-a7);
			break;
		case 7:
			G(0,-a7);
			break;
		case 8:
			H(0,-a7);
			break;
		case 9:
			I(0,-a7);
			break;
		case 10:
			J(0,-a7);
			break;
		case 11:
			K(0,-a7);
			break;
		case 12:
			L(0,-a7);
			break;
		case 13:
			M(0,-a7);
			break;
		case 14:
			N(0,-a7);
			break;
		case 15:
			O(0,-a7);
			break;
		case 16:
			P(0,-a7);
			break;
		case 17:
			Q(0,-a7);
			break;
		case 18:
			R(0,-a7);
			break;
		case 19:
			S(0,-a7);
			break;
		case 20:
			T(0,-a7);
			break;
		case 21:
			U(0,-a7);
			break;
		case 22:
			V(0,-a7);
			break;
		case 23:
			W(0,-a7);
			break;
		case 24:
			X(0,-a7);
			break;
		case 25:
			Y(0,-a7);
			break;
		case 26:
			Z(0,-a7);
			break;
	}
	switch(r_8)
	{
		case 1:
			A(-a8,0);
			break;
		case 2:
			B(-a8,0);
			break;
		case 3:
			C(-a8,0);
			break;
		case 4:
			D(-a8,0);
			break;
		case 5:
			E(-a8,0);
			break;
		case 6:
			F(-a8,0);
			break;
		case 7:
			G(-a8,0);
			break;
		case 8:
			H(-a8,0);
			break;
		case 9:
			I(-a8,0);
			break;
		case 10:
			J(-a8,0);
			break;
		case 11:
			K(-a8,0);
			break;
		case 12:
			L(-a8,0);
			break;
		case 13:
			M(-a8,0);
			break;
		case 14:
			N(-a8,0);
			break;
		case 15:
			O(-a8,0);
			break;
		case 16:
			P(-a8,0);
			break;
		case 17:
			Q(-a8,0);
			break;
		case 18:
			R(-a8,0);
			break;
		case 19:
			S(-a8,0);
			break;
		case 20:
			T(-a8,0);
			break;
		case 21:
			U(-a8,0);
			break;
		case 22:
			V(-a8,0);
			break;
		case 23:
			W(-a8,0);
			break;
		case 24:
			X(-a8,0);
			break;
		case 25:
			Y(-a8,0);
			break;
		case 26:
			Z(-a8,0);
			break;
	}
	//delay(100);
	cleardevice();
	//count();
	//delay(1000);
	if(a1<250)
	{
		a1+=4;a2+=4;a3+=4;a4+=4;
		a5+=4;a6+=4;a7+=4;a8+=4;
		loop();
	}
	else
	{
		return;
	}
}

void alpha(int i)
{
	switch(i)
	{
		case 1:
			match+=" A";
			break;
		case 2:
			match+=" B";
			break;
		case 3:
			match+=" C";
			break;
		case 4:
			match+=" D";
			break;
		case 5:
			match+=" E";
			break;
		case 6:
			match+=" F";
			break;
		case 7:
			match+=" G";
			break;
		case 8:
			match+=" H";
			break;
		case 9:
			match+=" I";
			break;
		case 10:
			match+=" J";
			break;
		case 11:
			match+=" K";
			break;
		case 12:
			match+=" L";
			break;
		case 13:
			match+=" M";
			break;
		case 14:
			match+=" N";
			break;
		case 15:
			match+=" O";
			break;
		case 16:
			match+=" P";
			break;
		case 17:
			match+=" Q";
			break;
		case 18:
			match+=" R";
			break;
		case 19:
			match+=" S";
			break;
		case 20:
			match+=" T";
			break;
		case 21:
			match+=" U";
			break;
		case 22:
			match+=" V";
			break;
		case 23:
			match+=" W";
			break;
		case 24:
			match+=" X";
			break;
		case 25:
			match+=" Y";
			break;
		case 26:
			match+=" Z";
			break;
	}
}

int main()
{
	initwindow(1000,700,"Alphabet Game ( GROUP NO. 8 )");
	outtextxy(350,310, "    ||||||  |||||||||  ||||||  ||||||   |||||||||     ");
	outtextxy(350,325, "   |||  |||    |||    |||  ||| |||  |||    |||        ");
	outtextxy(350,340, "   |||         |||    |||  ||| |||  |||    |||        ");
	outtextxy(350,355, "     |||||     |||    |||||||| |||||||     |||        ");
	outtextxy(350,370, "        |||    |||    |||  ||| |||  |||    |||        ");
	outtextxy(350,385, "   |||  |||    |||    |||  ||| |||  |||    |||        ");
	outtextxy(350,400, "    ||||||     |||    |||  ||| |||  |||    |||        ");
	delay(700);
	
	for(int j=0;j<160;j+=15)
	{
		setcolor(YELLOW);
	    setfillstyle(SOLID_FILL,YELLOW);
    	circle(375+j,425,5);
    	floodfill(375+j,425,YELLOW);
    	setcolor(YELLOW);
    	setfillstyle(SOLID_FILL,YELLOW);
    	circle(375+j,425,5);
    	floodfill(375+j,425,YELLOW);
    	delay(300);
    	//cleardevice();
    }
    delay(500);
	setbkcolor(4);
	cleardevice();
	int lower=100,upper=500;
	for(int i=0;i<10000;i++)
	{
		match="";
		a1=a2=a3=a4=a5=a6=a7=a8=0;
		x=(rand() % 800) ;
		y=(rand() % 600) ;
		r_num=(rand() % (upper - lower + 1)) + lower;
		r_1=(rand()%25)+1;
		r_2=(rand()%25)+1;
		r_3=(rand()%25)+1;
		r_4=(rand()%25)+1;
		r_5=(rand()%25)+1;
		r_6=(rand()%25)+1;
		r_7=(rand()%25)+1;
		r_8=(rand()%25)+1;
		count();
		alpha(r_2);
		alpha(r_7);
		alpha(r_3);
		alpha(r_8);
		alpha(r_5);
		alpha(r_4);
		alpha(r_6);
		alpha(r_1);
		loop();
		outtextxy(400,350," MATCH YOUR COLLECTED ALPHABETS :- ");
		delay(3000);
		cleardevice();
		//count1();
		char* ch = new char[9];
		strcpy(ch, match.c_str()); 
		outtextxy(400,350," Correct answer is :- ");
		delay(500);
		outtextxy(450,375,ch);
		delay(5000);
		cleardevice();
	}
}
