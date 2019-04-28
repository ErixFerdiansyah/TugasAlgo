#include<stdlib.h>
#include<iostream>
#include<math.h>
using namespace std;
main()
{
int cari,ketemu,ubah,ok,erik,pap[10],hapus=0;
bool kondisi=0;

    cout<<"\n------- INSERT DATA -------"<<endl<<endl;
	cout<<"Masukkan jumlah data : ";
	cin>>ok;
        for(int i=0;i<ok;i++)
        {cout<<"Data Ke-" << i + 1 << " : "; cin>>pap[i];}
        for(int i=ok-2;i>=0;i--)
        {
            for(int z=0;z<=i;z++)
            {if(pap[z]>pap[z+1])
                {erik=pap[z];
                 pap[z]=pap[z+1];
                 pap[z+1]=erik;
            }}
            system("CLS");
        }
        cout<<"------- SORTING -------"<<endl;
        for(int i=0;i<ok;i++){cout<<"\nData Ke-"<<i+1<<" = "<<pap[i];}
	cout<<"\n\n------- SEARCHING DATA -------"<<endl;
	cout<<"\nMasukkan Nilai Data Yang Dicari = "; cin>>cari;
	for (int y = 0; y<ok; y++)
	{if (cari == pap[y])
        {kondisi=true; kondisi++;
         if(kondisi==1)
            {cout<<"\nNilai " << cari << " Terdapat pada index Ke- " << y+1 <<endl;
             ketemu = 1;
        }}
	}
	if (ketemu == 0) cout<<"Maaf Data Yang Anda Cari Tidak Ditemukan!";
	cout<<"\n------- HAPUS DATA -------\n";
	cout<<"\nNilai Yang Akan Dihapus = ";
	cin>>hapus;
	for (int a = 0; a < ok; a++)
	{if (hapus == pap[a])
		{for (int o = a; o < ok; o++)
         {pap[o]= pap[o + 1];}
          ok-= 1;
		}}
	cout<<"\n\nData Baru :";
	for (int x = 0; x<ok; x++)
	{cout<<"\nData Ke-" << x+1 << " = " <<pap[x];}
	cout<<"\n\n------- EDIT DATA -------"<<endl;
	cout<<"\nNilai Yang Diedit = "; cin>>ubah;
	for (int v = 0; v<ok; v++)
	{if (pap[v] == ubah)
		{cout<<"Nilai Baru = "; cin>>pap[v];}
	}
	for(int i=ok-2;i>=0;i--)
    {
        for(int k=0;k<=i;k++)
        {if(pap[k]>pap[k+1])
         {erik=pap[k];
            pap[k]=pap[k+1];
            pap[k+1]=erik;
        }}
    }
    cout<<"\nNilai Setelah Diedit = ";
    for(int g=0;g<ok;g++){cout<<"\nData Ke-"<<g+1<<" ="<<pap[g];}
}

