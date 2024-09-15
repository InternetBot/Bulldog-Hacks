Created By: Calvin-Caleb Amiolemen

Senior 

9/15/2024

# IMPOTRANT

ps you need to get rid of ```/home/ctf-player/drop-in/ in if [ ! -f "/home/ctf-player/drop-in/$file_name" ]; then ``` on line 14

change that to ```if [ ! -f "$file_name" ]; then```

also change ```if ! openssl enc -d -aes-256-cbc -pbkdf2 -iter 100000 -salt -in "/home/ctf-player/drop-in/$file_name" -k picoCTF; then``` on line 20

change that to ```if ! openssl enc -d -aes-256-cbc -pbkdf2 -iter 100000 -salt -in "$file_name" -k picoCTF; then```


because that path doesn't exist if you running it on a local machine. Its prefered to use relative path. If you use the ``decrypt.sh`` on this repo i have already made those changes :) 

Run the bash script with ```./decrypt.sh``` in the same dir

you should get an error that says ```zsh: permission denied: ./decrypt.sh```

you can then give permission with  ```chmod +x ./decrypt.sh```



# Challenge - https://play.picoctf.org/practice/challenge/450

Lets break what this ctf is about, we are giving a bash script that helps decrypt to verify if the flag information is correct. Once you downlaord the zip you would realize most of the information is located in the ```drop in``` directory. 

To get there you can, cd to the directory where your zip is located mine was in the Downloads folder, simply run

> ```cd<to where the folder was downloaded>```, ```cd Downloads```


Then cd to the file directory ```HOME```

> ```cd home```

> ```cd ctf-player ```

> ```cd drop-in```


The first thing we want to do is to use ```sha256sum``` to check the list of all the file in the ```files``` directory to verify the integtity of data in the ```checksum.txt``` file 

now on the mac you can use the shasum command since its already built in check linnk below for reference

[Sha256 sum for mac](https://forums.linuxmint.com/viewtopic.php?t=348518 )

now we can run the command 

> ```find files -type f -exec shasum -a 256 {} \;```

```find files -type f:``` Finds all files in the files directory.

```-exec shasum -a 256 {} \;``` Executes shasum -a 256 on each file found.

now once that is done you should get a list of all shasum -a 256 on each file found which is a lot, you can use the grep command to filter out what you want which can be found in the ```checksum.txt```

> ```find files -type f -exec shasum -a 256 {} \; | grep 'b09c99c555e2b39a7e97849181e8996bc6a62501f0149c32447d8e65e205d6d2'```

you should get the file name, then you can run 

> ```./decrypt.sh files/<filename goes here> ```

Boom flag appears


