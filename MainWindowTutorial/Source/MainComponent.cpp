/*
  ==============================================================================

    MainComponent.cpp
    Created: 14 Apr 2023 6:20:58pm
    Author:  leanne

  ==============================================================================
*/

#include <JuceHeader.h>
#include "MainComponent.h"

//==============================================================================

MainComponent::~MainComponent()
{
  setSize (600, 400);
}

void MainComponent::paint (juce::Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */

    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));   // clear the background

    g.setColour (juce::Colours::grey);
    g.drawRect (getLocalBounds(), 1);   // draw an outline around the component

    g.setColour (juce::Colours::white);
    g.setFont (14.0f);
    g.drawText ("MainComponent", getLocalBounds(),
                juce::Justification::centred, true);   // draw some placeholder text
}

void MainComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..
    currentSizeAsString = juce::String (getWidth()) + " x " + juce::String (getHeight());


}
