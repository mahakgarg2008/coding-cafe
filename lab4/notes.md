\# Lab 4 Notes



\## Question 1

\--global means the configuration applies to all Git repositories for the current user on this system. If left out, the name and email settings would only apply locally to this specific repository.



\## Question 2

The hidden folder `.git` appeared. Inside it are Git's internal configuration files, object databases, hooks, and historical snapshot data.



\## Question 3

Git originally offered to track thousands of files because it detected the entire virtual environment (`.venv`) folder. None of those files were written by me.



\## Question 4

After creating the ignore file, the thousands of files inside the `.venv/` directory completely disappeared from the untracked files list in the status output.



\## Question 5

Yes, `.gitignore` should definitely be committed. This ensures everyone else working on the project automatically ignores the same junk files.



\## Question 6

README.md moves from "Untracked files" to "Changes to be committed". In the three-places model, it moved from the Working Directory into the Staging Area (Index).



\## Question 7

Git prints a summary showing the commit hash, the branch name, and the list of changes. It will state how many files were changed and how many insertions occurred.



\## Question 8

The first seven characters are a short SHA-1 commit hash. They act as a unique fingerprint to identify and reference that specific snapshot in history.

\## Question 9

The four steps of the Git loop are:

1\. Make changes or edits to files in the Working Directory.

2\. Check changes using 'git status'.

3\. Stage the files using 'git add'.

4\. Commit the changes to the repository history using 'git commit'.



\## Question 10

README.md is given a special name because GitHub automatically searches for it and renders its content directly onto the repository's front landing page as formatted text. It acts as the primary "shop window" and user manual for anyone visiting the project.





