# <center><font face="黑体" size=7 color=red>Markdown笔记</font></center>
## 1.标题
`# 一级标题`  
`## 二级标题`  
...  
## 2.引用
>一级引用
>>二级引用
## 3.列表
### i.无序列表
+ 无序列表  
- 无序列表
* 无序列表  
### ii.有序列表
1. 有序列表
2. 有序列表
### iii.嵌套（空4格）
- 嵌套  
    - 嵌套
### iv.Todolist
`-[空格]空格<待办事项>`  

- [ ] 待办
- [x] Todo
## 4.表格
|左对齐|居中对齐|右对齐|
| :--- | :---: | ---: |
|a|b|c|
## 5.段落
1. 换行（2格及以上空格+回车/中间空1行）
2. 分割线（3个及以上*）
***
## 6.字体
*斜体*
**粗体**
***粗斜体***
==高亮==
~~删除~~
<u>下划线</u>

## 7.脚注
[^1]脚注
[^1]:后文添加注释才能显示

## 8.代码
`单行代码`
```
多行代码
```
## 9.超链接
`[解释]:链接/<链接>/链接`
[Markdown网址]: https://www.runoob.com/markdown/md-tutorial.html
查看更多功能请看[笔记]
[笔记]： https://www.runoob.com/
##  10.公式
$单行公式$
$$
多行公式
$$
## 11.html
`<位置><font face="字体" size=字体大小 color=颜色>内容</font></位置>`
# <center><font face="宋体" size=5 color=pink>///QwQ///</font></center>
## 12.CSS
`ctrl+shift+P 搜索“Markdown Preview Enhanced:Customize CSS"`
```
h1,h3{
    text-align:center;
}
```
(使一,三级的标题居中)
## 13.图片插入
### i.本地图片(可创建文件夹存放图片)
`![描述文字](./图片文件名称)`
![图片](./01.jpg)
### ii.图床
- 图床网站
- 图片一同上传，操作同（i.）
- 网站图片—右键-在新标签内打开-复制链接
### iii.`<img>`标签
`<img src="" alt="图片无法显示时的替代文字" width=宽度 height=高度 title="鼠标悬停时标题">`
<img src="02.jpg" alt="图片无法显示" width=400px height=600px title="鼠标选中">
- 宽度与高度
    - 百分比%(占页面的多少，大小随页面大小而变)
    - 像素px(图片大小固定) 
### iv.Base64
- 在线工具:https://www.lddgo.net/convert/imagebasesix (获取代码)
- `![描述文字](./base64代码，要以"data:image/png;base64"为开头)`
- 以`<!-- #region -->`和`<!-- #endregion -->`折叠代码