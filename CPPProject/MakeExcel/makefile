# Makefile

# 컴파일러 설정
CC = g++

# 컴파일 옵션 설정
CFLAGS = -Wall -g

# 실행 파일 이름 설정
TARGET = my_program

# 소스 파일 및 객체 파일 설정
SRCS = main.cpp txtTable.cpp utils.cpp
OBJS = $(SRCS:.cpp=.o)

# 빌드 대상 및 의존성 설정
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# 각 소스 파일에 대한 컴파일 규칙 설정
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# 정리 작업
clean:
	rm -f $(OBJS) $(TARGET)

