# Bouncing Rectangle Animation in C

This project is a simple 2D graphics application written in C using the Raylib graphics library.

## Features

- Creates a graphical window
- Draws a moving rectangle
- Implements real-time animation
- Handles collision with screen boundaries
- Demonstrates a basic game loop structure

## Purpose

The purpose of this project is to practice:

- Graphics programming in C
- Real-time rendering
- Basic physics simulation
- Velocity-based movement
- Collision detection
- Using the Raylib library

## How It Works

The rectangle moves continuously using horizontal and vertical velocity values.

When the rectangle touches the edge of the window, its velocity is reversed, causing it to bounce.

## Input

The program does not require user input.

Internal inputs include:

- Rectangle position `(x, y)`
- Velocity values `(vx, vy)`
- Window size

## Output

The program outputs:

- A graphical window
- A moving blue rectangle animation

## Technologies Used

- C
- Raylib

## Build & Run

Compile using GCC:

```bash
gcc graphics.c -o graphics -lraylib -lm
