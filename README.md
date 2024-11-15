be sure you have cloned properly with submodules(needed because of minilibx library included as submodule):
git clone --recurse-submodules <path>

make //to compile 
make re //to recompile
./so_long maps/map02.ber 
//to open map 02 you can open any map 
or create your own and open (should be rectangular, surrounded by 11111, one E , one P, as many C but all path btw vailable)

valgrind ./so_long maps/map02.ber // to check leaks
valgrind --leak-check=full --show-leak-kinds=all ./so_long maps/map02.ber // to fully check leaks


