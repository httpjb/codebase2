#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum {HEARTS, DIAMONDS, CLUBS, SPADES} Suit;
typedef struct {
    Suit suit;
    short pips;
} Card;

void shuffleDeck(Card deck[], int size) {
    for (int i = 0; i < size; i++) {
        int j = rand() % size;
        Card temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}

int main() {
    srand(time(NULL));

    // Create a deck of cards
    Card deck[52];
    int index = 0;
    for (int suit = HEARTS; suit <= SPADES; suit++) {
        for (short pips = 1; pips <= 13; pips++) {
            deck[index].suit = suit;
            deck[index].pips = pips;
            index++;
        }
    }

    // Shuffle the deck
    shuffleDeck(deck, 52);

    // Generate 1 million hands and evaluate probabilities
    // Your code for generating hands and evaluating probabilities goes here

    return 0;
}
