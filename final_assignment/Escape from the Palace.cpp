//Allen Byrd, Rachel Hester, Bailey Weiss
#include <iostream>
#include <string>

using namespace std;

int choice;
int doll;
int loop = 1;

int main()
{
	story1:
	cout << "Welcome to Escape from the Palace. Your every decision will determine your fate. \n" <<
		"Type the number that corresponds with the decision you wish to make and press enter. \n" << "\n" <<
		"You're in a dark room and can't remember who you are. You pull yourself off of the \n" <<
		"floor and brush your long red hair out of your face. You stand up and start feeling \n" <<
		"around the room but get pulled back. You're chained to the floor by your ankle. \n" <<
		"1: Go back to sleep and try to regain memories \n" <<
		"2: Try to break out of the chains \n";
	while (loop == 1)
	{
		choice = 0;
		cin >> choice;
		if (choice == 1)
		{
			goto story2;
		}
		else if (choice == 2)
		{
			goto story3;
		}
		else
		{
			cout << "Enter 1 or 2. \n";
		}
	}

	story2:
	cout << "\nYou're exhausted and your head hurts. You go back to sleep and remember your last \n" <<
		"moments. You were walking home and a large storm hit. All of a sudden, you were \n" <<
		"blinded by a man whom you recognized but did not know. You struggled to stay awake \n" <<
		"in the trunk of his car. You were drugged. You wake up. \n" <<
		"1: Try to find a way out of the locked chains \n" <<
		"2: Wait for the man to come back \n";
	while (loop == 1)
	{
		choice = 0;
		cin >> choice;
		if (choice == 1)
		{
			goto story3;
		}
		else if (choice == 2)
		{
			goto story5;
		}
		else
		{
			cout << "Enter 1 or 2. \n";
		}
	}

	story3:
	cout << "\nYou try to find a way out of the locked chain. There is a nail sticking out of \n" <<
		"the floor so you pry it out of the old wood, getting splinters in the process. \n" <<
		"You use it to open the old rusty lock on the chain around your ankle. What do you do? \n" <<
		"1: Run out of the room to look for an exit \n" <<
		"2: Wait for the man to come back \n";
	while (loop == 1)
	{
		choice = 0;
		cin >> choice;
		if (choice == 1)
		{
			goto story4;
		}
		else if (choice == 2)
		{
			goto story5;
		}
		else
		{
			cout << "Enter 1 or 2. \n";
		}
	}

	story4:
	cout << "\nYou run out of the room. To your left, there is a door that seems to lead outside. \n" <<
		"To your right, there is a hallway that leads further into the building. Where do you go? \n" <<
		"1: To your right \n" <<
		"2: To your left \n";
	while (loop == 1)
	{
		choice = 0;
		cin >> choice;
		if (choice == 1)
		{
			goto story8;
		}
		else if (choice == 2)
		{
			goto story9;
		}
		else
		{
			cout << "Enter 1 or 2. \n";
		}
	}

	story5:
	cout << "\nYou wait for the man to come back. Moments later, he returns. You panic, clip the lock \n" <<
		"back on the chain, and hide the nail before he notices. You can barely perceive his \n" <<
		"features, but the dim light from the hallway illuminates small flashes of gold from \n" <<
		"what appears to be his jewelry. He practically throws a sandwich at you, snarling at \n" <<
		"you to \"eat.\" It's poorly made, and the meat is repulsive. \n" <<
		"1: Eat the food \n" <<
		"2: Scream for help \n";
	while (loop == 1)
	{
		choice = 0;
		cin >> choice;
		if (choice == 1)
		{
			goto story6;
		}
		else if (choice == 2)
		{
			goto story7;
		}
		else
		{
			cout << "Enter 1 or 2. \n";
		}
	}

	story6:
	cout << "\nHe sits on a bucket and watches you intently. You bite into the sandwich and force \n" <<
		"yourself to choke it down. The bread is dry. The meat is overly greasy and salty to \n" <<
		"cover up for its poor quality. \"How is it?\" he interrogates in a low, raspy tone. \n" <<
		"1: Lie \n" <<
		"2: Tell the truth \n";
	while (loop == 1)
	{
		choice = 0;
		cin >> choice;
		if (choice == 1)
		{
			goto story12;
		}
		else if (choice == 2)
		{
			goto story13;
		}
		else
		{
			cout << "Enter 1 or 2. \n";
		}
	}

	story7:
	cout << "\nYou scream and cry for help. He laughs and pounds his fist into a light switch. A \n" <<
		"dim, rusty ceiling light flickers to life. You are able to see a bit more. His \n" <<
		"curly brown hair, robe, and gold chain all wave gently back and forth as he \n" <<
		"saunters into the light. His eyes are cold and dead and his smile is devious. \"No \n" <<
		"one can hear you, subject. If you insist on being obtuse, then you are of no use \n" <<
		"to me. It is pointless to try to make you see the light, so we might as well have \n" <<
		"some fun.\" He pulls out a long, rusty knife. You are dead. \n";
	goto end;

	story8:
	cout << "\nYou go to the right further into the building. In an unsuspecting side room, you find \n" <<
		"a small purple doll. Fastened around it is a necklace with a key. You take the necklace \n" <<
		"with the key and put it around your neck. Should you take the doll? \n" <<
		"1: Take the doll \n" <<
		"2: Leave the doll \n";
	while (loop == 1)
	{
		choice = 0;
		cin >> choice;
		if (choice == 1)
		{
			doll = 1;
			goto story10;
		}
		else if (choice == 2)
		{
			doll = 0;
			goto story11;
		}
		else
		{
			cout << "Enter 1 or 2. \n";
		}
	}

	story9:
	cout << "\nYou go left and try to open the door. It is locked. You pull and pull on the handle, but \n" <<
		"the deadbolt is shut tight. You're clearly not getting through this door without a key. \n" <<
		"Do you go down the hallway further into the building or back into the original room? \n" <<
		"1: Down the hallway \n" <<
		"2: Go back into the original room \n";
	while (loop == 1)
	{
		choice = 0;
		cin >> choice;
		if (choice == 1)
		{
			goto story8;
		}
		else if (choice == 2)
		{
			goto story21;
		}
		else
		{
			cout << "Enter 1 or 2. \n";
		}
	}

	story10:
	cout << "\nYou take the doll. Do you continue further into the building to look for another exit \n" <<
		"or do you go to the door at the end of the hallway that seems to open to the outside? \n" <<
		"1: Continue into the building \n" <<
		"2: Go to the door \n";
	while (loop == 1)
	{
		choice = 0;
		cin >> choice;
		if (choice == 1)
		{
			goto story11;
		}
		else if (choice == 2)
		{
			goto story14;
		}
		else
		{
			cout << "Enter 1 or 2. \n";
		}
	}

	story11:
	cout << "\nYou continue to walk further into the dimly lit building but you still cannot see much in \n" <<
		"the winding hall. You eventually stumble upon another lightswitch, which turns on a barely \n" <<
		"working overhead bulb. As your eyes adjust to the dim light, you spot a face peeking around \n" <<
		"a doorway at the very end of the hall. The face is painted white with blood-red makeup. Its \n" <<
		"two beady eyes rest above runny black mascara. The face stares at you, unblinking. The light \n" <<
		"flickers and the face is gone. \n" <<
		"1: Flee through a different door \n" <<
		"2: Go look for the person at the end of the hall \n";
	while (loop == 1)
	{
		choice = 0;
		cin >> choice;
		if (choice == 1)
		{
			goto story18;
		}
		else if (choice == 2)
		{
			if (doll == 1)
			{
				goto story19;
			}
			else if (doll == 0)
			{
				goto story20;
			}
		}
		else
		{
			cout << "Enter 1 or 2. \n";
		}
	}

	story12:
	cout << "\n\"LIAR!\" he screeches. He paces the room, mumbling to himself that he is \"royalty,\" and your\n" <<
		"eyes adjust enough to see the crown he is wearing. He is clearly delusional. He begins to \n" <<
		"ramble over and over that \"his subjects will pay\" and that \"the key is safe.\" \"What key?\" you \n" <<
		"wonder. You won't last much longer in the same room with this man. Do you try to fight him or \n" <<
		"make up an excuse to get him to go away? \n" <<
		"1: Fight him \n" <<
		"2: Make up an excuse \n";
	while (loop == 1)
	{
		choice = 0;
		cin >> choice;
		if (choice == 1)
		{
			goto story16;
		}
		else if (choice == 2)
		{
			goto story17;
		}
		else
		{
			cout << "Enter 1 or 2. \n";
		}
	}

	story13:
	cout << "\nYou tell him that the sandwich was too dry and salty. He is quiet for a moment, then begins \n" <<
		"pacing the room and mumbling to himself that he is \"royalty.\" Your eyes adjust enough to see \n" <<
		"the crown he is wearing. He is clearly delusional. \"My subjects know nothing,\" he mutters \n" <<
		"repeatedly. \"It's time for you to be purged from this earth. Purge the unenlightened, cull \n" <<
		"the undeserving...\" He continues rambling as he slowly walks towards you. Do you try to fight \n" <<
		"him or make up an excuse to get him to go away?\n" <<
		"1: Try to fight him\n" <<
		"2: Make up an excuse\n";
	while (loop == 1)
	{
		choice = 0;
		cin >> choice;
		if (choice == 1)
		{
			goto story16;
		}
		else if (choice == 2)
		{
			goto story17;
		}
		else
		{
			cout << "Enter 1 or 2. \n";
		}
	}

	story14:
	cout << "\nYou go to the door at the end of the hallway and turn the key in the door. The thick \n" <<
		"deadbolt snaps open and you pull on the handle, but the door is rusted shut. The door looks \n" <<
		"like it might still work, if you can find something to pry it open. Do you continue pulling \n" <<
		"on the handle or do you go further into the building?\n" <<
		"1: Go further into the building\n" <<
		"2: Pull on the handle\n";
	while (loop == 1)
	{
		choice = 0;
		cin >> choice;
		if (choice == 1)
		{
			goto story11;
		}
		else if (choice == 2)
		{
			goto story15;
		}
		else
		{
			cout << "Enter 1 or 2. \n";
		}
	}

	story15:
	cout << "\nYou try unsuccessfully, and the handle loudly snaps off. The sound echoes through the \n" <<
		"building. You freeze in abject terror, gazing behind you into the hallway. A twisted smile \n" <<
		"emerges from the darkness... it is the last thing you ever see. You are dead.\n";
	goto end;

	story16:
	cout << "\nYou pull him in and try to fight him. He is far bigger and stronger than you. This was a \n" <<
		"grave mistake. He throws you to the ground. \"I've waited a long time for this,\" he mutters, \n" <<
		"as he unsheathes a long, rusty knife. You are dead.\n";
	goto end;

	story17:
	cout << "\nYou make up an excuse to get him to leave. You claim that you hear someone speaking in the \n" <<
		"hallway and ask who it is. He pauses for a moment. \"My subjects must not flee... One of them \n" <<
		"attempts to escape my divine rule. I will return for you, to pass my judgment.\" He walks out. \n" <<
		"You use a nail you pulled from the floorboards to open the lock on the chain. You escape to \n" <<
		"the hallway. Do you go to the right to go further into the building or do you go to the left \n" <<
		"to the door that leads outside?\n" <<
		"1: Go further into the building\n" <<
		"2: Go to the door that leads outside\n";
	while (loop == 1)
	{
		choice = 0;
		cin >> choice;
		if (choice == 1)
		{
			goto story8;
		}
		else if (choice == 2)
		{
			goto story9;
		}
		else
		{
			cout << "Enter 1 or 2. \n";
		}
	}

	story18:
	cout << "\nYou panic at the terrifying sight and duck into a nearby door. This hallway is pitch black, \n" <<
		"yet you carry yourself forward. You hear a faint screaming, but the hallway echoes and you \n" <<
		"can't tell if the scream is coming from behind you or in front of you. You press on through \n" <<
		"a final doorway to find the source of the scream. Your captor grips a rusty knife, caked in \n" <<
		"blood. Under him lies his restrained victim, who begs you to run. The captor unleashes a \n" <<
		"spine-chilling screech. With a crown on his head, he declares, \"I am the  royalty here, and\n" <<
		"you are my test subjects!\" You turn to run, but it is too late. The door has already shut \n" <<
		"behind you. You are dead.\n";
	goto end;

	story19:
	cout << "\nYou tiptoe through the doorway and walk to the center of the room, but you see no one... \n" <<
		"that is, until you turn around. The ghastly white face peers out from behind the door through\n" <<
		"which you entered. A tall, lanky figure charges at you with a long, jagged piece of sharp \n" <<
		"metal. You fall onto your back, wince, and brace for impact, holding the doll you found in \n" <<
		"front of your face in a hopeless attempt to defend yourself. At last, you hear a voice. \n" <<
		"\"Wait. You found Grimace? You're not here to hurt me, are you?\" You shake your head and gaze \n" <<
		"up at the emaciated figure. \"That monster took Grimace from me when he put me in the trunk. \n" <<
		"Grimace was once my grandmother's. Thank you, I'm sorry for startling you. Call me Ron.\" You \n" <<
		"remember your name at last, and introduce yourself as Wendy. You explain to him the situation \n" <<
		"with the door. The two of you sprint to the exit, and Ron pries open the door with his strip \n" <<
		"of metal. The light is blinding, but the two of you escape through the overgrown forest. You \n" <<
		"take one last look back through the tall weeds. The only sign of humanity in sight is a\n" <<
		"dilapidated, crumbling building, with faded lettering that reads \"BURGER KING.\" \n" <<
		"You have escaped from the Burger King's palace.\n";
	goto end;

	story20:
	cout << "\nYou tiptoe through the doorway and walk to the center of the room, but you see no one... \n" <<
		"that is, until you turn around. The ghastly white face peers out from behind the door through \n" <<
		"which you entered. The tall, lanky figure charges at you with a long, jagged piece of sharp \n" <<
		"metal. You are dead.\n";
	goto end;

	story21:
	cout << "\nYou go back to the original room and the door swings behind you. Someone was out there and \n" <<
		"locked you in. You are dead.\n";
	goto end;

	end:
	cout << "\nEnter 1 to try again or enter 2 to close the game.\n";
	while (loop == 1)
	{
		choice = 0;
		cin >> choice;
		if (choice == 1)
		{
			cout << "\n";
			goto story1;
		}
		else if (choice == 2)
		{
			break;
		}
		else
		{
			cout << "Enter 1 or 2. \n";
		}
	}

	return 0;
}