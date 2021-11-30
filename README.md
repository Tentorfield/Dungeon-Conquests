# Dungeon Conquest
 Authors: [Huy Ngo](https://github.com/Tentorfield),
 [Eugene Baldonado](https://github.com/EugeneBaldonado), 
 [Harrison Cooper](https://github.com/Harry64C),
 [Dong Liu](https://github.com/Dliu117)
 
 ## Expectations
 * Your project description should summarize the project you are proposing. Be sure to include:
   * Each member of the group must actively participate in the Github Project board and reviewing commited code.

## Project Description
 We all played adventure games as kids. So it would be fun to actually made one for ourselves. 
* [Composite](https://www.tutorialspoint.com/design_pattern/composite_pattern.htm) - Since there will be a hierachical structure in the game, this design pattern uses the tree structure to represent the progressively difficult bosses for each level or stage. For example: Level 1 - Level II, Level III ... Level VIII. 
* [Factory](https://www.tutorialspoint.com/design_pattern/factory_pattern.htm) - We plan to have two Super Classes "Hero" and "Dungeon". The Hero's subclasses will most likely be "Weapon", "Health", "Armor", "Exp."..etc. For Dungeon's subclasses, it will probably include: "Stages", "Minions", "BossType", "FinalBoss"...etc.   
* For now, our main objective for input and output will take place in PuTTy's terminal since the game is primarily text-based. If there is extra time alloted, images will pop up when the player encounters a situation of interests. Our output will use "#include <opencv2/opencv.hpp>" so that a display window will project the image(s). The inputs may include keyboard and mouse when interacting with objects. 

## Class Diagram
[Dungeon Masters UML Class Diagram](https://lucid.app/documents/embeddedchart/f6655ad8-9027-43a4-b3ce-36ae92e1ef74)
* Based on the UML Diagram, the stragety patterns that we will use are Composite and Factory design patterns. It is an obvious design choice to choose Composite as our main design pattern for Dungeon Conquest. This is because Composite design pattern helps eliminate the complexity of various components by treating all objects the same. In this case, "Character" class and "BaseAttributes" class would follow the Composite design pattern. We choose Factory design pattern because we expect the subclasses of "Monster" class to be able to freely choose the type of objects it wishes to create, because each subclass (Dwarf, Ghost, and Normal) should react differently from the player's attacks. We also believe that Factory design pattern is similar to Composite in terms of providing a cleaner look for interface oriented methods, rather than implementation. 

## Updated Class Diagram
[Dungeon Masters UML Class Diagram](https://lucid.app/documents/embeddedchart/f6655ad8-9027-43a4-b3ce-36ae92e1ef74)

* We decide to stick with Composite and Strategy patterns for our project. However, there are several major changes in our updated UML diagram that we would like to mention, specifically Composite Pattern. First, we decided to scrap the original "BaseAttributes" class implementation, replaced it with the "Stats" and its derived classes as our. For each level up, the player will have the option to allocate their 10 stats points on Mind, Body, and Spirit. These three atributes has a major impact on the multipliers for player's health, attack, magic, and defense. With the change mentioned above, we have decided to scrub "Warrior" and "Mage" subclasses, only keeping Player class.

* Overall, the two design patterns help us plan for our game in a more organized matter. In a sense, the composite pattern made the workflow alot easier when coding player-sided perspective. This is because composite pattern made the connections of many components comprehenable. This way, we are able to easily structure groups like the Player and Stats class as a whole. For Monster Class, using strategy pattern ended up being the right decision because we want the complexities derived from Monster Class to be simplified for the client or interface. Also, since the characteristics of the three types of monsters (Dwarfs, Ghost, Normal) are monotonal, we are able to use strategy pattern to increased the consistency among the three monster sub-classes.   

> During the meeting with your TA you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
