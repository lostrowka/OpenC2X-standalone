#!/bin/bash
SESSION=ETSI
BOX=gericom1
SSH_WAIT_TIME=1

echo "Starting"

tmux -2 new-session -d -s $SESSION


tmux new-window -t $SESSION:1 -n 'App'

tmux set-option -g mouse


for APP in ldm ldmWebApplication cam gps obd2 denm
do
    echo "Starting $APP"
    # C-m semms to equal to pressing enter -> line is executed
    tmux send-keys "ssh $BOX" C-m
    sleep $SSH_WAIT_TIME
    tmux send-keys "cd pg2015w/scripts" C-m
    tmux send-keys "cd ../$APP/Debug" C-m
    tmux send-keys "./$APP" C-m
    tmux split-window -v
    tmux select-layout tiled
done 

echo "Starting dcc"
tmux send-keys "ssh $BOX" C-m
sleep $SSH_WAIT_TIME
tmux send-keys "cd pg2015w/scripts" C-m
tmux send-keys "cd ../dcc/Debug" C-m
tmux send-keys "sudo ./dcc" C-m


tmux -2 attach-session -t $SESSION
