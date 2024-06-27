# Alternative Routes in Road Networks

This project simulates traffic flow and alternative routes in road networks using OpenGL.
![image](https://github.com/Badal-Singh-DB/Alternative-Routes-in-Road-Networks-/assets/166742256/5534b62d-7b7d-43b6-91e7-15d6b201ff92)


## Prerequisites

- g++
- OpenGL
- GLU
- GLUT

## Installation

1. Install the required packages:

   On Ubuntu:
   ``` sh
   sudo apt-get update
   sudo apt-get install g++ freeglut3-dev
   ```

   On Fedora:
   ```sh
   sudo dnf install g++ freeglut-devel
   ```

   On MacOS (with Homebrew):
   ```sh
   brew install freeglut
   ```


   ```

## Usage

1. Compile the code:
   ```sh
   g++ -o Alternative-Routes-in-Road-Networks Alternative-Routes-in-Road-Networks.cpp -lGL -lGLU -lglut
   ```

2. Run the simulation:
   ```sh
   ./Alternative-Routes-in-Road-Networks
   ```

Code Explanation

Includes and Definitions-
The code includes necessary headers and defines constants for the simulation parameters such as canvas width, road width, number of vehicles, etc.

Global Variables

Several global variables are declared to manage the state of the simulation, including:
width, height: Dimensions of the canvas.
road_width, hor_road_gap, ver_road_gap: Dimensions and gaps of the roads.
speeds, positions, directions, orientations: Vectors storing the states of the vehicles.
start, dest: Start and destination points for the shortest path calculation.
colors: Array to store colors for the vehicles.
vehicle: Array to store the state of each vehicle.

Functions
speed_shuffle: Shuffles the speeds of the vehicles.
shuffle_directions: Assigns directions and orientations to the vehicles.
color_shuffle: Shuffles the colors of the vehicles.
assign_positions: Assigns initial positions to the vehicles.
draw_vehicles: Draws the vehicles on the canvas.
draw_object: Draws the road and other static objects.
draw_path: Draws the shortest path from start to destination.
idle: Updates the simulation state in real-time.
pointMap: Maps grid points to canvas coordinates.
find_weights: Calculates weights for each road segment.
dijkstra: Implements the Dijkstra algorithm for shortest path calculation.
mouse: Handles mouse events.
keyboardFunc: Handles keyboard events.
myinit: Initializes the OpenGL context.
display: Main display function for rendering.


Main Function
The main function sets up the GLUT context, initializes the simulation, and starts the main loop.

Controls
ESC: Exit the simulation.
P/p: Pause the simulation.
R/r: Resume the simulation.

## Files
- `traffic_simulation.cpp`: The main source code for the traffic simulation.


