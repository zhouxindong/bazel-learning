load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "hello-world-lib",
    srcs = ["hello-world.cc"],
    hdrs = ["hello-world.h"],
)

cc_binary(
    name = "hello-world-main",
    srcs = ["hello-world-main.cc"],
    data = ["//src:data/greet.txt"],
    deps = [
        ":hello-world-lib",
    ],
)
