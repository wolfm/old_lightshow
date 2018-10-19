#pragma once

#include "Core.h"

#include <string>

class Song {
    //an enum value representing what type of song it is (local .mp3, spotify, etc.)

    int ms_delay; //milliseconds of delay from starting the mp3 to the first beat

    std::string filePath;
}