#pragma once

#include "Core.h"

#include <vector>
#include <string>

class Feature
{
private:
    int startCount;
    int endCount;

    int layer; //higher numbers on top (render later)

public:

    // ------------- ABSTRACT FUNCTIONS -------------

    //MODIFIES strand
    virtual void render(std::vector<Color> strand) = 0;

    virtual std::string getFeatureType() = 0;

    // ------------- GETTERS AND SETTERS -------------

    int getStartCount()
    {
        return startCount;
    }

    void setStartCount(int count_in)
    {
        startCount = count_in;
    }

    int getEndCount()
    {
        return endCount;
    }

    void setEndCount(int count_in)
    {
        endCount = count_in;
    }

    int getLayer()
    {
        return layer;
    }

    void setLayer(int layer_in)
    {
        layer = layer_in;
    }
}