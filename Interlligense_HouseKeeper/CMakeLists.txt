cmake_minimum_required(VERSION 3.19)
project(Intelligense_Housekeeper)

set(CMAKE_CXX_STANDARD 14)

add_executable(
        Intelligense_Housekeeper
                    main.cpp
                    chapter-Day01/numGuess.cpp chapter-Day01/static/numGuess.h
                    chapter-Day01/gradeOfScore.cpp chapter-Day01/static/gradeOfScore.h
                    chapter-Day02/arrayLearning.cpp chapter-Day02/static/arrayLearning.h
                    chapter-Day02/controlStatement.cpp chapter-Day02/static/controlStatement.h
                    chapter-Day02/opration.cpp chapter-Day02/static/opration.h)

add_executable(
        chapter-Day03
            chapter-Day03/pointerLearn.c)

add_executable(
        chapter-Day04
            chapter-Day04/main.c
            chapter-Day04/file_copy.c chapter-Day04/static/file_copy.h)

add_executable(
        chapter-Day05
            chapter-Day05/networkProgramming.c chapter-Day05/static/networkProgramming.h


        chapter-Day05/server_init.c chapter-Day05/client_init.c)
