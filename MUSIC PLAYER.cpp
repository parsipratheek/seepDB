#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void slowPrint(string text, int delay = 60)
{
    for (char c : text)
    {
        cout << c;
        Sleep(delay);
    }
    cout << endl;
}

void slowPrintLine(string text, int delay = 1000)
{
    cout << text;
    Sleep(delay);
    cout << endl;
}

void showTeluguPlaylist()
{

    cout << "Telugu Playlist: \n";
    cout << "1.'Emitemitemo' from Arjun Reddy\n";
    cout << "2.'Arerey Manasa' from Falaknama Das\n";
    cout << "3.'Apudo Ipudo' from Bommarillu\n";
    cout << "4.'Diyalo Diyala'from 100% love\n";
    cout << "\nIf You Want Another Songs Search In This Link: https://www.youtube.com/";
}
void showHindiPlaylist()
{
    int showHindiPlaylist;
    cout << "Hindi Playlist: \n";
    cout << "1.'Masakali' from Delhi-6\n";
    cout << "2.'Bulleya'from sultan\n";
    cout << "3.'Barso Re'from guru\n";
    cout << "4.'Kun Faya Kun'from rockstar\n";
    cout << "\nIf You Want Another Songs Search In This Link: https://www.youtube.com/";
}
void showEnglishPlaylist()
{
    int showEnglishPlaylist;
    cout << "1.'Shape of You'\n";
    cout << "2.'I Wanna Be Yours'\n";
    cout << "3.'Summertime Sadness'\n";
    cout << "\nIf You Want Another Songs Search In This Link: https://www.youtube.com/";
}

int main()
{
    int choice, n, n1, n2;

    cout << "Enter your music language\n";
    cout << "1. Telugu\n";
    cout << "2. Hindi\n";
    cout << "3. English\n";
    cout << "\nEnter your choice (1-3): ";
    cin >> choice;

    if (choice == 1)
    {
        showTeluguPlaylist();
        cout << "\nEnter Your Song Number:";
        cin >> n;
        cout << "Here Is Your Link";
        if (n == 1)
            cout << "https://youtu.be/YN6VmFiTLrw?si=XxMuKrLHW6LRdP--";
            slowPrintLine("\nLyrics:\n", 1000);
            slowPrint("Emitemitemo Em Avtunnadhoo", 80);
            slowPrint("Etavaalu Daarilo Jaaredhi Dekkadikoo", 80);
            slowPrint("Emitemitemo Em Kaanunnadho", 80);
            slowPrint("Erulaanti Vayasuloo Chere Dethatiko", 80);
            slowPrint("Telusaa..Telusaa..Nekainaa", 80);
            slowPrint("Telusa..Telusaa..Mari..Nakainaa", 80);
            slowPrint("Ayinaa..Adugulu Aagenaa", 80);
            slowPrint("Veladham..Edemainaa", 80);
            slowPrint("Eduruga Nuvu Nilabadu nimushaana", 80);
            slowPrint("Edigina Prathi Kshanamunu Marichaanaa", 80);
            slowPrint("Tholi Tharagathi Thalupulu Therichaanaa", 80);
            slowPrint("Nijamaa…Nijamaaaaa", 80);
            slowPrint("Nee Raakathoo.. Naa Raathaloo", 80);
            slowPrint("Okkarojulone Enenni Marayalaa", 80);
            slowPrint("Aa Ningine Naa Lekhagaa", 80);
            slowPrint("Marchukunna Chaladhemo Avanni nen Rayalante", 80);
            slowPrint("Chebuthaaaa.. Anni Nee Thonaaa", 80);
            slowPrint("Chebuthaaa… Roju Mari Rathrainaaa", 80);
            slowPrint("Ayinaa… Kaburulu..Mugisenaa", 80);
            slowPrint("Kalalo..malli raanaaa", 80);
            slowPrint("Eduruga Nuvu Nilabadu nimushaana", 80);
            slowPrint("Edigina Prathi Kshanamunu Marichaanaa", 80);
            slowPrint("Tholi Tharagathi Thalupulu Therichaanaa", 80);
            slowPrint("Nijamaa…Nijamaaaaa", 80);
        else if (n == 2)
            cout << "https://youtu.be/pb1NL71uFBs?si=MuBJTvqFVyThtAlh";
        else if (n == 3)
            cout << "https://youtu.be/A_0WRVecgGU?si=Gooz0zuGtGUWQg5G";
        else
            cout << "https://youtu.be/4EIEaxq3pfE?si=KZqyHMDGNCECPNpu";
    }
    else if (choice == 2)
    {
        showHindiPlaylist();
        cout << "\nEnter Your Song Number:";
        cin >> n1;
        if (n == 1)
            cout << "https://youtu.be/SS3lIQdKP-A?si=BwHZmRVcJ2tYbkfq";
        else if (n == 2)
            cout << "https://youtu.be/a9Hxkc9YxGE?si=08Q-oP3f_nvpNSUZ";
        else if (n == 3)
            cout << "https://youtu.be/asw-wTDzGUQ?si=jbhUA1DPEVlMl03_";
        else
            cout << "https://www.youtube.com/watch?v=_fmA1RoHbzA";
    }

    else if (choice == 3)
    {
        showEnglishPlaylist();
        cout << "\nEnter Your Song Number:";
        cin >> n2;
        if (n == 1)
            cout << "https://www.youtube.com/watch?v=JGwWNGJdvx8";
        else if (n == 2)
            cout << "https://youtu.be/fukGbiPuBjU?si=R9HLhcNzofKZ8Qwy";
        else
            cout << "https://youtu.be/TdrL3QxjyVw?si=AFQQdQuzftA12mp4";
    }
    else
    {
        cout << "Invalid language entered. Please enter telugu, hindi, or english.\n";
    }

    return 0;

}

