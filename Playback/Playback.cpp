//NOTE: Playback may involve transferring display info to an Arduino over serial connection
    //This is because it appears the neopixels may not work with the newer raspberry pi's
    //Should just give it a shot though
    //If I do Playback on the Pi's, it will likely be in Python... whic means I can't use this library
    //Will have to do rendering to an output file


//A vector of all the features, sorted by start time
//An int index that keeps track of the next feature to start

//A vector of all active features, sorted by priority (ascending), start time
//When something is added to this vector, have it inserted in the correct place, so we never have to sort the whole thing at once

/* Playback loop:

Check if we are at the end of the song

Check the next feature in the list of all feautre
if its start time is <= the current time, add it to the active features list in the correct place
    - then check the next one, and add it too, repeating until the next feature start time > the current time

for each active feature: (in reverse because we are removing elements? will have to be sorted in reverse as well)
    if the feature is past its end time: remove it from the vector
    otherwise, run the reaure's execute() function

*/