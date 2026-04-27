#include <stdio.h>
#include <string.h>
#include "arena.h"

typedef struct a_struct
{
    char* data;
    u64 size;
} a_struct_t;

int main() {
    arena_t* arena = arena_init(GB(1));
    char* str = ALLOC_ARRAY(arena, char, 5);
    a_struct_t* strct = ALLOC_STRUCT(arena, a_struct_t);
    u8* arr = ALLOC_ARRAY(arena, u8, MB(512));
    arr[MB(512) / 2] = 'A';
    strct->data = str;
    strct->size = 5;
    strcpy(str, "test");
    printf("%s %lu %c\n", strct->data, arena->capacity, arr[MB(512) / 2]);
    getc(stdin);
    arena_destroy(arena);
    return 0;
}