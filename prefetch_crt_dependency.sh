#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/0e747152208198b56033339a9d6af4d541c74c0a  # v0.20.2

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/c3c542fe67225b81fa4bab9151c4d879f34587f4  # v0.6.28
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/c5f58572556bab507559d06662738220cc2f7b8a  # v0.5.27
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/2e01315574255ceb6cdcf6734d4d164b9f586877  # v0.8.21
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/99ec79ee2970f1a045d4ced1501b97ee521f2f85  # v0.2.17
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/825e3188234b7d14c0e3934d88780152da412981  # v0.3.0
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/ac18abb489c1baeafb2fb9dec0c6d223601ad590  # v0.7.8
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/118a57ecf0f88e047bb3e75227e08adb5782074c  # v0.13.22
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/b672bff0907603987bc93dae946c4f121c80e14c  # v0.8.12
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/7fb4474ece6cbb26de06b2d184fee62ca625d389  # v0.3.4
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/812761fdbf791f77cb358212cefade9cc16974e7  # v0.1.10
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/1aa903d5204ed665010204d8521e56e092932e32  # v0.1.15
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/987bd7c672e2c3dd1cc76be3ce9eece93ba9bd88  # v1.10.0
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/9b7b1f334a4ab33397174e505955231ff77b3f85  # v1.3.44


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
