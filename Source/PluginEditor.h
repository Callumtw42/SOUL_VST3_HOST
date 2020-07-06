/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class Soul_vst3_hostAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    Soul_vst3_hostAudioProcessorEditor (Soul_vst3_hostAudioProcessor&);
    ~Soul_vst3_hostAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    Soul_vst3_hostAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Soul_vst3_hostAudioProcessorEditor)
};
