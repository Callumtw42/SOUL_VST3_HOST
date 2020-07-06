The Soul Patch Host wrapped in a vst3. Works in Ableton and Traktion Waveform (havent tested other DAW's yet)
Have tested with SineSynth, PadSynth and Reverb demo patches with no problems so far

Steps to use:

1. Clone / download this repo
2. Open the jucer file with Projucer
3. in PluginProcessor.cpp change the #include's to point to your JUCE/SOUL install locations
4. Build / Debug
5. Copy the  .vst3 in the generated builds folder to wherever your DAW looks for vst3's
6. Open your DAW, load SOU_VST3_HOST and drag in your soul patches

Remember to tick "Plugin is a Synth" and "Plugin MIDI Input" in Projucer if you want to test instrument patches.