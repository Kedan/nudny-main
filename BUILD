
cc_library(
	name = "nudny-main",
	srcs = [
		"src/nudny/main/main.cpp",
	],
	hdrs = [
		"include/nudny/main/main.hpp",
	],
	includes = [
		"include",
	],
	visibility = [
		"//visibility:public",
	],
	deps = [ 
		"@nlohmann_json//:json",
	],
)

cc_test(
	name = "nudny-main-test",
	includes = ["test/include"],
	srcs = glob([
		"test/include/nudny/main/nudny_main_test.hpp",
		"test/src/nudny/main/nudny_main_test.cpp"
	]),
	copts = [
		"-Wall",
		"-Wextra",
		"-Wpedantic",
	],
	deps = [
		":nudny-main",
		"@googletest//:gtest_main",
		"@nlohmann_json//:json",
	],
)

cc_binary(
	name = "app",
	srcs = [ "src/main.cpp"	],
	deps = [ 
		":nudny-main",
		"@nlohmann_json//:json"
	],
)
