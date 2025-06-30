# Guessing Game - A Simple Client/Server Socket Game

## Goal
In this assignment, you will deepen your understanding of network protocols 
by implementing a program in C or C++ of a "guessing game" where the server 
picks a random number between 1 and 100 and clients try to guess the number. 
The server will reply higher or lower to each guess. When a client guesses 
correctly, a message is sent to all connected clients telling them which 
client won, disconnects all clients, and resets the game.

## Program Arguments

The client and server executables should take one argument: the port that
the server is listening on. 

Example:

```pwsh
...source\Repos\GuessingGame:> GuessingGameServer.exe 2222
```

## Server Example Output

```
Server listening on port 2222.
Client 1 connected.
Client 2 connected.
Client 1 disconnected.
Client 2 won! Resetting game ...
```

## Client Example Output

```
Welcome to the guessing game!
Guess a number between 1 and 100.
Your guess: 50
Too high.
Your guess: 75
Client 2 has won! Disconnecting ...
```

# Technical Notes

## Blocking

While the client is waiting for user input (for example using std::getline)
it is ok that the client is blocking: if a second client wins while the
first is waiting for input, the first client won't find out until it 
attempts to send and/or is disconnected.

The client can use blocking or non-blocking sockets, depending on your 
implementation.

Your server will need to handle communication with multiple clients 
simultaneously - this can be through threads, using select(), etc. Your
choice will determine if the server sockets need to be non-blocking or not.

## Simple Protocol

You may find it helpful to create a simple protocol for the client and server:
which side sends first? What does the response look like? How are the guesses 
sent, does the server return whether the game is over, etc.

This can (and should) be very simple -- don't over-complicate the protocol.
In particular, using a serialization format like JSON is overkill.
