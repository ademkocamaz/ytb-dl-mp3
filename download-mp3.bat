@echo off
mode 70,1
color FC
::youtube-dl.exe --update
::call get-latest.bat
youtube-dl.exe --verbose --extract-audio --audio-format mp3 --batch-file url.txt
move /y *.mp3 Download-mp3
