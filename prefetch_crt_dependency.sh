#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/64429d60265ee8c30ae1c8f2ff8e1b9474eea455  # v0.40.1

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/4cb7127fc2fe402310f9b2ccd7719baa348b2a19  # v0.10.3
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/9edd8eac2b21ca6a04535b91d60d361c2f1bb60f  # v0.9.14
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/48dd6cdff7bac0005a9c6b49c15a0765622c0e70  # v0.14.0
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/d8264e64f698341eb03039b96b4f44702a9b3f83  # v0.3.2
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/51bef3c44e1058b1689751539170b2e0f589ccdb  # v0.7.1
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/8aefd899fc3210bfd0e3fd414011a3cb708bf6e4  # v0.11.0
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/bdfd85e293965439146bc30a70379e7889c27bb7  # v0.27.0
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/2ef9605ec9c50bea3f921e08022ddd57eed70901  # v0.16.0
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/e8bf59aaa77442d7f066a2df05604f40889f044a  # v0.12.6
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/c70418c17d8f970ff1d80d88d08beeccd425a887  # v0.2.5
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/1d5f2f1f3e5d013aae8810878ceb5b3f6f258c4e  # v0.2.10
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/6f246af4cd1de8cee8c62d76139bcda299c1aa00  # v5.0.0
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/eaf2c08a78f7fca6279e3704d3fa1c4e6c9a6abc  # v1.7.4


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
