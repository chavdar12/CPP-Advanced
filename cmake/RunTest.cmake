# Invoked by add_test: feeds INPUT to EXE and compares stdout to EXPECTED byte-for-byte.
execute_process(COMMAND ${EXE} INPUT_FILE ${INPUT}
        OUTPUT_VARIABLE actual RESULT_VARIABLE rc TIMEOUT 5)
file(READ ${EXPECTED} expected)
if (NOT rc EQUAL 0)
    message(FATAL_ERROR "exit status: ${rc}")
endif ()
if (NOT actual STREQUAL expected)
    message(FATAL_ERROR "output mismatch\n--- expected\n${expected}\n--- actual\n${actual}")
endif ()
