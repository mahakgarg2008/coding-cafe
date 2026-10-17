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

\## Question 11

The gh auth login command securely authenticated the GitHub CLI with your account and stored a credential token on your computer. Git automatically uses this token for future operations, which removes the need to type your password every time you push.

\## Question 12

The contents of the README.md file are showing on the front page, rendered as formatted text. GitHub automatically looks for a file with this specific name to display as the main introduction or "shop window" for the repository.

\## Question 13

No, pushing did not change the local history in any way. Pushing simply copies your existing local commits and uploads them to the remote repository on GitHub so the two are synchronized.

\## Question 14

If a repository does not exist on GitHub, it only lives locally on your computer and no one else can see it. A private repository exists online as a cloud backup, but access is strictly locked down to you and the specific collaborators (like the TAs) that you explicitly invite.





