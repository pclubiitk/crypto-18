#!/bin/bash
str=$(ps -aux | grep Thanos| grep -v grep)

if [ -z "$str" ];then
	echo "The flag is : Thanos_will_return" > /home/jenil/Desktop/.pandora/.crypto/alias/flag.txt
fi
