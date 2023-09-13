#include<iostream>
#include<vector>
#include<string>

using std::vector;
using std::string;
void print(vector<int> a);
void Q4_21(vector<int>::iterator a,const int num);
void length();
void Q4_29();

int main()
{
	vector<int> tmp = { 1,5,7,9,1234,6 };
	/*vector<int>::size_type cnt = tmp.size();
	for (vector<int>::size_type ix = 0; ix != tmp.size(); ix++, cnt--)
		tmp[ix] = cnt;*/
	/*Q4_21(tmp.begin(),tmp.size());
	print(tmp);
	length();
	Q4_29();*/
	int x = 1, y = 4;
	1 ? ++x, ++y : --x, --y;
	std::cout << x << " " << y << std::endl;
}

void Q4_21(vector<int>::iterator a, const int num)
{
	int i = 0;
	while (i != num)
	{
		if ((*a) % 2 != 0)
			(*a) = (*a) * (*a);
		a = a + 1;
		++i;
	}
}
void print(vector<int> a)
{
	for (auto i : a)
	{
		std::cout << i << std::endl;
	}
}

string Grade1(unsigned g)
{
	string finalgrade = (g > 90) ? "high pass" : (g > 75) ? "pass" : (g >= 60) ? "low pass" : "fail";
	return finalgrade;
}

string Grade2(unsigned g)
{
	if (g > 90)
		return "high pass";
	else if (g > 75)
		return "pass";
	else if (g >= 60)
		return "low pass";
	else return "fail";
}

void length()
{
	std::cout << sizeof(char) << std::endl;
	std::cout << sizeof(int) << std::endl;
	std::cout << sizeof(unsigned) << std::endl;
	std::cout << sizeof(short) << std::endl;
	std::cout << sizeof(long) << std::endl;
	std::cout << sizeof(long long) << std::endl;
}
void Q4_29()
{
	int x[10];
	int* p = x;
	std::cout << sizeof(x) / sizeof(*x) << std::endl;
	std::cout << sizeof(p) / sizeof(*p) << std::endl;
}