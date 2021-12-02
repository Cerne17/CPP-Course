#include <iostream>
#include <string>

using namespace std;

class Movie {
    private:
        
    public:
        string title;
        string director;
        string rating;

        Movie (string aTitle, string aDirector, string aRating)
        {
            title = aTitle;
            director = aDirector;
            rating = aRating;
        };
};

int main ()
{

    Movie avengers("The Avengers", "Joss Whedon", "PG-13");

    cout << avengers.rating << endl;

    return 0;
}

/*
    Getters and Setters Limit the inputs that the user can insert into the code to only those that make sense
    EG.:
        Iserting a Dog value for the rating of a Movie
*/