# unit-test-demo
本仓库存放着通过 git submodule 引入 gtest，CMake 构建的单元测试 demo。

通过在 CMake 内指定两个不同的构建目标 `demo_main` 与 `demo_test`，来将程序和单元测试分离开。
