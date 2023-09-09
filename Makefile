bin/Mascota : src/Mascota.cpp include/Mascota
	echo "Compilando Mascota"
	rm bin/Mascota
	g++ src/main.cpp -o bin/Mascota -I include/