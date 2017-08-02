#include<iostream>
using namespace std;
int main()
{
	cout<<"hello world~"<<endl;
	
	char ch;
	int num_of_num = 0;
	int char_of_num = 0;
	int symbol_of_num = 0;
	int balank_of_num = 0;
	int other_of_num = 0;
	while(ch != '@')
	{
		if(isalpha(ch))
		{
			char_of_num++;
		}else if(isdigit(ch))
		{
			num_of_num++;
		}else if(isspace(ch))
		{
			balank_of_num++;
		}else if(ispunct(ch))
		{
			symbol_of_num++;	
		}else
		{
			other_of_num++;
		}
		cin.get(ch);
	}
	cout<<num_of_num<<endl<<char_of_num<<endl<<balank_of_num<<endl<<other_of_num<<endl<<symbol_of_num<<endl;
	return 0;
	

}
