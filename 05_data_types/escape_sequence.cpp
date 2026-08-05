#include <iostream>

int main(){
    std::cout<<"-----------------------ESCAPE SEQUENCE----------------------------\n";
    //Escape sequence is sequence of characters having special meaning. they start with '\' Symbol
    //Eg. \n for newline, \t for horizontal tab, \v for vertical tab

    std::cout<<"Choose an Escape sequence to see it in action:\n";
    std::cout<< "1. \\a (Alert/Beep)\n";
    std::cout<< "2. \\n (Newline)\n";
    std::cout<< "3. \\t (Horizontal Tab), \\v (Vertical Tab)\n";
    std::cout<< "4. \\b (Backspace)\n";
    std::cout<< "5. \\r (Carriage Return)\n";
    std::cout<< "6. \\f (Formfeed)\n";
    std::cout<< "7. \\\", \\', \\\\ , \\?(Quotes, Slashes, Question mark)\n";

    int choice{};
    std::cout<<"\nEnter your choice: ";
    std::cin>> choice;

    if (choice == 1){
        std::cout<<"\\a produce an alert/beep sound\n\aBeep....";   //to hear the soung open the exe in cmd, as most IDEs block sound
    } else if (choice == 2){
        std::cout<<"\\n pulls the cursor all the way back to the left edge of the screen .Eg.\nA\nB\nC\n";
    } else if (choice == 3){
        std::cout<<"\\t produces horizontal tab. Eg.\nName\tID\tScore\tRank\n";
        std::cout<<"\\v moves the cursor straight down to the next line. It does not pull the cursor back to the left edge. Eg.\nHello\vWorld\vHow are\vyou?";
    } else if (choice == 4){
        std::cout<<"\\b moves the cursor back one space, so the next character overwrites\n";
        std::cout<<"printing C+-, \\b encounterd,so going back one space and overwriting the - with +\n";
        std::cout << "Let's fix a typo: C+-\b+\n";
    } else if (choice == 5){
        std::cout<<"\\r moves the cursor to the start of the CURRENT line, overwriting what was there\n";
        //It prints the first part, goes to the very beginning of the line, and overwrites it.
        std::cout << "Loading 10%...\rLoading 20%...\rLoading 50%...\rLoading 100%\n";
    } else if (choice == 6){
        std::cout<<"\\f moves the cursor to the next logical page.\n";
        std::cout << "End of Page 1\fStart of Page 2\n";
        std::cout << "(Note: Modern screens don't have 'pages' like old printers did, so it might give a weird symbol here!)\n";
    } else if (choice == 7){
        std::cout<<"\\\" produces one double qoute(\")\n\\' produces one single quote(\')\n\\\\ produces one backlash(\\)\n\\? produces one question mark(\?)\n";
    }else {
        std::cout<<"Choose an integer from 1 to 7\n";
    } 
    
    return 0;
}