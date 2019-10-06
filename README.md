# Week 1 Homework
A prototype of a multi-player game using buttons, led, and piezo with an Arduino Leonardo. 

## Game Instructions
There are two games you can play with this interactive game device. If you feel energetic and ready to move (possibly run) around the room, please follow instructions written under "Game A". If you would like to sit down and play in peace, please skip to "Game B".

### Game A

Materials: the game device, a relatively large room
The game device is placed in the center of the room and four players will be each allocated their own button. They will be given five tasks to complete individually. These tasks will be projected on a screen (or somewhere visible to all players) and may include activities such as: "find a round object", "find a red object", and "find someone with the same hair color". Players will be allowed to freely move around the room to complete their tasks. Everytime the players complete a task, they will have to run back to the game device and press their allocated button. The first person that makes their LED light up by successfully clicking on the button five times (and completing the five tasks) wins the game.

*Note* line 22 should be int goal = 5

### Game B

Materials: the game device, a dice
Four players will be each allocated their own button and will go around a circle to roll a dice. The objective of the game is to click on the button a 100 times as fast as you can, however, you can only click if you roll the number 6 on a dice. You can keep on clicking until someone else rolls a six. The first person that makes their LED light up by successfully clicking on the button a 100 times wins the game.

*Note* line 22 should be int goal = 100
