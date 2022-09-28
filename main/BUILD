cc_binary(
  name = "hello",
  srcs = ["main.cpp"],
  deps = [
      "libHello"
  ]
)

cc_library(
    name="libHello",
    hdrs=glob(["hello.h"]),
    srcs=glob(["hello.cpp"]),
    visibility = ["//visibility:public"],
)

cc_test (
    name = "hello_test",
    srcs = [
        "test.cpp",
    ],
    deps = [
        "libHello",
        "@gtest//:gtest",
        "@gtest//:gtest_main"
    ],
)
cc_binary(
    name = "paranthesis",
    srcs = ["paranthesis.cpp"],
    visibility = ["//main:__pkg__"],
    )
cc_binary(
    name = "zigzag",
    srcs = ["zigzag.cpp"],
    visibility = ["//main:__pkg__"],
    )
cc_binary(
    name = "bigdata",
    srcs = ["bigdata.cpp"],
    visibility = ["//main:__pkg__"],
    )
