#!/bin/sh
CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/b6d311d76b504bf8ace5134d3fca0e672c36c9c3
CRT_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/517627e0e47f85d62988bdd093bbc79150ac6086
CRT_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/c4c5b175e05f2affe5e3f0203ca6c8bc5cdd8f51

CRT_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/79e77e4238dc545da3d37992d4f7731206e29e16
AWSBA_URI=${CRT_URI_PREFIX}/aws-build-accumulator/zip/ea0a5ce88ecccc9a75bdf8790921f11f5c76f17a
AWS_TEMPLATES_URI=${CRT_URI_PREFIX}/aws-templates-for-cbmc-proofs/zip/1b94adc2db35a33d165fe49986d6927a0d5acae7

CRT_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/5fab8bc5ab5321d86f6d153b06062419080820ec
CRT_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/e87537be561d753ec82e783bc0929b1979c585f8
CRT_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/bf598f4c0aa91a8114a0e2a339a14ac83a44879f
CRT_IO=${CRT_URI_PREFIX}/aws-c-io/zip/e79490145459c16997f19c39550dbf060e7e650e
CRT_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/7a7a07a9d9f5be8d15baa7bec2c32cdc837523a7
CRT_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/1ea630bf17101242409bc022cee618e143a7b1fa
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/41df3031b92120b6d8127b7b7122391d5ac6f33f
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/d0a5455417d80e68581e197d95720c3fb25e3926

S2N_URI=${CRT_URI_PREFIX}/s2n/zip/4de98dcf20c476519c15241f92122b99fd2a9297
S2N_TEMPLATES_MODEL_URI=${CRT_URI_PREFIX}/aws-verification-model-for-libcrypto/zip/42caa4790273b37cbdf303427b53f445ab1b3480
S2N_TEMPLATES_URI=${CRT_URI_PREFIX}/aws-templates-for-cbmc-proofs/zip/7fdd7048b01e68fd549e20da1d216e34d719043a
S2NBA_URI=${CRT_URI_PREFIX}/aws-build-accumulator/zip/ea0a5ce88ecccc9a75bdf8790921f11f5c76f17a


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
