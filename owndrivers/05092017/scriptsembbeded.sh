#/bin/bash
sudo apt-get update
sudo apt-cache search linux-headers-$(uname -r)
sudo apt-get install $(uname -r) | -y
cd /usr/src/$(uname -r)/
echo "Esto es lo qu debe estar"
ls
