#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/9a820b302264b2bfe2e3f61a443fb1c652e6bd79  # v0.30.1

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/b513db4bf82429a1134fecbd6d12e5fda45255a6  # v0.8.4
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/7299c6ab9244595b140d604475cdd6c6921be8ae  # v0.8.3
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/0e7637fa852a472bd4c37fc07a325a09c942a5fc  # v0.11.0
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/f951ab2b819fc6993b6e5e6cfef64b1a1554bfc8  # v0.3.1
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/9422ef78aac566414d1bebb1a5431a4c53a7547c  # v0.5.1
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/590c7b597f87e5edc080b8b77418690c30319832  # v0.9.3
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/3041dabfc13fe9bc9a0467e15aa1d5a09c7fc06f  # v0.15.4
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/83247bde8268905018327891fcf0147f3e438a80  # v0.12.1
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/6eb8be530b100fed5c6d24ca48a57ee2e6098fbf  # v0.7.11
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/ba6a28fab7ed5d7f1b3b1d12eb672088be093824  # v0.2.3
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/fb8bd0b8cff00c8c24a35d601fce1b4c611df6da  # v0.2.3
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/ffd6fb71b1e1582a620149337b77706f2391578d  # v1.43.0
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/493b77167dc367c394de23cfe78a029298e2a254  # v1.5.9


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
