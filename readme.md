The Soul Patch Host wrapped in a VST3.

Steps to use:

1. Clone / download this repo
2. Clone the SOUL repo https://github.com/soul-lang/SOUL somewhere, e.g. alonside this repo
3. Download the latest prebuilt SOUL binaries https://github.com/soul-lang/SOUL/releases and extract the SOUL_PatchLoader.dylib etc to your desktop, which is a convienient place where it will be found.
4. Open the jucer file with Projucer
5. Change path in "header includes" for the Xcode/VS exporter to point to the /SOUL/include folder
6. Open in IDE and Build / Debug
7. Open your DAW, load SOUL_VST3_HOST and drag in soul patches

Remember to tick "Plugin is a Synth" and "Plugin MIDI Input" in Projucer if you want to test instrument patches.
