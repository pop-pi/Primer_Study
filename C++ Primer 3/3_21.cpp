//#include<iostream>
//#include<string>
//#include<vector>
//#include<cctype>
//
//using std::string;
//using std::vector;

//3.21
//int main()
//{
//	std::vector<int> v1, v2(10), v3(10, 42), v4{ 10 }, v5{ 10,42 };
//	std::vector<string> v6{ 10 }, v7{ 10,"hi" };
//	auto itb1 = v1.begin(),ite1=v1.end();
//	std::cout <<ite1-itb1;
//}
//3.22
//int main()
//{
//	vector<string> text;
//	string temp;
//	while (std::getline(std::cin,temp))
//	{
//		text.push_back(temp);
//	}
//	for (auto it = text.begin(); it != text.end() && !it->empty(); it++)
//	{
//		for (auto& s : (*it))
//			s = toupper(s);
//		std::cout << (*it);
//	}
//}