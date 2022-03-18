#include "TMusic.h"
int TKOMPOZITION :: Count_Komp=0;            //реальное число существующих в данный момент экземпляров класса

TKOMPOZITION :: TKOMPOZITION(char *_Name_Kompozitor, char *_Name_Music, t_usi _minute, t_usi _ganr)
{
  Err= ERR_NO;
  if(_Name_Kompozitor == NULL || _Name_Music == NULL){Err= ERR_YES; exit(EXIT_FAILURE);}
  strcpy(Name_Kompozitor,_Name_Kompozitor);
  strcpy(Name_Music,_Name_Music);
  minute = _minute;
  ganr = _ganr;
  Count_Komp++;
}

TKOMPOZITION :: TKOMPOZITION(void)
{
  Err= ERR_NO;
  for(int i=0; i<MAXNAME_K; i++) Name_Kompozitor[i]='\0';
  for(int i=0; i<MAXNAME_M; i++) Name_Music[i]='\0';
  minute = 0;
  ganr = ganr_no;
  Count_Komp++;
}

TKOMPOZITION :: TKOMPOZITION(TKOMPOZITION &_komp) 	//конструктор копирования
{
  Err= ERR_NO;
  strcpy(Name_Kompozitor,_komp.Name_Kompozitor);
  strcpy(Name_Music,_komp.Name_Music);
  minute = _komp.minute;
  ganr = _komp.ganr;
  Count_Komp++;
}

TKOMPOZITION :: TKOMPOZITION(float _minute)		//конструктор преобразования
{
  Err= ERR_NO;
  for(int i=0; i<MAXNAME_K; i++) Name_Kompozitor[i]='\0';
  for(int i=0; i<MAXNAME_M; i++) Name_Music[i]='\0';
  minute = (t_usi)(_minute + 0.5);
  ganr = ganr_no;
}

TKOMPOZITION :: ~TKOMPOZITION()			//деструктор
{
  if(Count_Komp > 0){
     Count_Komp--;
     if(Err == ERR_YES) cout << endl << "Error";
  }
}

void TKOMPOZITION :: Put_Name_Kompozitor(char *_Name_Kompozitor)
{
    strcpy(Name_Kompozitor, _Name_Kompozitor);
}
void TKOMPOZITION :: Put_Name_Music(char *_Name_Music)
{
    strcpy(Name_Music, _Name_Music);
}

//  Вывод
ostream &operator << (ostream &stream, TKOMPOZITION &obj)
{

    stream << endl << "Kompozicija number: " << obj.Count_Komp;
    stream << endl << "Avtor: " << obj.Name_Kompozitor;
    stream << endl << "Nazvanie: " << obj.Name_Music;
    stream << endl << "Dlitelnost: " << obj.minute << " minute";
    stream << endl << "Ganr: ";
    switch(obj.ganr){
      case ganr_no:       stream << "ne zadan"; break;
      case ganr_klassic:  stream << "klassika"; break;
      case ganr_popsa:    stream << "popsa"; break;
      case ganr_rok:      stream << "rok"; break;
    }
    stream << endl << "=============================";
    return stream;
}

