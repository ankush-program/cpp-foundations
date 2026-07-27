#include <iostream>

int main(){
    // PIPE: Standard Error (stderr - buffered)
    // clog is for background notes. It waits in computer memory until the buffer is full (or the program ends) before printing, which makes it very fast and efficient for the OS.
    std::clog<<"Loading...\n";
    std::clog<<"Printing Output...\n";

    // PIPE: Standard Output (stdout - buffered)
    // cout is for the ACTUAL product/data your program creates. 
    // Because it is on its own pipe, we can easily separate this data from the background logs when saving to a file.
    std::cout<<"Hello\n";
    std::cout<<"World!\n";

    // PIPE: Standard Error (stderr - unbuffered)
    // cerr is for emergencies. It does NOT wait in memory. 
    // It prints to the screen immediately so that if your program crashes on the very next line, you are guaranteed to see this message.
    std::cerr<<"Error...\n";


    // on normal run ( .\out_stream) of exe, all these look identical
    // by Splitting the Pipes (The Real Use Case) by .\outstream > result.txt , Standard Output PIPE routes to result.txt
    // by running .\out_stream > result.txt 2> logs.txt, Standard Output PIPE routes to result.txt, Standard Error PIPE routes to logs.txt
    return 0;
}
