#include <iostream>
#include <string> 
using namespace std;

const int NUMCARDS = 3;

//create a deck class
//1 for heart
//2 for Club 
//3 for Spade
//4 for Diamond
struct Card {
    int suit; //store suit heart,spade,club,diamond from 1-4
    int num; //store card number
};

Card createNewCard(int typeofcard, int numberoncard)
{
    Card thisCard;
    thisCard.suit = typeofcard;
    thisCard.num = numberoncard;
    return thisCard;
}

void createDeck(Card array[]){
    
    for (int i = 0; i < NUMCARDS; i++)
    {
        int thissuit;
        int thisnum;
        cout << "Enter a number 1-4 to init a card type (1 for Hearts, 2 for clubs, 3 for Spades, 4 for Diamonds): ";
        cin >> thissuit;
        cout << "\nEnter a number for the card: ";
        cin >> thisnum;
        array[i] = createNewCard(thissuit,thisnum);
    }
}



void printCard(Card acard)
{
    int z;//store type of card
    string type;
    z = acard.suit;

    if (z == 1){
        type ="Hearts";
    }
    else if (z == 2){
        type = "Spades";
    }else if (z == 3){
        type ="Clubs";
    }
    else if (z == 4){
        type ="Diamonds";
    }
    cout << "\n" << acard.num << " of "<< type << endl;
}

void printDeck(Card array[], int numOfCards)
{
    cout << "\nPrinting deck";
    for (int i = 0; i < numOfCards; i++)
    {
        printCard(array[i])<< endl;
    }
}


int main ()
{
    Card newCard;
    Card newDeck[52];
    int x; //store number of card
    int suitofcard; //store suit of card

   //initialize an array of cards

   createDeck(newDeck);
   printDeck(newDeck, NUMCARDS);


  

    return 0;
}
