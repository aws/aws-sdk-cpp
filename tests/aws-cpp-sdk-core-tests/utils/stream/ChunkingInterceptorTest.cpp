/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/http/standard/StandardHttpRequest.h>
#include <aws/core/utils/crypto/CRC32.h>
#include <smithy/client/features/ChunkingInterceptor.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/core/client/ClientConfiguration.h>
#include <smithy/interceptor/InterceptorContext.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/AmazonWebServiceRequest.h>
#include <aws/core/http/HttpTypes.h>

using namespace Aws;
using namespace Aws::Http::Standard;
using namespace smithy::client::features;
using namespace Aws::Utils::Crypto;

const char* CHUNKING_TEST_LOG_TAG = "CHUNKING_INTERCEPTOR_TEST";

// Mock implementation of AmazonWebServiceRequest
class MockRequest : public Aws::AmazonWebServiceRequest {
public:
    std::shared_ptr<Aws::IOStream> GetBody() const override { return nullptr; }
    Aws::Http::HeaderValueCollection GetHeaders() const override { return {}; }
    const char* GetServiceRequestName() const override { return "MockRequest"; }
};

class ChunkingInterceptorTest : public Aws::Testing::AwsCppSdkGTestSuite {
protected:
    template <typename Fn>
    void withChunkedStream(const std::string& input, size_t bufferSize, Fn&& fn) {
        StandardHttpRequest request{"test.com", Http::HttpMethod::HTTP_GET};
        auto requestHash = Aws::MakeShared<CRC32>(CHUNKING_TEST_LOG_TAG);
        request.SetRequestHash("crc32", requestHash);
        auto inputStream = Aws::MakeShared<Aws::StringStream>(CHUNKING_TEST_LOG_TAG);
        *inputStream << input;
        
        AwsChunkedIOStream wrapper{&request, inputStream, bufferSize};
        Aws::IOStream* stream = &wrapper;
        
        fn(*stream);
    }
};

TEST_F(ChunkingInterceptorTest, ChunkedStreamShouldWork) {
    withChunkedStream("1234567890123456789012345", 10, [](Aws::IOStream& chunkedStream) {
        char buffer[100];
        std::stringstream output;
        
        // Read in 10-byte chunks
        for (int i = 0; i < 4; i++) {
            chunkedStream.read(buffer, 10);
            auto bytesRead = chunkedStream.gcount();
            output.write(buffer, bytesRead);
        }
        
        // Read trailing checksum (greater than 10 chars)
        chunkedStream.read(buffer, 40);
        auto bytesRead = static_cast<size_t>(chunkedStream.gcount());
        EXPECT_EQ(36ul, bytesRead);
        output.write(buffer, bytesRead);
        
        EXPECT_EQ("A\r\n1234567890\r\nA\r\n1234567890\r\n5\r\n12345\r\n0\r\nx-amz-checksum-crc32:78DeVw==\r\n\r\n", output.str());
    });
}

TEST_F(ChunkingInterceptorTest, ShouldNotRequireTwoReadsOnSmallChunk) {
    withChunkedStream("12345", 100, [](Aws::IOStream& chunkedStream) {
        char buffer[100];
        chunkedStream.read(buffer, 100);
        auto bytesRead = static_cast<size_t>(chunkedStream.gcount());
        EXPECT_EQ(46ul, bytesRead);
        
        std::string output(buffer, bytesRead);
        EXPECT_EQ("5\r\n12345\r\n0\r\nx-amz-checksum-crc32:y/U6HA==\r\n\r\n", output);
    });
}

TEST_F(ChunkingInterceptorTest, ShouldWorkOnSmallBuffer) {
    withChunkedStream("1234567890", 5, [](Aws::IOStream& chunkedStream) {
        char buffer[100];
        
        // First read - explicitly ask for 10 bytes (first chunk: "5\r\n12345\r\n")
        chunkedStream.read(buffer, 10);
        auto bytesRead = static_cast<size_t>(chunkedStream.gcount());
        EXPECT_EQ(10ul, bytesRead);
        std::string firstRead(buffer, bytesRead);
        EXPECT_EQ("5\r\n12345\r\n", firstRead);
        
        // Second read - now we expect the rest (46 bytes: second chunk + trailer)
        chunkedStream.read(buffer, 100);
        bytesRead = static_cast<size_t>(chunkedStream.gcount());
        EXPECT_EQ(46ul, bytesRead);
        std::string secondRead(buffer, bytesRead);
        EXPECT_EQ("5\r\n67890\r\n0\r\nx-amz-checksum-crc32:Jh2u5Q==\r\n\r\n", secondRead);
        
        // Subsequent reads should return 0
        chunkedStream.read(buffer, 100);
        bytesRead = static_cast<size_t>(chunkedStream.gcount());
        EXPECT_EQ(0ul, bytesRead);
    });
}

TEST_F(ChunkingInterceptorTest, ShouldWorkOnEmptyStream) {
    withChunkedStream("", 5, [](Aws::IOStream& chunkedStream) {
        char buffer[100];
        chunkedStream.read(buffer, 100);
        auto bytesRead = static_cast<size_t>(chunkedStream.gcount());
        EXPECT_EQ(36ul, bytesRead);
        
        std::string output(buffer, bytesRead);
        EXPECT_EQ("0\r\nx-amz-checksum-crc32:AAAAAA==\r\n\r\n", output);
    });
}

// Custom HTTP client (inherits default IsDefaultAwsHttpClient() = false from base class)
class CustomHttpClient : public Aws::Http::HttpClient {
public:
    std::shared_ptr<Aws::Http::HttpResponse> MakeRequest(const std::shared_ptr<Aws::Http::HttpRequest>&, 
                                                        Aws::Utils::RateLimits::RateLimiterInterface*, 
                                                        Aws::Utils::RateLimits::RateLimiterInterface*) const override {
        return nullptr;
    }
};

TEST_F(ChunkingInterceptorTest, ShouldNotApplyChunkingForCustomHttpClient) {
    // Simulate the GetChunkingConfig behavior from AWSClient.cpp
    // When IsDefaultAwsHttpClient() returns false, httpClientChunkedMode is set to CLIENT_IMPLEMENTATION
    Aws::Client::ClientConfiguration config;
    auto customHttpClient = Aws::MakeShared<CustomHttpClient>(CHUNKING_TEST_LOG_TAG);
    
    // This simulates the logic in GetChunkingConfig function
    if (!customHttpClient->IsDefaultAwsHttpClient()) {
        config.httpClientChunkedMode = Aws::Client::HttpClientChunkedMode::CLIENT_IMPLEMENTATION;
    }
    
    ChunkingInterceptor interceptor(config.httpClientChunkedMode);
    
    // Create request with checksum (would normally trigger chunking)
    auto request = Aws::MakeShared<StandardHttpRequest>(CHUNKING_TEST_LOG_TAG, "test.com", Http::HttpMethod::HTTP_POST);
    auto requestHash = Aws::MakeShared<CRC32>(CHUNKING_TEST_LOG_TAG);
    request->SetRequestHash("crc32", requestHash);
    
    auto inputStream = Aws::MakeShared<Aws::StringStream>(CHUNKING_TEST_LOG_TAG);
    *inputStream << "test data";
    request->AddContentBody(inputStream);
    
    // Create interceptor context with a mock request
    MockRequest mockRequest;
    smithy::interceptor::InterceptorContext context(mockRequest);
    context.SetTransmitRequest(request);
    
    // Apply interceptor
    auto result = interceptor.ModifyBeforeSigning(context);
    
    // Verify chunking was NOT applied because custom HTTP client uses default IsDefaultAwsHttpClient() = false
    EXPECT_EQ(request, result.GetResult());
    EXPECT_FALSE(request->HasHeader(Aws::Http::AWS_TRAILER_HEADER));
    EXPECT_FALSE(request->HasHeader(Aws::Http::TRANSFER_ENCODING_HEADER));
}

TEST_F(ChunkingInterceptorTest, ShouldFailWhenBufferIsTooShort) {
  const Aws::Client::ClientConfiguration config;
  ChunkingInterceptor interceptor(config.httpClientChunkedMode, 7UL * 1024);

  // Create interceptor context with a mock request
  const MockRequest mockRequest;
  smithy::interceptor::InterceptorContext context(mockRequest);
  auto respnse = interceptor.ModifyBeforeSigning(context);
  EXPECT_FALSE(respnse.IsSuccess());
  EXPECT_STREQ("aws-chunked buffer must be over 8KiB to content encode", respnse.GetError().GetMessage().c_str());
  respnse = interceptor.ModifyBeforeTransmit(context);
  EXPECT_FALSE(respnse.IsSuccess());
  EXPECT_STREQ("aws-chunked buffer must be over 8KiB to content encode", respnse.GetError().GetMessage().c_str());
}
