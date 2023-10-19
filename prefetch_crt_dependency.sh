#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/b381d68ce6177443fb427f3e8fbcdc549b1de0bf  # v0.24.3

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/c75e00804da02fef8275b29509bd7180cb7e4667  # v0.7.4
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/a916a84ec07d028fa7d8c09d4aecaa81df7e8a23  # v0.6.6
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/4c0a9f579d3064f086b42a2d39aaea721e7e71ca  # v0.9.4
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/99ec79ee2970f1a045d4ced1501b97ee521f2f85  # v0.2.17
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/08f24e384e5be20bcffa42b49213d24dad7881ae  # v0.3.2
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/d777859b6da179b9098f87a2077fbf2129b574dc  # v0.7.13
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/c9cb77747d3fd2809cf3d9c43be7d5decc17e4b3  # v0.13.35
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/0cc50d1582719c9f3b55539139015fc86965bb6f  # v0.9.7
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/1fe34646f6bb2282491077b1d2407c724c0d5471  # v0.3.17
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/a6fd80cf7c163062d31abb28f309e47330fbfc17  # v0.1.12
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/321b805559c8e911be5bddba13fcbd222a3e2d3a  # v0.1.17
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/e42a4ef2270c4873e98101098edd1f0aaece966d  # v1.16.0
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/4654fecb05cd5aacbda262654eb95a3876183698  # v1.3.54


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
