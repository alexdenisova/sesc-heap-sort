run: heap
	./heap

heap: heap.c
	gcc -Wall -std=c11 heap.c -o heap

build: heap
