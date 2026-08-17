#include <iostream>
#include <string>           // Required for std::string
#include <string_view>      // Required for std::string_view

//---------------------------------PASS-BY-VALUE-----------------------------------
// Passing std::string by value makes an expensive copy of the entire string. std::string_view is specifically designed to be passed by value because it is very small.
void printStringView(std::string_view sv) {
    std::cout << "Viewing: " << sv << '\n';
}

//---------------------------------DANGLING VIEW------------------------------------
std::string_view danglingFunc(){
    std::string s{"Dangling"};
    return s;
}

int main() {
    //------------------------------STD::STRING_VIEW-------------------------------
    // std::string is expensive because it owns its memory and copies data.
    // So, C++17 introduced 'std::string_view', which provides read-only access to an existing string without making any copies.

    std::string s1{ "Hello, World!" };    // The string_view just looks at "Hello, World!". No copying happens!

    // string_view can be initialized with C-style literal, string literal, string variable, string_view literal, string_view variable
    std::string_view sv1{ "Hi" };               // initialized with C-style literal

    using namespace std::string_literals;       // Required for s suffix
    std::string_view sv2 { "View Literal"s };   // using the 's' suffix for true string literals

    std::string_view sv3{ s1 };                  // initialized with string variable
    
    using namespace std::string_view_literals;  // Required for sv suffix
    std::string_view sv4 { "View Literal"sv };  // using the 'sv' suffix for true string view literals

    std::string_view sv5{ sv4 };                // initialized with string_view variable

    printStringView(sv1);

    //---------------------------------CONSTEXPR COMPATIBILITY----------------------------------
    // Because std::string uses dynamic memory allocation at runtime, it generally cannot be 'constexpr'. 
    // However, std::string_view does NOT allocate memory, making it the perfect for compile-time string constants.

    constexpr std::string_view compileTimeName { "C++ Foundation"sv };
    std::cout << "Constexpr view: " << compileTimeName << '\n';

    //----------------------------------MODIFYING THE VIEW--------------------------------------
    // We cannot change the underlying text through a std::string_view (because it is read-only).
    // However, we CAN modify the window itself by shrinking the view without affecting the underlying text.
    
    std::string_view window { "Peach" };
    std::cout << "\nOriginal view: " << window << '\n';

    // Ignore the first character
    window.remove_prefix(1); 
    std::cout << "After remove_prefix(1): " << window << '\n'; // Prints "each"

    // Ignore the last two characters
    window.remove_suffix(2); 
    std::cout << "After remove_suffix(2): " << window << '\n'; // Prints "ea"

    //---------------------------------DANGER: DANGLING VIEWS------------------------------------
    // A string_view does NOT own the string it is looking at. If the underlying string is destroyed or modified,
    // the view is left "dangling" (looking at garbage memory). Using a dangling view causes Undefined Behavior.

    std::string_view danglingView {danglingFunc()};     // string_view danglingView views the temporary of the return value(string_view) of danglingFunc()
    // Now, the temporary gets destroyed, danglingView variable sees a dangling view

    std::cout << danglingView << '\n';      // Dangling view occur here!
    // This Dangling view will not occur if the function returns a C-Style string( exist till end ) or a string_view variable which remains in scope after the function call

    danglingView = "Good";                  // Reassignment changes the view
    std::cout << danglingView << '\n';

    //-------------------------CONVERTING STD::STRING_VIEW TO STD::STRING------------------------
    // C++ intentionally disables implicit conversion from std::string_view to std::string.
    // If we need to convert a view back into a heavy std::string, we must be explicit.

    std::string_view sv { "Converting..." };
    
    std::string str1 { sv };                            // Approach 1: Explicit brace initialization
    std::string str2 { static_cast<std::string>(sv) };  // Approach 2: static_cast

    std::cout << "\nConverted back to std::string: " << str1 <<'\n'<< str2 << '\n';

    return 0;
}