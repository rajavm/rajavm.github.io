---
layout: post
title: Popup Dictionary
---

Simple hack for  cross application dictionary with popup supported by keybooard shortcut combinations.

###Requirements
*GNU/Linux
*[Goldendict](http://bit.ly/1HDEkNk)
*Text to speech : Espeak 
*Clipboard manager : parcellite

###Installation
<p class="message">
sudo apt-get install goldendict espeak parcellite
<p>

###Post installation:
[Adding pronunciation](http://pastebin.com/B9ueCPAg)
[Adding dictionary files](http://pastebin.com/0spq5jA3)

###One time procedure:
0.Run parcellite (can be found in usual launcher menu/ can be run from the terminal)
            -Right click the daemon -> Preferences -> Check Use primary selection
1. Create a bash file(extension: .sh) and paste the following without curly brackets
              {goldendict `parcellite --clipboard`}
2.Add a executable permission to the bash file created 
              chmod u+x filename.sh

3. Open Systemsettings-> keyboard->Shortcuts->Custom shortcut
              select your bash script as the command and add a custom keyboard shortcut


###Working:
Now just double click a word in browser,text editor etc and press the custom shortcut combination

Love Gnu/linux

#References:
https://askubuntu.com/questions/458584/how-can-i-add-text-to-speech-to-goldendict
https://askubuntu.com/questions/183570/where-can-i-find-dictionaries-for-opendict-and-goldendict



