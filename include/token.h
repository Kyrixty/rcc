#ifndef RCC_TOKEN_H
#define RCC_TOKEN_H

typedef enum token_type
{
    LPAREN,
    RPAREN,
    INT_LIT,
    STR_LIT,
} token_type_t;

typedef struct 
{
    token_type_t    type;
    char*           view;
    size_t          line;
    size_t          col;

} token;

#endif