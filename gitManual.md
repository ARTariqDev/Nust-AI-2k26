# Pushing To Github Responsibly


## Overview
- Github is a client for 'git' used to hostand collaborate on code.
- This Manual shows you how to use github Responsibly when collaborating on Projects
- Important Terms:
     - Remote: the remote repository with the global code, it stores the definative version of the projects code
     - Merge Error: An error that happens when your local code and the Remotes code overlap
     - Stashing: putting away locally made changes to code
     - Popping: adding back your 'stashed' changes
     - Staging Area: an in between "zone" where added changes are stored before being pushed to the remote
     - Branch: the remote has a "Main" or definative branch with the definative version of the code, changes are to be made on dedicated branches that ,if approved, will be merged into the main branch
     - Pull Request: requesting the owner of the repository to approve and add your change sto the main branch


## The Crux: "Cloning" , "Pulling"

### Cloning
- The act of "Cloning" code from github (as the name implies) refers to making a copy of the hosted code from the **Repository** 
- It can be done with:
    ``
    git clone {link to repository}
    ``
- ***IMPORTANT:*** Make sure to go through the Readme fiule to understand project structure and install all dependencies

### Pulling
- "Pulling" Code refers to adding the changes made to the global repository and adding them to your local copy of the codebase
- It can be done with:
``
git pull
``
- ***IMPORTANT*** : if your local code and the repositorie's code overlap, this can result in a **Merge Error**. It is your responsability to read and merge the Code to keep it inline witht the rest of the project.
- you may **stash** your local changes with:
``
git stash
``
before you pull the remotes changes and then 'pop' them later using:
``git pop``

## Making your changes to the Remote branch: "Adding" , "Committing" , "Pushing" and making Branches

#### Adding
- The First step to making changes to the remote
- Making changes to the Remote is done in 3 stages: Adding, Committing and Pushing
- The command `` git add {file_Name} `` will flag that file to be added to the remote
- It is important to note that this does **NOT** make changes to the Remote
- To flag **ALL** changes, use : `` git add . ``

#### Committing
- The Second Step to making changes to the remote
- Using the command: `` git commit -m {commit message} `` , we can commit to our changes and add them to the staging Area
- ***IMPORTANT*** the commit message is compulsory and it is your responsability to add relevant and meaningful commit messages

#### Pushing
- The third and last stage in making changes to the remote
- Using `` git push `` we can push our staged code to the remote
- ***HOWEVER*** Programmers in Junior roles must ***NEVER*** push directly to the remote nor will they be allowed to based on repository settings.
- As a Junior Programmer, you **MUST** push your code to a separate feature branch and open a Pull Request (PR) for code review.

#### Making a Pull Request
- Create a dedicated branch before making changes using `` git checkout -b feature-name ``.
- Push your local branch to the remote repository using `` git push --set-upstream origin feature-name ``.
- Open the PR via the web interface (like GitHub or GitLab) or by using the GitHub CLI command `` gh pr create ``.
- Request reviews from Senior developers and wait for official approval before your code can be merged into the main branch.




