# Hacktoberfest
Hacktoberfest is a month-long celebration of open source software in partnership with Github .
Intro to github:
Some important commands:
Git Commands:
* git config:
           This command sets the author name and email address respectively to be used with your commits.
           
  usage: git config -global user.name "[name]"
         git config -global user.email "[email address]"
  example: git config -global user.name "Guleri24"
  
* git init:
           This command is used to start a new repository.
  
  usage: git init [repository name]
  example: git init /home/Guleri/Projects/Hacktoberfest

* git clone:
           This command is used to obtain a repository from an existing URL.
    
  usage: git clone [url]
  example: git clone https://github.com/Guleri24/Hacktoberfest.git
  
 * gti add:
         This command adds a file to the staging area.
         
   usage: git add [file]
   example: git add project_1
   
   usage: git add *
   example: git add *
        This adds one or more to the staging area.
  
 * git commit:
          This command records or snapshot the file permanently in the version          history.
   
   usage: git commit -m "[Type in the commit message]"
   example: git commit -m "hello Hacktotoberfest"
   
   usage: git commit -a
          This command commits any files you’ve added with the git add command and also commits any files you’ve changed since then.
  
* git diff:
         This command shows the file differences which are not yet staged.
         
  usage: git diff
  
  usage: git diff --staged
         This command shows the differences between the files in the staging area and the latest version present.
  
  usage: git diff [first branch] [second branch]
         This command shows the differences between the two branches mentioned.
         
 * git reset:
 
  usage: git reset [file]
         This command unstages the file, but it preserves the file contents.
         
  usage: git reset [commit]
         This command undoes all the commits after the specified commit and preserves the changes locally.
  
  usage: git reset --hard [commit]
         This command discards all history and goes back to the specified commit.
 
 * git status:
        This command lists all the files that have to be committed.
  usage: git status
  
 * git rm:
       This command deletes the file from your working directory and stages the deletion.
 usage: git rm [file]
 
 * git log:
 
 usage: git log
     This command is used to list the version history for the current branch.
 usage: git log --follow[file]
     This command list version history for a file, including the renaming of the files also.
   
 * git show:
    This command shows the metadata and content changes of the specified commit.
   usage: git show [commit]  

* git tag:
    This command is used to give tags to the specified commit.
  usage: git tag [commitID]  

* git branch:
  usage: git branch 
    This command lists all the local branches in the current repository.
    
 usage: git branch [branch name]
   This command creates a new branch.
 
 usage: git branch -d [branch name]
   This command deletes the feature branch.
   
* git checkout: 
   
  usage: git checkout [branch name]
    This command is used to switch from one branch to another.
  
  usage: git checkout -b [branch name]
    This command creates a new branch and also switches to it.
  
 * git merge:
        This command merges the specified branch’s history into the current branch.
        
   usage: git merge [branch name]
   
 * git remote:
        This command is used to connect your local repository to the remote server.
        
   usage: git remote add [variable name] [Remote Server Link]
   example: git remote add origin https://github.com/Guleri24/Hacktoberfest.git
 
 * git push:

   usage: git push [variable name] master
   example: git push origin master
           This command sends the commited changes of the master branch to your remote repository.
           
   usage: git push [varibale name] [branch]   
          This command sends the branch commits to your remote repository.
   
   usage: git push --all [variable name]  
          This commands pushes all branches to your remote repository.
          
   usage: git push [variable name] : [branch name]
   example: git push origin : branch_2
   
 * git pull:
         This command fetches and merges changes on the remote server to your working directory.
  usage: git pull [Repository Link]
  
 * git stash:
 
  usage: git stash save
       This command temporarily stores all the modified tracked files.
  
  usage: git stash pop
       This command restores the most recently stashed files.
       
  usage: git stash list
       This command lists all stashed changesets.
  
  usage: git stash drop
       This commands discards the most recently stashed changeset.
 
   
   
   
   
   
   
   
 
 
 
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  

