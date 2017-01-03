//
// Created by Darren Otgaar on 2017/01/03.
//

#include "hr.hpp"

int function(std::istream& input);

int main(int argc, char* argv[]) {
#ifdef FILE_INPUT
    if(argc == 1) {
        std::cerr << "hrlib input_file_name" << std::endl;
        return -1;
    }

    std::ifstream inp_stream;
    inp_stream.open(argv[1], std::ios_base::in);
    if(!inp_stream.is_open()) {
        std::cerr << "Couldn't open input file " << argv[1] << std::endl;
        return -1;
    }
#else
    auto& inp_stream = std::cin;
#endif

    return function(inp_stream);
}

int function(std::istream& input) {
    return 0;
}