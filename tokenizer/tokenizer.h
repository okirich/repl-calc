#ifndef TOKENIZER_H
#define TOKENIZER_H

#include <iostream>
#include <string>
#include <string_view>
#include <vector>

enum class TokenType
{
    Number,
    Plus,
    Minus,
    Multiply,
    Divide,
    End,
    Undefined
};

struct Token
{
    TokenType type;
    std::string value;
};

class Tokenizer
{
public:
    explicit Tokenizer(std::string &&str) = delete;
    explicit Tokenizer(std::string_view sv) : input(sv), pos(0) {};
    Tokenizer(const std::string &str) : Tokenizer(std::string_view{str}) {};

private:
    Token tokenize(size_t pos) const;

    std::string_view input;
    size_t pos;
};

#endif