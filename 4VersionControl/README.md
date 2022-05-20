## 1. add VERSION 

```
project(OLOS VERSION 1.0)
```

## 2. configure_file(<input> <output>)

```
configure_file(config.h.in config.h)
```

## 3. touch config.h.in and edit  

定义变量，　这个变量名字从哪里呢，变量名字是由project 中PROJECT_NAME 和　VERSION中间用＿拼接起来的．

```
#define OLOS_VERSION_MAJOR @OLOS_VERSION_MAJOR@
#define OLOS_VERSION_MINOR @OLOS_VERSION_MINOR@
```

## 在程序中包含生成的config.h文件

```
#include "config.h"
```