# The Build 
From Computer Aided Design to Physical Model, here is the building and iterative process!
## From First To Last Prototype
![IMG-2294](https://github.com/Hunter-Rohovit/Rubik-s-Cube-Simulator/assets/105554281/0a9a7287-f027-4f5a-9b19-3c1a4eb2a8d9) <br>
This image shows the process from my very first attempt to the final product. Starting on the left, I printed my first servo fitting test and from there made a few more modifications to the body itself. Additionally, I switched the position of the rotating control horn from the right side of the servo to the left, and switched out the type of servo for one with double the torque. The silver landing leg was my first landing leg print, which was too heavy for the servo to lift, so I changed the infill density from 40% down to 15% and it worked from there. The next two landing legs show the difference in print quality as a result of printing the landing leg vertically versus horizontally. The final landing leg with the servo attached shows my idea to use Loctite Epoxy so that the landing leg wouldn't slip on the motor shaft. The two sliders to the right, show the difference in rigidity between the first prototype and the second prototype. To get to the final slider design, I had to do a little bit of trial an error to get the proper amount of rigidity in the sliders while still allowing the sliders to actually slide. To do that, I adjusted the radius of the sliders until they slid to my liking. The second to last piece shows my final prototype before the full physical model. This prototype was made to ensure everything fit together properly. It took two iterations to get to the point, but it eventually worked. And finally, the last piece is the full, working physical model. <br>
## 3D Printing
![IMG-2262](https://github.com/Hunter-Rohovit/Rubik-s-Cube-Simulator/assets/105554281/81c4390d-b5e7-4745-a49a-124abdedf30f)<br>
![IMG-2301](https://github.com/Hunter-Rohovit/Rubik-s-Cube-Simulator/assets/105554281/fa3f1398-67b3-4071-ad91-85ec829b3b37)<br>
![IMG-2303](https://github.com/Hunter-Rohovit/Rubik-s-Cube-Simulator/assets/105554281/2d2507a9-44ee-40bb-9f12-d14c436b57c6)<br>
![IMG-2308](https://github.com/Hunter-Rohovit/Rubik-s-Cube-Simulator/assets/105554281/dee30b7c-f7e0-4cef-ab22-51cd57471422)<br>
![IMG-2311](https://github.com/Hunter-Rohovit/Rubik-s-Cube-Simulator/assets/105554281/f2898d4b-a7df-474e-ac7a-7f8433d46234) <br>
Everything except for the servo motors was 3D printed on my Anycubic Chiron printer. <br>

## Assembly
![IMG-2300](https://github.com/Hunter-Rohovit/Rubik-s-Cube-Simulator/assets/105554281/45aba75c-4c63-4018-9cec-bdd0a818f9b6) <br>
The first step to assembling the rocket is putting the custom control horns onto the servo and fastening them with screws so they don't slip.<br>
![IMG-2299](https://github.com/Hunter-Rohovit/Rubik-s-Cube-Simulator/assets/105554281/1889227e-8063-4fa8-8c93-cdae50ec577e) <br>
The next step is putting the heat inserts into the landing legs. Using heat inserts is something I discovered while working on my Open Source Rover. They are really useful when working with 3D prints so that I can get a good thread to screw into and make sure the legs are fully fastened to the control horn connecting the servo. All you have to do is add some heat to them with a soldering iron or something else and they slide right in!<br>
![unnamed](https://github.com/Hunter-Rohovit/Rubik-s-Cube-Simulator/assets/105554281/a46ec630-9687-400c-a45b-93fc033f4d8b) <br>
Next is actually putting the servo motors into their places. To actually get the servo motors to fit within the 3D printed body and be snug so that they don't move took several more iterations than I thought it would. <br>
![IMG-2305](https://github.com/Hunter-Rohovit/Rubik-s-Cube-Simulator/assets/105554281/9611036b-d483-474e-84c3-c7602f34668d) <br>
After the servos are put into place, its time to adjust the offsets in the code! Because the control horns are screwed on at different positions on the servo, there isn't one value that will work for 90 degrees vertical for every single leg. This is why I implemented the offset, so that the position of the servo can be easily adjusted when callibrated. <br>
![IMG-2313](https://github.com/Hunter-Rohovit/Rubik-s-Cube-Simulator/assets/105554281/aaf94f76-8132-4e16-91bd-3851c94a4f53) <br>
After setting the offsets to the right values, we can place the landing legs where they need to go and fasten them with hex screws. <br>
![Sliders](https://github.com/Hunter-Rohovit/Rubik-s-Cube-Simulator/assets/105554281/ad333289-2f55-42d7-bca6-8fb8eaf94b2c) <br>
The sliders that I designed were by far my favorite part of the project. It seemed so daunting at first to make 4 pieces with translational joints that slid together well and stopped at the exact point I needed them to without falling apart. But after spending around 6 hours on my computer figuring out how to do this, when I saw these sliders work the way I inteded them to first try I was amazed. With that being said though there were still some issues with the sliders getting stuck that I had to resolve. <br>
![final prototype](https://github.com/Hunter-Rohovit/Rubik-s-Cube-Simulator/assets/105554281/f4f4f182-39ad-4145-9c37-6bbedfe30324) <br>
After putting together the sliders and screwing the slider cap on, I inserted the two pins (small axils I 3d printed to create a revolute joint) into their dedicated spots and the entire system moved like it was supposed to. There were some issues with the largest piece of the sliders being too long, so the landing leg wouldn't be able to fold all the way, but after adjusting that, the landing leg folded together perfectly. <br>
![Full Landing Legs](https://github.com/Hunter-Rohovit/Rubik-s-Cube-Simulator/assets/105554281/34e84a7b-7828-49ca-98ef-2ed4bbde4cae) <br>
And after adding the electronics and uploading the code my Falcon 9 Landing Legs Model was complete!!<br>


