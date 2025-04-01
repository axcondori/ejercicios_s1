#include <iostream>
#include <cmath>

void problema_01() { // Calcular área de un terreno
    double longitud; // Longitud del terreno
    double ancho; // Ancho del terreno

    std::cout << "Ingrese longitud: ", std::cin >> longitud;
    std::cout << "Ingrese ancho: ", std::cin >> ancho;
    std::cout << "Area: " << longitud * ancho << std::endl;
}

void problema_02() { // Division en grupos iguales
    double numero = -1; // Le asigno -1 para que inicie el bucle

    while (numero < 0 || std::floor(numero) != numero) { // Se repite hasta que el numero sea positivo
        std::cout << "Ingrese un numero: ", std::cin >> numero;
    }

    if (numero != 0) { // Otra vez para evitar la repeticion infinita al poner algo no numerico

        if (const int num = numero; num % 2 == 0) {
            std::cout << "Se puede dividir en dos partes iguales." << std::endl;
        }
        else {
            std::cout << "No se puede dividir en dos partes iguales." << std::endl;
        }
    }
    else { // Cuando es 0 o no es numerico
        std::cout << "No se puede dividir.";
    }
}

void problema_03() { // Puntuacion maxima
    int cantidad_puntuaciones;

    std::cout << "Ingrese cantidad de puntuaciones: ";
    std::cin >> cantidad_puntuaciones;

    double puntuacion;
    double mayor = 0;

    for (int i = 0; i < cantidad_puntuaciones; i++) { // Pregunta por la puntuacion i veces
        std::cout << "Ingrese puntuacion " << i + 1 << ": ";
        std::cin >> puntuacion;

        if (puntuacion > mayor) { // Si la puntuacion es mayor a la mayor previa, se reasigna mayor
            mayor = puntuacion;
        }
    }

    std::cout << "Puntuacion mayor: " << mayor << std::endl;
}

void problema_04() { // Verificacion de mayoria de edad
    int edad = -1; // Le asigno -1 para que inicie el bucle

    while (edad < 0 || edad > 122) { // Rango valido: 0 a 122 años
        std::cout << "Ingrese su edad: ", std::cin >> edad;
    }

    if (edad >= 18) {
    std::cout << "Es mayor de edad" << std::endl;
    }
    else {
        std::cout << "No mayor de edad" << std::endl;
    }
}

void problema_05() { // Calculo de salario semanal
    // PARTE 1: Calculo el salario base
    // Establezco variables base
    float descuento;
    int horas_trabajo;
    int horas_extra;
    float salario_trabajo;
    float salario_extra;

    // Input de horas y salario :D
    std::cout << "Ingrese horas de trabajo: ";
    std::cin >> horas_trabajo;
    std::cout << "Ingrese salario por hora: S/";
    std::cin >> salario_trabajo;

    // Calculo el salario según horas y salario
    float salario_total = salario_trabajo * horas_trabajo;

    // PARTE 2: Calculo salario extra
    std::cout << "Ingrese horas extra: ";
    std::cin >> horas_extra;

    if (horas_extra != 0){ // Si ha trabajado horas extra
        std::cout << "Ingrese salario por horas extra: S/";
        std::cin >> salario_extra;

        // Sumo el salario extra al salario total semanal
        salario_total += salario_extra * horas_extra;
    }

    // PARTE 3: Input % de descuento en salario
    std::cout << "Que porcentaje se descuenta de su salario? (Ingresar como decimal): ";
    std::cin >> descuento;

    // Calculo salario con descuento :3
    salario_total *= (1 - descuento);

    // PARTE 4: Mostrar salario total
    std::cout << "Salario total: S/" << salario_total << std::endl;
}

void problema_06() { // Conversion de Celsius a Fahrenheit
    double temperatura_c; // double para mayor precision

    std::cout << "Ingrese temperatura en grados Celsius: ";
    std::cin >> temperatura_c;

    // 9.0 para que no ocurra 0 + 32
    std::cout << "Temperatura en Celsius: " << ((9.0 / 5) * temperatura_c) + 32 << std::endl;
}

void problema_07() {
    // Uso 'fecha' en lugar de 'año' por si la ñ causa algun error en calcular ^^"
    // TODO: Profe como deberia de reemplazar ñ para que no se vea extraño?
    double fecha_decimal = -1.0;

    while (fecha_decimal < 0 || std::floor(fecha_decimal) != fecha_decimal) {
        std::cout << "Ingrese un año: ";
        std::cin >> fecha_decimal;
    }

    if (fecha_decimal != 0) {
        int fecha = fecha_decimal;

        if ((fecha % 4 == 0 && fecha % 100 != 0) || (fecha % 400 == 0)) {
            std::cout << "El año ingresado es bisiesto";
        }
        else {
            std::cout << "El año ingresado no es bisiesto";
        }
    }
    else {
        std::cout << "El año ingresado no existe.";
    }


}

void problema_08() { // Raiz de un numero
    double numero; // No le asigno un valor negativo debido al mensaje de error

    std::cout << "Ingrese un numero positivo: ";
    std::cin >> numero;

    while (numero < 0) {
        std::cout << "ERROR. El numero ingresado es negativo." << std::endl; // Mensaje de error
        std::cout << "Ingrese un numero positivo: "; // Otra vez input
        std::cin >> numero;
    }

    std::cout << "Su raiz cuadrada es: " << sqrt(numero) << std::endl; // Directamente muestra raiz cuadrada
}

void problema_09() { // Compra y descuentos
    int cantidad_productos; // Cantidad de productos distintos
    int num_producto; // Cantidad de un mismo producto
    double precio_producto;
    double total_compra = 0;

    std::cout << "Ingrese cantidad de productos distintos a comprar: ";
    std::cin >> cantidad_productos;

    for (int i = 0; i < cantidad_productos; i++) { // Se repite para cada producto
        std::cout << "Ingrese precio del producto " << i + 1 << ": S/";
        std::cin >> precio_producto;
        std::cout << "Ingrese cantidad de producto " << i + 1 << " a comprar: ";
        std::cin >> num_producto;

        total_compra += precio_producto * num_producto; // Añade precio total de producto a total
    }

    if (total_compra > 100) {
        total_compra *= 0.9;
        std::cout << "Felicidades, se puede aplicar un descuento de 10%" << std::endl; // El mensaje se puede omitir :(
    }

    std::cout << "El costo total es: S/" << total_compra << std::endl;
}

void problema_10() { // Ganancia o perdida
    float ingresos;
    float gastos;

    std::cout << "Ingrese su ingreso: S/"; // Suena un poco extraño?
    std::cin >> ingresos;
    std::cout << "Ingrese sus gastos: S/";
    std::cin >> gastos;

    if (ingresos > gastos) { // Si ingresos > gastos, ganancia > 0
        std::cout << "Ha tenido una ganancia de S/" << ingresos - gastos << std::endl;
    }
    else if (ingresos < gastos) { // Perdida
        std::cout << "Ha tenido una perdida de S/" << gastos - ingresos << std::endl;
    }
    else { // Si ingreso = gastos, no gana o pierde dinero
        std::cout << "No ha tenido ganancia o perdida";
    }
}

void problema_11() { // Calificaciones
    double calificacion = -1.0; // Le asigno -1 para que inicie el bucle

    while (calificacion < 0 || calificacion > 100) { // Si no esta dentro del rango 0 a 100
        std::cout << "Ingrese la calificacion: ";
        std::cin >> calificacion;
    }

    std::cout << "Escala: ";

    if (calificacion >= 90) {
        std::cout << "A";
    }
    else if (calificacion >= 80) {
        std::cout << "B";
    }
    else if (calificacion >= 70) {
        std::cout << "C";
    }
    else if (calificacion >= 60) {
        std::cout << "D";
    }
    else {
        std::cout << "F";
    }
}

void problema_12() { // Dias de la semana
    double numero;
    std::string dias[7] = {"Lunes", "Martes", "Miercoles",
                            "Jueves", "Viernes", "Sabado", "Domingo"};

    std::cout << "Ingrese un numero: ";
    std::cin >> numero;

    while (numero < 1 || numero > 7 || std::floor(numero) != numero) {
        std::cout << "ERROR. El numero ingresado no es valido.";
        std::cout << "Ingrese un numero: ";
        std::cin >> numero;
    }

    int num = numero;
    std::cout << "Dia de la semana: " << dias[num - 1] << std::endl;
}

void problema_13() { // Clasificacion de velocidad
    double velocidad = -1;

    while (velocidad < 0) {
        std::cout << "Ingrese la velocidad en km/h: ";
        std::cin >> velocidad;
    }

    std::cout << "Clasificacion: ";
    if (velocidad > 100) {
        std::cout << "Muy Rapido";
    }
    else if (velocidad >= 60) {
        std::cout << "Rapido";
    }
    else if (velocidad >= 30) {
        std::cout << "Moderado";
    }
    else if (velocidad > 0) {
        std::cout << "Lento";
    }
    else if (velocidad == 0) {
        std::cout << "Detenido";
    }
    else {
        std::cout << "Velocidad erronea";
    }
}

void problema_14() {
    double uso_GB = -1; // bucle

    while (uso_GB < 0) {
        std::cout << "Ingrese uso de GB mensual: ";
        std::cin >> uso_GB;
    }

    std::cout << "Plan recomendado: ";
    if (uso_GB > 10) {
        std::cout << "Ilimitado";
    }
    else if (uso_GB >= 5) {
        std::cout << "Premium";
    }
    else if (uso_GB >= 2) {
        std::cout << "Estandar";
    }
    else {
        std::cout << "Basico";
    }
}

void problema_15() {
    int edad = -1; // bucle

    while (edad < 0 || edad > 122) {
        std::cout << "Ingrese su edad: ";
        std::cin >> edad;
    }

    std::cout << "Clacificacion: ";
    if (edad >= 65) {
        std::cout << "Adulto Mayor";
    }
    else if (edad >= 18) {
        std::cout << "Adulto";
    }
    else if (edad >= 13) {
        std::cout << "Adolescente";
    }
    else if (edad >= 4) {
        std::cout << "Niño";
    }
    else {
        std::cout << "Infante";
    }
}

void problema_16() {
    std::string entrada;
    std::string entradas_validas[] = {"abc123", "dce456", "xyz789"};
    const int num_entradas = std::size(entradas_validas);

    int edad_minima[num_entradas] = {0, 18, 13};
    int indice = num_entradas;
    int edad;

    std::cout << "Ingrese codigo de entrada: ";
    std::cin >> entrada;

    for (int i = 0; i < sizeof(entradas_validas); i++) {
        if (entrada == entradas_validas[i]) {
            indice = i;
            break;
        }
    }

    if (indice == num_entradas) {
        std::cout << "La entrada no es valida.";
    }
    else {
        std::cout << "Ingrese su edad: ";
        std::cin >> edad;

        if (edad >= edad_minima[indice]) {
            std::cout << "Cumple todas las condiciones :]";
        }
        else {
            std::cout << "Su edad no es suficiente para la pelicula :[";
        }
    }
}

void problema_17() {
    std::string estado_civil;
    double ingreso_anual;

    int num_estados_civiles = 2;
    std::string lista_estado_civil[num_estados_civiles] = {"soltero", "casado"}; // Se pueden añadir mas c:
    int indice_estado_civil = num_estados_civiles;

    int num_categorias = 2; // Se puede modificar cantidad de categorias
    double categorias_ingresos[num_categorias][num_estados_civiles + 1] = {
        {50000, 0.1, 0.08},{100000, 0.2, 0.15}};
    // Se pueden añadir mas categorias: tope, % solteros, % casados, % estado3, % estado4 etc etc

    std::cout << "Ingrese su estado civil: ";
    std::cin >> estado_civil;

    for (int i = 0; i < num_estados_civiles; i++) {
        if (estado_civil == lista_estado_civil[i]) {
            indice_estado_civil = i;
        }
    }

    if(indice_estado_civil == num_estados_civiles) {
        std::cout << "Su estado civil no es valido.";
    }
    else {
        std::cout << "Ingrese su ingreso anual: S/";
        std::cin >> ingreso_anual;

        for (int j = 0; j < num_categorias; j++) {
            if (ingreso_anual < categorias_ingresos[j][0]) {
                double a_pagar = (categorias_ingresos[j][indice_estado_civil + 1]) * ingreso_anual;
                std::cout << "Impuestos a pagar: S/" << a_pagar << std::endl;

                break;
            }
        }
    }
}

void problema_18() {
    float longitud_1 = -1;
    float longitud_2 = -1;
    float longitud_3 = -1;

    while (longitud_1 < 0) {
        std::cout << "Ingrese longitud del lado 1: ";
        std::cin >> longitud_1;
    }

    while (longitud_2 < 0) {
        std::cout << "Ingrese longitud del lado 2: ";
        std::cin >> longitud_2;
    }

    while (longitud_3 < 0) {
        std::cout << "Ingrese longitud del lado 3: ";
        std::cin >> longitud_3;
    }

    float suma_1_2 = longitud_1 + longitud_2;
    float suma_2_3 = longitud_2 + longitud_3;
    float suma_3_1 = longitud_3 + longitud_1;

    if (suma_1_2 <= longitud_3 || suma_2_3 <= longitud_1 || suma_3_1 <= longitud_2) {
        std::cout << "No es un triangulo valido.";
    }
    else if (longitud_1 == longitud_2 && longitud_2 == longitud_3) {
        std::cout << "Es un triangulo equilatero.";
    }
    else if (longitud_1 == longitud_2 || longitud_2 == longitud_3 || longitud_3 == longitud_1) {
        std::cout << "Es un triangulo isosceles.";
    }
    else {
        std::cout << "Es un triangulo escaleno.";
    }
}

void problema_19() {
    int cantidad_cursos = 3;
    int cantidad_criterios = 2;

    std::string cursos[cantidad_cursos] = {"matematicas", "lectura", "ciencias"};
    int requisito[cantidad_cursos] = {70, 65, 65};

    std::string otros_criterios[cantidad_criterios] = {"actividades extracurriculares", "cartas de recomendacion"};
    bool cumple_criterios[cantidad_criterios];
    int cumplimiento_total = 0;

    int calificaciones[cantidad_cursos];

    for (int i = 0; i < cantidad_cursos; i++) {
        std::cout << "Ingrese puntaje en " << cursos[i] << ": ";
        std::cin >> calificaciones[i];
    }

    int cumple_requisitos = 0;
    for (int j = 0; j < cantidad_cursos; j++) {
        if (calificaciones[j] > requisito[j]) {
            cumple_requisitos++;
        }
    }

    if (cumple_requisitos == cantidad_cursos) {
        std::cout << "Cumple con los requisitos de puntaje :)" << std::endl;

        for (int k = 0; k < cantidad_criterios; k++) {
            std::cout << "Cumple con " << otros_criterios[k] << "? (Si = 1, No = 0):";
            std::cin >> cumple_criterios[k];

            if (cumple_criterios[k] == 1) {
                cumplimiento_total++;
            }
        }

        if (cumplimiento_total == cantidad_criterios) {
            std::cout << "Cumple con todos los criterios";
        }
        else {
            std::cout << "No cumple con los otros criterios";
        }

    }
    else {
        std::cout << "No cumple con los requisitos de puntaje :(" << std::endl;
    }

}

void problema_20() {
    const double descuentos[][3] = {{100, 0.1, 0.2}, {0, 0.05, 0.1}};
    const int cantidad_rango_descuentos = std::size(descuentos);
    // Orden: Requisito, dscto sin membresia, dscto con membresia

    double total_compra;
    bool membresia;

    std::cout << "Ingrese total de la compra: S/";
    std::cin >> total_compra;

    std::cout << "Tiene membresia? (Si = 1, No = 0): ";
    std::cin >> membresia;

    for (int i = 0; i < cantidad_rango_descuentos; i++) {
        if (total_compra > descuentos[i][0]) {
            total_compra *= 1 - descuentos[i][membresia + 1];
            std::cout << "Total con dscto: S/" << total_compra;

            break;
        }
    }
}

int main() {
    int problema;

    std::cout << "Ingrese numero de problema: ";
    std::cin >> problema;

    if (problema == 1) { problema_01(); }
    else if (problema == 2) { problema_02(); }
    else if (problema == 3) { problema_03(); }
    else if (problema == 4) { problema_04(); }
    else if (problema == 5) { problema_05(); }
    else if (problema == 6) { problema_06(); }
    else if (problema == 7) { problema_07(); }
    else if (problema == 8) { problema_08(); }
    else if (problema == 9) { problema_09(); }
    else if (problema == 10) { problema_10();}
    else if (problema == 11) { problema_11();}
    else if (problema == 12) { problema_12();}
    else if (problema == 13) { problema_13();}
    else if (problema == 14) { problema_14();}
    else if (problema == 15) { problema_15();}
    else if (problema == 16) { problema_16();}
    else if (problema == 17) { problema_17();}
    else if (problema == 18) { problema_18();}
    else if (problema == 19) { problema_19();}
    else if (problema == 20) { problema_20();}
    else{ std::cout << "Ese problema no existe, profe :O"; }

    return 0;
}