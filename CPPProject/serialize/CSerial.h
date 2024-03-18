#include "stdafx.h"

class CSerial : public CObject {	// CObject 파생

public:
	DECLARE_SERIAL(CSerial)		// 매크로 사용

	int a;
	int b;
	int c;

	CSerail() {};			// 인수없는 생성자 정의
	
	void Serialize(CArchive &ar);	// Serial 맴버함수 재정의
};


