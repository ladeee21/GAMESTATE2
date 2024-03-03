#include <stdio.h>
#include <string.h>
#define MAXSIZE 10

#include "main.h"

const char* getWinner(char* player1, char* player2) {


	const char *rock = "Rock";

	const char *paper = "Paper";

	const char *scissors = "Scissors";

	if (strcmp(player1, player2) == 0) {

		return "Draw";
	}

	else if ((strcmp(player1, rock) == 0 && strcmp(player2, scissors) == 0)
		|| (strcmp(player1, paper) == 0 && strcmp(player2, rock) == 0) ||
		(strcmp(player1, scissors) == 0 && strcmp(player2, paper) == 0)) {

		return "player1";
	}
	else if ((strcmp(player2, rock) == 0 && strcmp(player1, scissors) == 0) ||
		(strcmp(player2, paper) == 0 && strcmp(player1, rock) == 0) ||
		(strcmp(player2, scissors) == 0 && strcmp(player1, paper) == 0)) {

		return "player2";
	}
	else
		return "Invalid";

}
int main() {
	return 0;
}