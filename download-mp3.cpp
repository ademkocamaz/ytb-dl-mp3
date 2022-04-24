#include <iostream>

int main(int argc, char** argv) {
	system("youtube-dl.exe --verbose --extract-audio --audio-format mp3 --batch-file url.txt");
	system("mkdir Downloaded-mp3");
	system("move /y *.mp3 Downloaded-mp3");

}