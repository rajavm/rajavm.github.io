---
layout: post
title: Volume manangement in Lubuntu

---

###Lubuntu keyboard binding for volume control

In Terminal

`cp  ~/.config/openbox/lubuntu-rc.xml ~/.config/openbox/lubuntu-rc.xml.bk`

`leafpad ~/.config/openbox/lubuntu-rc.xml`

Search for <!-- Keybinding for Volume management -->

Copy and overwrite the following 

<!-- Keybinding for Volume management -->
    <keybind key="XF86AudioRaiseVolume">
      <action name="Execute">
        <command>pactl set-sink-volume @DEFAULT_SINK@ +2%</command>
      </action>
    </keybind>
    <keybind key="XF86AudioLowerVolume">
      <action name="Execute">
        <command>pactl set-sink-volume @DEFAULT_SINK@ -2%</command>
      </action>
    </keybind>
    <keybind key="XF86AudioMute">
      <action name="Execute">
        <command>pactl set-sink-mute @DEFAULT_SINK@ toggle</command>
      </action>
    </keybind>

Save and close the file

In terminal type 

`openbox --reconfigure`


###References:

https://wiki.archlinux.org/index.php/Xbindkeys
http://ubuntuforums.org/showthread.php?t=1422861



