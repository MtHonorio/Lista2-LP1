#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

int main(){
	ifstream arquivo;
	arquivo.open("text.txt");
		
	if(!arquivo.is_open() )
		cout<< "Falha ao abrir o arquivo";
	else
	{
		string stringPush;
		vector<string> AllStringsPush;
		
		while(!arquivo.eof())
		{
			getline(arquivo, stringPush);
		    AllStringsPush.push_back(stringPush);
		}
		
		arquivo.close();
		
		ofstream arquivoS;
		arquivoS.open("text_bkp.txt");
		
		for(auto it = AllStringsPush.begin(); it != AllStringsPush.end(); ++it)
		{
			arquivoS << *it;
			arquivoS << "\n";
		}
		
		arquivoS.close();
		
		cout<< "Copia feita com sucesso";
	}
		
	return 0;	
}