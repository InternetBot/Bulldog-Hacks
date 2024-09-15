Checksums let you tell if a file is complete and from the original distributor.

ps you need to get rid of /home/ctf-player/drop-in/ in if [ ! -f "/home/ctf-player/drop-in/$file_name" ]; then
change that to if [ ! -f "$file_name" ]; then

also change if ! openssl enc -d -aes-256-cbc -pbkdf2 -iter 100000 -salt -in "/home/ctf-player/drop-in/$file_name" -k picoCTF; then
change that to if ! openssl enc -d -aes-256-cbc -pbkdf2 -iter 100000 -salt -in "$file_name" -k picoCTF; then


because that path doesn't exist if you running it on a local machine. Its prefered to use relative path


https://forums.linuxmint.com/viewtopic.php?t=348518 - Sha256 sum for mac

find files -type f -exec shasum -a 256 {} \;

find files -type f: Finds all files in the files directory.

-exec shasum -a 256 {} \; Executes shasum -a 256 on each file found.

find files -type f -exec shasum -a 256 {} \; | grep 'b09c99c555e2b39a7e97849181e8996bc6a62501f0149c32447d8e65e205d6d2'

Boom flag appears

calvin@Calvin-Calebs-MacBook-Air ~ % cd Downloads 
calvin@Calvin-Calebs-MacBook-Air Downloads % cd home
calvin@Calvin-Calebs-MacBook-Air home % cd ctf-player 
calvin@Calvin-Calebs-MacBook-Air ctf-player % cd drop-in 

Run the bash script with ./decrypt.sh in the same dir
you should get an error that says zsh: permission denied: ./decrypt.sh
you can then give permission chmod +x ./decrypt.sh 

