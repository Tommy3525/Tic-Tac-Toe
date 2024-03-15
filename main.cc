#include <iostream> 
#include <map>
#include <string>


std::map<std::string, char> positions;

void displayBoard (const std::map<std::string, char>& positions) {

    std::cout << positions.at("1") << std::endl;
    std::cout << positions.at("2") << std::endl;
    std::cout << positions.at("3") << std::endl;
}

void updateBoard(std::map<std::string, char>& positions, std::string position, char symbol) {
    positions[position] = symbol;
    displayBoard(positions);
}

int main() {

    std::cout << "   Tic-Tac-Toe " << std::endl;
    std::cout << std::endl;

    positions.insert({"1", '1'});
    positions.insert({"2", '2'});
    positions.insert({"3", '3'});

    displayBoard(positions);

    std::string player1choice;
    std::cout << "Player 1 choose: ";
    std::cin >> player1choice;
    
    updateBoard(positions, player1choice, 'x');

    std::string player2choice;
    std::cout << "Player 2 choose: ";
    std::cin >> player2choice;
    
    updateBoard(positions, player2choice, 'o');

    return 0;
    

    /*
    char position_1 = '1'; 
    char position_3 = '3'; 
    char position_2 = '2'; 
    char position_4 = '4'; 
    char position_5 = '5'; 
    char position_6 = '6'; 
    char position_7 = '7'; 
    char position_8 = '8'; 
    char position_9 = '9'; 


    std::cout << "     |     | " << std::endl;
    std::cout << "  " << position_1 << "  " << "|" << "  " << position_2 << "  " << "|" << "  " << position_3 << "  " << std::endl;
    std::cout << "_____|_____|_____ " << std::endl;
    std::cout << "     |     | " << std::endl;
    std::cout << "  " << position_4 << "  " << "|" << "  " << position_5 << "  " << "|" << "  " << position_6 << "  " << std::endl;
    std::cout << "_____|_____|_____ " << std::endl;
    std::cout << "     |     | " << std::endl;
    std::cout << "  " << position_7 << "  " << "|" << "  " << position_8 << "  " << "|" << "  " << position_9 << "  " << std::endl;
    std::cout << "     |     | " << std::endl;



    char player1 = 'x';
    char player2 = 'o';

    std::cout << "Player 1 enter a number on the board to place an x." << std::endl;
    */

    // take playe 1 input and assign it to a position on the board using "x"
    // take player 2 input and assign it to the board using "o"
    // repeat until one player gets 3 in a row or end game if there is a draw
}