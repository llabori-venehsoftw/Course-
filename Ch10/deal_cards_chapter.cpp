// deal_cards_chapter.cpp Development By Luis Labori
// updated 2021-04

#include <cstdio>
#include "deck_chapter.h"

void deal_hand(LL::Deck & deck, int num_cards) {
    while(num_cards--) {
        LL::Card card = deck.deal_card();
        printf("%s ", LL::card_str(card));
    }
    puts("");
}

int main()
{
    try {
        LL::Deck deck;
        printf("there are %d cards remaining\n", deck.remaining());

        deal_hand(deck, 9);
        deal_hand(deck, 5);
        deal_hand(deck, 13);
        deal_hand(deck, 10);
        deal_hand(deck, 20);

        printf("there are %d cards remaining\n", deck.remaining());
    } catch (LL::E & e) {
        puts(e.what());
        return 1;
    }

    return 0;
}
