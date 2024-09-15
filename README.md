# How to Build

### Windows

On Windows you need to use Visual Studio, open galba.sln and you should be ready to go.

### MacOS

On Mac you need to do the following:

- Install HomeBrew (https://brew.sh/)
- Install Raylib with homebrew. Run the command `brew install raylib` in the terminal.
- Install Visual Studio Code
- Open the Galba folder with Visual Studio Code
- Run the Task "Build Project (MacOS - Clang)" to build.
  - Click on the search bar at the top
  - Click on "Run Task"
  - Click on "Build Project (MacOS - Clang)"

**Disclaimer**: I don't have a Mac and we don't support it. If you have any problems help will be limited.

# Project Layout

**All source files go in the /Source folder**. Make sure that you put them there when you create new files with Visual Studio.

Every build file, intermediate file and so on goes in the /Build folder, you don't need to do anything for that, it will happen automatically.

If you're looking for the executable, for example if you want to share the game with someone, build in **Release** mode and you van find it in **/Build/Release/galba.exe**

