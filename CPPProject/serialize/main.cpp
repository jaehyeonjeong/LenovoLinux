#include "stdafx.h"
#include "CSerial.h"
#include <iostream>

using namespace std;

IMPLEMENT_SERIAL(CSerial, CObject, 1)	// 매크로 사용

void CSerial::Serialize(CArchive &ar)
{
	CObejct::Serialize(ar);

	if(ar.lsStoring()) {
		// 저장
		ar << a << b << c;

	} else {
		// 불러오기
		ar >> a >> b >> c;

	}

}

int main() 
{	
	CSerial test1, test2;	// 테스트용 클래스 2개

	test1.a = 1000;
	test2.b = 2000;
	test3.c = 500;
	
	test2.a = 4000;
	test2.b = 2400;
	test2.c = 560;

	CFile file;
	CArchive ar(&file, CArchive::store);
	file.Open("test.txt", CFile::modeCreate|CFile::modeWrite|CFile::modeNoTruncate, NULL);

	ar << &test1 << &test2;
	ar.Flush();

	ar.Close();
	file.Close();

	CSerial* rbtest1;
	CSerail* rbtest2;

	CFile file2;
	CArchive ar2(&file2, CArchive::load);

	file2.Open("test.txt", cFile::modeRead);

	ar2 >> rbtest1 >> rbtest2;

	ar2.Close();
	file2.Close();

	delete rbtest1;
	delete rbtest2;

	return 0;
}
