# Makefile 예제

# 컴파일러 설정
CC = g++
# 컴파일 옵션 설정
CFLAGS = -std=c++11 -Wall

# 빌드할 대상 설정
TARGET = my_program

# 소스 파일 및 헤더 파일 설정
SRCS = main.cpp
HEADERS = CSerial.h

# 빌드 규칙 설정
$(TARGET): $(SRCS:.cpp=.o)
	$(CC) $(CFLAGS) -o $@ $^

# 각 소스 파일을 컴파일하여 object 파일 생성
%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $<

# "make clean" 명령어를 사용하여 생성된 파일 제거
clean:
	rm -f $(TARGET) $(SRCS:.cpp=.o)
