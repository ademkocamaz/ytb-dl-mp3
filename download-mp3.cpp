#include <iostream>

int main(int argc, char** argv) {
	system("youtube-dl.exe --verbose --extract-audio --audio-format mp3 --batch-file url.txt");
	system("move /y *.mp3 Download-mp3");

}