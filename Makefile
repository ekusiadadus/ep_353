.phony:

build:
	@echo "Building..."
	@g++ -Wall -Wextra -Wpedantic -std=c++23 -o main main.cpp