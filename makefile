.PHONY: build

build_main:
	./generate_sources.exe
	g++ main.cpp $(shell type sources.txt) -o ./build/main -I./include
	./build/main

build_generator:
	g++ ./utils/generate_sources.cpp -o generate_sources.exe

boilerplate_generator:
	g++ ./utils/boilerplate.cpp -o template.exe

build_all: build_main build_generator