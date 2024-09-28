#include <iostream>
using namespace std;

class Anime {
    // Private attributes
    private:
        string name;         // Name of the anime
        int episodes;        // Number of episodes
        string genre;        // Genre of the anime
        float rating;        // Rating of the anime

    // Public methods
    public:
        // Constructor
        Anime(string aName, int aEpisodes, string aGenre, float aRating) {
            name = aName;
            episodes = aEpisodes;
            genre = aGenre;
            rating = aRating;
        }

        // Getter and Setter for name
        string getName() { return name; }
        void setName(string aName) { name = aName; }

        // Getter and Setter for episodes
        int getEpisodes() { return episodes; }
        void setEpisodes(int aEpisodes) {
            if (aEpisodes >= 0) episodes = aEpisodes;
            else cout << "Invalid number of episodes." << endl;
        }

        // Getter and Setter for genre
        string getGenre() { return genre; }
        void setGenre(string aGenre) { genre = aGenre; }

        // Getter and Setter for rating
        float getRating() { return rating; }
        void setRating(float aRating) {
            if (aRating >= 0 && aRating <= 10) rating = aRating;
            else cout << "Invalid rating. Enter between 0 and 10." << endl;
        }

        // Display anime details
        void displayInfo() {
            cout << "Anime Name: " << name << "\nEpisodes: " << episodes 
                 << "\nGenre: " << genre << "\nRating: " << rating << "/10" << endl;
        }
};

int main() {
    // Create an anime object
    Anime anime1("Naruto", 220, "Action/Adventure", 8.5);
    Anime anime2("Bleach", 250, "Action/Adventure", 10);
    anime1.displayInfo(); // Display info

    cout<<endl;

    // Use getters and setters
    cout << "Name: " << anime2.getName() << endl;
    anime2.setEpisodes(366); // Update episodes
    cout << "Updated Episodes: " << anime2.getEpisodes() << endl;
    anime1.setRating(11);    // Attempt invalid rating

    return 0;
}
