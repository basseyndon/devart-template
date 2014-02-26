#include "VerletCurtain.h"

VerletCurtain::VerletCurtain()
{}

VerletCurtain::~VerletCurtain()
{}

void VerletCurtain::setup( const int curtainHeight,
           const int curtainWidth,
           const int yStart,
           const float restingDistances,
           const float stiffnesses,
           const float curtainTearSensitivity )
{
    // midWidth: amount to translate the curtain along x-axis for it to be centered
    // (curtainWidth * restingDistances) = curtain's pixel width
    int midWidth = (int) (curtainWidth/2 - (curtainWidth * restingDistances)/2);
    // Since this our fabric is basically a grid of points, we have two loops
    for (int y = 0; y <= curtainHeight; y++) { // due to the way PointMasss are attached, we need the y loop on the outside
        for (int x = 0; x <= curtainWidth; x++) {
            VerletPointMass pointmass = VerletPointMass(midWidth + x * restingDistances, y * restingDistances + yStart);
            
            // attach to
            // x - 1  and
            // y - 1
            //  *<---*<---*<-..
            //  ^    ^    ^
            //  |    |    |
            //  *<---*<---*<-..
            //
            // PointMass attachTo parameters: PointMass PointMass, float restingDistance, float stiffness
            // try disabling the next 2 lines (the if statement and attachTo part) to create a hairy effect
            if (x != 0)
                pointmass.attachTo(&pointmasses.at(pointmasses.size()-1), restingDistances, stiffnesses);
            // the index for the PointMasss are one dimensions,
            // so we convert x,y coordinates to 1 dimension using the formula y*width+x
            if (y != 0)
                pointmass.attachTo(&pointmasses.at((y - 1) * (curtainWidth+1) + x), restingDistances, stiffnesses);
            
            // we pin the very top PointMasss to where they are
            if (y == 0) {
                pointmass.pinTo(pointmass.x, pointmass.y);
            }
            
            // add to PointMass array
            pointmasses.push_back(pointmass);
        }
    }
}