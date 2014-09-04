SUMMARY = "Oracle Java SE Development Kit binaries"
DESCRIPTION = "This is the proprietary JDK from Sun/Oracle, with the Hotspot JVM. It is\
 provided by Sun/Oracle only in binary format.\
 Java Platform, Standard Edition (Java SE) lets you develop and deploy Java\
 applications on desktops and servers, as well as in today's demanding\
 embedded environments. Java offers the rich user interface, performance,\
 versatility, portability, and security that today's applications require.\
 To develop Java applications and applets, you need the JDK (Java Development\
 Kit), which includes the JRE."

JDK_JRE = "jdk"
require oracle-jse.inc

do_install_class-native() {
    install -d -m 0755                      ${D}${bindir}/${JDK_JRE}${PV}_${PV_UPDATE}
    cp -a ${S}/${JDK_JRE}${PV}_${PV_UPDATE} ${D}${bindir}/
    ln -sf ${JDK_JRE}${PV}_${PV_UPDATE}     ${D}${bindir}/java
}

BBCLASSEXTEND = "native"
