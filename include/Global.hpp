#pragma once

#include <map>
#include <string>
#include <utility>
#include <vector>

const int NUMBER_OF_DECKS = 1;

const std::vector<std::string> SUITS = {
    "Hearts", "Diamonds", "Clubs", "Spades"
};

const std::vector<std::string> RANKS = {
    "2", "3", "4", "5", "6", "7", "8", "9", "10",
    "J", "Q", "K", "A"
};

const std::map<std::string, int> RANK_TO_NUMBER = {
    {"2", 2}, 
    {"3", 3}, 
    {"4", 4}, 
    {"5", 5}, 
    {"6", 6}, 
    {"7", 7}, 
    {"8", 8}, 
    {"9", 9}, 
    {"10", 10}, 
    {"J", 10}, 
    {"Q", 10}, 
    {"K", 10},
    {"A", 1}
};



// For 4-8 decks
const std::map<std::pair<std::string, std::string>, std::string> DEALER_STANDS_ON_SOFT_17 = {
    {std::make_pair("HARD 4", "2"), "H"},
    {std::make_pair("HARD 4", "3"), "H"},
    {std::make_pair("HARD 4", "4"), "H"},
    {std::make_pair("HARD 4", "5"), "H"},
    {std::make_pair("HARD 4", "6"), "H"},
    {std::make_pair("HARD 4", "7"), "H"},
    {std::make_pair("HARD 4", "8"), "H"},
    {std::make_pair("HARD 4", "9"), "H"},
    {std::make_pair("HARD 4", "10"), "H"},
    {std::make_pair("HARD 4", "A"), "H"},
    {std::make_pair("HARD 5", "2"), "H"},
    {std::make_pair("HARD 5", "3"), "H"},
    {std::make_pair("HARD 5", "4"), "H"},
    {std::make_pair("HARD 5", "5"), "H"},
    {std::make_pair("HARD 5", "6"), "H"},
    {std::make_pair("HARD 5", "7"), "H"},
    {std::make_pair("HARD 5", "8"), "H"},
    {std::make_pair("HARD 5", "9"), "H"},
    {std::make_pair("HARD 5", "10"), "H"},
    {std::make_pair("HARD 5", "A"), "H"},
    {std::make_pair("HARD 6", "2"), "H"},
    {std::make_pair("HARD 6", "3"), "H"},
    {std::make_pair("HARD 6", "4"), "H"},
    {std::make_pair("HARD 6", "5"), "H"},
    {std::make_pair("HARD 6", "6"), "H"},
    {std::make_pair("HARD 6", "7"), "H"},
    {std::make_pair("HARD 6", "8"), "H"},
    {std::make_pair("HARD 6", "9"), "H"},
    {std::make_pair("HARD 6", "10"), "H"},
    {std::make_pair("HARD 6", "A"), "H"},
    {std::make_pair("HARD 7", "2"), "H"},
    {std::make_pair("HARD 7", "3"), "H"},
    {std::make_pair("HARD 7", "4"), "H"},
    {std::make_pair("HARD 7", "5"), "H"},
    {std::make_pair("HARD 7", "6"), "H"},
    {std::make_pair("HARD 7", "7"), "H"},
    {std::make_pair("HARD 7", "8"), "H"},
    {std::make_pair("HARD 7", "9"), "H"},
    {std::make_pair("HARD 7", "10"), "H"},
    {std::make_pair("HARD 7", "A"), "H"},
    {std::make_pair("HARD 8", "2"), "H"},
    {std::make_pair("HARD 8", "3"), "H"},
    {std::make_pair("HARD 8", "4"), "H"},
    {std::make_pair("HARD 8", "5"), "H"},
    {std::make_pair("HARD 8", "6"), "H"},
    {std::make_pair("HARD 8", "7"), "H"},
    {std::make_pair("HARD 8", "8"), "H"},
    {std::make_pair("HARD 8", "9"), "H"},
    {std::make_pair("HARD 8", "10"), "H"},
    {std::make_pair("HARD 8", "A"), "H"},
    {std::make_pair("HARD 9", "2"), "H"},
    {std::make_pair("HARD 9", "3"), "Dh"},
    {std::make_pair("HARD 9", "4"), "Dh"},
    {std::make_pair("HARD 9", "5"), "Dh"},
    {std::make_pair("HARD 9", "6"), "Dh"},
    {std::make_pair("HARD 9", "7"), "H"},
    {std::make_pair("HARD 9", "8"), "H"},
    {std::make_pair("HARD 9", "9"), "H"},
    {std::make_pair("HARD 9", "10"), "H"},
    {std::make_pair("HARD 9", "A"), "H"},
    {std::make_pair("HARD 10", "2"), "Dh"},
    {std::make_pair("HARD 10", "3"), "Dh"},
    {std::make_pair("HARD 10", "4"), "Dh"},
    {std::make_pair("HARD 10", "5"), "Dh"},
    {std::make_pair("HARD 10", "6"), "Dh"},
    {std::make_pair("HARD 10", "7"), "Dh"},
    {std::make_pair("HARD 10", "8"), "Dh"},
    {std::make_pair("HARD 10", "9"), "Dh"},
    {std::make_pair("HARD 10", "10"), "H"},
    {std::make_pair("HARD 10", "A"), "H"},
    {std::make_pair("HARD 11", "2"), "Dh"},
    {std::make_pair("HARD 11", "3"), "Dh"},
    {std::make_pair("HARD 11", "4"), "Dh"},
    {std::make_pair("HARD 11", "5"), "Dh"},
    {std::make_pair("HARD 11", "6"), "Dh"},
    {std::make_pair("HARD 11", "7"), "Dh"},
    {std::make_pair("HARD 11", "8"), "Dh"},
    {std::make_pair("HARD 11", "9"), "Dh"},
    {std::make_pair("HARD 11", "10"), "Dh"},
    {std::make_pair("HARD 11", "A"), "H"},
    {std::make_pair("HARD 12", "2"), "H"},
    {std::make_pair("HARD 12", "3"), "H"},
    {std::make_pair("HARD 12", "4"), "S"},
    {std::make_pair("HARD 12", "5"), "S"},
    {std::make_pair("HARD 12", "6"), "S"},
    {std::make_pair("HARD 12", "7"), "H"},
    {std::make_pair("HARD 12", "8"), "H"},
    {std::make_pair("HARD 12", "9"), "H"},
    {std::make_pair("HARD 12", "10"), "H"},
    {std::make_pair("HARD 12", "A"), "H"},
    {std::make_pair("HARD 13", "2"), "S"},
    {std::make_pair("HARD 13", "3"), "S"},
    {std::make_pair("HARD 13", "4"), "S"},
    {std::make_pair("HARD 13", "5"), "S"},
    {std::make_pair("HARD 13", "6"), "S"},
    {std::make_pair("HARD 13", "7"), "H"},
    {std::make_pair("HARD 13", "8"), "H"},
    {std::make_pair("HARD 13", "9"), "H"},
    {std::make_pair("HARD 13", "10"), "H"},
    {std::make_pair("HARD 13", "A"), "H"},
    {std::make_pair("HARD 14", "2"), "S"},
    {std::make_pair("HARD 14", "3"), "S"},
    {std::make_pair("HARD 14", "4"), "S"},
    {std::make_pair("HARD 14", "5"), "S"},
    {std::make_pair("HARD 14", "6"), "S"},
    {std::make_pair("HARD 14", "7"), "H"},
    {std::make_pair("HARD 14", "8"), "H"},
    {std::make_pair("HARD 14", "9"), "H"},
    {std::make_pair("HARD 14", "10"), "H"},
    {std::make_pair("HARD 14", "A"), "H"},
    {std::make_pair("HARD 15", "2"), "S"},
    {std::make_pair("HARD 15", "3"), "S"},
    {std::make_pair("HARD 15", "4"), "S"},
    {std::make_pair("HARD 15", "5"), "S"},
    {std::make_pair("HARD 15", "6"), "S"},
    {std::make_pair("HARD 15", "7"), "H"},
    {std::make_pair("HARD 15", "8"), "H"},
    {std::make_pair("HARD 15", "9"), "H"},
    {std::make_pair("HARD 15", "10"), "Rh"},
    {std::make_pair("HARD 15", "A"), "H"},
    {std::make_pair("HARD 16", "2"), "S"},
    {std::make_pair("HARD 16", "3"), "S"},
    {std::make_pair("HARD 16", "4"), "S"},
    {std::make_pair("HARD 16", "5"), "S"},
    {std::make_pair("HARD 16", "6"), "S"},
    {std::make_pair("HARD 16", "7"), "H"},
    {std::make_pair("HARD 16", "8"), "H"},
    {std::make_pair("HARD 16", "9"), "Rh"},
    {std::make_pair("HARD 16", "10"), "Rh"},
    {std::make_pair("HARD 16", "A"), "Rh"},
    {std::make_pair("HARD 17", "2"), "S"},
    {std::make_pair("HARD 17", "3"), "S"},
    {std::make_pair("HARD 17", "4"), "S"},
    {std::make_pair("HARD 17", "5"), "S"},
    {std::make_pair("HARD 17", "6"), "S"},
    {std::make_pair("HARD 17", "7"), "S"},
    {std::make_pair("HARD 17", "8"), "S"},
    {std::make_pair("HARD 17", "9"), "S"},
    {std::make_pair("HARD 17", "10"), "S"},
    {std::make_pair("HARD 17", "A"), "S"},
    {std::make_pair("HARD 18", "2"), "S"},
    {std::make_pair("HARD 18", "3"), "S"},
    {std::make_pair("HARD 18", "4"), "S"},
    {std::make_pair("HARD 18", "5"), "S"},
    {std::make_pair("HARD 18", "6"), "S"},
    {std::make_pair("HARD 18", "7"), "S"},
    {std::make_pair("HARD 18", "8"), "S"},
    {std::make_pair("HARD 18", "9"), "S"},
    {std::make_pair("HARD 18", "10"), "S"},
    {std::make_pair("HARD 18", "A"), "S"},
    {std::make_pair("HARD 19", "2"), "S"},
    {std::make_pair("HARD 19", "3"), "S"},
    {std::make_pair("HARD 19", "4"), "S"},
    {std::make_pair("HARD 19", "5"), "S"},
    {std::make_pair("HARD 19", "6"), "S"},
    {std::make_pair("HARD 19", "7"), "S"},
    {std::make_pair("HARD 19", "8"), "S"},
    {std::make_pair("HARD 19", "9"), "S"},
    {std::make_pair("HARD 19", "10"), "S"},
    {std::make_pair("HARD 19", "A"), "S"},
    {std::make_pair("HARD 20", "2"), "S"},
    {std::make_pair("HARD 20", "3"), "S"},
    {std::make_pair("HARD 20", "4"), "S"},
    {std::make_pair("HARD 20", "5"), "S"},
    {std::make_pair("HARD 20", "6"), "S"},
    {std::make_pair("HARD 20", "7"), "S"},
    {std::make_pair("HARD 20", "8"), "S"},
    {std::make_pair("HARD 20", "9"), "S"},
    {std::make_pair("HARD 20", "10"), "S"},
    {std::make_pair("HARD 20", "A"), "S"},

    // Soft values
    {std::make_pair("SOFT 13", "2"), "H"},
    {std::make_pair("SOFT 13", "3"), "H"},
    {std::make_pair("SOFT 13", "4"), "H"},
    {std::make_pair("SOFT 13", "5"), "Dh"},
    {std::make_pair("SOFT 13", "6"), "Dh"},
    {std::make_pair("SOFT 13", "7"), "H"},
    {std::make_pair("SOFT 13", "8"), "H"},
    {std::make_pair("SOFT 13", "9"), "H"},
    {std::make_pair("SOFT 13", "10"), "H"},
    {std::make_pair("SOFT 13", "A"), "H"},
    {std::make_pair("SOFT 14", "2"), "H"},
    {std::make_pair("SOFT 14", "3"), "H"},
    {std::make_pair("SOFT 14", "4"), "H"},
    {std::make_pair("SOFT 14", "5"), "Dh"},
    {std::make_pair("SOFT 14", "6"), "Dh"},
    {std::make_pair("SOFT 14", "7"), "H"},
    {std::make_pair("SOFT 14", "8"), "H"},
    {std::make_pair("SOFT 14", "9"), "H"},
    {std::make_pair("SOFT 14", "10"), "H"},
    {std::make_pair("SOFT 14", "A"), "H"},
    {std::make_pair("SOFT 15", "2"), "H"},
    {std::make_pair("SOFT 15", "3"), "H"},
    {std::make_pair("SOFT 15", "4"), "Dh"},
    {std::make_pair("SOFT 15", "5"), "Dh"},
    {std::make_pair("SOFT 15", "6"), "Dh"},
    {std::make_pair("SOFT 15", "7"), "H"},
    {std::make_pair("SOFT 15", "8"), "H"},
    {std::make_pair("SOFT 15", "9"), "H"},
    {std::make_pair("SOFT 15", "10"), "H"},
    {std::make_pair("SOFT 15", "A"), "H"},
    {std::make_pair("SOFT 16", "2"), "H"},
    {std::make_pair("SOFT 16", "3"), "H"},
    {std::make_pair("SOFT 16", "4"), "Dh"},
    {std::make_pair("SOFT 16", "5"), "Dh"},
    {std::make_pair("SOFT 16", "6"), "Dh"},
    {std::make_pair("SOFT 16", "7"), "H"},
    {std::make_pair("SOFT 16", "8"), "H"},
    {std::make_pair("SOFT 16", "9"), "H"},
    {std::make_pair("SOFT 16", "10"), "H"},
    {std::make_pair("SOFT 16", "A"), "H"},
    {std::make_pair("SOFT 17", "2"), "H"},
    {std::make_pair("SOFT 17", "3"), "Dh"},
    {std::make_pair("SOFT 17", "4"), "Dh"},
    {std::make_pair("SOFT 17", "5"), "Dh"},
    {std::make_pair("SOFT 17", "6"), "Dh"},
    {std::make_pair("SOFT 17", "7"), "H"},
    {std::make_pair("SOFT 17", "8"), "H"},
    {std::make_pair("SOFT 17", "9"), "H"},
    {std::make_pair("SOFT 17", "10"), "H"},
    {std::make_pair("SOFT 17", "A"), "H"},
    {std::make_pair("SOFT 18", "2"), "S"},
    {std::make_pair("SOFT 18", "3"), "Ds"},
    {std::make_pair("SOFT 18", "4"), "Ds"},
    {std::make_pair("SOFT 18", "5"), "Ds"},
    {std::make_pair("SOFT 18", "6"), "Ds"},
    {std::make_pair("SOFT 18", "7"), "S"},
    {std::make_pair("SOFT 18", "8"), "S"},
    {std::make_pair("SOFT 18", "9"), "H"},
    {std::make_pair("SOFT 18", "10"), "H"},
    {std::make_pair("SOFT 18", "A"), "H"},
    {std::make_pair("SOFT 19", "2"), "S"},
    {std::make_pair("SOFT 19", "3"), "S"},
    {std::make_pair("SOFT 19", "4"), "S"},
    {std::make_pair("SOFT 19", "5"), "S"},
    {std::make_pair("SOFT 19", "6"), "S"},
    {std::make_pair("SOFT 19", "7"), "S"},
    {std::make_pair("SOFT 19", "8"), "S"},
    {std::make_pair("SOFT 19", "9"), "S"},
    {std::make_pair("SOFT 19", "10"), "S"},
    {std::make_pair("SOFT 19", "A"), "S"},
    {std::make_pair("SOFT 20", "2"), "S"},
    {std::make_pair("SOFT 20", "3"), "S"},
    {std::make_pair("SOFT 20", "4"), "S"},
    {std::make_pair("SOFT 20", "5"), "S"},
    {std::make_pair("SOFT 20", "6"), "S"},
    {std::make_pair("SOFT 20", "7"), "S"},
    {std::make_pair("SOFT 20", "8"), "S"},
    {std::make_pair("SOFT 20", "9"), "S"},
    {std::make_pair("SOFT 20", "10"), "S"},
    {std::make_pair("SOFT 20", "A"), "S"},
    {std::make_pair("SOFT 21", "2"), "S"},
    {std::make_pair("SOFT 21", "3"), "S"},
    {std::make_pair("SOFT 21", "4"), "S"},
    {std::make_pair("SOFT 21", "5"), "S"},
    {std::make_pair("SOFT 21", "6"), "S"},
    {std::make_pair("SOFT 21", "7"), "S"},
    {std::make_pair("SOFT 21", "8"), "S"},
    {std::make_pair("SOFT 21", "9"), "S"},
    {std::make_pair("SOFT 21", "10"), "S"},
    {std::make_pair("SOFT 21", "A"), "S"},

    // Pairs
    {std::make_pair("2,2", "2"), "Ph"},
    {std::make_pair("2,2", "3"), "Ph"},
    {std::make_pair("2,2", "4"), "P"},
    {std::make_pair("2,2", "5"), "P"},
    {std::make_pair("2,2", "6"), "P"},
    {std::make_pair("2,2", "7"), "P"},
    {std::make_pair("2,2", "8"), "H"},
    {std::make_pair("2,2", "9"), "H"},
    {std::make_pair("2,2", "10"), "H"},
    {std::make_pair("2,2", "A"), "H"},
    {std::make_pair("3,3", "2"), "Ph"},
    {std::make_pair("3,3", "3"), "Ph"},
    {std::make_pair("3,3", "4"), "P"},
    {std::make_pair("3,3", "5"), "P"},
    {std::make_pair("3,3", "6"), "P"},
    {std::make_pair("3,3", "7"), "P"},
    {std::make_pair("3,3", "8"), "P"},
    {std::make_pair("3,3", "9"), "P"},
    {std::make_pair("3,3", "10"), "P"},
    {std::make_pair("3,3", "A"), "P"},
    {std::make_pair("4,4", "2"), "H"},
    {std::make_pair("4,4", "3"), "H"},
    {std::make_pair("4,4", "4"), "H"},
    {std::make_pair("4,4", "5"), "Ph"},
    {std::make_pair("4,4", "6"), "Ph"},
    {std::make_pair("4,4", "7"), "H"},
    {std::make_pair("4,4", "8"), "H"},
    {std::make_pair("4,4", "9"), "H"},
    {std::make_pair("4,4", "10"), "H"},
    {std::make_pair("4,4", "A"), "H"},
    {std::make_pair("6,6", "2"), "Ph"},
    {std::make_pair("6,6", "3"), "P"},
    {std::make_pair("6,6", "4"), "P"},
    {std::make_pair("6,6", "5"), "P"},
    {std::make_pair("6,6", "6"), "P"},
    {std::make_pair("6,6", "7"), "H"},
    {std::make_pair("6,6", "8"), "H"},
    {std::make_pair("6,6", "9"), "H"},
    {std::make_pair("6,6", "10"), "H"},
    {std::make_pair("6,6", "A"), "H"},
    {std::make_pair("7,7", "2"), "P"},
    {std::make_pair("7,7", "3"), "P"},
    {std::make_pair("7,7", "4"), "P"},
    {std::make_pair("7,7", "5"), "P"},
    {std::make_pair("7,7", "6"), "P"},
    {std::make_pair("7,7", "7"), "P"},
    {std::make_pair("7,7", "8"), "H"},
    {std::make_pair("7,7", "9"), "H"},
    {std::make_pair("7,7", "10"), "H"},
    {std::make_pair("7,7", "A"), "H"},
    {std::make_pair("8,8", "2"), "P"},
    {std::make_pair("8,8", "3"), "P"},
    {std::make_pair("8,8", "4"), "P"},
    {std::make_pair("8,8", "5"), "P"},
    {std::make_pair("8,8", "6"), "P"},
    {std::make_pair("8,8", "7"), "P"},
    {std::make_pair("8,8", "8"), "P"},
    {std::make_pair("8,8", "9"), "P"},
    {std::make_pair("8,8", "10"), "P"},
    {std::make_pair("8,8", "A"), "P"},
    {std::make_pair("9,9", "2"), "P"},
    {std::make_pair("9,9", "3"), "P"},
    {std::make_pair("9,9", "4"), "P"},
    {std::make_pair("9,9", "5"), "P"},
    {std::make_pair("9,9", "6"), "P"},
    {std::make_pair("9,9", "7"), "S"},
    {std::make_pair("9,9", "8"), "P"},
    {std::make_pair("9,9", "9"), "P"},
    {std::make_pair("9,9", "10"), "S"},
    {std::make_pair("9,9", "A"), "S"},
    {std::make_pair("A,A", "2"), "P"},
    {std::make_pair("A,A", "3"), "P"},
    {std::make_pair("A,A", "4"), "P"},
    {std::make_pair("A,A", "5"), "P"},
    {std::make_pair("A,A", "6"), "P"},
    {std::make_pair("A,A", "7"), "P"},
    {std::make_pair("A,A", "8"), "P"},
    {std::make_pair("A,A", "9"), "P"},
    {std::make_pair("A,A", "10"), "P"},
    {std::make_pair("A,A", "A"), "P"},
};

struct Card{
    std::string suit;
    std::string rank; 
    std::string name;

    Card(std::string suit, std::string rank) : suit(suit), rank(rank) {
        this->name = this->rank + " of " + this->suit;
    }
};
