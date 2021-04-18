#include <iostream>
#include <string>
#include <cstring>

using namespace std;

#define num 9
#define cliques 4

char teclado[num][cliques] = 
{
	{'\0', '\0', '\0', '\0'},
  {'a', 'b', 'c', '\0'},
	{'d', 'e', 'f', '\0'},
	{'g', 'h', 'i', '\0'},
	{'j', 'k', 'l', '\0'},
	{'m', 'n', 'o', '\0'},
	{'p', 'q', 'r', 's'},
	{'t', 'u', 'v', '\0'},
	{'w', 'x', 'y', 'z'}
};

void leitura(char letra); 

int main() 
{
	char palavra_P[50];
	string palavra;

  cout << "Digite uma palavra: " << endl;
	cin >> palavra;
	
	if(palavra.length() <= 50)
  {
		strcpy(palavra_P, palavra.c_str());

    cout << "Precione os seguintes numeros em suas respectivasquantidades de vezes para formar a palavra desejada:" << endl;
		
		for(int i = 0; palavra_P[i] != '\0'; i++)
    {
			leitura(palavra_P[i]);
		}
	} 
	else{
		cout << "Sua palavara deve ter menos que 50 caracteres" << endl;
	}
}

void leitura(char letra)
{
	for(int i = 0; i < num; i++)
  {
		for(int j = 0; j < cliques; j++)
    {
			if(teclado[i][j] == letra)
      {
				cout << "#" << i + 1 << "=" << j + 1 << endl;
			}
		}
	}
}