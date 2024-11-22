#include<iostream>
using namespace std;

class Anime {
    // Declare member variables
    string name;
    int episodes;
    string genre;
    float rating;

    public:
        // Constructor to initialize attributes
        Anime(string aName, int aEpisodes, string aGenre, float aRating) {
            name = aName;        // Assign to class members
            episodes = aEpisodes;
            genre = aGenre;
            rating = aRating;
        }

        // Method to display anime details
        void displayInfo() {
            cout << "Anime Name: " << name << endl;
            cout << "Number of Episodes: " << episodes << endl;
            cout << "Genre: " << genre << endl;
            cout << "Rating: " << rating << "/10" << endl;
        }
};

int main() {
    // Creating an object of the Anime class
    Anime bleach("Bleach", 366, "Action/Adventure", 8.1);
    Anime onePiece("One Piece", 1000, "Action/Adventure", 8.9);
    Anime jjk("Jujutsu Kaisen", 24, "Action/Fantasy", 8.7);

    // Display anime details
    bleach.displayInfo();
    cout << endl;
    onePiece.displayInfo();
    cout << endl;
    jjk.displayInfo();

    return 0;
}
