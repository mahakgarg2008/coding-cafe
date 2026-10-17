1) pwd refers to present working directory, it shows the present location.
2) ls= list
   ls -a show all files including hidden files (. ..)
   remember: ls does not show hidden files.
3) first column represents some kind of code that act as a specifier for file.
rwx-owner can read , write and execute
output on running ls -l is total 2848
lrwxrwxrwx   1 root root       7 Apr 22  2024 bin -> usr/bin
drwxr-xr-x   2 root root    4096 Feb 26  2024 bin.usr-is-merged and so on............

4) Its a relative path bcz it doesn't begin with a forward slash that we called as symbol of division/

5) mv is used for renaming a file or moving the file.
ex- mv README-backup.md week01/
    mv README-backup.md old-README.md

6) 19 path entries (by using echo 4PATH)

7) /usr/bin/python3
8) No bcz different user has different OS 
9) mahak@DESKTOP-N25T7R0:/$ python3
Python 3.12.3 (main, Nov  6 2024, 18:32:19) [GCC 13.2.0] on linux
Type "help", "copyright", "credits" or "license" for more information.
>>>

10) .venv is a hidden directory, so normally ls won’t display it. If we use 'ls -a, hidden files and folders are also included in the output, so.venv' becomes visible.

11) Once the virtual environment is activated, '.venv' appears at the start of the terminal prompt, showing that it is currently active.

12) No, both paths are different. After activating the virtual environment, the '.venv' directory is placed at the beginning of the PATH, so the system looks there first for Python and related commands.

13) The four packages listed are 'certifi', 'charset-normalizer', 'idna', and 'requests'.

14) The Python interpreter being used here is '/usr/bin/python3'.

15) This option makes the file sizes easier to understand by displaying them in units like KB, MB, or GB rather than just bytes.

16) 'Ctrl+C' is used when we want to interrupt a running command or process. On the other hand, 'Ctrl+D' indicates the end of the input and can return us to the command prompt.