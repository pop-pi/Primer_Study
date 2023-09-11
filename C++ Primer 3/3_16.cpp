#include<iostream>
#include<string>
#include<vector>
#include<cctype>

using std::string;
using std::vector;

//3.16
//int main()
//{
//	std::vector<int> v1, v2(10), v3(10, 42), v4{ 10 }, v5{ 10,42 };
//	std::vector<string> v6{ 10 }, v7{ 10,"hi" };
//	std::cout << v1.size() << " " << v2.size() << " " << v3.size() <<
//		" " << v4.size() << " " << v5.size() << " " << v6.size() << " "
//		<< v7.size();
//}
//3.19
//int main()
//{
//	vector<string> strlist;
//	string s;
//	while (std::cin >> s)
//	{
//		for (auto& i : s)
//			i = toupper(i);
//		strlist.push_back(s);
//	}
//	for (auto i : strlist)
//		std::cout << i << std::endl;
//}
//3.20
//int main()
//{
//	int t;
//	vector<int> ivec;
//	while (std::cin >> t)
//		ivec.push_back(t);
//	/*for (int i=0;i<ivec.size()-1;i++)
//	{
//		std::cout << ivec[i] + ivec[i + 1] << std::endl;
//	}*/
//	for (int i = 0; i <= (ivec.size()-1) / 2; i++)
//	{
//		if (i!=(ivec.size() - 1 - i))
//			std::cout << ivec[i] + ivec[ivec.size() - 1 - i] << std::endl;
//	}
//}