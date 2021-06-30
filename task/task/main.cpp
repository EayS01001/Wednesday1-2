#include<stdio.h>
#include<iostream>

//問題1
/*struct Vector2
{
	int x;
	int y;
};
*/

//問題2
/*
struct Vector2
{
	/// <summary>
	/// Xのセッター
	/// </summary>
	/// <param name="xを変更する関数"></param>
	void Setx(int _x)
	{
		x = _x;
	}
	/// <summary>
	/// Yのセッター
	/// </summary>
	/// <param name="yを変更する関数"></param>
	void Sety(int _y)
	{
		y = _y;
	}

	/// <summary>
	/// Vector2のxを返します
	/// </summary>
	/// <returns></returns>
	int Get_x() { return x; }


	/// <summary>
	/// Vector2のyを返します
	/// </summary>
	/// <returns></returns>
	int Get_y() { return y; }

private:
	int x, y;
};
*/


/*
struct Vector3
{
	/// <summary>
	/// Vector3の座標を設定します(x,y,z)
	/// </summary>
	/// <param name="setx">x座標</param>
	/// <param name="sety">y座標</param>
	/// <param name="setz">z座標</param>
	void SetPosition(int setx, int sety, int setz)
	{
		x = setx;
		y = sety;
		z = setz;
	}

	/// <summary>
	/// 値を表示させる関数
	/// </summary>
	void DisplayPosition()
	{
		std::cout <<"x="<< x <<" y="<< y <<" z="<< z;
	}


private:
	int x, y, z;
};
*/


int main() 
{
	//問題1
	//Vector2 vec2;
	//std::cout << vec2.x << vec2.y;

	//問題2
	//Vector2 vec2;
	//vec2.Setx(20);
	//vec2.Sety(30);
	//std::cout << vec2.Get_x() << std::endl;
	//std::cout << vec2.Get_y() << std::endl;

	//問題3
	//Vector3 vec3;
	//vec3.SetPosition(2, 3, 4);
	//vec3.DisplayPosition();
}