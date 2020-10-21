#include <iostream>
#include <string>
using namespace std;

string Invitation(string invite);

//string Entrance(string location);

//string Foyer(string location);


int main() {

    string invite;
    string location;
    char answer;


    cout << "\nYou find yourself in front of a large mansion. The paint is peeling from the columns\n";
    cout << "and the bricks are crumbling off of the walls. All the grass is dead.\n";
    cout << "You have in hand an invitation:\n";


    cout << Invitation(invite) << endl;

    cout << "\n\n You are not certain about this invitation, but it is near Halloween and you want to get";
    cout << " into the spirit. Plus a prize sounds enticing.\n";
    cout << "Along with the invitation is a mask\n";

    cout << "Continue? Y/N" << endl;
    cout << ":";
    cin >> answer;

        while(answer) {

            if (answer == 'n' || answer == 'N') {
                cout << "You decide that this adventure is too scary. You chicken out\n";
                break;
            } else if (answer == 'y' || answer == 'Y') {
                cout << "You decide that you have nothing else to do this evening. You proceed to the entrance\n";
                return 0;
            } else {
                cout << "Please enter a \"Y\" or an \"N\".\n";
                cin >> answer;
                continue;
            }
        }


    cout <<"\nThe entrance to the mansion is grandiose. You find 6 other people. All wearing various animal masks\n";
        cout << "You decide to put on your animal mask. It is white with the form of a deer's face.";
    return 0;
}

string Invitation(string invite){
    invite = "\n\"It is my honor to cordially invite you to the First Annual Dead Party.\n"
             "I hope that you enjoy the festivites\".\n\n\"P.S. There is a game in store and a prize to be won!\""
             "\n\"P.P.S. Please wear the mask provided.\"";
    return invite;

}



//string Entrance(string location) {
  //  location = "\nThe entrance to the mansion is grandiose. You find 6 other people. All wearing various animal masks\n";
    //return location;
//}

//string Foyer(location) {
//    location = "\nThe foyer is large. "

//}