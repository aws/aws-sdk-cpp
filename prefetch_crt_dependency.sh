#!/bin/sh
CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/1e31c173215cef18005831bff1f19a621dd870b6
CRT_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/e1b95cca6f2248c28b66ddb40bcccd35a59cb8b5
CRT_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/7eb1d7360ea205ff275d2acc6cce2682063b643f

CRT_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/68f28f8df258390744f3c5b460250f8809161041

CRT_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/5fab8bc5ab5321d86f6d153b06062419080820ec
CRT_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/e87537be561d753ec82e783bc0929b1979c585f8
CRT_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/3f8ffda541eab815646f739cef2b350d6e7d5406
CRT_IO=${CRT_URI_PREFIX}/aws-c-io/zip/59b4225bb87021d44d7fd2509b54d7038f11b7e7
CRT_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/6168e32bf9f745dec40df633b78baa03420b7f83
CRT_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/92067b1f44523e70337e0c5eb00b80c9cf10b941
CRT_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/e3c23f4aca31d9e66df25827645f72cbcbfb657a
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/41df3031b92120b6d8127b7b7122391d5ac6f33f
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/11b50d39cf2378703a4ca6b6fee9d76a2e9852d1

S2N_URI=${CRT_URI_PREFIX}/s2n/zip/88c7ae4d3fd9b3e9e49fcecc9bee1ddb8099ae70

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
curl ${CRT_SDKUTILS_URI} --output crt/tmp/10.zip
curl ${AWS_CHECKSUMS_URI} --output crt/tmp/11.zip
curl ${AWS_LC_URI} --output crt/tmp/12.zip
curl ${S2N_URI} --output crt/tmp/13.zip

for a in `seq 1 13`; do
    unzip crt/tmp/${a} -d crt/tmp
done

rm -rf crt/aws-crt-cpp/crt
mkdir crt/aws-crt-cpp/crt

for a in `ls crt/tmp |grep -v '.zip$' |grep -v aws-crt-cpp`; do
    mv crt/tmp/$a "crt/aws-crt-cpp/crt/"`echo $a | sed 's/-[0-9a-f]\{40\}$//'`
done

echo "Adjust S2N location"
mv crt/aws-crt-cpp/crt/s2n-tls crt/aws-crt-cpp/crt/s2n

echo "To complete setup run cmake -Bbuild; cmake --build build; cmake --build --target install"
