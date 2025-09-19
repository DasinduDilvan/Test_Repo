#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

// Function to clear screen (works on most systems)
void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

// Function to display ASCII art animation for "ELECTION"
void displayElectionAnimation() {
    char* frames[] = {
        "E",
        "EL",
        "ELE",
        "ELEC",
        "ELECT",
        "ELECTI",
        "ELECTIO",
        "ELECTION"
    };
    
    char* asciiArt[] = {
        " ███████ ██      ███████  ██████ ████████ ██  ██████  ███    ██ ",
        " ██      ██      ██      ██         ██    ██ ██    ██ ████   ██ ",
        " █████   ██      █████   ██         ██    ██ ██    ██ ██ ██  ██ ",
        " ██      ██      ██      ██         ██    ██ ██    ██ ██  ██ ██ ",
        " ███████ ███████ ███████  ██████    ██    ██  ██████  ██   ████ "
    };
    
    // Animated typing effect
    printf("\n\n\n");
    printf("                    Welcome to the\n\n");
    
    for(int i = 0; i < 8; i++) {
        clearScreen();
        printf("\n\n\n");
        printf("                    Welcome to the\n\n");
        printf("                    %s\n", frames[i]);
        fflush(stdout);
        //usleep(300000); // 300ms delay
    }
    
    // Clear and show full ASCII art
    clearScreen();
    printf("\n\n");
    printf("                    Welcome to the\n\n");
    
    for(int i = 0; i < 5; i++) {
        printf("%s\n", asciiArt[i]);
    }
    
    printf("\n");
    printf("              ███████ ██    ██ ███████ ████████ ███████ ███    ███ \n");
    printf("              ██       ██  ██  ██         ██    ██      ████  ████ \n");
    printf("              ███████   ████   ███████    ██    █████   ██ ████ ██ \n");
    printf("                   ██    ██         ██    ██    ██      ██  ██  ██ \n");
    printf("              ███████    ██    ███████    ██    ███████ ██      ██ \n");
    
    printf("\n\n");
    printf("                        Press Enter to continue...");
    getchar();
}

// Function to display the main menu
void displayMainMenu() {
    clearScreen();
    printf("\n");
    printf("╔══════════════════════════════════════════════════════════════════╗\n");
    printf("║                        ELECTION SYSTEM                          ║\n");
    printf("║                          MAIN MENU                              ║\n");
    printf("╠══════════════════════════════════════════════════════════════════╣\n");
    printf("║                                                                  ║\n");
    printf("║  1. Voter Login                                                  ║\n");
    printf("║  2. Candidate Login                                              ║\n");
    printf("║  3. Party Login                                                  ║\n");
    printf("║  4. Voter Register                                               ║\n");
    printf("║  5. Candidate Register                                           ║\n");
    printf("║  6. Party Register                                               ║\n");
    printf("║  7. Admin Login                                                  ║\n");
    printf("║  0. Exit                                                         ║\n");
    printf("║                                                                  ║\n");
    printf("╚══════════════════════════════════════════════════════════════════╝\n");
    printf("\n");
}

// Placeholder functions for each menu option
void voterLogin() {
    clearScreen();
    printf("\n=== VOTER LOGIN ===\n");
    printf("This feature will be implemented soon...\n");
    printf("Press Enter to return to main menu...");
    getchar();
    getchar(); // Extra getchar to handle newline
}

void candidateLogin() {
    clearScreen();
    printf("\n=== CANDIDATE LOGIN ===\n");
    printf("This feature will be implemented soon...\n");
    printf("Press Enter to return to main menu...");
    getchar();
    getchar();
}

void partyLogin() {
    clearScreen();
    printf("\n=== PARTY LOGIN ===\n");
    printf("This feature will be implemented soon...\n");
    printf("Press Enter to return to main menu...");
    getchar();
    getchar();
}

void voterRegister() {
    clearScreen();
    printf("\n=== VOTER REGISTRATION ===\n");
    printf("This feature will be implemented soon...\n");
    printf("Press Enter to return to main menu...");
    getchar();
    getchar();
}

void candidateRegister() {
    clearScreen();
    printf("\n=== CANDIDATE REGISTRATION ===\n");
    printf("This feature will be implemented soon...\n");
    printf("Press Enter to return to main menu...");
    getchar();
    getchar();
}

void partyRegister() {
    clearScreen();
    printf("\n=== PARTY REGISTRATION ===\n");
    printf("This feature will be implemented soon...\n");
    printf("Press Enter to return to main menu...");
    getchar();
    getchar();
}

void adminLogin() {
    clearScreen();
    printf("\n=== ADMIN LOGIN ===\n");
    printf("This feature will be implemented soon...\n");
    printf("Press Enter to return to main menu...");
    getchar();
    getchar();
}

int main() {
    int choice;
    
    // Display welcome animation
    displayElectionAnimation();
    
    // Main program loop
    while(1) {
        displayMainMenu();
        printf("Enter your choice (0-7): ");
        
        if(scanf("%d", &choice) != 1) {
            // Clear invalid input
            while(getchar() != '\n');
            printf("Invalid input! Please enter a number between 0-7.\n");
            printf("Press Enter to continue...");
            getchar();
            continue;
        }
        
        switch(choice) {
            case 1:
                voterLogin();
                break;
            case 2:
                candidateLogin();
                break;
            case 3:
                partyLogin();
                break;
            case 4:
                voterRegister();
                break;
            case 5:
                candidateRegister();
                break;
            case 6:
                partyRegister();
                break;
            case 7:
                adminLogin();
                break;
            case 0:
                clearScreen();
                printf("\n");
                printf("╔══════════════════════════════════════════════════════════════════╗\n");
                printf("║                    Thank you for using                          ║\n");
                printf("║                    ELECTION SYSTEM                              ║\n");
                printf("║                      Goodbye!                                   ║\n");
                printf("╚══════════════════════════════════════════════════════════════════╝\n");
                printf("\n");
                exit(0);
            default:
                printf("Invalid choice! Please select a number between 0-7.\n");
                printf("Press Enter to continue...");
                getchar();
                getchar();
                break;
        }
    }
    
    return 0;
}