#include "TMusic.h"
//---------------------------------------------------------------------------
#pragma hdrstop
#pragma argsused
//---------------------------------------------------------------------------

int main(int argc, char* argv[])
{
TKOMPOZITION k1;			//конструктор по умолчанию

cout << endl << "Konstructor po umol4aniju:" << endl;
cout << k1;  getch();

cout << endl << "Konstructor s parametrami:" << endl;
char _Name_Kompozitor[MAXNAME_K];
char _Name_Music[MAXNAME_M];

int    i,kod_op,MxNum_Komp, _Num_Komp, Count_Comp;
t_usi _minute;
t_usi _ganr;

     cout << endl << " Vvod kompozicii: ";
     for(int i=0; i<MAXNAME_K; i++)_Name_Kompozitor[i]='\0';
     for(int i=0; i<MAXNAME_M; i++)_Name_Music[i]='\0';
     cout << endl << "Avtor: " ; cin >> _Name_Kompozitor;
     cout << endl << "Nazvanie: " ; cin >> _Name_Music;
     cout << endl << "Dlitelnost: "; cin >>_minute;

     cout << endl << "ganr: ";
     cout << endl << ganr_no << ": ganr ne zadan";
     cout << endl << ganr_klassic << ": klassika";
     cout << endl << ganr_popsa << ": popsa";
     cout << endl << ganr_rok << ": rok" << endl;
     cin >>_ganr;
TKOMPOZITION k2(_Name_Kompozitor, _Name_Music, _minute, _ganr);
cout << k2;  getch();

cout << endl << "Konstructor copy:" << endl;
//TKOMPOZITION k3 = k2;
TKOMPOZITION k3(k2);
cout << k3;  getch();

cout << endl << "Konstructor preobraz:" << endl;
float _d;  cout << endl << "Dlitelnost: "; cin >>_d;
TKOMPOZITION k4 = _d;
cout << k4;  getch();

cout << endl << "Create albom: ";
   do
   {
      cout << endl << "Max cislo kompozicij v albome: "; cin >> MxNum_Komp;
   }while(MxNum_Komp < 0 || MxNum_Komp > 1000);
TKOMPOZITION *albom = NULL;
   albom  = new TKOMPOZITION[MxNum_Komp];
   if(albom == NULL){
      cout << endl << "Error memory array <albom>";
      getch();
      return -1;
   }
   cout << endl << "Vvod kompozicii v albom: ";
   for(int i=0; i<MxNum_Komp; i++){
       for(int i=0; i<MAXNAME_K; i++)_Name_Kompozitor[i]='\0';
       for(int i=0; i<MAXNAME_M; i++)_Name_Music[i]='\0';
       cout << endl << "Avtor: " ; cin >> _Name_Kompozitor;
       cout << endl << "Nazvanie: " ; cin >> _Name_Music;
       cout << endl << "Dlitelnost: "; cin >>_minute;

       cout << endl << "ganr: ";
       cout << endl << ganr_no << ": ganr ne zadan";
       cout << endl << ganr_klassic << ": klassika";
       cout << endl << ganr_popsa << ": popsa";
       cout << endl << ganr_rok << ": rok" << endl;
       cin >>_ganr;
       albom[i].Put_Name_Kompozitor(_Name_Kompozitor);
       albom[i].Put_Name_Music(_Name_Music);
       albom[i].Put_Minute(_minute);
       albom[i].Put_Ganr(_ganr);
       cout << albom[i];  getch();
       cout << endl << "=========================";
   }




/*
//          Init_Kompozition(albom, MxNum_Komp, _Name_Kompozitor, _Name_Music,
//                           _minute, _ganr);
          break;
       case 2:
//          Print_Albom(albom);
          break;
       case 3:
          do
          {
             cout << endl << "Vvod number kompozition (s 1): " ; cin >> _Num_Komp;
          }while(_Num_Komp < 1 || _Num_Komp > Count_Komp);
          _Num_Komp--;
//          Print_Kompozition(albom,_Num_Komp);
          break;
       case 4:
          if(albom != NULL){delete[] albom; albom = NULL;}
          return 0;                                   //exit(EXIT_SUCCESS);
     }
   }

//TKOMPOZITION *albom = NULL;


   while(1){
     do
     {
       cout << endl << "1. Vvod kompozicii v albom: ";
       cout << endl << "2. Print alboma: ";
       cout << endl << "3. Print zadannoj kompozicii v albome: ";
       cout << endl << "4. Exit: " << endl;
       cin >> kod_op;
     }while(kod_op < 1 || kod_op > 4);
     switch(kod_op){
       case 1:
           if(albomGet_Count_Komp  Count_Komp >= MxNum_Komp){
              cout << endl << "Perepolnen array komp";
              break;
           }
          for(int i=0; i<MAXNAME_K; i++)_Name_Kompozitor[i]='\0';
          for(int i=0; i<MAXNAME_M; i++)_Name_Music[i]='\0';
          cout << endl << "Avtor: " ; cin >> _Name_Kompozitor;
          cout << endl << "Nazvanie: " ; cin >> _Name_Music;
          cout << endl << "Dlitelnost: "; cin >>_minute;

          cout << endl << "ganr: ";
          cout << endl << ganr_no << ": ganr ne zadan";
          cout << endl << ganr_klassic << ": klassika";
          cout << endl << ganr_popsa << ": popsa";
          cout << endl << ganr_rok << ": rok" << endl;
          cin >>_ganr;
          Init_Kompozition(albom, MxNum_Komp, _Name_Kompozitor, _Name_Music,
                           _minute, _ganr);
          break;
       case 2:
          Print_Albom(albom);
          break;
       case 3:
          do
          {
             cout << endl << "Vvod number kompozition (s 1): " ; cin >> _Num_Komp;
          }while(_Num_Komp < 1 || _Num_Komp > Count_Komp);
          _Num_Komp--;
          Print_Kompozition(albom,_Num_Komp);
          break;
       case 4:
          if(albom != NULL){delete[] albom; albom = NULL;}
          return 0;                                   //exit(EXIT_SUCCESS);
     }
   }
*/
   return 0;
}

//	return 0;
//}
//---------------------------------------------------------------------------
