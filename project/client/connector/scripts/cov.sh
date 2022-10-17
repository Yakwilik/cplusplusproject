#!/usr/bin/env bash

LOG_TEST="../test.log"

red='\033[91m'
green='\033[92m'
yellow='\033[103m'
default='\033[0m'

cd build || exit
echo $PWD
lcov -t "tests/connector_test" -o coverage.info -c -d lib/CMakeFiles/connector.dir

(genhtml -o report coverage.info --output-directory coverage-report/) > "${LOG_TEST}"


VAR=$(cat "${LOG_TEST}")
cat "${LOG_TEST}"

lines_pattern="lines......: "
functions_pattern="functions..: "

OK=true

lines=$(grep -Eo '\.\.\.: [0-9]{1,2}.[0-9]' ../test.log | grep -Eo '[0-9]{1,2}.[0-9]' $cov | grep -Eo '[0-9]{2}')
functions=$(grep -Eo '\.\.: [0-9]{1,2}.[0-9]' ../test.log | grep -Eo '[0-9]{1,2}.[0-9]' $cov | grep -Eo '[0-9]{2}')



if [[ "$VAR" == *"$lines_pattern"["1"][[:digit:]].[[:digit:]]%* ]] || [[ "$VAR" == *"$lines_pattern"["$1"][[:digit:]].[[:digit:]]%* ]]; then
  printf "\t${green}%s${default}\n" "LINES_SUCCESS"
else
  printf "\t${red}%s${default}\n" "LINES_FAILED"
  OK=false
fi

if [[ "$VAR" == *"$functions_pattern"["1"][[:digit:]][[:digit:]].[[:digit:]]%* ]] || [[ "$VAR" == *"$functions_pattern"["$2"][[:digit:]].[0-9]%* ]]; then
  printf "\t${green}%s${default}\n" "FUNCTION_SUCCESS"
else
  printf "\t${red}%s${default}\n" "FUNCTION_FAILED"
  OK=false
fi

if ! ($OK) ; then
    printf "\n\n\t${red}%s${default}\n" "COVERAGE TESTING FAILED"
    exit 1
else
    printf "\n\n\t${green}%s${default}\n" "COVERAGE TESTING PASSED"
    exit 0
fi

