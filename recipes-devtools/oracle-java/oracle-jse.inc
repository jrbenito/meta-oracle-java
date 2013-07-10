LICENSE_FLAGS = "oracle_java"
LICENSE = "Oracle_Binary_Code_License_Agreement"
LIC_FILES_CHKSUM = "\
	file://${WORKDIR}/${JDK_JRE}${PV}_${PV_UPDATE}/LICENSE;md5=98f46ab6481d87c4d77e0e91a6dbc15f \
	file://${WORKDIR}/${JDK_JRE}${PV}_${PV_UPDATE}/COPYRIGHT;md5=3a11238025bf13b87f04753183ffeb90 \
	file://${WORKDIR}/${JDK_JRE}${PV}_${PV_UPDATE}/THIRDPARTYLICENSEREADME.txt;md5=c339b34e3da6673d2c5950d0f8808f8c \
	"

# get the java update version in the resulting package
PR =. "u${PV_UPDATE}"
S = "${WORKDIR}"

do_install () {
	install -d -m 0755			${D}/usr/${JDK_JRE}${PV}_${PV_UPDATE}
	cp -a ${S}/${JDK_JRE}${PV}_${PV_UPDATE}	${D}/usr/
	ln -sf ${JDK_JRE}${PV}_${PV_UPDATE}	${D}/usr/java
}

# All the files are provided in a binaray package, and keeping all the
# files in a single package causes packaging QA errors and warnings.
# Avoid these packaging failure by skiping all the QA checks
INSANE_SKIP_${PN} = "${ERROR_QA} ${WARN_QA}"

# Inhibit warnings about files being stripped, we can't do anything about it.
INHIBIT_PACKAGE_DEBUG_SPLIT = "1"

FILES_${PN} = "/usr/"

RPROVIDES_${PN} += "java2-runtime"
