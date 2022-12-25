#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/0a9e0ad7ab07113c65b4846ece3a386407c9c0d3  # v0.18.16

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/30df6c407e2df43bd244e2c34c9b4a4b87372bfb  # v0.6.19
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/ac4216b78d5323b5b8ce95a3dd4a8fc0f95e2d33  # v0.5.20
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/d6a6a6057afd8024cf2790a50de4a9818014cec6  # v0.8.5
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/b517b7decd0dac30be2162f5186c250221c53aff  # v0.2.16
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/39bfa94a14b7126bf0c1330286ef8db452d87e66  # v0.2.15
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/2c5a2a7d5556600b9782ffa6c9d7e09964df1abc  # v0.6.25
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/d353ffde788b70f39e7da889784262e4d4eb5101  # v0.13.10
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/882c689561a3db1466330ccfe3b63637e0a575d3  # v0.7.13
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/a41255ece72a7c887bba7f9d998ca3e14f4c8a1b  # v0.1.51
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/25bf5cf225f977c3accc6a05a0a7a181ef2a4a30  # v0.1.6
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/48e7c0e01479232f225c8044d76c84e74192889d  # v0.1.13
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/75a73bfabf1be384b49c7f92da6fdfd9d867069e  # v1.3.0
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/15d534e8a9ca1eda6bacee514e37d08b4f38a526  # v1.3.27


echo "Removing CRT"
rm -rf crt

echo "Downloading and expanding CRT CPP"
mkdir -p crt/tmp
curl ${CRT_URI} --output crt/tmp/crt.zip
unzip crt/tmp/crt -d crt
CRT_DIR_TMP=`ls -d crt/aws-crt-cpp*`
mv ${CRT_DIR_TMP} crt/aws-crt-cpp

echo "Downloading and expanding CRT dependencies"
curl ${AWS_C_AUTH_URI} --output crt/tmp/1.zip
curl ${AWS_C_CAL_URI} --output crt/tmp/2.zip
curl ${AWS_C_COMMON_URI} --output crt/tmp/3.zip
curl ${AWS_C_COMPRESSION_URI} --output crt/tmp/4.zip
curl ${AWS_C_EVENT_STREAM_URI} --output crt/tmp/5.zip
curl ${AWS_C_HTTP_URI} --output crt/tmp/6.zip
curl ${AWS_C_IO_URI} --output crt/tmp/7.zip
curl ${AWS_C_MQTT_URI} --output crt/tmp/8.zip
curl ${AWS_C_S3_URI} --output crt/tmp/9.zip
curl ${AWS_C_SDKUTILS_URI} --output crt/tmp/10.zip
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
