## 1. add VERSION 

```
project(OLOS VERSION 1.0)
```

## 2. configure_file(<input> <output>)

```
configure_file(config.h.in config.h)
```

### [1] touch config.h.in and edit  

定义变量，　这个变量名字从哪里呢，变量名字是由project 中PROJECT_NAME 和　VERSION中间用＿拼接起来的．

```
#define OLOS_VERSION_MAJOR @OLOS_VERSION_MAJOR@
#define OLOS_VERSION_MINOR @OLOS_VERSION_MINOR@
```

### [2] 在程序中包含生成的config.h文件

```
#include "config.h"
```

## 3. option libraries 

对于Ｏption的选项，　其实可以有两种实现方式，　一种是在config.h.in中定义一个宏，　然后在代码中引用这个宏．另一种是在cmake中的一个option选项，　但是c++代码中并不能直接获取option的变量，　应该用add_definition去定义一个变量，　c++可以用这个定义的变量．　

经过"#define"的变量并不能在CMAKE中被使用
option中的变量并不能在c++代码中使用，应使用add_definition的定义的变量去在c++中使用．　
如 option(USE_ADDER "xxx" ON)
if(USE_ADDER) {
    add_definition(-DUSE_ADDER_ON)
}
