#!/bin/sh

for i in `seq 19 100`; do
  tmp=$(echo "%$i\$p" | ./main | grep "0x")
  echo "$i -> $tmp"
done
