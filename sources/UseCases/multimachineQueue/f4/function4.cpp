#include "include/CBasefunction.h"

int main(int argc, char *argv[]) {
    int redemarrage = atoi(argv[7]);
    int position = atoi(argv[6]);
    GUI_ARINC_partition("Partition4", position, redemarrage);

    /*if (argc > 3)
            {*/
    for (int count = 1; count < argc; count++) {
        std::cout << "argv " << count << " = " << argv[count] << std::endl;
    }

    std::string emetteur = argv[0]; //NOM DU BINAIRE QUI SERA SON IDENFIANT POUR COMMUNIQUER

    std::cout << "nb arg :" << argc << std::endl;
    std::string arg_samp_sock = argv[1]; //ligne à découper
    std::string arg_Qsock = argv[2];
    std::string arg_Sport = argv[3];
    std::string arg_Qport = argv[4];

    CArgument ARG;
    std::vector<int> vsamp_socket = ARG.split_arg(arg_samp_sock);
    std::vector<int> vqueuing_socket = ARG.split_arg(arg_Qsock);
    std::vector<int> vsamp_port = ARG.split_arg(arg_Sport);
    std::vector<int> vqueuing_port = ARG.split_arg(arg_Qport);


    for (unsigned int i = 0; i < vsamp_socket.size(); i++) {
        std::cout << " use socket :" << vsamp_socket[i] << " for sampling comm" << std::endl;
    }
    for (unsigned int i = 0; i < vqueuing_socket.size(); i++) {
        std::cout << " use socket :" << vqueuing_socket[i] << " for queuing com" << std::endl;
    }
    for (unsigned int i = 0; i < vsamp_port.size(); i++) {
        std::cout << " write in port :" << vsamp_port[i] << "by sampling" << std::endl;
    }
    for (unsigned int i = 0; i < vqueuing_port.size(); i++) {
        std::cout << " write in port :" << vqueuing_port[i] << "by queuing" << std::endl;
    }
    //}	

    CSampling Sservice;

    for (;;) {
        Sservice.READ_SAMPLING_MESSAGE(vsamp_socket[0]);
        Sservice.Display_Message();

        Sservice.WRITE_SAMPLING_MESSAGE(argv[0], vsamp_port[0], vsamp_socket[0], emetteur, " Hello");
        sleep(2);
    }

}
