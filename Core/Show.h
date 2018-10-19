#pragma once

#include "Feature.h"
#include "Song.h"

#include <vector>

class Show {

private:
    std::vector<Feature> features; //must remain sorted by start time
    Song song;

    void indexOfFeature(Feature f);

public:

    void addFeature(Feature f);
    void removeFeature(Feature f);

    //Maybe add something that accounts for
}