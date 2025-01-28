# Psuedo

## basic variables

horses will be an array of 5 characters, 0-4
lane will also be an array 15 characters long that are dots
import random module

## void advance

pass through our two  parameters int horseNum, which should run 5 times for each number of horse in the array,
and the spot in memory for horses

use a while loop at the top to keep the game going, the bool will start as true and only be set to false when isWinner is decided

use a for loop for each horse, if they roll 1 instead of 2, advance them 1 spot in the lane array
if they roll 2 instead, their spot in the lane array stays. we have to swap the spot in the array for the spot the horse now is at.

## void printlane
given a horse number and the array of horses
loop from zero to the track_length 15
if the current loop index id equal to the horse's value
print the horse's id 
otherwise
print a.

## bool isWinner

for this bool we check if a horses spot is at the end of the line array, if it is a winner is decided, make the bool false to end the game
