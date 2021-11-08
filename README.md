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

> ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to:
 > * Create an "Epic" (note) for each feature and each design pattern and assign them to the appropriate team member. Place these in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Create smaller actionable development tasks as issues and assign them to team members. Place these in the `TODO` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA
## Class Diagram
[Dungeon Masters UML Class Diagram](https://lucid.app/documents/embeddedchart/f6655ad8-9027-43a4-b3ce-36ae92e1ef74)
 
 > ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II.
 > * You should also update this README file by adding the following:
 >   * What design patterns did you use? For each design pattern you must explain in 4-5 sentences:
 >     * Why did you pick this pattern? And what feature did you implement with it?
 >     * How did the design pattern help you write better code?
 >   * An updated class diagram that reflects the design patterns you used. You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description).
 >   * Make sure your README file (and Project board) are up-to-date reflecting the current status of your project. Previous versions of the README file should still be visible through your commit history.
> 
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
 
