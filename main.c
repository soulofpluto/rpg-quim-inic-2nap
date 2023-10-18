#include <stdio.h>
#include <stdlib.h>

// Declaração das funções
void boas_vindas(int *escolha_primeira_acao, int *questionamento_carlus);
int primeiro_lugar(int escolha_primeira_acao);
void reiniciarJogo(int escolha_primeira_acao);

void boas_vindas(int *escolha_primeira_acao, int *questionamento_carlus)
{
    int informacoes_carlus = 0;

    printf("Bem-vindos ao mundo mágico de Chemistry Land, onde alquimistas vivem em harmonia com a população.\n"
           "Cada vilarejo é protegido por um alquimista que usa seus conhecimentos para ser o curandeiro e protetor.\n"
           "Vocês são um alquimista chamado 'pH' que acabou de sair da Escola Atom, o Grande Alquimista Stoichiometry o enviou para o vilarejo de Neutron\n"
           "para ajudar a população que tem passado por situações muito complicadas.\n"
           "para ser o protetor de lá. Utilizem os seus conhecimentos científicos para descobrir o que está causando o caos no vilarejo e ajudem os cidadãos.\n");

    printf("Por onde começar -> indícios\n");
    printf("Você chega ao vilarejo e se depara com um lugar muito bonito e organizado, rodeado de árvores e casas modestas mas bonitas. Ao horizonte é possível observar uma\n"
           "construção de concreto que se destoa do ambiente, cortando uma parte do vilarejo, isso chama a sua atenção. Ao olhar para o sul, você enxerga\n"
           "o lago e dele vem um grupo de pescadores aparentemente tristes e desanimados.\n"
           "O Grande Alquimista disse que a sua casa fica ao lado do mercantil 'Indicator' que você vê logo à frente.\n"
           "Um cidadão passa do seu lado e acaba esbarrando em você e tira você dos seus pensamentos.\n");
    printf("CIDADÃO: Meu Deus, senhor, mil perdões pelo esbarrão!\n");

    printf("O que você faz?\n");
    printf("1. Aceita as desculpas e é educado.\n");
    printf("2. Rejeita as desculpas e é grosseiro.\n");
    printf("3. Ignora o cidadão e segue o seu caminho.\n");
    scanf("%d", escolha_primeira_acao);

    if (*escolha_primeira_acao == 1)
    {
        printf("Você escolhe aceitar as desculpas e ser educado com o cidadão\n");
        printf("\n\n");
        printf("pH: Tudo bem, sem problemas.\n");
        printf("CIDADÃO: Ah, suas roupas são diferentes. Você é daqui?\n");
        printf("pH: Agora sou sim, sou o Alquimista enviado pela escola.\n");
        printf("CIDADÃO: QUE FELICIDADE!! Estávamos o aguardando há muito tempo! Nosso último alquimista era incrível mas... Enfim.\n"
               "Meu nome é Carlus, é um prazer conhecê-lo!\n");
        printf("pH: O prazer é meu, Carlus.\n");
        printf("\n\n");
        printf("Você achou a atitude de Carlus um pouco suspeita ao desviar o assunto sobre o antigo alquimista, do qual você não recebeu nenhuma informação.\n"
               "Você o questiona sobre ou deixa para lá?\n");
        printf("1. Questiona sobre o antigo alquimista.\n");
        printf("2. Deixa para lá.\n");
        scanf("%d", questionamento_carlus);

        switch (*questionamento_carlus)
        {
        case 1:
            printf("pH: Então, Carlus, o que aconteceu com o antigo alquimista? Não tive muitas informações sobre ele antes de vir.\n");
            printf("CARLUS: Oh, meu jovem, o Sr. Compound acabou vindo a óbito depois de enfrentar o Mago Alpha. O Mago fez abrigo\n"
                   "na nossa cidade e não sabíamos, você sabe que ele é foragido, não é?\n");
            printf("Você sabe que o Mago Alpha era um alquimista muito famoso pela sua bondade e foi enviado a diversos vilarejos.\n"
                   "Em todos, ele era bem recebido e aclamado por ser muito sábio e ajudar as pessoas. No entanto, algo aconteceu com ele no último\n"
                   "vilarejo que ele protegeu. Alguns dizem que ele enlouqueceu, outros que ele encontrou um objeto muito poderoso que sugou sua alma.\n"
                   "Seja o que for, ele jamais foi o mesmo e desde então leva caos e destruição por onde passa.\n");
            printf("pH: Soube do infortúnio que o acometeu. Sinto muitíssimo pelo antigo protetor.\n");
            printf("CARLUS: Tudo bem, meu jovem.\n");
            break;
        case 2:
            printf("Você ignora o que tenha sido o devaneio de Carlus e continua o diálogo.\n");
            break;
        default:
            break;
        }

        // Informações
        printf("CARLUS: Então, como você é novo na cidade, tem algo que eu possa ajudar?\n");
        printf("Você quer pedir informações a Carlus?\n");
        printf("1. Pedir informações sobre a construção de concreto.\n");
        printf("2. Perguntar por que os pescadores estão tristes.\n");
        printf("3. Se despedir e ir para a sua casa.\n");
        scanf("%d", &informacoes_carlus);

        switch (informacoes_carlus)
        {
        case 1:
            printf("pH: Então, Carlus, o que é aquele grande muro no final da rua?\n");
            printf("CARLUS: É o centro de isolamento, o Grande Alquimista mandou construir para isolar as pessoas que adoeceram depois da vinda do Mago.\n");
            printf("pH: Como assim adoeceram depois?\n");
            printf("CARLUS: Era naquela região que ele se abrigou, depois de um tempo as pessoas que moravam ali adoeceram muito. Estamos proibidos de chegar até \n"
                   "5 metros de distância do local. Não vá ali, pelo menos não por enquanto! Quem vai ali cuidar da população tem que ter uma roupa especial para chegar perto.\n");
            printf("Isso ficou na sua cabeça e atiçou a sua curiosidade, o que aconteceu ali?");
            break;
        case 2:
            printf("pH: Então, Carlus, por que os pescadores estão tristes?\n");
            printf("CARLUS: É que os peixes têm morrido. Não se sabe o que aconteceu para que eles estejam morrendo. Isso aconteceu depois da vinda do Mago.\n");
            printf("pH: Como assim morreram depois da vinda dele?\n");
            printf("CARLUS: Não sei ao certo, só sei que os peixes estão morrendo.\n");
            printf("Isso ficou na sua cabeça e atiçou a sua curiosidade, o que aconteceu ali?");
            break;
        case 3:
            printf("pH: Então, Carlus, eu vou para casa agora descansar.\n");
            printf("CARLUS: Tudo bem, sr. pH. Espero vê-lo em breve, tchau!\n");
            printf("Você vai fica ali parado observando o local mais um pouco.\n");
            break;
        default:
            printf("Opção inválida!\n");
        }
    }
    else if (*escolha_primeira_acao == 2)
    {
        printf("Você escolhe não aceitar as desculpas e ser grosseiro com o cidadão.\n");
        printf("\n\n");
        printf("pH: OLHA POR ONDE ANDA, IMBECIL!\n");
        printf("CIDADÃO: Ah, mil perdões, senhor.\n");
        printf("pH: Sai, sai daqui!\n");
        printf("Você vê o cidadão correndo de medo de você e as pessoas te encarando estranhamente.\n");
    }
    else
    {
        printf("Você ignora o cidadão e segue o seu caminho.\n");
    }
}

void reiniciarJogo(int escolha_primeira_acao)
{
    printf("VOCÊ MORREU!\n");
    printf("Deseja jogar novamente?\n");
    printf("1. Sim\n");
    printf("2. Para sair\n ");
    int reiniciar;
    scanf("%d", &reiniciar);

    if (reiniciar)
    {
        int questionamento_carlus = 0;
        int resultado = primeiro_lugar(escolha_primeira_acao);

        if (resultado == 0)
        {
            // Trate o final do jogo ou saída aqui.
            printf("O jogo terminou. Deseja reiniciar?\n");
            printf("1. Sim\n");
            printf("2. Para sair\n ");
            scanf("%d", &reiniciar);
            if (reiniciar)
            {
                reiniciarJogo(escolha_primeira_acao);
            }
            else
            {
                exit(0); // Encerra o programa
            }
        }
    }
    else
    {
        exit(0); // Encerra o programa
    }
}

int primeiro_lugar(int escolha_primeira_acao)
{
    int opcao_primeiro_lugar = 0;
    int informacoes_carlus = 0;

    printf("Depois disso, para onde você vai?\n");
    printf("1. Em direção à construção de concreto.\n");
    printf("2. Em direção ao Rio\n");
    printf("3. Segue para a sua casa.\n");
    scanf("%d", &opcao_primeiro_lugar);

    // Por onde começar?
    // Tem informações para se salvar
    if (escolha_primeira_acao == 1 && opcao_primeiro_lugar == 1)
    {
        printf("Você tenta se aproximar do lugar mas a sua intuição lhe diz que o Carlus estava certo em dizer que era perigoso. Que roupa especial era essa?... Você não sabe.\n"
               "O que importa é que por hora não é seguro ir até aquele local, então você dá meia volta até o centro do vilarejo.");
    }
    // Não tem informações e vai morrer
    else if (escolha_primeira_acao == 2 && escolha_primeira_acao == 3 && opcao_primeiro_lugar == 1)
    {
        printf("A cada instante que você se aproxima daquela construção você passa mal. Algo te diz que você não está preparado para ir até ali. Mas você persiste. A cada passo\n"
               "que você dá, sente a sua pele queimar, a dor é insuportável. Quando você olha para baixo, você está derretendo. As últimas coisas que você lembra\n"
               "são dos seus anos na escola de Alquimia e que logo no seu primeiro dia, no seu primeiro contato com o vilarejo... Talvez as coisas fossem diferentes se você tivesse sido menos arrogante.\n"
               "Você não se lembra de nada, nem percebe o momento em que morreu ali no chão da floresta.");
        printf("VOCÊ MORREU!\n");
        reiniciarJogo(escolha_primeira_acao); // Reiniciar o jogo quando o personagem morre.
    }
    else if (escolha_primeira_acao == 1 && opcao_primeiro_lugar == 2)
    {
        printf("Pelo que Carlus disse você sabe que os pescadores estão tristes pela morte dos peixes, quando se aproxima do rio vê alguns chorando na beira, outros gritanndo \n"
        "aos céus pedindo misericórdia pois aquela é a sua fonte de renda, de fato é uma situação muito triste, você se compadece da dor daquelas pessoas e decide ajudá-los.\n");
    } else if (escolha_primeira_acao == 2 && opcao_primeiro_lugar == 2){
        printf("Os pescadores viram você sendo extremamente grosso com Carlus, quando você chega na beira do rio e vê que alguns vão para cima de você. Você corre perigo.\n");
    }
    else if (escolha_primeira_acao == 1 && escolha_primeira_acao == 3 && opcao_primeiro_lugar == 3)
    {
        printf(""); 
    }
    else
    {
        printf("Opção inválida!\n");
    }
    return opcao_primeiro_lugar;
}

int main()
{
    int escolha_primeira_acao = 0;
    int questionamento_carlus = 0;

    boas_vindas(&escolha_primeira_acao, &questionamento_carlus);
    int resultado = primeiro_lugar(escolha_primeira_acao);

    if (resultado == 0)
    {
        printf("O jogo terminou. Deseja reiniciar? (1 para sim, 0 para sair): ");
        int reiniciar;
        scanf("%d", &reiniciar);
        if (reiniciar)
        {
            reiniciarJogo(escolha_primeira_acao); // Chame a função para reiniciar o jogo
        }
        else
        {
            exit(0); // Encerra o programa
        }
    }

    return 0;
}
