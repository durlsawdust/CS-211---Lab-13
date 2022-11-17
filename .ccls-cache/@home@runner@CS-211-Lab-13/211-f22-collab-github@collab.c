// Collaborative code file, Lab 13
// 
// One person in your partner group should clone this repository.
// Create a function that outputs your name, along with either one thing 
//    that you learned about git or GitHub or something that gave you trouble
//    that you would like others to learn from. The function name should be
//    your NetID combined with your partner's NetID.
// Feel free to add other things to your function as well, though be mindful
// of the length of it, given how many students will be collaborating on this code!
// 
// Read through the code that is already here before adding your own.
// Add this code to the repository using git commands.
// 
// An example is shown below.
// 
// UIC CS 211, Fall 2022
#include <stdio.h>

void reed_ekidan2() {
  printf("Dale Reed and Ellen Kidane\n");
  printf("We learned that git and GitHub are amazing, powerful tools!\n");
}

void amazhe3_posadas2() {
  printf("Azka Mazher and Daryle Posadas");
  printf("At first we had trouble cloning Kidane's repo. Initially, we tried importing it through replit without the commands and it wasn't working. Then we tried using the url directly from the github site and it wasn't working because it wasn't the exact URL for the repository. Finally, we tried the URL given in the lab description and it worked!");
  printf("Another issue we ran into was trying to add our code to allow for it to be committed. What we did wrong was trying to add the file without being in the correct directory, so once we were in the right directory, our file was added no problem.");
}

int main()
{
    printf("This code has been created by the students of CS 211, Fall 2022!\n\n");
    
    reed_ekidan2();
    amazhe3_posadas2();
    
    return 0;
}
