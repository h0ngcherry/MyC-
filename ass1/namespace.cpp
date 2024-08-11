// #include <iostream>

// namespace LibraryA {
//     void print() {
//         std::cout << "LibraryA::print" << std::endl;
//     }
// }

// namespace LibraryB {
//     void print() {
//         std::cout << "LibraryB::print" << std::endl;
//     }
// }

// int main() {
//     LibraryA::print(); // 调用LibraryA中的print函数
//     LibraryB::print(); // 调用LibraryB中的print函数

//     return 0;
// }


// #include <iostream>

// namespace LibraryA {
//     void print() {
//         std::cout << "LibraryA::print" << std::endl;
//     }
// }

// int main() {
//     using LibraryA::print;
    
//     print(); // 相当于 LibraryA::print()

//     return 0;
// }




namespace LibraryA {
    void print() {
        std::cout << "LibraryA::print" << std::endl;
    }
    void anotherFunction() {
        std::cout << "LibraryA::anotherFunction" << std::endl;
    }
}

int main() {
    using namespace LibraryA;
    
    print();
    anotherFunction();

    return 0;
}