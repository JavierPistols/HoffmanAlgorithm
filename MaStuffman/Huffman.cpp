#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <string>
#include <map>
using namespace std;

struct Node
{
	char character;
	int frequency;
	Node* left;
	Node* right;
};

vector<Node>v_FreqList;
vector<Node>::iterator i_vFreqList;
multimap<int, Node>mm_mmRealList;
multimap<int, Node>::iterator i_mmRealList;
void fillList()
{
	Node charac;
	int nword;
	cout << " \ningresa la cantidad de letras a considerar ";
	cin >> nword;

	//getting the (character,frequency) list in a Node
	while (nword--)
	{
		cout << "\nIngresa el caracter y su frecuencia: char freq ";
		cin >> charac.character >> charac.frequency;
		mm_mmRealList.insert(make_pair(charac.frequency, charac));
	}

	//printing the list
	i_mmRealList = mm_mmRealList.begin();
	while (i_mmRealList != mm_mmRealList.end())
	{
		cout << endl <<i_mmRealList->second.character << "," << i_mmRealList->first<<endl;
		i_mmRealList++;
	}
}


int main()
{
	fillList();
	system("pause");
	return 0;
}