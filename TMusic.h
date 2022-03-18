#ifndef __TMUSIC_H
#define __TMUSIC_H

#include <iostream>
#include <stdlib.h>
#include <conio.h>
//---------------------------------------------------------------------------
#define  MAXNAME_K   50
#define  MAXNAME_M   100
#define  ERR_NO        0    //нормальное завершение
#define  ERR_YES       1    //ошибочное  завершение
//---------------------------------------------------------------------------
#define  t_uc       unsigned char
#define  t_usi      unsigned short int
//-----------------------Жанр---------------------------------------------------
#define  ganr_no       0      //не определен
#define  ganr_klassic  1      //классика
#define  ganr_popsa    2      //попса
#define  ganr_rok      3      //рок
//---------------------------------------------------------------------------
using namespace std;
//---------------------------------------------------------------------------

class TKOMPOZITION       //структура-описатель музыкальной композиции
{
private:
  char  Name_Kompozitor[MAXNAME_K];      //ФИО композитора
  char  Name_Music[MAXNAME_M];           //Название композиции
  t_usi minute;                          //Длительность композиции в целых минутах
  t_usi ganr;                            //жанр произведения
  static int Count_Komp;               //реальное число существующих в данный момент экземпляров класса
  t_usi Err;                             //код завершения
public:
  TKOMPOZITION();			//конструктор по умолчанию
  TKOMPOZITION(char *_Name_Kompozitor, char *_Name_Music, t_usi _minute, t_usi _ganr);
  TKOMPOZITION(TKOMPOZITION &_komp); 	//конструктор копирования
  TKOMPOZITION(float _minute);		//конструктор преобразования
 ~TKOMPOZITION();			//деструктор
//  Методы, изменяющие значения приватных полей класса
void Put_Name_Kompozitor(char *_Name_Kompozitor);
void Put_Name_Music(char *_Name_Music);
void Put_Minute(t_usi _minute){minute = _minute;};
void Put_Ganr(t_usi _ganr){ganr = _ganr;};
void Put_Err(t_usi _Err){Err = _Err;};

//  Методы, возвращающие значения приватных полей класса
char *Get_Name_Kompozitor(void) {return Name_Kompozitor;};
char *Get_Name_Music(void) {return Name_Music;};
t_usi Get_Minute(void) const {return minute;};
t_usi Get_Ganr(void)const {return ganr;};
t_usi Get_Err(void)const {return Err;};
int   Get_Count_Komp(void)const {return Count_Komp;};

//  Дружественный метод, обеспечивающий вывод
friend ostream &operator << (ostream &stream, TKOMPOZITION &obj);
};


#endif