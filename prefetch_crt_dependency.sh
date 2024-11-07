#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/281a7caff7e10f68a5422d8fca8acf0b48e4215f  # v0.29.3

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/3982bd75fea74efd8f9b462b27fedd4599db4f53  # v0.8.0
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/656762aefbee2bc8f509cb23cd107abff20a72bb  # v0.8.0
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/f41b772f0de9454a4e7a65750b58c2379533bbf1  # v0.10.0
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/c6c1191e525e5aa6ead9e1afc392e35d3b50331e  # v0.3.0
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/d2dcc9344dae24de320866045d85166d8a91a0d1  # v0.5.0
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/74b3a0dd1396b72f701c8bdf24e5c6f41e52cf87  # v0.9.0
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/e247ef89cdf170cadcb4c665fb0146e82cd6e135  # v0.15.1
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/627c3334e52021aa8d5772b6ca076884610f3219  # v0.11.0
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/8c1969bce5bfe0e063cbc719182dbe344342b880  # v0.7.0
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/0818f28ee436b892f09fbe8e3a6ae37ff40e9436  # v0.2.0
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/0d2f5521f61215f38f791d106ae304402208112d  # v0.2.0
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/8ffe277c21915ca82dc78a3bdc6a92e10c284b92  # v1.37.0
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/9f4baecc753d6fe01c13e4f422d2e327c64d06b8  # v1.5.7


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
