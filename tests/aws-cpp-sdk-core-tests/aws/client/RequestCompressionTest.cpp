/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/core/client/RequestCompression.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

static const char AWS_REQUEST_COMPRESSION_TEST_ALLOCATION_TAG[] =
    "RequestCompressionTest";
#ifdef ENABLED_ZLIB_REQUEST_COMPRESSION
class RequestCompressionZlibTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

// Only run these tests when ZLIB support is available
TEST_F(RequestCompressionZlibTest, TestStringGetsCompressed) {
    Aws::Client::RequestCompression r;
    auto testingStream = Aws::MakeShared<Aws::StringStream>(AWS_REQUEST_COMPRESSION_TEST_ALLOCATION_TAG);
    const Aws::String testString =
      R"===(This is a test string that should be compressed
Since the algorithm used will prefix some headers, to actually see smaller
compressed string than the uncompressed, it has to be somehow long.
)===";
    *testingStream << testString;
    auto out = r.compress(testingStream, Aws::Client::CompressionAlgorithm::GZIP);
    ASSERT_TRUE(out.IsSuccess());
    auto result = out.GetResult();
    result->seekg(0, std::ios::end);
    size_t compressed_size = result->tellg();
    ASSERT_GT(testString.length(), compressed_size);
}

TEST_F(RequestCompressionZlibTest, TestCompressedUncompressIsIdem) {
    Aws::Client::RequestCompression r;
    auto testingStream = Aws::MakeShared<Aws::StringStream>(
        AWS_REQUEST_COMPRESSION_TEST_ALLOCATION_TAG);
    const Aws::String testString = R"===(This is a test string)===";
    *testingStream << testString;
    auto outCompressed =
        r.compress(testingStream, Aws::Client::CompressionAlgorithm::GZIP);
    ASSERT_TRUE(outCompressed.IsSuccess());
    auto compressed = outCompressed.GetResult();
    auto outUncompressed = r.uncompress(compressed, Aws::Client::CompressionAlgorithm::GZIP);
    ASSERT_TRUE(outUncompressed.IsSuccess());
    auto uncompressed = outUncompressed.GetResult();
    std::stringstream ss;
    ss << uncompressed->rdbuf();
    std::string uncompressedString = ss.str();
    ASSERT_STREQ(testString.c_str(), uncompressedString.c_str());
}

TEST_F(RequestCompressionZlibTest, TestCompressedLargerThanBufferStreamUncompressIsIdem) {
    Aws::Client::RequestCompression r;
    auto testingStream = Aws::MakeShared<Aws::StringStream>(
        AWS_REQUEST_COMPRESSION_TEST_ALLOCATION_TAG);
    const Aws::String testStringChunk = R"===(This is a test string of 33 chars)===";
    ASSERT_EQ((size_t) 33, testStringChunk.length());
    Aws::StringStream ss;
    for (int i=0; i < 16000; i++)
    {
      //33*16000 (> 256K*2) stream
      *testingStream << testStringChunk;
      ss << testStringChunk;
    }
    Aws::String testString = ss.str();
    auto outCompressed = r.compress(testingStream, Aws::Client::CompressionAlgorithm::GZIP);
    ASSERT_TRUE(outCompressed.IsSuccess());
    auto compressed = outCompressed.GetResult();
    auto outUncompressed =
        r.uncompress(compressed, Aws::Client::CompressionAlgorithm::GZIP);
    ASSERT_TRUE(outUncompressed.IsSuccess());
    auto uncompressed = outUncompressed.GetResult();
    ss.str("");
    ss << uncompressed->rdbuf();
    Aws::String uncompressedString = ss.str();
    ASSERT_EQ(testString.length(), uncompressedString.length());
    ASSERT_STREQ(testString.c_str(), uncompressedString.c_str());
}

#else
// When no compression support is available run these tests instead
class RequestCompressionZlibTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(RequestCompressionZlibTest, TestStringFailsToGetsCompressedWithoutZlibSupport) {
    Aws::Client::RequestCompression r;
    const Aws::String testString =
        R"zzz(This is a test string that should be compressed
Since the algorithm used will prefix some headers, to actually see smaller
compressed string than the uncompressed, it has to be somehow long.
)zzz";
    auto testingStream = Aws::MakeShared<Aws::StringStream>(AWS_REQUEST_COMPRESSION_TEST_ALLOCATION_TAG);
    *testingStream << testString;

    auto out = r.compress(testingStream, Aws::Client::CompressionAlgorithm::GZIP);
    ASSERT_FALSE(out.IsSuccess());
}
#endif