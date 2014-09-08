PV_UPDATE = "67"
BUILD_NUMBER = "01"

require oracle-jse-jre.inc

SRC_URI = "http://download.oracle.com/otn-pub/java/jdk/7u${PV_UPDATE}-b${BUILD_NUMBER}/jre-7u${PV_UPDATE}-linux-x64.tar.gz"

SRC_URI[md5sum] = "9007c79167be0177fb47e5313c53d5cb"
SRC_URI[sha256sum] = "726c37c07bb389b5b96674b7bcbc288e39fb8fbcd42369afa364a18e66248b1f"
