#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main() 
{
	cout << "Please input the number of the suffix" << endl;
	int n;
	cin >> n;
	ifstream dict("dictionary.txt");
	string suff;
	string buffer;
	vector<string> words;
	vector<string> list;
	map<string,int> suffix1;
	int i = 0;
	while (!dict.eof())
	{
		getline(dict, buffer);
		if (buffer.length() >= n)
		{
			words.push_back(buffer);
			suff = buffer.substr(buffer.length() - n, n);
			try
			{
				suffix1[suff] += 1;
			}
			catch(...)
			{
				suffix1[suff] = 1;
			}
		}
		else
		{
			continue;
		}
	}
	map<string, int> suffix2 = suffix1;
	while (!suffix1.empty())
	{
		int max = 0;
		for (map<string, int>::iterator j = suffix1.begin(); j != suffix1.end(); j++)
		{
			if (suffix1[j->first] >= max)
			{
				max = suffix1[j->first];
			}
		}
		for (map<string, int>::iterator j = suffix1.begin(); j != suffix1.end();)
		{
			if (suffix1[j->first] == max)
			{
	
				list.push_back(j->first);
				suffix1.erase(j++);
			}
			else
			{
				j++;
			}
		}
	}

	for (int j = 0; j < 10; j++)
	{
		cout << list[j] << ":" << suffix2[list[j]] << endl;
	}
	string check;
	cout << "Please input the suffix that you want to query." << endl;
	cin >> check;
	try
	{
	cout << suffix2[check] << endl;
	for (int j = 0; j < words.size(); j++)
	{
		string out = words[j];
		if (out.find(check, 0) != out.npos)
		{
			cout << words[j] << " ";
		}
		else
		{
			continue;
		}
	}

	}
	catch(...)
	{
		cout << "There isn't such suffix." << endl;
	}
	cin >> n;


}