#include <iostream> 
#include <map>
#include <string>
#include <cstdlib>


std::map<std::string, char> positions;

void displayBoard (const std::map<std::string, char>& positions) {

    system("clear");
    std::cout << "   Tic-Tac-Toe " << std::endl;
    std::cout << std::endl;

    std::cout << "     |     | " << std::endl;
    std::cout << "  " << positions.at("1") << "  " << "|" << "  " << positions.at("2") << "  " << "|" << "  " << positions.at("3") << "  " << std::endl;
    std::cout << "_____|_____|_____ " << std::endl;
    std::cout << "     |     | " << std::endl;
    std::cout << "  " << positions.at("4") << "  " << "|" << "  " << positions.at("5") << "  " << "|" << "  " << positions.at("6") << "  " << std::endl;
    std::cout << "_____|_____|_____ " << std::endl;
    std::cout << "     |     | " << std::endl;
    std::cout << "  " << positions.at("7") << "  " << "|" << "  " << positions.at("8") << "  " << "|" << "  " << positions.at("9") << "  " << std::endl;
    std::cout << "     |     | " << std::endl;
   
}

void updateBoard(std::map<std::string, char>& positions, std::string position, char symbol) {
    positions[position] = symbol;
    system("clear");
    displayBoard(positions);
}

bool isGameover(const std::map<std::string, char>& positions) {\

    bool allPositionsTaken = true;
    for (char i = '1'; i <= '9'; ++i) {
        if (positions.at(std::string(1, i)) != 'x' && positions.at(std::string(1, i)) != 'o') {
            allPositionsTaken = false;
            break;
        }
    }

    if (allPositionsTaken) {
        std::cout << "It's a draw!" << std::endl;
        return true;
    }

    // Checking for winning conditions
    // Left to right for player 1
    if (positions.at("1") == 'x' && positions.at("2") == 'x' && positions.at("3") == 'x') {
        std::cout << "Player 1 won!" << std::endl;
        return true;
    }

    else if (positions.at("4") == 'x' && positions.at("5") == 'x' && positions.at("6") == 'x') {
        std::cout << "Player 1 won!" << std::endl;
        return true;
    }

    else if (positions.at("7") == 'x' && positions.at("8") == 'x' && positions.at("9") == 'x') {
        std::cout << "Player 1 won!" << std::endl;
        return true;
    }

    // Up and down for player 1

    else if (positions.at("1") == 'x' && positions.at("4") == 'x' && positions.at("7") == 'x') {
        std::cout << "Player 1 won!" << std::endl;
        return true;
    }

    else if (positions.at("2") == 'x' && positions.at("5") == 'x' && positions.at("8") == 'x') {
        std::cout << "Player 1 won!" << std::endl;
        return true;
    }

    else if (positions.at("3") == 'x' && positions.at("6") == 'x' && positions.at("9") == 'x') {
        std::cout << "Player 1 won!" << std::endl;
        return true;
    }

    // Diagnol for player 1

    else if (positions.at("1") == 'x' && positions.at("5") == 'x' && positions.at("9") == 'x') {
        std::cout << "Player 1 won!" << std::endl;
        return true;
    }

    else if (positions.at("3") == 'x' && positions.at("5") == 'x' && positions.at("7") == 'x') {
        std::cout << "Player 1 won!" << std::endl;
        return true;
    }

    // Check left to right for player 2
    if (positions.at("1") == 'o' && positions.at("2") == 'o' && positions.at("3") == 'o') {
        std::cout << "Player 2 won!" << std::endl;
        return true;
    }

    else if (positions.at("4") == 'o' && positions.at("5") == 'o' && positions.at("6") == 'o') {
        std::cout << "Player 2 won!" << std::endl;
        return true;
    }

    else if (positions.at("7") == 'o' && positions.at("8") == 'o' && positions.at("9") == 'o') {
        std::cout << "Player 2 won!" << std::endl;
        return true;
    }

    // Up and down for player 2

    else if (positions.at("1") == 'o' && positions.at("4") == 'o' && positions.at("7") == 'o') {
        std::cout << "Player 2 won!" << std::endl;
        return true;
    }

    else if (positions.at("2") == 'o' && positions.at("5") == 'o' && positions.at("8") == 'o') {
        std::cout << "Player 2 won!" << std::endl;
        return true;
    }

    else if (positions.at("3") == 'o' && positions.at("6") == 'o' && positions.at("9") == 'o') {
        std::cout << "Player 2 won!" << std::endl;
        return true;
    }

    // Diagnol for player 2

    else if (positions.at("1") == 'o' && positions.at("5") == 'o' && positions.at("9") == 'o') {
        std::cout << "Player 2 won!" << std::endl;
        return true;
    }

    else if (positions.at("3") == 'o' && positions.at("5") == 'o' && positions.at("7") == 'o') {
        std::cout << "Player 2 won!" << std::endl;
        return true;
    }







    return false;
}


int main() {
    positions.insert({"1", '1'});
    positions.insert({"2", '2'});
    positions.insert({"3", '3'});
    positions.insert({"4", '4'});
    positions.insert({"5", '5'});
    positions.insert({"6", '6'});
    positions.insert({"7", '7'});
    positions.insert({"8", '8'});
    positions.insert({"9", '9'});

    displayBoard(positions);

    while (!isGameover(positions)) {
        std::string player1choice;
        while (true) {
            std::cout << "Player 1 choose a position: ";
            std::cin >> player1choice;

            if (player1choice != "1" && player1choice != "2" && player1choice != "3" && player1choice != "4"&& player1choice != "5" && player1choice != "6" && 
                player1choice != "7" && player1choice != "8" && player1choice != "9") {
                std::cout << "Invalid input, try again" << std::endl;
            } else {
                break;
            }
        }
        updateBoard(positions, player1choice, 'x');

        if (isGameover(positions)) {
            break;
        }

        std::string player2choice;
        while (true) {
            std::cout << "Player 2 choose a position: ";
            std::cin >> player2choice;

            if (player2choice != "1" && player2choice != "2" && player2choice != "3" && player2choice != "4"&& player2choice != "5" && player2choice != "6" && 
                player2choice != "7" && player2choice != "8" && player2choice != "9") {
                std::cout << "Invalid input, try again" << std::endl;
            } else {
                break;
            }
        }
        updateBoard(positions, player2choice, 'o');

        if (isGameover(positions)) {
            break;
        }   
    }

    return 0;
}
