load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "hello-world-main",
    srcs = ["hello-world-main.cc"],
    deps = [
        "@hello-world-repo//:hello-world-lib",
    ],
)
