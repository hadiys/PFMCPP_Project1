#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: synth
//  action 1: synth.playNote();

//  action 2: synth.arpeggiateNotes();

//  action 3: synth.modulateEffect();

//  2)
//  Noun: audioPlayer
//  action 1: audioPlayer.playAudio();

//  action 2: audioPlayer.rewind();

//  action 3:  audioPlayer.playNextFile();

//  3)
//  Noun: trackpad
//  action 1: trackpad.rightClick();

//  action 2: trackpad.scroll();

//  action 3: trackpad.moveCursor();

//  4)
//  Noun: clock
//  action 1: clock.displayHour();

//  action 2: clock.dislayMinute();

//  action 3: clock.displaySecond();

//  5)
//  Noun: elevator
//  action 1: elevator.openDoor();

//  action 2: elevator.goToFloor();

//  action 3: elevator.closeDoor();

//  6)
//  Noun: printer
//  action 1: printer.drawPaper();

//  action 2: printer.alignCartridge();

//  action 3: printer.queuePrintJob();

//  7)
//  Noun: dog
//  action 1: dog.bark();

//  action 2: dog.fetch();

//  action 3: dog.snore();

//  8)
//  Noun: git
//  action 1: git.fork();

//  action 2: git.import();

//  action 3: git.clone();

//  9)
//  Noun: coffeeMaker
//  action 1: coffeeMaker.pourEspresso();

//  action 2: coffeeMaker.pourHotWater();

//  action 3: coffeeMaker.steam();

//  10)
//  Noun: phone
//  action 1: phone.dial();

//  action 2: phone.takePicture();

//  action 3: phone.openApp();



#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
