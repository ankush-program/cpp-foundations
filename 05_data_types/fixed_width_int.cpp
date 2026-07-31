#include <iostream>
#include <cstdint>  //for fixed-width/fast/least integer types
#include <cstddef>  //for std::size_t

int main(){
    //---------------------FIXED WIDTH INTEGER TYPES------------------------
    // These have fixed size on all systems, all computers
        //Signed fixed width integer types
        std::int8_t x{};         // int8_t has a fixed size of 8 bits
        std::int16_t y{};        // int16_t has a fixed size of 16 bits
        std::int32_t z{};        // int32_t has a fixed size of 32 bits
        std::int64_t a{};        // int64_t has a fixed size of 64 bits

        //Unsigned fixed width integers
        std::uint8_t x2{};         // uint8_t has a fixed size of 8 bits
        std::uint16_t y2{};        // uint16_t has a fixed size of 16 bits
        std::uint32_t z2{};        // uint32_t has a fixed size of 32 bits
        std::uint64_t a2{};        // uint64_t has a fixed size of 64 bits

        // Here int32_t type is used to store the size of int16_t type
        std::cout<<"Size of int16_t is: " << std::int32_t{ sizeof(int16_t) }<<'\n'; 

    //------------------------FAST INTEGER TYPES-----------------------------
    // int_fast#_t ------ These uses fastest type of atleast # bits
        //Signed fast integer types
        std::int_fast8_t b{};         // int_fast8_t uses fastest type of atleast 8 bits
        std::int_fast16_t c{};        // int_fast16_t uses fastest type of atleast 16 bits
        std::int_fast32_t d{};        // int_fast32_t uses fastest type of atleast 32 bits
        std::int_fast64_t e{};        // int_fast64_t uses fastest type of atleast 64 bits

        //Unsigned fast integer types
        std::uint_fast8_t b2{};         // uint_fast8_t uses fastest type of atleast 8 bits
        std::uint_fast16_t c2{};        // uint_fast16_t uses fastest type of atleast 16 bits
        std::uint_fast32_t d2{};        // uint_fast32_t uses fastest type of atleast 32 bits
        std::uint_fast64_t e2{};        // uint_fast64_t uses fastest type of atleast 64 bits

        //int_fast16_t uses fastest type of atleast 16 bits
        std::cout<<"Size of int_fast32_t is: "<<std::int_fast64_t{ sizeof(int_fast32_t) }<<'\n'; 

    //------------------------LEAST INTEGER TYPES-----------------------------
    //int_least#_t ------ These uses smallest type of atleast # bits possible on the system
        //Signed least integer types
        std::int_least8_t f{};       // int_least8_t uses smallest type of atleast 8 bits possible on the system
        std::int_least16_t g{};      // int_least16_t uses smallest type of atleast 16 bits possible on the system
        std::int_least32_t h{};      // int_least32_t uses smallest type of atleast 32 bits possible on the system
        std::int_least64_t i{};      // int_least64_t uses smallest type of atleast 64 bits possible on the system
    
        //Unsigned least integer types
        std::uint_least8_t f2{};       // uint_least8_t uses smallest type of atleast 8 bits possible on the system
        std::uint_least16_t g2{};      // uint_least16_t uses smallest type of atleast 16 bits possible on the system
        std::uint_least32_t h2{};      // uint_least32_t uses smallest type of atleast 32 bits possible on the system
        std::uint_least64_t i2{};      // uint_least64_t uses smallest type of atleast 64 bits possible on the system
    
        std::cout<<"Size of int_least16_t is: "<< std::int_least16_t{ sizeof(int_least16_t) }<<'\n';


    // these are not new data types, they use data types from int,long,short,long long 
    // these are just new names with constraints
    // 8 Bit sized integer data types are treated as char, so it may output misbehavely

    // sizeof( ) stores data in size_t datatype
    // size_t type is an unsigned integral type that can hold the size of the largest object the system can handle
    size_t x3{7};
    std::cout<<"Size of size_t is: "<<sizeof(x3);
    return 0;
}
