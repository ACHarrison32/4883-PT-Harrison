/*
Andrew Harrison
8/23/2022
Professor Griffin
10055 Hashmat the Brave Warrior
*/

#include <iostream>
#include <fstream>

using namespace std;

void openFiles(ifstream& read, ofstream& outfile);

int main()
{
    ifstream read;
    ofstream outfile;

    openFiles(read, outfile);

    int num1;
    int num2;

    while (read >> num1 >> num2)
    {
        outfile << abs(num1 - num2);
        outfile << '\n';
    }
}

void openFiles(ifstream& infile, ofstream& outfile)
{
    char inFileName[40];
    char outFileName[40];
    cout << "Enter Input File Name: ";
    cin >> inFileName;
    infile.open(inFileName); //open input file
    cout << "Enter Output File Name: ";
    cin >> outFileName;
    outfile.open(outFileName);//open output file
}