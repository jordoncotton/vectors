#include "Vectors.h"

Vector2::Vector2()
{
}

Vector2::~Vector2()
{
}

Vector2::Vector2(float x, float y)
{
}

float Vector2::GetX()
{
	return 0.0f;
}	

float Vector2::GetY()
{
	return 0.0f;
}

Vector2 Vector2::operator+(Vector2 & rhs)
{
	return Vector2(xPos + rhs.xPos, yPos + rhs.yPos);
}

Vector2 Vector2::operator-(Vector2 & rhs)
{
	return Vector2(xPos - rhs.xPos, yPos - rhs.yPos);
}

Vector2 Vector2::operator*(float & rhs)
{
	return Vector2(xPos * rhs, yPos * rhs);
}

bool Vector2::operator==(Vector2 & rhs)
{
	if (xPos == rhs.xPos && yPos == rhs.yPos)
	{
		return true;
	}
	return false;
}

bool Vector2::operator!=(Vector2 & rhs)
{
	if (xPos != rhs.xPos && yPos != rhs.yPos)
	{
		return true;
	}
	return false;
}

float Vector2::magnitude()
{
	float pat = (xPos * xPos) + (yPos * yPos);
	return sqrtf(pat);
}

float Vector2::Distance(Vector2& other)
{
	Vector2 a = *this - other;
	return a.magnitude();
}

Vector2 Vector2::Normalize()
{
	return Vector2((xPos / magnitude()), (yPos / magnitude()));
}
