#include<iostream>
#include<stdio.h>
using namespace std;
int sayac=0;
char dizi[]={'1','2','3','4','5','6','7','8','9'};
bool kazanan=false;
void goster(char dizi_parametre[])
{
     for(int i=0;i<9;i++)
     {
             if(i%3==0)
             {
                       cout<<endl;
                       cout<<endl;
                       }
                       cout<<ends<<ends<<ends<<dizi_parametre[i]<<ends<<ends<<ends<<"|"<<ends;
                       }
                       }
bool beraberlik_mi(int s)
{
     if(s==9){
              cout<<"\n\nBeraberlik"<<endl;
              return true;
              }
              return false;
              }
              bool kontrol(char k_dizi[])
{
              if(
                 (k_dizi[0]=='X' && k_dizi[1]=='X' && k_dizi[2]=='X') ||
                 (k_dizi[0]=='X' && k_dizi[3]=='X' && k_dizi[6]=='X') ||
                 (k_dizi[3]=='X' && k_dizi[4]=='X' && k_dizi[5]=='X') ||
                 (k_dizi[1]=='X' && k_dizi[4]=='X' && k_dizi[7]=='X') ||
                 (k_dizi[8]=='X' && k_dizi[7]=='X' && k_dizi[6]=='X') ||
                 (k_dizi[8]=='X' && k_dizi[5]=='X' && k_dizi[2]=='X') ||
                 (k_dizi[0]=='X' && k_dizi[4]=='X' && k_dizi[8]=='X') ||
                 (k_dizi[2]=='X' && k_dizi[4]=='X' && k_dizi[6]=='X') 
                 ) return true;
                 else if (
                          (k_dizi[0]=='O' && k_dizi[1]=='O' && k_dizi[2]=='O') ||
                          (k_dizi[0]=='O' && k_dizi[3]=='O' && k_dizi[6]=='O') ||
                          (k_dizi[3]=='O' && k_dizi[4]=='O' && k_dizi[5]=='O') ||
                          (k_dizi[1]=='O' && k_dizi[4]=='O' && k_dizi[7]=='O') ||
                          (k_dizi[8]=='O' && k_dizi[7]=='O' && k_dizi[6]=='O') ||
                          (k_dizi[8]=='O' && k_dizi[5]=='O' && k_dizi[2]=='O') ||
                          (k_dizi[0]=='O' && k_dizi[4]=='O' && k_dizi[8]=='O') ||
                          (k_dizi[2]=='O' && k_dizi[4]=='O' && k_dizi[6]=='O')
                          ) return true;
                          else return false;
}
void oyun_sifirla(){
     sayac = 0;
     kazanan = false;
     char i;
     int j;
     for(i='1',j=0;i<='9',j<9;i++,j++){
         dizi[j] = i;
         }
         }
int main()
{
    int b_sayi,i_sayi;
    do 
    { 
        goster(dizi);
        while (!kazanan)
        {
              while (true)
              {
                    cout<<endl<<"\n\nSira BIRINCI (X) oyuncuda:"<<ends;
                    cin>>b_sayi;
                    if(dizi[b_sayi-1]=='X' or dizi[b_sayi-1]=='O' or b_sayi>9 or
b_sayi<1)
                    {
                   cout<<"\nOynandi ve a gecersiz hamle. Baska bir sayi deneyin\n";
                   continue;
                   }
                   dizi[b_sayi-1]='X';
                   sayac++;
                   goster(dizi);
                   if(kontrol(dizi))
                   {
                                    cout<<"\n\nBirinci oyuncu (X) kazandi\n";
                                    kazanan=true;
                                    }
                                    break;
                                    }
                                    if(beraberlik_mi(sayac))
                                    break;
                                    if(kazanan) break;
                                    while (true)
                                    {
                                          cout<<endl<<"\n\nSira IKINCI (O) oyuncuda:"<<ends;
                                          cin>>i_sayi;
                                          if(dizi[i_sayi-1]=='X' or dizi[i_sayi-1]=='O' or
i_sayi>9 or i_sayi<1)
                                          {
                                               cout<<endl<<"\nOynandi veya gecersiz hamle. Baskabir sayi deneyin\n";
                                 continue;
                                 }
                                 dizi[i_sayi-1]='O';
                                 sayac++;
                                 goster(dizi);
                                 if (kontrol(dizi))
                                 {
                                            cout<<"\n\nIkinci oyuncu (O) kazandi\n";
                                            kazanan=true;
                                            }
                                  break;
                                  }
                                  if (beraberlik_mi(sayac))
                                      break;
                                  if (kazanan) break;
                                  }
                                  oyun_sifirla();
                                  cout<<"\nOyun Tekrar Basliyor..."<<"\n_______________";
                                  cout<<endl<<endl<<endl;
                                  continue;
                                  } while(true);
                                  return 0;
                                  }                                                                                           
