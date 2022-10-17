#!/usr/bin/env bash

cd build
LOG_TEST="../test.log"

(genhtml -o report coverage.info --output-directory coverage-report/) > "${LOG_TEST}"



VAR=$(cat "${LOG_TEST}")
#cat "${LOG_TEST}"

lines=$(grep -Eo '\.\.\.: [0-9]{1,2}.[0-9]' ../test.log | grep -Eo '[0-9]{1,2}.[0-9]' $cov | grep -Eo '[0-9]{2}')
functions=$(grep -Eo '\.\.: [0-9]{1,2}.[0-9]' ../test.log | grep -Eo '[0-9]{1,2}.[0-9]' $cov | grep -Eo '[0-9]{2}')
if [ $lines -lt 6 ]; then
  echo less
fi
echo $functions