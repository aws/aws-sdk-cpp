#!/bin/sh
CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/d314c673c190b8399009c32a54fbcdb208b8f99b
CRT_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/c74534c13264868bbbd14b419c291580d3dd9141
CRT_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/f3a4993112a718ee1ddb24927e924886e032214a

CRT_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/8f3ac3f087d56287eb7f428880dec134a3aa81f3
AWSBA_URI=${CRT_URI_PREFIX}/aws-build-accumulator/zip/b652295078e26f8444c72ee3088f6a1230624827
AWS_TEMPLATES_URI=${CRT_URI_PREFIX}/aws-templates-for-cbmc-proofs/zip/8f2dafc1db539ca97b6f4b8533f069e176c11b1c

CRT_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/25cd4134377b6e2ed787d42a3a221582bdc1fa57
CRT_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/e87537be561d753ec82e783bc0929b1979c585f8
CRT_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/fa1692ae103dcc40e3d0a9db1b29acfc204a294e
CRT_IO=${CRT_URI_PREFIX}/aws-c-io/zip/f52e666449e4638d854067db87ebc7d6add17be4
CRT_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/0a70bf814845e487b7e4862af7ad9e4a1199b5f4
CRT_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/bd1f6910503165963506f9f168c87416996197b6
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/99bb0ad4b89d335d638536694352c45e0d2188f5
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/d0a5455417d80e68581e197d95720c3fb25e3926

S2N_URI=${CRT_URI_PREFIX}/s2n/zip/04c5b8ba4f84a3b9da05a4d9c874ca30890e06e7
S2N_TEMPLATES_MODEL_URI=${CRT_URI_PREFIX}/aws-verification-model-for-libcrypto/zip/4a3ba3107ea4e7c99412ead3b07549a072c93d0f
S2N_TEMPLATES_URI=${CRT_URI_PREFIX}/aws-templates-for-cbmc-proofs/zip/38310be1f85e2836d71e1beefa899b37bdebcc3b
S2NBA_URI=${CRT_URI_PREFIX}/aws-build-accumulator/zip/047c9f15455d04ec6a01430b3188f7dfdfc2cfad


echo "Removing CRT"
rm -rf crt

echo "Downloading and expanding CRT"
mkdir -p crt/tmp
curl ${CRT_URI} --output crt/tmp/crt.zip
unzip crt/tmp/crt -d crt
CRT_DIR_TMP=`ls -d crt/aws-crt-cpp*`
mv ${CRT_DIR_TMP} crt/aws-crt-cpp

echo "Downloading and expanding CRT dependancies"
curl ${CRT_AUTH_URI} --output crt/tmp/1.zip
curl ${CRT_CAL_URI} --output crt/tmp/2.zip
curl ${CRT_COMMON_URI} --output crt/tmp/3.zip
curl ${CRT_COMPRESSION_URI} --output crt/tmp/4.zip
curl ${CRT_EVENT_STREAM_URI} --output crt/tmp/5.zip
curl ${CRT_HTTP_URI} --output crt/tmp/6.zip
curl ${CRT_IO} --output crt/tmp/7.zip
curl ${CRT_MQTT_URI} --output crt/tmp/8.zip
curl ${CRT_S3_URI} --output crt/tmp/9.zip
curl ${AWS_CHECKSUMS_URI} --output crt/tmp/10.zip
curl ${AWS_LC_URI} --output crt/tmp/11.zip
curl ${S2N_URI} --output crt/tmp/12.zip

for a in `seq 1 12`; do
    unzip crt/tmp/${a} -d crt/tmp
done

rm -rf crt/aws-crt-cpp/crt
mkdir crt/aws-crt-cpp/crt

for a in `ls crt/tmp |grep -v '.zip$' |grep -v aws-crt-cpp`; do
    mv crt/tmp/$a "crt/aws-crt-cpp/crt/"`echo $a | sed 's/-[0-9a-f]\{40\}$//'`
done

echo "Adjust S2N location"
mv crt/aws-crt-cpp/crt/s2n-tls crt/aws-crt-cpp/crt/s2n

echo "Fetching recursive dependancies"
rm -rf crt/aws-crt-cpp/crt/s2n/tests/cbmc/aws-verification-model-for-libcrypto
curl ${S2N_TEMPLATES_MODEL_URI} --output crt/aws-crt-cpp/crt/s2n/tests/cbmc/s2ntemplatesmodel.zip
unzip crt/aws-crt-cpp/crt/s2n/tests/cbmc/s2ntemplatesmodel.zip -d crt/aws-crt-cpp/crt/s2n/tests/cbmc
mv crt/aws-crt-cpp/crt/s2n/tests/cbmc/s2ntemplatesmodel-* crt/aws-crt-cpp/crt/s2n/tests/cbmc/aws-verification-model-for-libcrypto

rm -rf crt/aws-crt-cpp/crt/s2n/tests/cbmc/templates
curl ${S2N_TEMPLATES_URI} --output crt/aws-crt-cpp/crt/s2n/tests/cbmc/s2ntemplates.zip
unzip crt/aws-crt-cpp/crt/s2n/tests/cbmc/s2ntemplates.zip -d crt/aws-crt-cpp/crt/s2n/tests/cbmc
mv crt/aws-crt-cpp/crt/s2n/tests/cbmc/s2ntemplates-* crt/aws-crt-cpp/crt/s2n/tests/cbmc/templates

rm -rf crt/aws-crt-cpp/crt/s2n/tests/litani 
curl ${S2NBA_URI} --output crt/aws-crt-cpp/crt/s2n/tests/s2nba.zip
unzip crt/aws-crt-cpp/crt/s2n/tests/s2nba.zip -d crt/aws-crt-cpp/crt/s2n/tests
mv crt/aws-crt-cpp/crt/s2n/tests/s2nba-* crt/aws-crt-cpp/crt/s2n/tests/litani

rm -rf crt/aws-crt-cpp/crt/aws-c-common/verification/cbmc/litani
curl ${AWSBA_URI} --output crt/tmp/awsba.zip
unzip crt/tmp/awsba.zip -d crt/tmp
mv crt/tmp/aws-build-accumulator-* crt/aws-crt-cpp/crt/aws-c-common/verification/cbmc/litani

rm -rf crt/aws-crt-cpp/crt/aws-c-common/verification/cbmc/templates
curl ${AWS_TEMPLATES_URI} --output crt/tmp/awstemplates.zip
unzip crt/tmp/awstemplates.zip -d crt/tmp
mv crt/tmp/aws-templates-for-cbmc-proofs-* crt/aws-crt-cpp/crt/aws-c-common/verification/cbmc/templates

echo "To complete setup run cmake -Bbuild; cmake --build build; cmake --build --target install"
