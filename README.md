# NSRegularExpressionGetValues
Get the strings where matched the NSRegularExpression

**请注意，本篇不是教你如何使用正则表达式的教学文章，因此需要你首先已经掌握了正则表达式的用法。*

相信很多人在使用正则表达式时会有一个需求，即希望把匹配表达式的部分取出来。但网上的大部分文章都是说到获取匹配范围就不往下继续了。所以我把我在工程中用到的正则表达式拓展类单独提取出来，先来看看它的作用：

![image](http://upload-images.jianshu.io/upload_images/4481854-3d4f8ab4e972707a.jpg?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
> 正则表达式获取匹配部分字符串

正则表达式获取匹配部分字符串
       如图所示，我将表达式中匹配小括号"()"内的三个部分取出来了并放入了一个数组，数组的长度取决于你定义的正则表达式里小括号组的个数。也就是说，每一个在小括号内的匹配部分都将被取出，并且完全取决于你如何定义正则表达式。

**例：图中我的url中包含sh000001这个上证指数，项目中只有指数才会有sh或sz的前缀，而个股是没有的，因此我需要单独取出sh这个字符串来辨别它是个指数。这就是表达式中(sh|sz)?(\\\d{6})的来源。**

下载工程，并将NSRegularExpression+SHY_GetValues.h和m导入您的工程就可使用啦

