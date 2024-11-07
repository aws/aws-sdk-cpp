/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/http/standard/StandardHttpRequest.h>
#include <aws/core/utils/crypto/CRC32.h>
#include <aws/core/utils/stream/AwsChunkedStream.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>

using namespace Aws;
using namespace Aws::Http::Standard;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils::Crypto;

class AwsChunkedStreamTest : public Aws::Testing::AwsCppSdkGTestSuite {};

const char* TEST_LOG_TAG = "AWS_CHUNKED_STREAM_TEST";

TEST_F(AwsChunkedStreamTest, ChunkedStreamShouldWork) {
  StandardHttpRequest request{"www.elda.com/will", Http::HttpMethod::HTTP_GET};
  auto requestHash = Aws::MakeShared<CRC32>(TEST_LOG_TAG);
  request.SetRequestHash("crc32", requestHash);
  std::shared_ptr<IOStream> inputStream = Aws::MakeShared<StringStream>(TEST_LOG_TAG, "1234567890123456789012345");
  AwsChunkedStream<10> chunkedStream{&request, inputStream};
  Aws::Utils::Array<char> outputBuffer{100};
  Aws::StringStream output;
  size_t readIterations{4};
  size_t bufferOffset{0};
  while (readIterations > 0) {
    bufferOffset = chunkedStream.BufferedRead(outputBuffer.GetUnderlyingData(), 10);
    std::copy(outputBuffer.GetUnderlyingData(), outputBuffer.GetUnderlyingData() + bufferOffset, std::ostream_iterator<char>(output));
    readIterations--;
  }
  // Read trailing checksum that is greater than 10 chars
  bufferOffset = chunkedStream.BufferedRead(outputBuffer.GetUnderlyingData(), 40);
  EXPECT_EQ(36ul, bufferOffset);
  std::copy(outputBuffer.GetUnderlyingData(), outputBuffer.GetUnderlyingData() + bufferOffset, std::ostream_iterator<char>(output));
  const auto encodedStr = output.str();
  auto expectedStreamWithChecksum = "A\r\n1234567890\r\nA\r\n1234567890\r\n5\r\n12345\r\n0\r\nx-amz-checksum-crc32:78DeVw==\r\n\r\n";
  EXPECT_EQ(expectedStreamWithChecksum, encodedStr);
}
