cmake_minimum_required(VERSION 3.10)

project(Calculator C)

# Library avec les fonctions de la calculatrice
add_subdirectory(lib)

# Exécutable principal
add_executable(calculator main.c)
target_link_libraries(calculator lib)

# --- Partie tests automatiques ---
enable_testing()

# Tests fournis dans le sujet
add_test(t1 calculator add 2 3)
add_test(t2 calculator sub 3 -2)
add_test(t3 calculator mul 5 5)
add_test(t4 calculator div 1 5)

# Test pour ta nouvelle fonction car (carré)
add_test(t5 calculator car 5)
