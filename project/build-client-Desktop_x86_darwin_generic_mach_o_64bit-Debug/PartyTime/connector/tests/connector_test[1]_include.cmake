if(EXISTS "/Users/sugarbearzelagmail.com/Documents/IT/TechPark/2022_2_MRGA_team/project/build-client-Desktop_x86_darwin_generic_mach_o_64bit-Debug/PartyTime/connector/tests/connector_test[1]_tests.cmake")
  include("/Users/sugarbearzelagmail.com/Documents/IT/TechPark/2022_2_MRGA_team/project/build-client-Desktop_x86_darwin_generic_mach_o_64bit-Debug/PartyTime/connector/tests/connector_test[1]_tests.cmake")
else()
  add_test(connector_test_NOT_BUILT connector_test_NOT_BUILT)
endif()