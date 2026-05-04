#include<iostream>

void tprintf(const char* format) //base function
{
    std::cout << format;
}

template <typename T, typename.. Targs>
void tprintf(const char* format, T value, Targs... Frags) //recursive variadic function
{
    for( ; *format != '\0'; format++) {
        if( *format == '%') {
            std::cout << value;
            tprintf(format + 1, Frags...); //recusive call
            return;
        }
        stf::cout << *format;
    }
}

int main() {
    tprintf("% world% %\n", "Hello", '!', 123);

    return 0;
}