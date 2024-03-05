#ifndef  TXT_TABLE_H
#define  TXT_TABLE_H

#include "table.h"
#include <string>
using std::string;

class TxtTable : public Table {
	string repeat_char(int n, char c);

	// 숫자로 된 열 번호를 A, B, ... Z, AA, AB, 이런 순으로 매겨준다.
	string col_num_to_str(int n);

public:
	TxtTable(int row, int col);

	// 텍스트로 표를 깨끗하게 출력한다.
	string print_table();
};

#endif
