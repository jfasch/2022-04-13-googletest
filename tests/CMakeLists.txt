ADD_EXECUTABLE(
  run-tests

  dummy-suite.cpp
  valuable-stuff-suite.cpp
)

TARGET_LINK_LIBRARIES(
  run-tests

  my-valuable-stuff
  gtest_main
)
