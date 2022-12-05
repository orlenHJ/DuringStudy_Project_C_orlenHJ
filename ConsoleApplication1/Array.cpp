
/*

#include "KU.h"
#include<stdlib.h>
//typedef struct {
//	int* array;
//	int size;
//
//}Array;

Array array_create(int init_size)
{
	Array a;
	a.size = init_size;
	a.array = (int*)malloc(sizeof(int) * a.size);
	return a;
}

void array_free(Array* a) {
	free(a->array);
	a->array = NULL;
	a->size = 0;


}
//封装  而不用printf方便实现细节保存
int array_size(const Array* a) {
	return a->size;
}

int* array_at(Array* a, int index) {
	return &(a->array[index]);
}

Array array_creat(int init_size);
void array_free(Array* a);
int array_size(const Array* a);
int* array_at(Array* a, int index);
void array_inflate(Array* a, int more_size);

int main(int argc, char const* argv[]) {
	Array a = array_create(100);
	array_free(&a);

	return 0;
}*/