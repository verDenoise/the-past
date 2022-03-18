#ifndef __TMUSIC_H
#define __TMUSIC_H

#include <iostream>
#include <stdlib.h>
#include <conio.h>
//---------------------------------------------------------------------------
#define  MAXNAME_K   50
#define  MAXNAME_M   100
#define  ERR_NO        0    //���������� ����������
#define  ERR_YES       1    //���������  ����������
//---------------------------------------------------------------------------
#define  t_uc       unsigned char
#define  t_usi      unsigned short int
//-----------------------����---------------------------------------------------
#define  ganr_no       0      //�� ���������
#define  ganr_klassic  1      //��������
#define  ganr_popsa    2      //�����
#define  ganr_rok      3      //���
//---------------------------------------------------------------------------
using namespace std;
//---------------------------------------------------------------------------

class TKOMPOZITION       //���������-��������� ����������� ����������
{
private:
  char  Name_Kompozitor[MAXNAME_K];      //��� �����������
  char  Name_Music[MAXNAME_M];           //�������� ����������
  t_usi minute;                          //������������ ���������� � ����� �������
  t_usi ganr;                            //���� ������������
  static int Count_Komp;               //�������� ����� ������������ � ������ ������ ����������� ������
  t_usi Err;                             //��� ����������
public:
  TKOMPOZITION();			//����������� �� ���������
  TKOMPOZITION(char *_Name_Kompozitor, char *_Name_Music, t_usi _minute, t_usi _ganr);
  TKOMPOZITION(TKOMPOZITION &_komp); 	//����������� �����������
  TKOMPOZITION(float _minute);		//����������� ��������������
 ~TKOMPOZITION();			//����������
//  ������, ���������� �������� ��������� ����� ������
void Put_Name_Kompozitor(char *_Name_Kompozitor);
void Put_Name_Music(char *_Name_Music);
void Put_Minute(t_usi _minute){minute = _minute;};
void Put_Ganr(t_usi _ganr){ganr = _ganr;};
void Put_Err(t_usi _Err){Err = _Err;};

//  ������, ������������ �������� ��������� ����� ������
char *Get_Name_Kompozitor(void) {return Name_Kompozitor;};
char *Get_Name_Music(void) {return Name_Music;};
t_usi Get_Minute(void) const {return minute;};
t_usi Get_Ganr(void)const {return ganr;};
t_usi Get_Err(void)const {return Err;};
int   Get_Count_Komp(void)const {return Count_Komp;};

//  ������������� �����, �������������� �����
friend ostream &operator << (ostream &stream, TKOMPOZITION &obj);
};


#endif