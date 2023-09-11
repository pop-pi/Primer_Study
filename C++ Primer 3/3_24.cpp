#include<iostream>
#include<string>
#include<vector>
#include<cctype>

using std::string;
using std::vector;
//3.24
//int main()
//{
//	int t;
//	vector<int> ivec;
//	while (std::cin >> t)
//		ivec.push_back(t);
//	int s = ivec.size();
//	for (auto it = ivec.begin(); it != ivec.begin() + s / 2; it++)
//		std::cout << (*it) + (*(ivec.begin() + (ivec.end() - 1 - it))) << std::endl;
//}
//3.25
//int main()
//{
//	vector<unsigned> scores(11, 0);
//	unsigned grade;
//	while (std::cin >> grade)
//	{
//		if (grade <= 100)
//		{
//			vector<unsigned>::iterator it = scores.begin();
//			*(it + grade / 10)++;
//		}
//	}
//}