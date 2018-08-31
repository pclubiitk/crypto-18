#!/bin/bash

Hash[1]="Iron Man"
Hash[2]="Iron Man 2"
Hash[3]="The Incredible Hulk"
Hash[4]="Thor"
Hash[5]="Captain America: The First Avenger"
Hash[6]="The Avengers"
Hash[7]="Iron Man 3"
Hash[8]="Agents of S.H.I.E.L.D."
Hash[9]="Thor: The Dark World"
Hash[10]="Captain America: The Winter Soldier"
Hash[11]="Guardians of the Galaxy"
Hash[12]="Guardians of the Galaxy Vol. 2"
Hash[13]="Daredevil"
Hash[14]="Avengers: Age of Ultron"
Hash[15]="Jessica Jones"
Hash[16]="Ant-Man"
Hash[17]="Doctor Strange"
Hash[18]="Luke Cage"
Hash[19]="Captain America: Civil War"
Hash[20]="Black Panther"
Hash[21]="Spider-Man: Homecoming"
Hash[22]="Iron Fist"
Hash[23]="The Defenders"
Hash[24]="The Punisher"
Hash[25]="Inhumans"
Hash[26]="Thor: Ragnarok"
Hash[27]="Avengers: Infinity War"

flag="Yay! you got it! flag{yOu_@rE_A_pR0_g@mEr}"
count=1
max_count=28
while [[ 1 ]]; do
    read data
    data=$(echo $data | xargs)
    if [ "${Hash[$count]}" = "$data" ]; then
        echo "Bravo! You advance to next level!"
        count=$(($count+1))
    else
        echo "Stuck on this Level!? Try again!"
    fi
    if [[ $count -eq $max_count ]]; then
      echo $flag
      count=1
    fi
done
