# Building and Running
## Windows with VSCode
Follow along with the following video:

1. If you don't have it already, you'll need to install 7zip first to extract mingw as your compiler
2. Download this file: https://github.com/niXman/mingw-builds-binaries/releases/download/14.2.0-rt_v12-rev0/x86_64-14.2.0-release-posix-seh-msvcrt-rt_v12-rev0.7z
3. Extract the folder to somewhere convienient to you, and add the binary directory to your path

https://www.youtube.com/watch?v=tg9BGzygClI

Once you're done with that, this project is arleady setup for easy building. Simply open up a terminal in VSCode and type:
```
scripts/run.bat
```


## MacOS with VSCode
There's a decent chance it'll "just work" on mac. Try opening a terminal and running `./scripts/run.sh` and seeing what happens. There's a chance that you're missing stuff, in which case you should just use bew to install it.

## Anything else
You're on your own for this one. VSCode is the current industry standard for editors, so I'd recommend learning it (although Neovim is also an amazing choice if that's your thing). I'm not gonna leave compilation instructions for linux users because that's a whole other can of worms and if you use linux you should know how to do that kinda stuff anyways.


## Doing it Quickly
In VSCode I've defined a "Task" to quickly run the program. If you 


# TODO
- [ ] make sure it works on linux
- [ ] make sure it works on mac
- [ ] add testing