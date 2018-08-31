#!/bin/bash
set PID = `pgrep Thanos`

/home/jenil/Desktop/.pandora/.crypto/alias/Thanos

echo "asdasd"

while [ 1 ]; do
	if [[ ! -z $PID ]]; then
		echo "Thanos killed successfully"
		break
	fi
done

exit
