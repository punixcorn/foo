#!/bin/bash  

source ./main3.sh

 domm() {
    echo "from main2 $@"
}
domm "$FFOO"
