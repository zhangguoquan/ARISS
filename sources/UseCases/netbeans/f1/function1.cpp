#include "CBasefunction.h"

int main(int argc, char *argv[]) {
    int redemarrage = atoi(argv[7]);
    int position = atoi(argv[6]);
    GUI_ARINC_partition("Partition1", position, redemarrage);
    int ret;

    /*********************************************************/
    /**		Main programme	execvp	**/
    /**********************************************************/

    /**  /!\ Absolute path /!\
     *  To find the correct argument corresponding to your system, 
     *  1 / Please open nbexec script located in PETSHOP-DIR/platform/lib 
     *  2/ In the main loop (at the very end of file) replace the "eval ..." command  by "eval echo ..."
     *  3/ Lauch petshop ($cd ../../bin/petshop $./petshop)
     *  4/ Copy the argument in the following, they are split by a space charater
     * 	;*/

    std::string argument[19];
    argument[0] = "/usr/lib/jvm/java-8-oracle/bin/java";
    argument[1] = "-Djdk.home=/usr/lib/jvm/java-8-oracle";
    argument[2] = "-classpath";
    argument[3] = "/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/platform/lib/boot.jar:/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/platform/lib/org-openide-modules.jar:/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/platform/lib/org-openide-util.jar:/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/platform/lib/org-openide-util-lookup.jar:/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/platform/lib/locale/boot_ja.jar:/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/platform/lib/locale/boot_pt_BR.jar:/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/platform/lib/locale/boot_ru.jar:/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/platform/lib/locale/boot_zh_CN.jar:/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/platform/lib/locale/org-openide-modules_ja.jar:/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/platform/lib/locale/org-openide-modules_pt_BR.jar:/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/platform/lib/locale/org-openide-modules_ru.jar:/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/platform/lib/locale/org-openide-modules_zh_CN.jar:/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/platform/lib/locale/org-openide-util_ja.jar:/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/platform/lib/locale/org-openide-util-lookup_ja.jar:/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/platform/lib/locale/org-openide-util-lookup_pt_BR.jar:/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/platform/lib/locale/org-openide-util-lookup_ru.jar:/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/platform/lib/locale/org-openide-util-lookup_zh_CN.jar:/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/platform/lib/locale/org-openide-util_pt_BR.jar:/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/platform/lib/locale/org-openide-util_ru.jar:/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/platform/lib/locale/org-openide-util_zh_CN.jar:/usr/lib/jvm/java-8-oracle/lib/dt.jar:/usr/lib/jvm/java-8-oracle/lib/tools.jar";
    argument[4] = "-Dnetbeans.running.environment=gnome";
    argument[5] = "-Dnetbeans.dirs=/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/java:/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/apisupport:/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/ics:/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/harness:/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/websvccommon:/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/petshop:/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/extra:/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/etc:/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/bin:/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/extide:/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/platform:/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/ide:";
    argument[6] = "-Dnetbeans.home=/home/ics/NetBeansProjects/modules/suites/petshop/petshop.application/target/petshop/platform";
    argument[7] = "-Xmx1024m";
    argument[8] = "-Xss2m";
    argument[9] = "-Xms64m";
    argument[10] = "-XX:+HeapDumpOnOutOfMemoryError";
    argument[11] = "-XX:HeapDumpPath=/home/ics/.petshop/dev/var/log/heapdump.hprof";
    argument[12] = "org.netbeans.Main";
    argument[13] = "--cachedir";
    argument[14] = "/home/ics/.petshop/dev/var/cache";
    argument[15] = "--userdir";
    argument[16] = "/home/ics/.petshop/dev";
    argument[17] = "--branding";
    argument[18] = "petshop";

    ret = execlp("java", (argument[0]).c_str(), (argument[1]).c_str(), (argument[2]).c_str(), (argument[3]).c_str(), (argument[4]).c_str(), (argument[5]).c_str(), (argument[6]).c_str(), (argument[7]).c_str(), (argument[8]).c_str(), (argument[9]).c_str(), (argument[10]).c_str(), (argument[11]).c_str(), (argument[12]).c_str(), (argument[13]).c_str(), (argument[14]).c_str(), (argument[15]).c_str(), (argument[16]).c_str(), (argument[17]).c_str(),(argument[18]).c_str(), NULL);
    if (ret == -1)
        perror("Exec : ");
    



    ret = execlp("java", (argument[0]).c_str(), (argument[1]).c_str(), (argument[2]).c_str(), (argument[3]).c_str(), (argument[4]).c_str(), (argument[5]).c_str(), (argument[6]).c_str(), (argument[7]).c_str(), (argument[8]).c_str(), (argument[9]).c_str(), (argument[10]).c_str(), (argument[11]).c_str(), NULL);
    if (ret == -1)
        perror("Exec : ");    

}
