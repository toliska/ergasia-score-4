#pragma warning(disable : 4996)
#include<stdio.h>   
void main()
{   // dilwsh olon twn metablitwn:
    char mak[7][7], mak1[8][8], s1, s2;
    char player1[30], player2[30];
    int i, j, f, won, turn, age1, age2, gematos;
    int move, move2, valid_move1 = 1, valid_move2 = 1;
    //ekxwrhsh arxikwn timwn se pinaka  kai metablites
    f = 1;
    gematos = 0;
    won = 0;
    for (i = 0; i <= 6; i++) {
        for (j = 0; j <= 6; j++) {
            mak[i][j] = '-';
        }
    }
    //arxh paixnidou
    printf("\t\tWelcome to Score-4 Game for 2\n");
    //dilwsh idiotitwn paixth:
    printf("Please insert player names \nPlayer 1: \n");
    scanf("%s", &player1);
    printf("Player 2: \n");
    scanf("%s", &player2);
       //elenxos egkirwthtas gia swsth hlikia
    do {
        printf("\nPlease insert ages of player1 and player2\n");
        scanf("%d %d", &age1, &age2);
    } while ((age1 <=0 || age1 >= 120) || (age2 <= 0 || age2 >= 120));
    for (i = 0; i <= 30; i++) {
        if (player1[i] != player2[i]) {
            f = 0;
        }
    }
    
    if (f == 1) {
        player2[29] = '2';
        printf("\n!!!Names are identical setting automatically player2 name to %s \n\n",player2);
    }
    printf("\nWelcome %s, %s\n\n", player1, player2);
    printf("   0  1  2  3  4  5  6");
    for (i = 0; i <= 6; i++) {
        printf("\n %d",i);
        for (j = 0; j <= 6; j++) {
            printf(" %c ", mak[i][j]);
        }
    }

    printf("\n%s selects symbol ('x' or 'o'): \n", player1);
    do {
        scanf("%c", &s1);
    } while (s1 != 'X' && s1 != 'O');
    if (s1 == 'x') {
        s2 = 'o';
    }
    else {
        s2 = 'o';
    }
    turn = 0;
    while (won == 0) {
        if (turn == 0) {
            do {
                valid_move1 = 1;
                printf("\n%s's (%c) turn: ",player1, s1);
                scanf("%d %d", &move, &move2);
                if ((mak[move][move2] == s1) || (mak[move][move2] == s2)) {
                    printf("Position taken\n");
                    valid_move1 = 0;
                }
                if ((move < 0 || move > 6) || (move2 < 0 || move2 > 6)) {
                    printf("Out of bounds\n");
                    valid_move1 = 0;
                }
            } while (valid_move1 == 0) ;
            mak[move][move2] = s1;
            mak1[move][move2] = s1;
            printf("   0  1  2  3  4  5  6");
            for (i = 0; i <= 6; i++) {
                printf("\n %d", i);
                for (j = 0; j <= 6; j++) {
                    printf(" %c ", mak[i][j]);
                }
            }
            //elenxws nikhs player1
            for (i = 0; i <= 6; i++) {
                for (j = 0; j < 6; j++) {
                    //orizontia
                    if (mak[i][j] == s1 && mak[i][j + 1] == s1 && mak[i][j + 2] == s1 && mak[i][j + 3] == s1) {
                        won = 1;
                    }
                    // katheta
                    if (mak[i][j] == s1 && mak[i + 1][j] == s1 && mak[i + 2][j] == s1 && mak[i + 3][j] == s1) {
                        won = 1;
                    }
                    //diagwnia me arxh apo aristera 
                    if (mak[i][j] == s1 && mak[i + 1][j + 1] == s1 && mak[i + 2][j + 2] == s1 && mak[i + 3][j + 3] == s1) {
                        won = 1;
                    }
                    //diagwnios apo deksia
                    if (mak[i][j] == s1 && mak[i - 1][j + 1] == s1 && mak[i - 2][j + 2] == s1 && mak[i - 3][j + 3] == s1) {
                        won = 1;
                    }

                }
                //kiria diagwnios
                if (mak[i][i] == s1 && mak[i + 1][i + 1] == s1 && mak[i + 2][i + 2] == s1 && mak[i + 3][i + 3] == s1) {
                    won = 1;
                }
            }
            turn = 1;

        }
        else {
            do {
                valid_move1 = 1;
                printf("\n%s's (%c) turn: ", player2, s2);
                scanf("%d %d", &move, &move2);
                if ((mak[move][move2] == s1) || (mak[move][move2] == s2)) {
                    printf("Position taken\n");
                    valid_move1 = 0;
                }
                if ((move < 0 || move > 6) || (move2 < 0 || move2 > 6)) {
                    printf("Out of bounds\n");
                    valid_move1 = 0;
                }
            } while (valid_move1 == 0);
            mak[move][move2] = s2;
            mak1[move][move2] = s2;
            printf("   0  1  2  3  4  5  6");
            for (i = 0; i <= 6; i++) {
                printf("\n %d", i);
                for (j = 0; j <= 6; j++) {
                    printf(" %c ", mak[i][j]);
                }
            }
            //elenxws nikhs player2
            for (i = 0; i <= 6; i++) {
                for (j = 0; j < 6; j++) {
                    //orizontia
                    if (mak[i][j] == s2 && mak[i][j + 1] == s2 && mak[i][j + 2] == s2 && mak[i][j + 3] == s2) {
                        won = 2;
                    }
                    // katheta
                    if (mak[i][j] == s2 && mak[i + 1][j] == s2 && mak[i + 2][j] == s2 && mak[i + 3][j] == s2) {
                        won = 2;
                    }
                    //diagwnia me arxh apo aristera 
                    if (mak[i][j] == s2 && mak[i + 1][j + 1] == s2 && mak[i + 2][j + 2] == s2 && mak[i + 3][j + 3] == s2) {
                        won = 2;
                    }
                    //diagwnios apo deksia
                    if (mak[i][j] == s2 && mak[i - 1][j + 1] == s2 && mak[i - 2][j + 2] == s2 && mak[i - 3][j + 3] == s2) {
                        won = 2;
                    }

                }
                //kiria diagwnios
                if (mak[i][i] == s2 && mak[i + 1][i + 1] == s2 && mak[i + 2][i + 2] == s2 && mak[i + 3][i + 3] == s2) {
                    won = 2;
                }
            }
            turn = 0;
        }
    }
}