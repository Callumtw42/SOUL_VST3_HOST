/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
Soul_vst3_hostAudioProcessorEditor::Soul_vst3_hostAudioProcessorEditor (Soul_vst3_hostAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    setSize (400, 300);
    addAndMakeVisible(audioProcessor.patchLoader.get());
}

Soul_vst3_hostAudioProcessorEditor::~Soul_vst3_hostAudioProcessorEditor()
{
}

//==============================================================================
void Soul_vst3_hostAudioProcessorEditor::paint (juce::Graphics& g)
{
}

void Soul_vst3_hostAudioProcessorEditor::resized()
{
    audioProcessor.patchLoader->setBounds(getBounds());
}
