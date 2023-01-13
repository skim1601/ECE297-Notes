## Git

# Checking Past Changes
- A quick glimpse of repository
```git status```
- Exact changes (line-by-line)
```git diff```
- Difference between the Local Directory and Index (not Working Directory)
```git diff --cached```

# Checking Commit History
```git log```

# Make a commit
```
git add -u // all modified files
git add <pathToFile>
git diff --cached // view change
git commit -m <commitComment>
git push
```
- Add entire repository
```
git add .
git commit -m <commitComment>
```

# State of the Code at Certain Commit
```git checkout <commitID>```

# Sharing Changes
```
git push 
```
- To GitHub
```
git push origin <branchName>
```

# Get Collegues' Changes
```
git status
git commit // just in case 
git pull
```

- to Github
```git pull origin <branchName>```

# Reverting committed fies
- As if the below commit did not occur
```get revert <commit_ID>```

# Reverting uncommitted changes
```
git reset <pathToFile>
git checkout <pathToFile>
```