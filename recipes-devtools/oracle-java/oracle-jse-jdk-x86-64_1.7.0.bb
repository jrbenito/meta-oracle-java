PV_UPDATE = "67"
BUILD_NUMBER = "01"

require oracle-jse-jdk.inc

SRC_URI = "http://download.oracle.com/otn-pub/java/jdk/7u${PV_UPDATE}-b${BUILD_NUMBER}/jdk-7u${PV_UPDATE}-linux-x64.tar.gz"

SRC_URI[md5sum] = "81e3e2df33e13781e5fac5756ed90e67"
SRC_URI[sha256sum] = "54dd1e13edf18c64941a55da9c91210b53dc5cf48f1a8f4538c863049e346335"
