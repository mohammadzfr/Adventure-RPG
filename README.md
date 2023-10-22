# Choose Your Own Adventure/Adventure RPG
## DEMO VIDEO BELOW

[![Demo Video](https://img.youtube.com/vi/TbPRxxqF2eU/0.jpg)](https://youtu.be/TbPRxxqF2eU)

## Overview
A terminal game programmed completely in C++

You can upload your own files by renaming the game_name file in main.cpp and uploading the files in the following format:

    [game_name]_items.txt
    [game_name]_text.txt
    [game_name]_nodes.txt

This program has 2 different gamefile types already loaded in (ghostworld and jungle)

Skills used: **Linked lists, Object Oriented programming practices like polymorphism and inheritance, file reading/writing, and sorting/search algorithms**

## Features
- Custom Item, Text, and Node files (make your own!)
- Complete inventory system
	- This includes picking up and dropping items
- Victory, Death, and Obstructed nodes (require a specific item to traverse)
- Select from two different premade games (ghostworld and jungle)

## Setup

1. Download/Clone Repository and navigate into the project folder
2. Run `./start` in terminal
	- If it doesn't work, install `gcc/g++` and run `g++ *.cpp`, `./a.out`
3. Enjoy!

## Project Overview

```
Adventure-RPG/
|── Game.cpp // controls movement and game states
|── Game.h
|── Item.cpp // sets the properties for an item
|── Item.h
|── ItemManager.cpp // loads all the items in a map
|── ItemManager.h
|── Location.cpp // manages the location of the player and items
|── Location.h
|── Node.cpp // sets the properties of a particular node
|── Node.h 
|── ScoreTable.cpp // keeps track of user score
|── ScoreTable.h
|── World.cpp // loads map and identifies valid/invalid nodes
|── World.h
|── ghostwood_items.txt // ghostwood map items
|── ghostwood_nodes.txt // ghostwood map nodes
|── ghostwood_text.txt // ghostwood map descriptions
|── jungle_items.txt // jungle map items
|── jungle_nodes.txt // jungle map nodes
|── jungle_text.txt // jungle map descriptions
|── main.cpp // the main program
|── start // executable
```
