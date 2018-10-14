#!/bin/bash

screen -dmS apoc1 bash -c 'ncat -l -p 21000 -k -e /home/ubuntu/crypto-18/apoc/tcas/main'
screen -dmS apoc2 bash -c 'ncat -l -p 21011 -k -e /home/ubuntu/crypto-18/apoc/tcas/main'
screen -dmS apoc3 bash -c 'ncat -l -p 21022 -k -e /home/ubuntu/crypto-18/apoc/tcas/main'
screen -dmS apoc4 bash -c 'ncat -l -p 21033 -k -e /home/ubuntu/crypto-18/apoc/tcas/main'
screen -dmS apoc5 bash -c 'ncat -l -p 21044 -k -e /home/ubuntu/crypto-18/apoc/tcas/main'
