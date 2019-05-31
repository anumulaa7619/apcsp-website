#!/bin/bash


echo -e "Content-type: text/html\n\n"

echo "<h1>Raspberry Pi Status: $(hostname)</h1>"

echo "<pre>$(./PiAlive)</pre>"
