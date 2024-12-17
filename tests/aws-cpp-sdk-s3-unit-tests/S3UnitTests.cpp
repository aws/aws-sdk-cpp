#include <gtest/gtest.h>
#include <aws/core/Aws.h>
#include <aws/core/auth/AWSCredentials.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/s3/model/CopyObjectRequest.h>
#include <aws/testing/mocks/http/MockHttpClient.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/MemoryTesting.h>
#include <memory>

using namespace Aws;
using namespace Aws::Client;
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::S3;
using namespace Aws::S3::Model;

const char* ALLOCATION_TAG = "S3UnitTest";

class S3UnitTest_S3EmbeddedErrorTestNonOKResponse_Test;

class S3TestClient : public S3Client
{
    public:
    template <typename ...Args>
    S3TestClient(Args&& ...args): S3Client(std::forward<Args>(args)...){
    }

    private:
    S3TestClient() = default;

    friend class S3UnitTest_S3EmbeddedErrorTestNonOKResponse_Test;
};

class NoRetry: public RetryStrategy
{
public:
  bool ShouldRetry(const AWSError<CoreErrors>& error, long attemptedRetries) const override
  {
    AWS_UNREFERENCED_PARAM(error);
    AWS_UNREFERENCED_PARAM(attemptedRetries);
    return false;
  };

  long CalculateDelayBeforeNextRetry(const AWSError<CoreErrors>& error, long attemptedRetries) const override
  {
    AWS_UNREFERENCED_PARAM(error);
    AWS_UNREFERENCED_PARAM(attemptedRetries);
    return 0;
  };

  const char* GetStrategyName() const override {
    return "standard";
  };
};

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
    s3Config.retryStrategy = Aws::MakeShared<NoRetry>(ALLOCATION_TAG);
    _s3Client = Aws::MakeShared<S3TestClient>("ALLOCATION_TAG", credentials, epProvider, s3Config);
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
  static std::shared_ptr<S3TestClient> _s3Client;
#ifdef USE_AWS_MEMORY_MANAGEMENT
  static std::unique_ptr<ExactTestMemorySystem> _testMemorySystem;
#endif
};

SDKOptions S3UnitTest::_options;
std::shared_ptr<MockHttpClient> S3UnitTest::_mockHttpClient = nullptr;
std::shared_ptr<MockHttpClientFactory> S3UnitTest::_mockClientFactory = nullptr;
std::shared_ptr<S3TestClient> S3UnitTest::_s3Client = nullptr;
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

TEST_F(S3UnitTest, S3EmbeddedErrorTest) {
  const auto request = CopyObjectRequest()
    .WithBucket("testBucket")
    .WithKey("testKey")
    .WithCopySource("testSource");
  
  auto mockRequest = Aws::MakeShared<Standard::StandardHttpRequest>(ALLOCATION_TAG, "mockuri", HttpMethod::HTTP_GET);
  mockRequest->SetResponseStreamFactory([]() -> IOStream* {
    const Aws::String mockResponseString {"\n         <?xml version=\"1.0\" encoding=\"UTF-8\"?>\n\n         <Error>\n          <Code>InternalError</Code>\n          <Message>We encountered an internal error. Please try again.</Message>\n          <RequestId>656c76696e6727732072657175657374</RequestId>\n          <HostId>Uuag1LuByRx9e6j5Onimru9pO4ZVKnJ2Qz7/C1NPcfTWAtRPfTaOFg==</HostId>\n         </Error>\n    "};

    return Aws::New<StringStream>(ALLOCATION_TAG, mockResponseString.c_str(), std::ios_base::in | std::ios_base::binary);
  });
  auto mockResponse = Aws::MakeShared<Standard::StandardHttpResponse>(ALLOCATION_TAG, mockRequest);
  mockResponse->SetResponseCode(HttpResponseCode::OK);

  mockResponse->AddHeader("Server", "AmazonS3");
  mockResponse->AddHeader("Connection", "close");
  mockResponse->AddHeader("Date", "Mon, 1 Nov 2010 20:34:56 GMT");
  mockResponse->AddHeader("x-amz-request-id", "656c76696e6727732072657175657374");
  mockResponse->AddHeader("x-amz-id-2", "Uuag1LuByRx9e6j5Onimru9pO4ZVKnJ2Qz7/C1NPcfTWAtRPfTaOFg==");

  _mockHttpClient->AddResponseToReturn(mockResponse);

  const auto response = _s3Client->CopyObject(request);

  EXPECT_FALSE(response.IsSuccess());
  EXPECT_EQ(S3Errors::INTERNAL_FAILURE, response.GetError().GetErrorType());
  EXPECT_TRUE(response.GetError().ShouldRetry());
  EXPECT_EQ("We encountered an internal error. Please try again.", response.GetError().GetMessage());
  EXPECT_EQ("656c76696e6727732072657175657374", response.GetError().GetRequestId());
}


//Set http error and error in body in a way to hit generic xml error marshaller, which sets the exception name
TEST_F(S3UnitTest, S3EmbeddedErrorTestNonOKResponse) {
  const auto request = CopyObjectRequest()
    .WithBucket("testBucket")
    .WithKey("testKey")
    .WithCopySource("testSource");
  
  auto mockRequest = Aws::MakeShared<Standard::StandardHttpRequest>(ALLOCATION_TAG, "mockuri", HttpMethod::HTTP_GET);
  mockRequest->SetResponseStreamFactory([]() -> IOStream* {
    const Aws::String mockResponseString {"\n         <?xml version=\"1.0\" encoding=\"UTF-8\"?>\n\n         <Error>\n          <Code>InvalidAction</Code>\n          <Message>We encountered an internal error. Please try again.</Message>\n          <RequestId>656c76696e6727732072657175657374</RequestId>\n          <HostId>Uuag1LuByRx9e6j5Onimru9pO4ZVKnJ2Qz7/C1NPcfTWAtRPfTaOFg==</HostId>\n         </Error>\n    "};

    return Aws::New<StringStream>(ALLOCATION_TAG, mockResponseString.c_str(), std::ios_base::in | std::ios_base::binary);
  });
  auto mockResponse = Aws::MakeShared<Standard::StandardHttpResponse>(ALLOCATION_TAG, mockRequest);
  mockResponse->SetResponseCode(HttpResponseCode::ACCEPTED);

  mockResponse->AddHeader("Server", "AmazonS3");
  mockResponse->AddHeader("Connection", "close");
  mockResponse->AddHeader("Date", "Mon, 1 Nov 2010 20:34:56 GMT");
  mockResponse->AddHeader("x-amz-request-id", "656c76696e6727732072657175657374");
  mockResponse->AddHeader("x-amz-id-2", "Uuag1LuByRx9e6j5Onimru9pO4ZVKnJ2Qz7/C1NPcfTWAtRPfTaOFg==");

  _mockHttpClient->AddResponseToReturn(mockResponse);
 
  auto endpointResolutionOutcome =    _s3Client->accessEndpointProvider()->ResolveEndpoint(request.GetEndpointContextParams()); 
  
  const auto response =  std::static_pointer_cast<S3TestClient>(_s3Client)->Aws::Client::AWSXMLClient::MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, "dummy");

  EXPECT_TRUE(response.GetError().GetExceptionName() == "InvalidAction");

  EXPECT_FALSE(response.IsSuccess());
}

TEST_F(S3UnitTest, PutObjectShouldHaveCorrectUserAgent) {
  auto request = PutObjectRequest()
    .WithBucket("o-worthy-heart")
    .WithKey("who-tempers-anxiety-into-strength");

  std::shared_ptr<IOStream> body = Aws::MakeShared<StringStream>(ALLOCATION_TAG, "time marches on, and the age of a new king draws nearer");

  request.SetBody(body);

  auto mockRequest = Aws::MakeShared<Standard::StandardHttpRequest>(ALLOCATION_TAG, "alonzo.com/faker", HttpMethod::HTTP_PUT);
  mockRequest->SetResponseStreamFactory([]() -> IOStream* {
    return Aws::New<StringStream>(ALLOCATION_TAG, "", std::ios_base::in | std::ios_base::binary);
  });
  auto mockResponse = Aws::MakeShared<Standard::StandardHttpResponse>(ALLOCATION_TAG, mockRequest);
  mockResponse->SetResponseCode(HttpResponseCode::OK);

  _mockHttpClient->AddResponseToReturn(mockResponse);

  const auto response =_s3Client->PutObject(request);
  EXPECT_TRUE(response.IsSuccess());

  const auto requestSeen = _mockHttpClient->GetMostRecentHttpRequest();
  EXPECT_TRUE(requestSeen.HasUserAgent());
  const auto& userAgent = requestSeen.GetUserAgent();
  EXPECT_TRUE(!userAgent.empty());
  const auto userAgentParsed = Utils::StringUtils::Split(userAgent, ' ');
  auto sdkMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("aws-sdk-cpp/") != Aws::String::npos; });
  EXPECT_TRUE(sdkMetadata != userAgentParsed.end());
  auto uaMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("ua/") != Aws::String::npos; });
  EXPECT_TRUE(uaMetadata != userAgentParsed.end());
  auto apiMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("api/S3") != Aws::String::npos; });
  EXPECT_TRUE(apiMetadata != userAgentParsed.end());
  auto osMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("os/") != Aws::String::npos; });
  EXPECT_TRUE(osMetadata != userAgentParsed.end());
  auto langMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("lang/c++") != Aws::String::npos; });
  EXPECT_TRUE(langMetadata != userAgentParsed.end());
  auto crtMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("md/aws-crt") != Aws::String::npos; });
  EXPECT_TRUE(crtMetadata != userAgentParsed.end());
  auto archMetadata = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("md/arch") != Aws::String::npos; });
  EXPECT_TRUE(archMetadata != userAgentParsed.end());
  auto businessMetrics = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("m/") != Aws::String::npos; });
  EXPECT_TRUE(businessMetrics != userAgentParsed.end());

  // assert the order of the UA header
  EXPECT_TRUE(sdkMetadata < uaMetadata);
  EXPECT_TRUE(uaMetadata < apiMetadata);
  EXPECT_TRUE(apiMetadata < osMetadata);
  EXPECT_TRUE(osMetadata < langMetadata);
  EXPECT_TRUE(langMetadata < crtMetadata);
  EXPECT_TRUE(crtMetadata <  archMetadata);
  EXPECT_TRUE(archMetadata < businessMetrics);
}
