#include <gtest/gtest.h>
#include <aws/core/Aws.h>
#include <aws/core/auth/AWSCredentials.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/testing/mocks/http/MockHttpClient.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/MemoryTesting.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::S3;
using namespace Aws::S3::Model;

const char* ALLOCATION_TAG = "S3UnitTest";

class S3UnitTest : public testing::Test {
protected:
  static void SetUpTestSuite() {
#ifdef USE_AWS_MEMORY_MANAGEMENT
    _testMemorySystem.reset(new ExactTestMemorySystem(1024, 128));
    _options.memoryManagementOptions.memoryManager = _testMemorySystem.get();
#endif
    InitAPI(_options);
    _mockClientFactory = Aws::MakeShared<MockHttpClientFactory>(ALLOCATION_TAG);
    _mockHttpClient = Aws::MakeShared<MockHttpClient>(ALLOCATION_TAG);
    _mockClientFactory->SetClient(_mockHttpClient);
    SetHttpClientFactory(_mockClientFactory);
    AWSCredentials credentials{"mock", "credentials"};
    const auto epProvider = Aws::MakeShared<S3EndpointProvider>(ALLOCATION_TAG);
    S3ClientConfiguration s3Config;
    s3Config.region = "us-east-1";
    _s3Client = Aws::MakeShared<S3Client>("ALLOCATION_TAG", credentials, epProvider, s3Config);
  }

  static void TearDownTestSuite() {
    _mockClientFactory.reset();
    _mockHttpClient.reset();
    _s3Client.reset();
    ShutdownAPI(_options);
#ifdef USE_AWS_MEMORY_MANAGEMENT
    EXPECT_EQ(_testMemorySystem->GetCurrentOutstandingAllocations(), 0ULL);
    EXPECT_EQ(_testMemorySystem->GetCurrentBytesAllocated(), 0ULL);
    EXPECT_TRUE(_testMemorySystem->IsClean());
    if (_testMemorySystem->GetCurrentOutstandingAllocations() != 0ULL)
      FAIL();
    if (_testMemorySystem->GetCurrentBytesAllocated() != 0ULL)
      FAIL();
    if (!_testMemorySystem->IsClean())
      FAIL();
    _testMemorySystem.reset();
#endif
  }

  static SDKOptions _options;
  static std::shared_ptr<MockHttpClient> _mockHttpClient;
  static std::shared_ptr<MockHttpClientFactory> _mockClientFactory;
  static std::shared_ptr<S3Client> _s3Client;
#ifdef USE_AWS_MEMORY_MANAGEMENT
  static std::unique_ptr<ExactTestMemorySystem> _testMemorySystem;
#endif
};

SDKOptions S3UnitTest::_options;
std::shared_ptr<MockHttpClient> S3UnitTest::_mockHttpClient = nullptr;
std::shared_ptr<MockHttpClientFactory> S3UnitTest::_mockClientFactory = nullptr;
std::shared_ptr<S3Client> S3UnitTest::_s3Client = nullptr;
#ifdef USE_AWS_MEMORY_MANAGEMENT
// this must be std:: because this is an utility to track allocations in the SDK and should not rely on SDK
std::unique_ptr<ExactTestMemorySystem> S3UnitTest::_testMemorySystem = nullptr;
#endif


TEST_F(S3UnitTest, S3UriLeadingDots) {
  auto putObjectRequest = PutObjectRequest()
      .WithBucket("bluerev")
      .WithKey("../BoredInBristol");

  std::shared_ptr<IOStream> body = Aws::MakeShared<StringStream>(ALLOCATION_TAG,
    "Bored in Bristol, always waiting",
    std::ios_base::in | std::ios_base::binary);

  putObjectRequest.SetBody(body);

  //We have to mock requset because it is used to create the return body, it actually isnt used.
  auto mockRequest = Aws::MakeShared<Standard::StandardHttpRequest>(ALLOCATION_TAG, "mockuri", HttpMethod::HTTP_GET);
  mockRequest->SetResponseStreamFactory([]() -> IOStream* {
    return Aws::New<StringStream>(ALLOCATION_TAG, "response-string", std::ios_base::in | std::ios_base::binary);
  });
  auto mockResponse = Aws::MakeShared<Standard::StandardHttpResponse>(ALLOCATION_TAG, mockRequest);
  mockResponse->SetResponseCode(HttpResponseCode::OK);
  _mockHttpClient->AddResponseToReturn(mockResponse);
  const auto response = _s3Client->PutObject(putObjectRequest);
  AWS_EXPECT_SUCCESS(response);
  const auto seenRequest = _mockHttpClient->GetMostRecentHttpRequest();
  EXPECT_EQ("https://bluerev.s3.us-east-1.amazonaws.com/../BoredInBristol", seenRequest.GetUri().GetURIString());
}

TEST_F(S3UnitTest, S3UriMiddleDots) {
  auto putObjectRequest = PutObjectRequest()
      .WithBucket("bluerev")
      .WithKey("belinda/../says");

  std::shared_ptr<IOStream> body = Aws::MakeShared<StringStream>(ALLOCATION_TAG,
    "Blue Rev behind the rink I didn't really need it",
    std::ios_base::in | std::ios_base::binary);

  putObjectRequest.SetBody(body);

  //We have to mock requset because it is used to create the return body, it actually isnt used.
  auto mockRequest = Aws::MakeShared<Standard::StandardHttpRequest>(ALLOCATION_TAG, "mockuri", HttpMethod::HTTP_GET);
  mockRequest->SetResponseStreamFactory([]() -> IOStream* {
    return Aws::New<StringStream>(ALLOCATION_TAG, "response-string", std::ios_base::in | std::ios_base::binary);
  });
  auto mockResponse = Aws::MakeShared<Standard::StandardHttpResponse>(ALLOCATION_TAG, mockRequest);
  mockResponse->SetResponseCode(HttpResponseCode::OK);
  _mockHttpClient->AddResponseToReturn(mockResponse);
  const auto response = _s3Client->PutObject(putObjectRequest);
  AWS_EXPECT_SUCCESS(response);
  const auto seenRequest = _mockHttpClient->GetMostRecentHttpRequest();
  EXPECT_EQ("https://bluerev.s3.us-east-1.amazonaws.com/belinda/../says", seenRequest.GetUri().GetURIString());
}

TEST_F(S3UnitTest, S3UriPathPreservationOff) {
  auto putObjectRequest = PutObjectRequest()
      .WithBucket("velvetunderground")
      .WithKey("////stephanie////says////////////that////////she//wants///////to/know.txt");

  std::shared_ptr<IOStream> body = Aws::MakeShared<StringStream>(ALLOCATION_TAG,
    "What country shall I say is calling From across the world?",
    std::ios_base::in | std::ios_base::binary);

  putObjectRequest.SetBody(body);

  //We have to mock requset because it is used to create the return body, it actually isnt used.
  auto mockRequest = Aws::MakeShared<Standard::StandardHttpRequest>(ALLOCATION_TAG, "mockuri", HttpMethod::HTTP_GET);
  mockRequest->SetResponseStreamFactory([]() -> IOStream* {
    return Aws::New<StringStream>(ALLOCATION_TAG, "response-string", std::ios_base::in | std::ios_base::binary);
  });
  auto mockResponse = Aws::MakeShared<Standard::StandardHttpResponse>(ALLOCATION_TAG, mockRequest);
  mockResponse->SetResponseCode(HttpResponseCode::OK);
  _mockHttpClient->AddResponseToReturn(mockResponse);

  const auto response = _s3Client->PutObject(putObjectRequest);
  AWS_EXPECT_SUCCESS(response);

  const auto seenRequest = _mockHttpClient->GetMostRecentHttpRequest();
  EXPECT_EQ("https://velvetunderground.s3.us-east-1.amazonaws.com/stephanie/says/that/she/wants/to/know.txt", seenRequest.GetUri().GetURIString());
}

TEST_F(S3UnitTest, S3UriPathPreservationOn) {
  //Turn on path preservation
  Aws::Http::SetPreservePathSeparators(true);

  auto putObjectRequest = PutObjectRequest()
      .WithBucket("velvetunderground")
      .WithKey("////stephanie////says////////////that////////she//wants///////to/know.txt");

  std::shared_ptr<IOStream> body = Aws::MakeShared<StringStream>(ALLOCATION_TAG,
    "What country shall I say is calling From across the world?",
    std::ios_base::in | std::ios_base::binary);

  putObjectRequest.SetBody(body);

  //We have to mock requset because it is used to create the return body, it actually isnt used.
  auto mockRequest = Aws::MakeShared<Standard::StandardHttpRequest>(ALLOCATION_TAG, "mockuri", HttpMethod::HTTP_GET);
  mockRequest->SetResponseStreamFactory([]() -> IOStream* {
    return Aws::New<StringStream>(ALLOCATION_TAG, "response-string", std::ios_base::in | std::ios_base::binary);
  });
  auto mockResponse = Aws::MakeShared<Standard::StandardHttpResponse>(ALLOCATION_TAG, mockRequest);
  mockResponse->SetResponseCode(HttpResponseCode::OK);
  _mockHttpClient->AddResponseToReturn(mockResponse);

  const auto response = _s3Client->PutObject(putObjectRequest);
  AWS_EXPECT_SUCCESS(response);

  const auto seenRequest = _mockHttpClient->GetMostRecentHttpRequest();
  EXPECT_EQ("https://velvetunderground.s3.us-east-1.amazonaws.com/////stephanie////says////////////that////////she//wants///////to/know.txt", seenRequest.GetUri().GetURIString());
}
