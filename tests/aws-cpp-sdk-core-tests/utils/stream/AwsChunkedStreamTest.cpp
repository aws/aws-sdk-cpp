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

TEST_F(AwsChunkedStreamTest, ShouldNotRequireTwoReadsOnSmallChunk) {
  StandardHttpRequest request{"www.clemar.com/strohl", Http::HttpMethod::HTTP_GET};
  auto requestHash = Aws::MakeShared<CRC32>(TEST_LOG_TAG);
  request.SetRequestHash("crc32", requestHash);
  std::shared_ptr<IOStream> inputStream = Aws::MakeShared<StringStream>(TEST_LOG_TAG, "12345");
  AwsChunkedStream<100> chunkedStream{&request, inputStream};
  Aws::Utils::Array<char> outputBuffer{100};
  Aws::StringStream output;
  const auto bufferOffset = chunkedStream.BufferedRead(outputBuffer.GetUnderlyingData(), 100);
  std::copy(outputBuffer.GetUnderlyingData(), outputBuffer.GetUnderlyingData() + bufferOffset, std::ostream_iterator<char>(output));
  EXPECT_EQ(46ul, bufferOffset);
  const auto encodedStr = output.str();
  auto expectedStreamWithChecksum = "5\r\n12345\r\n0\r\nx-amz-checksum-crc32:y/U6HA==\r\n\r\n";
  EXPECT_EQ(expectedStreamWithChecksum, encodedStr);
}

TEST_F(AwsChunkedStreamTest, ShouldWorkOnSmallBuffer) {
  StandardHttpRequest request{"www.eugief.com/hesimay", Http::HttpMethod::HTTP_GET};
  auto requestHash = Aws::MakeShared<CRC32>(TEST_LOG_TAG);
  request.SetRequestHash("crc32", requestHash);
  std::shared_ptr<IOStream> inputStream = Aws::MakeShared<StringStream>(TEST_LOG_TAG, "1234567890");
  AwsChunkedStream<5> chunkedStream{&request, inputStream};
  Aws::Utils::Array<char> outputBuffer{100};
  // Read first 5 bytes, we get back ten bytes chunk encoded since it is "5\r\n12345\r\n"
  Aws::StringStream firstRead;
  auto amountRead = chunkedStream.BufferedRead(outputBuffer.GetUnderlyingData(), 100);
  std::copy(outputBuffer.GetUnderlyingData(), outputBuffer.GetUnderlyingData() + amountRead, std::ostream_iterator<char>(firstRead));
  EXPECT_EQ(10ul, amountRead);
  auto encodedStr = firstRead.str();
  EXPECT_EQ("5\r\n12345\r\n", encodedStr);
  // Read second 5 bytes, we get back 46 bytes because we exhaust the underlying buffer
  // abd write the trailer "5\r\n67890\r\n0\r\nx-amz-checksum-crc32:Jh2u5Q==\r\n\r\n"
  Aws::StringStream secondRead;
  amountRead = chunkedStream.BufferedRead(outputBuffer.GetUnderlyingData(), 100);
  std::copy(outputBuffer.GetUnderlyingData(), outputBuffer.GetUnderlyingData() + amountRead, std::ostream_iterator<char>(secondRead));
  EXPECT_EQ(46ul, amountRead);
  encodedStr = secondRead.str();
  EXPECT_EQ("5\r\n67890\r\n0\r\nx-amz-checksum-crc32:Jh2u5Q==\r\n\r\n", encodedStr);
  // Any subsequent reads will return 0 because all streams are exhausted
  amountRead = chunkedStream.BufferedRead(outputBuffer.GetUnderlyingData(), 100);
  EXPECT_EQ(0ul, amountRead);
}

TEST_F(AwsChunkedStreamTest, ShouldWorkOnEmptyStream) {
  StandardHttpRequest request{"www.nidia.com/juna", Http::HttpMethod::HTTP_GET};
  auto requestHash = Aws::MakeShared<CRC32>(TEST_LOG_TAG);
  request.SetRequestHash("crc32", requestHash);
  std::shared_ptr<IOStream> inputStream = Aws::MakeShared<StringStream>(TEST_LOG_TAG, "");
  AwsChunkedStream<5> chunkedStream{&request, inputStream};
  Aws::Utils::Array<char> outputBuffer{100};
  Aws::StringStream firstRead;
  auto amountRead = chunkedStream.BufferedRead(outputBuffer.GetUnderlyingData(), 100);
  std::copy(outputBuffer.GetUnderlyingData(), outputBuffer.GetUnderlyingData() + amountRead, std::ostream_iterator<char>(firstRead));
  EXPECT_EQ(36ul, amountRead);
  auto encodedStr = firstRead.str();
  EXPECT_EQ("0\r\nx-amz-checksum-crc32:AAAAAA==\r\n\r\n", encodedStr);
}
