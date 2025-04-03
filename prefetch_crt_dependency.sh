#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/167aa27fe64488117f50d1e2018c68bd7a3e95b1  # v0.32.3

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/cd9d6afcd42035d49bb2d0d3bef24b9faed57773  # v0.9.0
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/4805a96e694b07c89889de696418c429151f647a  # v0.8.8
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/8ae8f48ebddb0ee2624d643952ac33afa5e8859e  # v0.12.2
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/f951ab2b819fc6993b6e5e6cfef64b1a1554bfc8  # v0.3.1
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/9312b052583183b98526aaeb91e5c72ec3db9627  # v0.5.4
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/e3a9cabc664630120df25c28ec710199b8e8b15b  # v0.9.5
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/46974e960ab571c86e0711d4d9445e2e684b53bf  # v0.17.1
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/f0cc34cb6f54e050275e3c859594c62776d46d83  # v0.12.2
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/169842b7e2f81d71d0719d4a77f9c3e186512f99  # v0.7.13
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/ba6a28fab7ed5d7f1b3b1d12eb672088be093824  # v0.2.3
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/66b447c0765a2caff2d806111e6ec1db2383e4d2  # v0.2.5
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/8a9ebcfdcf8bb4a685ca83646265ea0aab85c3c8  # v1.48.5
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/bb9c5991877c6a749981204131e6e47845adbe3d  # v1.5.15


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
