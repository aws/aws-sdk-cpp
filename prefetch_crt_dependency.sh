#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/08a5447ef4a9c3ebf3391703ed55cd1c194e5585  # v0.24.10

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/baeffa791d9d1cf61460662a6d9ac2186aaf05df  # v0.7.8
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/b52d9e8ee7af8155e6928c977ec5fde25a507ba0  # v0.6.9
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/80f21b3cac5ac51c6b8a62c7d2a5ef58a75195ee  # v0.9.10
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/99ec79ee2970f1a045d4ced1501b97ee521f2f85  # v0.2.17
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/08f24e384e5be20bcffa42b49213d24dad7881ae  # v0.3.2
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/a082f8a2067e4a31db73f1d4ffd702a8dc0f7089  # v0.7.14
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/df64f57feb63ab1a489ded86a87b756a48c46f35  # v0.13.36
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/6d36cd3726233cb757468d0ea26f6cd8dad151ec  # v0.9.10
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/de36fee8fe7ab02f10987877ae94a805bf440c1f  # v0.4.3
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/a6fd80cf7c163062d31abb28f309e47330fbfc17  # v0.1.12
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/321b805559c8e911be5bddba13fcbd222a3e2d3a  # v0.1.17
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/80f3f3324e75737d43af3052b270fd2ffa169d29  # v1.17.4
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/95753f0c528b59025343e8799cb25d3e9df89e21  # v1.3.56


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
