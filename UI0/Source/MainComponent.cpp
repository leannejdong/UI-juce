#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
    : mDryWetSlider(Slider::RotaryHorizontalVerticalDrag, Slider::TextBoxBelow),
    mLabel("Hello! We are making a film"), mButton("Click me")
{
    //setSize (600, 400);
    addAndMakeVisible(mDryWetSlider);
    addAndMakeVisible(mLabel);
    addAndMakeVisible(mButton);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setFont (juce::Font (16.0f));
    g.setColour (juce::Colours::white);
    g.drawText ("Hello World!", getLocalBounds(), juce::Justification::centred, true);
}

void MainComponent::resized()
{
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
    mDryWetSlider.setBounds(getWidth() / 2 - 50, getHeight() / 2 - 75, 100, 100);
    mLabel.setBounds(getWidth() / 2 - 50, getHeight() / 2 - 50, 100, 20);
    mButton.setBounds(getWidth() / 2 - 50, getHeight() / 2 + 10, 100, 30);


}


/*
we add a Slider component for the wet/dry mix, 
and position it along with the label and button in the resized function. 
We also change the label text to "Reverb Plugin".
*/