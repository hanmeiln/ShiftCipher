/*
Nama Program    : Shift Cipher
Nama            : Hana Meilina Fauziyyah
NPM             : 140810180012
Kelas           : B
********************************************/

#include <iostream>
using namespace std;

void enkripsi();
void dekripsi();

main(){
    int pilih;
    bool stop;
    stop = false;

    while (!stop){
        cout<<"=============================="<<endl;
        cout<<"====S H I F T  C I P H E R===="<<endl;
        cout<<"=============================="<<endl;
        cout<<"Menu : "<<endl;
        cout<<"1. Enkripsi "<<endl;
        cout<<"2. Dekripsi "<<endl;
        cout<<"3. Exit "<<endl;
        cout<<"=============================="<<endl;
        cout<<"Masukkan pilihan menu : ";
        cin>>pilih;
        switch(pilih){
            case 1 :
			enkripsi();
			break;
            case 2 :
			dekripsi();
			break;
            case 3 :
			stop = true;
			break;
        }
        cout<<"=============================="<<endl;
        cout<<endl;
    }
    return 0;

}

void enkripsi(){
    string plaintext,ciphertext;
    int k,i;
    char p,text;
    cout<<"Masukkan pesan atau plaintext : ";
    cin.ignore(); getline (cin, plaintext);
    cout<<"Masukan jumlah pergeseran (key): ";
    cin>>k;
    ciphertext = " ";

    for(i=0;i<plaintext.length();i++){
        p = plaintext[i];
        if(isalpha(plaintext[i])){
            if(isupper(p))
                p = (p+k-65)%26 + 65;
            else
                p = (p+k-97)%26 + 97;
        }
        ciphertext = ciphertext + p;
    }

    cout<<"Hasil Ciphertext : "<<ciphertext<<endl;
}

void dekripsi(){
    string plaintext,ciphertext;
    int k,i;
    char c,text;
    cout<<"Masukkan Cipherteks : ";
    cin.ignore(); getline (cin, ciphertext);
    cout<<"Masukan jumlah pergeseran (key): ";
    cin>>k;
    plaintext = " ";

    for(i=0;i<ciphertext.length();i++){
        c = ciphertext[i];
        if(isalpha(ciphertext[i])){
            if(isupper(c))
                c = (c-k-65)%26 + 65;
            else
                c = (c-k-97)%26 + 97;
        }
        plaintext = plaintext + c;
    }

    cout<<"Hasil Plaintext : "<<plaintext<<endl;
}
