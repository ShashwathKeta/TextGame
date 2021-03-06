// TextGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>

using namespace std;
void joinDark();

int main()
{
	char choice;
	cout << "Welcome to the Desolate World! You have just crash landed in the middle of a large field on a seemingly normal planet. You look around and see that the planet looks like it has suffered a massive war. You turn and see a small village to the East and a large damaged advanced City to the West. Type in E to go to the village and W to go to the city. ";
	cin >> choice;
	if (choice == 'E') {
		cout << "\nYou head to the village and as you approach the village, you are approached by a man. He asks who you are and where you are from. Press L to lie or T to tell him the truth. ";
		cin >> choice;
		if (choice == 'L') {
			cout << "\nYou tell him \"I am from the city over the hill to the West. I just needed a place to stay for a few days and some food.\" He replies, \"One doesn't simply wander around parts these days. After the war, The Blue Dagger have been in control of the cities so I no there is no way in hell you came from that city. Now I will give you one chance to tell me where you are really from. Type in I to stay on the same story of T to tell him the true story.";
			cin >> choice;
			if (choice == 'I') {
				cout << "\nYou tell him, \"I am honestly from that city, I slipped out of the city but was met by resistance, thats why I am so banged up.\" He replies, \"Ok, but if you insist, but I'm going to take you to the Police Station to confirm this on Truth Serum.\" At the Station, the man you were talking to turns out to be the Chief. He takes you to the back and chains you down to a chair. He injects you with something and asks where you are from. You try to continue the lie but you can't! All of a sudden you tell him, \"I am from a planet 3 lightyears from here called Earth. My maps didn't show your world as I was travelling to our sister planet and I crashed just west of here.\" The Chief is stunned. He says, \"Wow, well do you want to first get a bite or show me the crash site\" Type in B to get a bite first of S to show him the Crash Site";
				cin >> choice;
				if (choice == 'S') {
					cout << "\nYou tell him, \"Sure, lets go to the crash site, but how are we going to make sure The Blue Dagger don't get us.\" He says we'll be armed and hands you the strangest gun you have ever seen. The Chief explains it's a weapon that fires a bolt of energy and that it was scavenged from the battlefield of The Last Great War. The two of you head to the crash site and as you near it you hear voices. Type N to get Closer or T to turn back.";
					cin >> choice;
					if (choice == 'N') {
						cout << "\nYou and Chief both drop down to the ground and crawl to the edge of the crater your ship had created. As you look down, you see a half dozen men all with the insignia of a Blue Dagger on their shoulder. Chief looks over at you and asks, \"Is their anything you can do to injure them in the ship. I think we should crawl on over to their truck and blow it up with the explosives on it. That option is real risky if you ask me.\" You try to think about what you could do when all of a sudden you notice the exposed but intact gas tank of your ship. You suggest this to Chief and he says its up to you. Type S for blowing your ships tank or T for blowing the truck up.";
						cin >> choice;
						if (choice == 'S') {
							cout << "You suggest that Chief and you fire one shot at the gas tank of your ship. Chief slides up and fires a clean shot straight at the gas tank igniting it. The ship explodes but a flaming auxillary tank flies straight at you and chief and you watch in horror as it blows up in your face. \n\n GAME OVER\n\n";
							terminate();
						}
						else if (choice == 'T') {
							cout << "Suddenly you remember the auxillary tanks and think this might be much more deadly thank you had first thought. You tell Chief that you are going to go with his plan. Chief and you go over to their truck and look around inside. Most of the tech was military technology like you had never seen before. All of a sudden Chief calls you saying he found a device called \"C4\" and that he would use it to remotely detonate the truck. You place a few peices and run back up the hill when all of a sudden you here shouts behind you and shots. You get over the hill and wait for them to run next to the truck. To your delight, they use the truck as cover and when you activate the C4, the truck blows skyhigh, killing all six members of The Blue Dagger. Type in C to continue.";
							cin >> choice;
							if (choice == 'C') {
								cout << "Suddenly you hear more members of The Blue Dagger coming so you Chief quickly run back to the Village before they reach the crash site. When you reach the Village Chief keeps his promise and takes you to get some food. As you sit down in the Tavern, you hear the door slam and see two members of The Blue Dagger walk in. They tell everyone in the Tavern, \"We know you are harboring a man who is not from around here. We will give you 36 hours to hand him over to us before we come and burn all of this village to the ground. If he is in here be warned, we know you were the one who killed six of our men and we are not happy about that.\" They turn to leave when you notice Cheif draw his weapon. To stop Chief, Press S. To help Chief kill them press H.";
								cin >> choice;
								if (choice = 'S') {
									cout << "As you reach over to stop Cheif, he shoves you and stands up and shoots one of the men, but the other one is to fast and shoots Chief before he can. He walks over to you and looks down and says, \"You don't look like you are from around here. What's your name? You answer Tucker but he says, \"Thats not true, the ship's profile has your picture in it with your name being John Ryder. You start to run but the last thing you ever hear is the sound of a gun behind you.\n\nGAME OVER\n\n";
									terminate();
								}
								else if (choice = 'H') {
									cout << "You see Chief draw his gun and so do you. Chief notices and both of you stand shoot the Blue Dagger member in front of you. Chief and you both walk outside and see the truck they came in and think what they can do to send a message. Chief has an idea and you have one. To go with your idea, type U. To go with Cheifs idea, type C.";
									cin >> choice;
									if (choice == 'U'){
										cout << "Chief tells you, \"All right, lets see what your idea is.\" You tell him that the two of you should go to the Blue Dagger instead of wait for them and have a preemptive strike before they send more men after you. The two of you don the dead Blue Dagger mens uniforms and get in the truck and head to their base. As you head to the big city, you discover an armory. Type G to go to the Armory or type C to continue to the city.";
										cin >> choice;
										if (choice == 'G') {
											cout << "Chief agrees that you should go to the armory and restock on weapons. As you approach, you see that it is loosely guarded by only a few Blue Dagger men. You head to the armory and kill all the men guarding it. Once you are in, you stock up on heavy weapons, grenades and ammunition. Then you decide to head to the city. At the city you and chief engage all the Blue Dagger men and work your way into the city. You kill as many as you can and try to head to the large building in the center, where you are sure you willl find the leader. With your extra weapons and guns you make it to the building with chief when all of a sudden, Chief is sniped. You have to finish the mission by yourself. You get inside the building and work your way up the staircase to find that the Blue Dagger leader is surrounded with 2 dozen men. You immedietly kill the leader and dive to the side to avoid the lackeys shots. You manage to kill them all and save this planet from the influence of the Blue Dagger. You win";
										}
										else if (choice == 'C') {
											cout << "You head straight for the city armed only with your sidearms from the city. As you approach, you see that you are hopelessly, hilariously out gunned. Still you and chief head in and attack the city. After a few mintues, both of you have killed dozens of men but are running out of ammunition. A few more minutes and you run out of ammo and the two of you are captured and knocked unconcious. You wake up to find yourself stuck in a dark room with the Blue Dagger leader in front of you. The next hours are the most painful hours you have ever experienced. And after that you look up to look down the barrel of a gun and see no more. Game Over";
											terminate();
										}
									}
									else if (choice == 'C') {
										cout << "You tell chief that you trust him to make the right choice. He says that you all should stay in the city and take the Blue Dagger out as they come. You wait two days when you see three large trucks filled with dozens of men. Your heart sinks, there is no way you could ever kill them all. As you both begin to attack them, you are overwhelmed with dozens of men coming at you. Soon you get hit once, then again and again until you no longer survive. Game Over!";
										terminate();
									}
								}
							}
						}
					}
					else if (choice == 'T') {
						cout << "\nYou decide to tell Chief, we can come back once those men have left the site. He agrees. As you are going away, all of a sudden chief trips over a rock and falls. The men at the site run over as you and chief run you hear two shots and feel yourself disintegrating into nothing!\n\nGAME OVER\n\n";
						terminate();
					}
				}
				else if (choice == 'B') {
					cout << "You tell you want to eat first. Just as y'all sit down, four men walk in and look around. When they see you they walk towards you and draw thier guns. Chief draws his in order to shoot them first but is shot the second his hand goes down. They walk up to you and then put their gun up to your head and pull the trigger. Game Over.";
					terminate;
				}
			}
			else if (choice == 'T') {
				cout << "You tell the Chief everything. That you are not from this planet and that you are from another planet two light years away exploring this area. Cheif chuckles for a moment but then catches himself. He tells you to trust him and that he will take you to a safe house as this area isn't safe right now. To trust chief, Type T, to reject Chief type R.";
				cin >> choice;
				if (choice == 'T') {
					cout << "You decide to trust Cheif and he takes you back to his house. The following morning, he asks you to come outside and outside you are met with four men who take you by the arm and lead to the back of the building. They ask if that ship is yours and you reply it is. They then say, \"Then you for the parts and the last thing you hear is the firing of a gun. Game Over";
					terminate();
				}
				else if (choice == 'R') {
					cout << "You tell Cheif that you can handle yourself and turn to walk away when you hear the click of a gun behind you. He tells you that he can't let you leave because Blue Dagger has a price on your head and he intends to collect it. The last thing you see is the blinding blue light coming out of his gun. Game Over.";
				}
			}
		}
		else if (choice == 'T') {
			cout << "\nYou decide to tell Chief, we can come back once those men have left the site. He agrees. As you are going away, all of a sudden chief trips over a rock and falls. The men at the site run over as you and chief run you hear two shots and feel yourself disintegrating into nothing!\n\nGAME OVER\n\n";
			terminate();
		}
	}
	else if (choice = 'W') {
		cout << "You head towards the big city. As you head their, you are met by some men asking who you are. They are armed and you decide it would be more prudent to tell the truth. You tell them you are a explorer from a planet three light years away who was traveling. The men are shocked and take you to see the leader of an organization called the Blue Dagger. As they take you to his office, you thnk these might not be the best men, and see a way to escape down an alley to the left of you. Type L to escape of C to continue. ";
		cin >> choice;
		if (choice == 'L') {
			cout << "You quickly punch the one of the men and take his gun and shoot the other. Then you sprint down the alley way until you can no longer hear voices behind you. You wander around for two hours when you are met by an old lady and a young girl. They tell you they can offer you safe hiding. To accept it, type A. To decline, type D. ";
			cin >> choice;
		}
		else if (choice == 'C') {
			cout << "You decide to go along with the men. They take you to the top of the tower at the center of the city. When you reach the top, you are met by two dozen armed men and one man dressed extremely well. He tells you he is the leader of a group called the Blue Dagger. He tells you he wants to offer you a spot in his organization. To accept, type A, to decline, Type D. ";
			cin >> choice;
			if (choice == 'A') {
				joinDark();
			}
			else if (choice == 'D') {
				cout << "The leader says, \"Ok, that wasn't really an option but I'm dissapointed to hear that\" You see him draw a gun and as you turn to run you hear the shot behind you and see no more. Game Over";
				terminate();
			}
		}
	}
	return 0;
}

void joinDark() {
	char choice;
	cout << "The Blue Dagger Leader tells you, \"Glad to hear it. You will be joining the squadron that raids the village to the east. It is necassary because it their food that gives our glorious organization power. Go join the rest of your squad.\" You head downstairs and meet a group of three other guys. They introduce themselves as Cody, Dexter, and Grant. They tell you your first mission will be in 3 hours and to meetat the humvee with your weapon of choice. For the next 20 years, you serve under the Blue Dagger and move up in position as the leaders right hand man. You eventually assasinate him and make yourself the new Blue Dagger leader and ";
}