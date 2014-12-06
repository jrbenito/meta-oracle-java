PV_UPDATE = "67"
BUILD_NUMBER = "01"

require oracle-jse-jdk.inc

SRC_URI = "http://download.oracle.com/otn-pub/java/jdk/7u${PV_UPDATE}-b${BUILD_NUMBER}/jdk-7u${PV_UPDATE}-linux-i586.tar.gz"

SRC_URI[md5sum] = "715b0e8ba2a06bded75f6a92427e2701"
SRC_URI[sha256sum] = "b6231064ad2c9fbbcb099dba17b1dcf12033e922b9c24e4348b9a01e9ebaa85c"
