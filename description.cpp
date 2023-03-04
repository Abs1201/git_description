
//설명
작업폴더 --git add--> staging area --git commit-->repository

fast-forward-merge
git rebase(갠적으로 지금은 잘안쓸듯, 개념만 알아두기)
3-way merge
squash and merge // git merge --squash
pull == fetch + merge

//명령어
git init

git add wow.cpp
git commit -m 'msg'
git add .
git status
git log --all --oneline


git branch
git switch master
git add .
git commit -m 'msg'

git log --oneline --all --graph

git branch -d //delete (merge complete)
git branch -D //delete (not merged)

git push -u 주소 branch
git push -u origin main
git remote add 변수명 주소

git restore 파일명
git revert 커밋아이디
git revert HEAD //최근 commit 취소


git stash
git stash list
git stash pop
git stash drop 번호
git stash clear



this is test line with staging
