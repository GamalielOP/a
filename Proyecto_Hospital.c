#include <stdio.h>

#define MAX_PACIENTES 10
#define MAX_NOMBRE 5
#define MAX_CUARTOS 5
#define MAX_MEDICAMENTOS 10

typedef struct {
    int id;
    char nombre[MAX_NOMBRE];
    int edad;
    char diagnostico[MAX_NOMBRE];
} Paciente;

typedef struct {
    int numero;
    int paciente_id;
} Cuarto;

typedef struct {
    int numero;
    int paciente_id;
    char medicamento[MAX_NOMBRE];
} Medicamento;

void registrar(Paciente pacientes[], int* contadorPacientes) {
    if (*contadorPacientes >= MAX_PACIENTES) {
        printf("Error: Se ha alcanzado el limite maximo de pacientes.\n");
        return;
    }

    Paciente nuevo;

    printf("Ingrese el ID del paciente: ");
    scanf("%d", &nuevo.id);
    printf("Ingrese el nombre del paciente: ");
    scanf("%s", nuevo.nombre);
    printf("Ingrese la edad del paciente: ");
    scanf("%d", &nuevo.edad);
    printf("Ingrese el diagnostico del paciente: ");
    scanf("%s", nuevo.diagnostico);

    pacientes[*contadorPacientes] = nuevo;
    (*contadorPacientes)++;
}

void mostrar(Paciente pacientes[], int contadorPacientes, Medicamento medicamentos[], int contadorMedicamentos, Cuarto cuartos[], int contadorCuartos) {
    int i,j,k;
	printf("Listado de pacientes:\n");
    for (i = 0; i < contadorPacientes; i++) {
        printf("ID: %d, Nombre: %s, Edad: %d, Diagnostico: %s\n", pacientes[i].id, pacientes[i].nombre, pacientes[i].edad, pacientes[i].diagnostico);
        
        printf("Medicamentos asociados:\n");
        for ( j = 0; j < contadorMedicamentos; j++) {
            if (medicamentos[j].paciente_id == pacientes[i].id) {
                printf("- Medicamento: %s\n", medicamentos[j].medicamento);
            }
        }
        
        printf("Cuartos asociados:\n");
        for (k = 0; k < contadorCuartos; k++) {
            if (cuartos[k].paciente_id == pacientes[i].id) {
                printf("- Numero de cuarto: %d\n", cuartos[k].numero);
            }
        }
        
        printf("\n");
    }
}

void relacionarCuarto(Cuarto cuartos[], int* contadorCuartos, Paciente pacientes[], int contadorPacientes) {
    if (*contadorCuartos >= MAX_CUARTOS) {
        printf("Error: Se ha alcanzado el limite maximo de cuartos.\n");
        return;
    }

    int pacienteId;

    printf("Ingrese el ID del paciente a relacionar: ");
    scanf("%d", &pacienteId);

    int indicePaciente = -1,i;
    for (i = 0; i < contadorPacientes; i++) {
        if (pacientes[i].id == pacienteId) {
            indicePaciente = i;
            break;
        }
    }

    if (indicePaciente == -1) {
        printf("Error: No se encontro un paciente con el ID ingresado.\n");
        return;
    }

    Cuarto nuevo;

    printf("Ingrese el numero del cuarto: ");
    scanf("%d", &nuevo.numero);
    nuevo.paciente_id = pacienteId;

    cuartos[*contadorCuartos] = nuevo;
    (*contadorCuartos)++;
}

void relacionarMedicamento(Medicamento medicamentos[], int* contadorMedicamentos, Paciente pacientes[], int contadorPacientes) {
    if (*contadorMedicamentos >= MAX_MEDICAMENTOS) {
        printf("Error: Se ha alcanzado el limite maximo de medicamentos.\n");
        return;
    }

    int pacienteId;

    printf("Ingrese el ID del paciente a relacionar: ");
    scanf("%d", &pacienteId);

    int indicePaciente = -1,i;
    for (i = 0; i < contadorPacientes; i++) {
        if (pacientes[i].id == pacienteId) {
            indicePaciente = i;
            break;
        }
    }

    if (indicePaciente == -1) {
        printf("Error: No se encontro un paciente con el ID ingresado.\n");
        return;
    }

    Medicamento nuevo;

    printf("Ingrese el numero del medicamento: ");
    scanf("%d", &nuevo.numero);
    printf("Ingrese el nombre del medicamento: ");
    scanf("%s", nuevo.medicamento);
    nuevo.paciente_id = pacienteId;

    medicamentos[*contadorMedicamentos] = nuevo;
    (*contadorMedicamentos)++;
}

int main() {
    Paciente pacientes[MAX_PACIENTES];
    Cuarto cuartos[MAX_CUARTOS];
    Medicamento medicamentos[MAX_MEDICAMENTOS];
    int contadorPacientes = 0;
    int contadorCuartos = 0;
    int contadorMedicamentos = 0;
    int opcion;

    do {
        printf("------ Hospital ------\n");
        printf("(1) Registrar paciente\n");
        printf("(2) Mostrar pacientes\n");
        printf("(3) Relacionar paciente a cuarto\n");
        printf("(4) Relacionar paciente a medicamento\n");
        printf("(5) Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                registrar(pacientes, &contadorPacientes);
                break;
            case 2:
                mostrar(pacientes, contadorPacientes, medicamentos, contadorMedicamentos, cuartos, contadorCuartos);
                break;
            case 3:
                relacionarCuarto(cuartos, &contadorCuartos, pacientes, contadorPacientes);
                break;
            case 4:
                relacionarMedicamento(medicamentos, &contadorMedicamentos, pacientes, contadorPacientes);
                break;
            case 5:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion invalida. Por favor, seleccione una opcion valida.\n");
        }

        printf("\n");
    } while (opcion != 5);

    return 0;
}
