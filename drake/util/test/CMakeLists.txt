
drake_add_cc_test(NAME testConvexHull EXTENSION cpp)
target_link_libraries(testConvexHull drakeConvexHull)

drake_add_cc_test(NAME testDrakeGeometryUtil EXTENSION cpp)
target_link_libraries(testDrakeGeometryUtil drakeGeometryUtil)

if(lcm_FOUND)
  drake_add_cc_test(NAME testLCMUtil EXTENSION cpp)
  target_link_libraries(testLCMUtil drakeLCMUtil drakeMath)
endif()
