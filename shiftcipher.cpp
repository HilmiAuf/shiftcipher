/*
Nama        : Muhammad Hilmi Aufarahman
NPM         : 140810190062
Kelas       : Kriptografi A
Deskripsi   : Enkripsi Deskripsi Shift Chiper
*/

#include<iostream>
#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;

string enkripsiText(string plainText, int key){
	string chiperText = "";

	for(int i=0;i<plainText.length();i++){
		if(isupper(plainText[i]))
			chiperText += char((int(plainText[i] + key - 65) % 26) + 65);

		else
			chiperText += char((int(plainText[i] + key - 97) % 26) + 97);

	}

	return chiperText;
}

string dekripsiText(string chiperText, int key) {
	string plainText = "";

	for(int i=0;i<chiperText.length();i++){
		if(isupper(chiperText[i]))
			plainText += char((int(chiperText[i] - key - 65) % 26) + 65);

		else
			plainText += char((int(chiperText[i] - key - 97) % 26) + 97);

	}

	return plainText;
}

main(){
    mulai:
	string plainText;
    string pilih;
    int key;

	cout << " ===[Selamat datang diProgram Shift Chiper]=== \n";
	cout<<"Masukkan Kalimat yang diinginkan: ";
	cin>>plainText;
	cout<<"Silahkan masukkan Key: ";
	cin>>key;

	string chiperText= enkripsiText(plainText, key);
	cout<<"Hasil Enkripsi: "<<chiperText<<endl;
	
	cout<<"Hasil Deskripsi: "<<dekripsiText(chiperText, key)<<endl;

    cout<<"Apakah ingin mencoba kalimat yang lain ? (Y/N) ";
    cin>>pilih;

    if(pilih == "Y" || pilih == "y"){
        goto mulai;
    }
    else{
        return 0;
    }
}

