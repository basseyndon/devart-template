# First Public Prototype Test

On February 28th I was asked to be in an art event that took place within a nightclub. As this was the first of its kind in Ottawa there was not a huge number of people within the space which allowed us more intimate feedback of the currently primitive prgress of the piece and how it worked. It is also worth noting that if this piece were to be displayed in an art gallery there would likely be displayed to a different vibe and type of participant; but that even with this in consideration there was some valuable feedback gleaned.

![Image of Prototype](../project_images/FirstEvent_1.jpg?raw=true "Image of Prototype")

![Image of Prototype](../project_images/FirstEvent_2.jpg?raw=true "Image of Prototype")

## The Current State of the Project
Currently the project is in a one screen state (as renting large HD televisions and stands is quite expensive). There is no Google service added just yet. I really wanted to focus on the how people interact with the piece without provocation, and if when asked, how they felt the concept related to the work.

The current iteration has the following features:
- a pedestal that activates the "spikes" when stepped on (using Arduino)
- a visual engine that drives the lighting, shadows, and animation of the piece currently
- one screen presentation

To be added still:
- two more screens for a more "enveloping" effect
- more thought on how the spikes appear and retract
- addition of "Google+" want posts (still thinking on how to add as they no longer will be textured onto spikes)
- Some secondary interactions as participants naturally gravitated towards them (see observations below)

## Observations
To be brief I will list out my observations of participation at this event in point form following:
- People did not know it was interactive
- People were confused at to what it was about, often asking me what it meant
- When they stood on the pedestal they really enjoy the Spike effect
- People thought it looked really "cool"
- People really liked the concept
- People often would try waving their hands when standing the pedestal suggesting they are quite familiar with installations these days that use gestures for interaction
- People often thought that the number of spikes exposing themselves were related to their weight

## Addressing the Feedback
From the observations made I want to explore the following changes:
- have the pedestal stand out more being all white with, perhaps, footprints on it suggesting to stand on it; while also having the spikes randomly peek at the surface to suggest they want to escape
- Not concerned about not knowing what it means as I enjoy people making their own meaning (a side card in a gallery would do wonders though)
- As people were trying to use their hands I think perhaps it would be interesting to add some sort of secondary effect such as moving the spikes slightly up and down with hands moving up and down
- I am not suite sure yet how to move participants away from the idea that their weight affects teh number of spikes. Still need to think on this ...

## Conclusion
Overall it seems this piece is on the right track but lacks some visibility and relatability. I do believe that adding two more screens and adjusting some of the movement and animation to better relate to the participant standing on the platform will help this, and provide a more natural usability. I also believe that the meaning will be less clear once I get in the Google+ posts as they spill across the spikes.

## Duct Tape Fix
As an embarrassing but humourous side note was that when I got to the event the Serial port to the Arduino controlling pad that detected when people stood on the pedestal failed. As I was not comfortable with manually controlling the interaction I had to come up with another solution which ended up being what was seen in the picture below. Though extremely haphazard using the enter key of the keyboard worked quite well after using two tape rolls compressed as fill-in springs that would pop the pedestal off the keyboard key when a person dismounted. Not the best solution but definitely one I was surprised actually worked. The duct tape over the esc button is so that no sweater thrown over top to hide it did not exit the program.

![Image of Keyboard Pedestal](../project_images/FirstEvent_3.jpg?raw=true "Image of Keyboard Pedestal")
