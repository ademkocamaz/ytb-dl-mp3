#include <iostream>

int main(int argc, char** argv) {

	//system("mode 80,1");
	//system("color F8");



	//ffmpeg
	system("if exist ffmpeg.exe move /y ffmpeg.exe ffmpeg.exe.old > nul");
	system("if exist ffprobe.exe move /y ffprobe.exe ffprobe.exe.old > nul");
	system("wget -q --show-progress https://www.gyan.dev/ffmpeg/builds/ffmpeg-release-essentials.7z");

	//youtube-dl
	system("if exist youtube-dl.exe move /y youtube-dl.exe youtube-dl.exe.old > nul");
	system("wget -q --show-progress https://yt-dl.org/downloads/latest/youtube-dl.exe");

	system("7z.exe e -r ffmpeg-release-essentials.7z ffmpeg.exe ffprobe.exe");

	system("del /f /q *.old > nul");
	system("del /f /q *.7z > nul");

	//system("PAUSE");

}