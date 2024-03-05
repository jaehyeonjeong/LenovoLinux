#include <iostream>
#include "libxl.h"

using namespace libxl;

void writeToExcel(const Matrix& data, const std::string& fileName) {
    Book* book = xlCreateBook();
    if (book) {
        Sheet* sheet = book->addSheet("Sheet1");

        for (int i = 0; i < data.size(); ++i) {
            for (int j = 0; j < data[i].size(); ++j) {
                sheet->writeNum(i + 1, j + 1, data[i][j]);
            }
        }

        book->save(fileName.c_str());
        book->release();
    }
}

void writeToTextFile(const Matrix& data, const std::string& fileName) {
    std::ofstream outFile(fileName);
    if (outFile.is_open()) {
        for (const auto& row : data) {
            for (const auto& cell : row) {
                outFile << cell << '\t';  // 탭으로 열 구분
            }
            outFile << '\n';
        }
        outFile.close();
    }
}

void printMatrix(const Matrix& data) {
    for (const auto& row : data) {
        for (const auto& cell : row) {
            std::cout << cell << '\t';
        }
        std::cout << '\n';
    }
}

int main() {
    // 예제 데이터를 행렬에 입력
    Matrix data = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // 행렬 출력
    std::cout << "Matrix:\n";
    printMatrix(data);

    // 텍스트 파일에 저장
    writeToTextFile(data, "output.txt");
    std::cout << "Text file 'output.txt' created.\n";

    // Excel 파일에 저장
    writeToExcel(data, "output.xls");
    std::cout << "Excel file 'output.xls' created.\n";

    return 0;
}

