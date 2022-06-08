#include "project.hpp"

void _help() {
    std::cout << "Uso: ./a.out [--parametros] [numero]\n"
                 " --dec2bin Para converter decimal para binario\n"
                 " --bin2dec Para converter binario para decimal\n";
}

void dec2bin(int number) {
    auto binary_arr = std::array<int, 32>{};
    auto i = int{0};

    while (number > 0) {
        binary_arr[i] = number % 2;
        number /= 2;
        ++i;
    }

    for (auto k = i - 1; k >= 0; --k) {
        std::cout << binary_arr[k];
    }
    std::cout << '\n';
}

int bin2dec(int number) {
    auto ultimo_digito = int{}, num_dec = int{}, base = int{1};

    while (number) {
        ultimo_digito = number % 10;
        number /= 10;
        num_dec += ultimo_digito * base;
        base *= 2;
    }

    return num_dec;
}

bool check_number(char *x) {
    auto t = bool{true};

    for (auto i = 0; i < strlen(x); ++i) {
        if (!isdigit(x[i])) {
            t = false;
        }
    }

    return t;
}

void _start(int argc, char **argv) {
    if (argc > 2) {
        auto param = std::string{argv[1]};
        auto number = int{};

        if (!check_number(argv[2])) {
            _help();
            return;
        }

        if (param == "--dec2bin" || param == "-b") {
            number = int{std::stoi(argv[2])};
            dec2bin(number);
        } else if (param == "--bin2dec" || param == "-d") {
            number = int{std::stoi(argv[2])};
            std::cout << bin2dec(number) << '\n';
        } else {
            _help();
        }
    } else {
        _help();
    }
}
