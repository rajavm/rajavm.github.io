---
layout: post
title: Popup Dictionary

---

Simple hack for  cross application dictionary with popup supported by keybooard shortcut combinations.  

###Requirements  
*GNU/Linux  
*[Goldendict](http://bit.ly/1HDEkNk)  
*WordNet  
*Text to speech : Espeak  
*Clipboard manager : parcellite  

###Installation  
`sudo apt-get install goldendict espeak parcellite`

###Post installation:  

<a href="http://pastebin.com/B9ueCPAg"><font color="blue"><i>Adding pronunciation  </i> </font> </a>  
<a href="http://pastebin.com/K1v7ndBe"><font color="blue"><i>Adding dictionary files   </i> </font> </a>  

###One time procedure:
0.Right click Parcellite daemon -> Preferences  
  See the picture  
![Parcellite](http://s3.postimg.org/o1api0rw3/parcellite.png)  
1.Create a bash file(extension: .sh) and paste the following  
``` 
              goldendict `parcellite --primary`  
```  
2.Add a executable permission to the bash file created  
              `chmod u+x filename.sh`  
3.Open Systemsettings-> keyboard->Shortcuts->Custom shortcut  
4.Select your bash script as the command and add a custom keyboard shortcut


###Working:
Now just double click a word in browser,text editor etc and press the custom shortcut combination  
![Popup with pronunciation](http://s2.postimg.org/kgiodi7xl/del.png)  
Love Gnu/linux

####References:
https://askubuntu.com/questions/458584/how-can-i-add-text-to-speech-to-goldendict  
https://askubuntu.com/questions/183570/where-can-i-find-dictionaries-for-opendict-and-goldendict  



