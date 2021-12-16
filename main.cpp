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
//  action 1: The synth plays the note that's pressed on the keyboard.
synth.playNote();

//  action 2: The synth activates its arpeggiating function.
synth.arpeggiateNotes();

//  action 3: A synth parameter modulates an effect.
synth.modulateEffect();

//  2)
//  Noun: audioPlayer
//  action 1: The audio player starts playing the current file.
audioPlayer.playAudio();

//  action 2: The audio player rewinds the play position.
audioPlayer.rewind();

//  action 3:  The audio player retrieves and plays the next audio file. 
audioPlayer.playNextFile();

//  3)
//  Noun: trackpad
//  action 1: The trackpad produces a right-click command.
trackpad.rightClick();

//  action 2: The trackpad scrolls a window.
trackpad.scroll();

//  action 3: The trackpad moves the cursor on a window.
trackpad.moveCursor();

//  4)
//  Noun: clock
//  action 1: The clock screen displays the current hour.
clock.displayHour();

//  action 2: The clock screen displays the current minute.
clock.dislayMinute();

//  action 3: The clock screen displays the current second.
clock.displaySecond();

//  5)
//  Noun: elevator
//  action 1: The elevator door opens.
elevator.openDoor();

//  action 2: The elevator goes to the designated floor.
elevator.goToFloor();

//  action 3: The elevator door closes.
elevator.closeDoor();

//  6)
//  Noun: printer
//  action 1: The printer draws a paper.
printer.drawPaper();

//  action 2: The printer aligns its cartridges.
printer.alignCartridge();

//  action 3: The printer queues a requested print job.
printer.queuePrintJob();

//  7)
//  Noun: dog
//  action 1: The dog barks at something. 
dog.bark();

//  action 2: The dog fetches something.
dog.fetch();

//  action 3: The dog snores in its sleep.
dog.snore();

//  8)
//  Noun: git
//  action 1: Git forks a repository
git.fork();

//  action 2: Git imports a repository
git.import();

//  action 3: Git clones a repository
git.clone();

//  9)
//  Noun: coffeeMaker
//  action 1: The coffee-maker pours a shot of espresso
coffeeMaker.pourEspresso();

//  action 2: The coffee-maker pours some hot water.
coffeeMaker.pourHotWater();

//  action 3: The coffee-maker produces lots of steam.
coffeeMaker.steam();

//  10)
//  Noun: phone
//  action 1: The phone dials the inputted number.
phone.dial();

//  action 2: The phone captures a photo.
phone.takePicture();

//  action 3: The phone runs an app. 
phone.runApp();




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
