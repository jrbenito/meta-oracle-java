PV_UPDATE = "67"
BUILD_NUMBER = "01"

require oracle-jse-jre.inc

SRC_URI = "http://download.oracle.com/otn-pub/java/jdk/7u${PV_UPDATE}-b${BUILD_NUMBER}/jre-7u${PV_UPDATE}-linux-i586.tar.gz"

SRC_URI[md5sum] = "2a256eb2a91f0084e58c612636342c2b"
SRC_URI[sha256sum] = "eadec83a54d3a9d09248a8d16b21c03da9afffc7317e775fb8db962620a0781d"
