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