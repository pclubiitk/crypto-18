#!/bin/bash
str=$(ps -aux | grep Thanos| grep -v grep)

if [ -z "$str" ];then
	chmod 777 /code/flag.txt
fi
