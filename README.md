# hello-cpp-bazel-gtest

Project is to demonstrate the simple hello c++ application built by bazel and unit tested with gtest

Quick view of all files:
![cpp-bazel-gtest](https://user-images.githubusercontent.com/38223320/121174361-7684a500-c877-11eb-928e-76b14f911ba2.PNG)

Note,
we have 3 targets:
1. a library
2. an executable
3. and a gtest


Build with "bazel build //..."
```
PS D:\work\hello-cpp-bazel-gtest> bazel build //...
DEBUG: Rule 'gtest' indicated that a canonical reproducible form can be obtained by modifying arguments commit = "703bd9caab50b139428cea1aaff9974ebee5742e", shallow_since = "1570114335 -0400" and dropping ["branch"]
DEBUG: Repository gtest instantiated at:
  no stack (--record_rule_instantiation_callstack not enabled)
Repository rule git_repository defined at:
  C:/users/a1prashant/_bazel_a1prashant/cdn2r2fw/external/bazel_tools/tools/build_defs/repo/git.bzl:195:18: in <toplevel>
INFO: Analyzed 3 targets (21 packages loaded, 382 targets configured).
INFO: Found 3 targets...
INFO: Elapsed time: 39.797s, Critical Path: 11.22s
INFO: 22 processes: 22 local.
INFO: Build completed successfully, 32 total actions
PS D:\work\hello-cpp-bazel-gtest> 
```

Test with "bazel test //..."
```
PS D:\work\hello-cpp-bazel-gtest> bazel test //...
DEBUG: Rule 'gtest' indicated that a canonical reproducible form can be obtained by modifying arguments commit = "703bd9caab50b139428cea1aaff9974ebee5742e", shallow_since = "1570114335 -0400" and dropping ["branch"]
DEBUG: Repository gtest instantiated at:
  no stack (--record_rule_instantiation_callstack not enabled)
Repository rule git_repository defined at:
  C:/users/a1prashant/_bazel_a1prashant/cdn2r2fw/external/bazel_tools/tools/build_defs/repo/git.bzl:195:18: in <toplevel>
INFO: Analyzed 3 targets (0 packages loaded, 0 targets configured).
INFO: Found 2 targets and 1 test target...
INFO: Elapsed time: 1.162s, Critical Path: 0.45s
INFO: 1 process: 1 local.
INFO: Build completed successfully, 2 total actions
//main:hello_test                                                        PASSED in 0.4s

Executed 1 out of 1 test: 1 test passes.
INFO: Build completed successfully, 2 total actions
PS D:\work\hello-cpp-bazel-gtest> 
```

Run executable with "bazel run //main:hello"
```
PS D:\work\hello-cpp-bazel-gtest> bazel run //main:hello
INFO: Analyzed target //main:hello (0 packages loaded, 0 targets configured).
INFO: Found 1 target...
Target //main:hello up-to-date:
  bazel-bin/main/hello.exe
INFO: Elapsed time: 0.604s, Critical Path: 0.05s
INFO: 0 processes.
INFO: Build completed successfully, 1 total action
INFO: Build completed successfully, 1 total action
hello there!
PS D:\work\hello-cpp-bazel-gtest> 
```

If you want to see all the targets, do it with "bazel query //..."
```
PS D:\work\hello-cpp-bazel-gtest> bazel query //...
//main:hello_test
//main:hello     
//main:libHello
Loading: 0 packages loaded
PS D:\work\hello-cpp-bazel-gtest> 
```
