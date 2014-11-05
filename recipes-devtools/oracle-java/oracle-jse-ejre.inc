SUMMARY = "Oracle Java SE runtime environment binaries"
DESCRIPTION = "This is the proprietary JRE from Sun/Oracle, with the Hotspot JVM. It is\
 provided by Sun/Oracle only in binary format.\
 Java Platform, Standard Edition (Java SE) lets you develop and deploy Java\
 applications on desktops and servers, as well as in today's demanding\
 embedded environments. Java offers the rich user interface, performance,\
 versatility, portability, and security that today's applications require.\
 The JRE (Java Runtime Environment) is needed on a system to run Java\
 applications and applets"

JDK_JRE = "ejre"
require oracle-jse.inc

LIC_FILES_CHKSUM = "\
       file://${WORKDIR}/${JDK_JRE}${PV}_${PV_UPDATE}/COPYRIGHT;md5=be9fe5d47a7dcfb78f142f487afb34bb \
       file://${WORKDIR}/${JDK_JRE}${PV}_${PV_UPDATE}/THIRDPARTYLICENSEREADME.txt;md5=f3a388961d24b8b72d412a079a878cdb \
       "
