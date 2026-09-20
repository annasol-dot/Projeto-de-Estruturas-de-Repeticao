#include <stdio.h>

int main() {
    float limite_temp;
    float temp;
    float soma_temp = 0.0;
    float maior_temp, menor_temp;
    
    int total_leituras = 0;
    int acima_limite = 0;
    int consecutivas_acima = 0;
    
    printf("==== SISTEMA DE MONITORAMENTO INDUSTRIAL ====\n");
    
    // Solicita e valida o limite de temperatura
   do {
        printf("Digite o limite de temperatura: ");
        if (scanf("%f", &limite_temp) != 1) {
            printf("❌Entrada Inválida. Insira um valor numérico.\n");
            while (getchar() != '\n');
            continue;
        } 
        if (limite_temp <= 0) {
            printf("O limite de temperatura deve ser maior que 0°C. \n");
        }
   } while (limite_temp <=0);
   
   
    // Recebe  e processa as temperaturas do sensor
    printf("Digite a temperatura ou 000 para encerrar manualmente: \n");
    
    while (1) {
        printf("Temperatura: ", total_leituras + 1);
        
        if (scanf("%f", &temp) != 1) {
            printf("Entrada Inválida!. Digite um valor numérico. \n");
            while (getchar() != '\n');
            continue;
        }
        
        // Condição para parar o monitoramento
        if (temp == 000) {
            printf("\nMonitoramento encerrado.\n");
            break;
        }
        
        //Metricas da leituras
        
        if (total_leituras == 0) {
            maior_temp = temp;
            menor_temp = temp;
        } else {
            if (temp > maior_temp) {
                maior_temp = temp;
            }
            if (temp < menor_temp) {
                menor_temp = temp;
            }
        }
        
        soma_temp += temp;
        total_leituras++;
        
        //Verificacção de Segurança
        if (temp > limite_temp) {
            acima_limite++;
            consecutivas_acima++;
            printf("⚠️ ALERTA: Temperatura acima do limite! (%d/3 leituras consecutivas)\n", consecutivas_acima);
        } else {
            consecutivas_acima = 0; //Reinicia a contagem
        }
        
        //O programa encerra automaticamente com 3 temperaturas acima do limite consecutivas
        if(consecutivas_acima == 3) {
            printf("\n🚨 AERTA: 3 temperaturas consecutivas acima do limite detectadas!\n");
            printf("Desligamento automático do sistema ativado.\n");
            break;
        }
    }
    
    printf("\n=========================================\n");
    printf("             RELATÓRIO FINAL             \n");
    printf("=========================================\n");
    
    if (total_leituras > 0) {
        float media_temp = soma_temp / total_leituras;
        printf("Total de leituras válidas realizadas: %d\n", total_leituras);
        printf("Média das temperaturas: %.2f°C\n", media_temp);
        printf("Maior temperatura registada: %.2f°C\n", maior_temp);
        printf("Menor temperatura registada: %.2f°C\n", menor_temp);
        printf("Quantidade de leituras acima do limite: %d\n", acima_limite);
    } else {
        printf("Nenhuma leitura válida foi resgitrada.\n");
    }
    
    printf("=========================================\n");
    
    return 0;
    
}
