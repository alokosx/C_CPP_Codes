#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4 
#define PIPS 13
#define DECK_SIZE 52
#define HAND_SIZE 7
#define DECK_NUMBER 200000 //As 200000*7 = 1400000 hands for sample space

typedef enum suit{heart,diamond,spades,club} suit;

typedef struct playing_card{
    suit suit;
    short pip;
} card;

struct hand_stats{
    unsigned long total;
    unsigned long no_pair;
    unsigned long one_pair;
    unsigned long two_pair;
    unsigned long three_of_kind;
    unsigned long four_of_kind;
    unsigned long full_house;
};

void suffle_deck(card *deck,int length)
{
    for (int i = 1; i < length; ++i) 
    {
        int j = rand() % (i+1);
        /* swap cards i and j */ 
        card tmp = deck[i]; 
        deck[i] = deck[j]; 
        deck[j] = tmp;    
    }
}

void evaluate_hand(card* hand, int length, struct hand_stats *stats)
{
    unsigned value_count[PIPS] = {0}; //how.many cards of each pip value*/
    for(int i=0;i<length;++i)
    {
        ++value_count[hand[i].pip];
    }
    unsigned count[SUITS+1] = {0}; //how many singleton,pair,triplet etc..
    for(int i=0;i<PIPS;++i)
    {
        ++count[value_count[i]];
    }
    
    if(count[4]){
        ++stats->four_of_kind;
    } else if(count[3]&&count[2]||count[3]>=2){
        ++stats->full_house;
    }
     else if(count[3]){
        ++stats->three_of_kind;
    } else if(count[2]>=2){
        ++stats->two_pair;
    } else if(count[2]){
        ++stats->one_pair;
    } else {
        ++stats->no_pair;
    }
    ++stats->total;
}

int main(void)
{
    srand((unsigned)time(0));
    card deck[DECK_SIZE];
    
    int i=0;
    for (short j = 1; j <= PIPS; ++j){
        for (short k = 1; k <= SUITS; ++k){
            deck[i].suit = k; 
            deck[i].pip = j; 
            ++i;
        }
    } 
    struct hand_stats stats = {0,0,0,0,0,0,0};
    for (int i = 0; i < DECK_NUMBER; ++i){ 
        suffle_deck(deck, DECK_SIZE); 
        for (int j = 0; j + HAND_SIZE < DECK_SIZE; j += HAND_SIZE){
             evaluate_hand(deck+j, HAND_SIZE, &stats);
             } 
        } /* now print the results */ 
    const long double total = stats.total;
     printf("No pair probablity = %Lf\n", stats.no_pair / total); 
     printf("One pair probability = %Lf\n", stats.one_pair / total); 
     printf("Two pair probability = %Lf\n", stats.two_pair / total); 
     printf("Three of a kind probablity = %Lf\n", stats.three_of_kind / total); 
     printf("Four of a kind probability = %Lf\n", stats.four_of_kind / total); 
     printf("Full house probability = %Lf\n", stats.full_house / total); 
        
}
 


