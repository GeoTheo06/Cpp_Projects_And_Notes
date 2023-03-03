#include <string>
#include <iostream>
#include <fstream>

using namespace std;

//import random, re
//
//def vigenere_encrypt(msg, key) :
//	ct = ''
//	for i in range(len(msg)) :
//		kc = ord(key[i % len(key)]) - 65
//		mc = ord(msg[i]) - 65
//		ct += chr((mc + kc) % 26 + 65)
//		return ct
//
//		with open('words.txt') as f :
//	words = f.readlines()
//
//	with open('message.txt') as f :
//	message = f.read()
//
//message = re.sub(r'[^a-zA-Z0-9]', '', message.upper())
//
//key = random.choice(words)
//
//ciphertext = vigenere_encrypt(message, key)
//
//with open('ciphertext.txt', 'w') as f :
//f.write(f'{ciphertext}\n')

//ciphertextbla
//secretsecrets
//jbusiruhsidsk

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string vigenere_decrypt(string ct, string key)
{
	string pt = "";
	for (int i = 0; i < ct.length(); i++)
	{
		int kc = key[i % key.length()] - 65;
		int cc = ct[i] - 65;
		pt += ((cc - kc + 26) % 26) + 65;
	}
	return pt;
}

int main()
{
	ifstream words_file("words.txt");
	string word;
	while (getline(words_file, word))
	{
		word = word.substr(0, word.length() - 1);
		ifstream ciphertext_file("ciphertext.txt");
		string ciphertext;
		getline(ciphertext_file, ciphertext);
		string plaintext = vigenere_decrypt(ciphertext, word);
		if (plaintext.find("FLAG") != string::npos)
		{
			cout << "Key: " << word << endl;
			cout << "Plaintext: " << plaintext << endl;
		}
		return 0;
	}
}