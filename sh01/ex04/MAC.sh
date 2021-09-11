ifconfig -a link | grep eth | sed 's/ether//g' | sed 's/[[:space:]]//g'
