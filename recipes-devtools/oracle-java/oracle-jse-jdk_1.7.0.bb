# Automatically choose java package based on target architecture
def get_java_pkg(d):
       TA = d.getVar('TARGET_ARCH', True)
       if TA == "i586":
               javaPkg = "oracle-jse-jdk-i586"
       elif TA == "x86_64":
               javaPkg = "oracle-jse-jdk-x86-64"
       else:
               raise bb.parse.SkipPackage("The target architecture '%s' is not supported by the meta-oracle-java layer" %TA)
       
       return javaPkg

JAVA_PKG = "${@get_java_pkg(d)}"

require ${JAVA_PKG}.inc
