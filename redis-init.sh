#!/bin/bash

# Create socket file in mounted (binded) home directory, /data/
touch /data/redis.sock
chmod 777 /data/redis.sock

# Run redis-server command with unix sockets
redis-server --unixsocket /data/redis.sock --unixsocketperm 777
