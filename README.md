zinnia2android
==============
使用zinnia实现android平台手写功能

总结步骤如下
1.http://zinnia.sourceforge.net/ 网站下载zinnia-0.06.zip 和 Zinnia-Tomoe
2.解压 & make & install zinnia

   % tar zxfv zinnia-X.X.tar.gz
   
   % cd zinnia-X.X
   
   % ./configure
   
   % make
   
   % su
   
   # make install
 
3.解压 & make & install Zinnia-Tomoe

  % tar zxfv zinnia-tomoe-XXXX.tar.gz
  
  % zinnia-tomoe-XXXX
  
  % ./configure
  
  % make
  
  % su
  
  # make install
  
（该步骤生成 handwriting-zh_CN.model）

4.按照ShouXieSample 中jni文件夹内文件构建jni
  Android.mk   Application.mk  libzinniajni.cpp  libzinniajin.h 为自己创建

5.编译jni
  如果从压缩包里copy过来的原始文件，则在ndk-build 时会报错 'isspace' was not declared in this scope
  在报错的cpp文件中加入引用
    #include <cctype>
  
  编译成功 生成so库

6.adb push handwriting-zh_CN.model /data/data

  handwriting-zh_CN.model 文件 在编译Zinnia-Tomoe后生成
  
7.运行android程序

over

总体来讲，文字识别率太低了。
难道是我的用法不对？！
