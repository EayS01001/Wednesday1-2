#include<stdio.h>
#include<iostream>

//���1
/*struct Vector2
{
	int x;
	int y;
};
*/

//���2
/*
struct Vector2
{
	/// <summary>
	/// X�̃Z�b�^�[
	/// </summary>
	/// <param name="x��ύX����֐�"></param>
	void Setx(int _x)
	{
		x = _x;
	}
	/// <summary>
	/// Y�̃Z�b�^�[
	/// </summary>
	/// <param name="y��ύX����֐�"></param>
	void Sety(int _y)
	{
		y = _y;
	}

	/// <summary>
	/// Vector2��x��Ԃ��܂�
	/// </summary>
	/// <returns></returns>
	int Get_x() { return x; }


	/// <summary>
	/// Vector2��y��Ԃ��܂�
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
	/// Vector3�̍��W��ݒ肵�܂�(x,y,z)
	/// </summary>
	/// <param name="setx">x���W</param>
	/// <param name="sety">y���W</param>
	/// <param name="setz">z���W</param>
	void SetPosition(int setx, int sety, int setz)
	{
		x = setx;
		y = sety;
		z = setz;
	}

	/// <summary>
	/// �l��\��������֐�
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
	//���1
	//Vector2 vec2;
	//std::cout << vec2.x << vec2.y;

	//���2
	//Vector2 vec2;
	//vec2.Setx(20);
	//vec2.Sety(30);
	//std::cout << vec2.Get_x() << std::endl;
	//std::cout << vec2.Get_y() << std::endl;

	//���3
	//Vector3 vec3;
	//vec3.SetPosition(2, 3, 4);
	//vec3.DisplayPosition();
}