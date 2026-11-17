#初始化
mkdir <> #创建目录
cd <> #打开目录
ls -al #查看初始化
git init #仓库初始化

#创建与回退
touch <> #创建文件
vi <> #编辑文件
cat <> #查看文件
git add <> #加入暂存区
git commit -m '说明信息' #创建版本
git log #查看版本记录与版本编号
git log --pretty=oneline #版本记录简短显示
git reset --hard HEAD^ #回到上一个版本
git reset --hard <版本编号（前几位即可）> #回到版本编号所在版本
git reflog #查看先前的版本编号

#工作区与暂存区
git stutas #查看当前工作状态
git checkout -- <> #撤销一次修改
git diff HEAD --<> #工作区之间对比
git diff HEAD HEAD^ --<> #版本之间对比（此时为HEAD^相比于HEAD）
rm <> #删除文件（删除文件也为一次改动）

#git分支
git branch #查看分支（默认master分支）
git branch <> #创建分支
git checkout <> #切换分支
git checkout -b <> #创建并切换分支
git merge <> #合并分支
git branch -d <> #删除分支
git log --graph --pretty=oneline #查看所有分支提交情况
