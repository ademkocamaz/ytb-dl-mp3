@echo off
mode 80,1
color F8
title Downloading..
::youtube-dl.exe
if exist youtube-dl.exe move /y youtube-dl.exe youtube-dl.exe.old > nul
if not exist youtube-dl.exe wget -q --show-progress https://yt-dl.org/downloads/latest/youtube-dl.exe
::ffmpeg.exe
if exist ffmpeg.exe move /y ffmpeg.exe ffmpeg.exe.old > nul
::ffprobe.exe
if exist ffprobe.exe move /y ffprobe.exe ffprobe.exe.old > nul
if not exist ffmpeg.exe wget -q --show-progress https://www.gyan.dev/ffmpeg/builds/ffmpeg-release-essentials.7z
7z.exe e -r ffmpeg-release-essentials.7z ffmpeg.exe ffprobe.exe
del /f /q *.7z
del /f /q *.old
