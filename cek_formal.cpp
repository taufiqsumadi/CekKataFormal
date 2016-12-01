#include <stdio.h> 
#include <iostream>
#include <string.h>
#include <ctype.h>
#include <fstream>
#include <conio.h>

using namespace std;

void cetak_ori()
{
	cout<<"\nOriginal text: ";	
}
void cetak_sugest()
{
	cout<<"\nSugestion: ";	
}


int main(void) 
{ 
	char formal[50]; 
	string ch;
	string kata;
	int i,n, found=0, baris=0;
	FILE *fpdf;
	 
	//untuk membuka file
	ifstream fpd ("kamus.txt");
	fpdf=fopen("formal.txt","r");
	ifstream fp ("id.po"); 
	
	//cek file ada atau tidak
	if(fp==NULL)
	{ 
		cout<<"File tidak ditemukan\n";   
		return(1);
	} 
	if(fpd==NULL)
	{ 
		cout<<"File tidak ditemukan\n";
		return(1);
	}
	if(fpdf==NULL)
	{ 
		cout<<"File tidak ditemukan\n";
		return(1);
	}  
	
	//looping untuk mengambil data dari kamus dan memindahkan ke dalam array
	while(fpd.good())
	{
		getline(fpd,kata);
	}
	
	//looping untuk mengambil data dari formal dan memindahkan ke dalam array
	while(!feof(fpdf))
	{
		fgets(formal,50,fpdf);
	}
	
	//looping untuk mengambil data dari dataku dan memindahkan ke dalam array
	while(fp.good())
	{ 
		//mengambil seluruh data yang ada didalam file
		getline(fp,ch);
		baris++;
		
		//membandingkan data dengan kata yang sedang dicari
		for(i=0; i<=ch.length(); i++)
		{
			if(tolower(ch[i])==tolower(kata[0])&&tolower(ch[i+1])==tolower(kata[1])&&tolower(ch[i+2])==tolower(kata[2]))
			{
				if(ch[i]==ch[0])
				{
					cout<<"\non line: "<<baris;
					cetak_ori();
					found+=1;
					cout<<ch;
					cetak_sugest();
					cout<<"kata formal dari '"<<kata<<"' adalah '"<<formal<<"'";
				}
				else if(ch[i-1]==32&&ch[i+3]==32)
				{
					cout<<"\non line: "<<baris;
					cetak_ori();
					found+=1;
					cout<<ch;
					cetak_sugest();
					cout<<"kata formal dari '"<<kata<<"' adalah '"<<formal<<"'";					
				}
				else if(ch[i-1]==32&&ch[i+3]==NULL)
				{
					cout<<"\non line: "<<baris;
					cetak_ori();
					found+=1;
					cout<<ch;
					cetak_sugest();
					cout<<"kata formal dari '"<<kata<<"' adalah '"<<formal<<"'";
				}
			}
		}	
	}
	if(found==0)
	{
		cout<<"tidak ada";
	}
	
	fp.close(); 
	fpd.close();
	fclose(fpdf);
	
	getch();
	return 0; 
}
