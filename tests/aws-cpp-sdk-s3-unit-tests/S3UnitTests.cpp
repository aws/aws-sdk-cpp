#include <gtest/gtest.h>
#include <aws/core/Aws.h>
#include <aws/core/auth/AWSCredentials.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/DeleteObjectsRequest.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/s3/model/CopyObjectRequest.h>
#include <aws/testing/mocks/http/MockHttpClient.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/MemoryTesting.h>
#include <memory>
#include <aws/s3/S3ErrorMarshaller.h>
#include <aws/s3/model/HeadBucketRequest.h>

using namespace Aws;
using namespace Aws::Client;
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::S3;
using namespace Aws::S3::Model;

const char* ALLOCATION_TAG = "S3UnitTest";
const char* MD5_HEADER = "content-md5";

class S3UnitTest_S3EmbeddedErrorTestNonOKResponse_Test;

class S3TestClient : public S3Client
{
    public:
    template <typename ...Args>
    S3TestClient(Args&& ...args): S3Client(std::forward<Args>(args)...){
    }
    XmlOutcome MakeRequest(const Aws::Http::URI& uri,
      const Aws::AmazonWebServiceRequest& request,
      Aws::Http::HttpMethod method = Aws::Http::HttpMethod::HTTP_POST,
      const char* signerName = Aws::Auth::SIGV4_SIGNER,
      const char* signerRegionOverride = nullptr,
      const char* signerServiceNameOverride = nullptr) const
    {
        return S3Client::MakeRequest(uri, request, method, signerName, signerRegionOverride, signerServiceNameOverride);
    }


    XmlOutcome MakeRequest(const Aws::Http::URI& uri,
      Http::HttpMethod method = Http::HttpMethod::HTTP_POST,
      const char* signerName = Aws::Auth::SIGV4_SIGNER,
      const char* requestName = "",
      const char* signerRegionOverride = nullptr,
      const char* signerServiceNameOverride = nullptr) const
    {
        return S3Client::MakeRequest(uri, method, signerName, requestName, signerRegionOverride, signerServiceNameOverride);
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

class MockRequest : public Aws::AmazonWebServiceRequest
{
public:
  std::shared_ptr<Aws::IOStream> GetBody() const override{
    return nullptr;
  }

  Aws::Http::HeaderValueCollection GetHeaders() const override{
    return Aws::Http::HeaderValueCollection();
  }

  const char* GetServiceRequestName() const override{
    return "MockRequest";
  }

};

//Set http error and error in body in a way to hit generic xml error marshaller, which sets the exception name
TEST_F(S3UnitTest, S3EmbeddedErrorTestNonOKResponse) {

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
  MockRequest request;
  auto errorMarshaller = S3ErrorMarshaller();
  auto error = errorMarshaller.Marshall(*mockResponse);
  auto outcome = HttpResponseOutcome(std::move(error) );
  ASSERT_FALSE(outcome.IsSuccess());
  EXPECT_TRUE(outcome.GetError().GetExceptionName() == "InvalidAction");
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
  // RETRY_MODE_STANDARD -> E, FLEXIBLE_CHECKSUMS_REQ_CRC64 -> W,FLEXIBLE_CHECKSUMS_REQ_WHEN_SUPPORTED -> Z, FLEXIBLE_CHECKSUMS_RES_WHEN_SUPPORTED -> b
  auto businessMetrics = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), [](const Aws::String & value) { return value.find("m/E,W,Z,b") != Aws::String::npos; });
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

TEST_F(S3UnitTest, PutObjectShouldOverrideUserAgent) {
  auto request = PutObjectRequest()
    .WithBucket("ocelot")
    .WithKey("revolver");

  std::shared_ptr<IOStream> body = Aws::MakeShared<StringStream>(ALLOCATION_TAG, "lalilulelo");
  request.SetBody(body);

  auto mockRequest = Aws::MakeShared<Standard::StandardHttpRequest>(ALLOCATION_TAG, "major.com/zero", HttpMethod::HTTP_PUT);
  mockRequest->SetResponseStreamFactory([]() -> IOStream* {
    return Aws::New<StringStream>(ALLOCATION_TAG, "", std::ios_base::in | std::ios_base::binary);
  });
  auto mockResponse = Aws::MakeShared<Standard::StandardHttpResponse>(ALLOCATION_TAG, mockRequest);
  mockResponse->SetResponseCode(HttpResponseCode::OK);

  _mockHttpClient->AddResponseToReturn(mockResponse);

  const AWSCredentials credentials{"mock", "credentials"};
  const auto epProvider = Aws::MakeShared<S3EndpointProvider>(ALLOCATION_TAG);
  ClientConfigurationInitValues initValues;
  initValues.shouldDisableIMDS = true;
  S3ClientConfiguration configuration{initValues};
  configuration.region = "us-east-1";
  configuration.retryStrategy = Aws::MakeShared<NoRetry>(ALLOCATION_TAG);
  configuration.userAgent = "youre-pretty-good";
  const S3Client customUaClient{configuration};

  const auto response = customUaClient.PutObject(request);
  const auto requestSeen = _mockHttpClient->GetMostRecentHttpRequest();
  EXPECT_TRUE(requestSeen.HasUserAgent());
  const auto& userAgent = requestSeen.GetUserAgent();
  EXPECT_TRUE(!userAgent.empty());
  EXPECT_EQ("youre-pretty-good", userAgent);
}

TEST_F(S3UnitTest, PutObjectS3ExpressShouldHaveJMetric) {
  auto request = PutObjectRequest()
    .WithBucket("o-worthy-heart--usw2-az1--x-s3")  // S3Express bucket pattern
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

  const auto response = _s3Client->PutObject(request);
  
  const auto requestSeen = _mockHttpClient->GetMostRecentHttpRequest();
  EXPECT_TRUE(requestSeen.HasUserAgent());
  const auto& userAgent = requestSeen.GetUserAgent();
  EXPECT_TRUE(!userAgent.empty());
  const auto userAgentParsed = Utils::StringUtils::Split(userAgent, ' ');
  
  // Check for S3Express business metric (J) in user agent
  auto businessMetrics = std::find_if(userAgentParsed.begin(), userAgentParsed.end(), 
    [](const Aws::String & value) { return value.find("m/") != Aws::String::npos && value.find("J") != Aws::String::npos; });
  EXPECT_TRUE(businessMetrics != userAgentParsed.end());
}

TEST_F(S3UnitTest, RequestShouldNotIncludeAChecksumIfNotRequired) {
  S3ClientConfiguration configuration{};
  configuration.checksumConfig.requestChecksumCalculation = RequestChecksumCalculation::WHEN_REQUIRED;
  S3TestClient client{configuration};

  auto request = PutObjectRequest()
    .WithBucket("Crono")
    .WithKey("Trigger");

  std::shared_ptr<IOStream> body = Aws::MakeShared<StringStream>(ALLOCATION_TAG,
    "All life begins with Nu and ends with Nu… This is the truth! This is my belief! …at least for now.");

  request.SetBody(body);

  auto mockRequest = Aws::MakeShared<Standard::StandardHttpRequest>(ALLOCATION_TAG, "end-of-time.com/", HttpMethod::HTTP_PUT);
  mockRequest->SetResponseStreamFactory([]() -> IOStream* {
    return Aws::New<StringStream>(ALLOCATION_TAG, "", std::ios_base::in | std::ios_base::binary);
  });
  auto mockResponse = Aws::MakeShared<Standard::StandardHttpResponse>(ALLOCATION_TAG, mockRequest);
  mockResponse->SetResponseCode(HttpResponseCode::OK);

  _mockHttpClient->AddResponseToReturn(mockResponse);

  const auto response = client.PutObject(request);
  EXPECT_TRUE(response.IsSuccess());

  const auto requestReceived = _mockHttpClient->GetMostRecentHttpRequest();
  const auto headers = requestReceived.GetHeaders();
  EXPECT_FALSE(std::any_of(headers.begin(), headers.end(),
    [](const std::pair<Aws::String, Aws::String>& keyValue) { return keyValue.first.find("x-amz-checksum") != Aws::String::npos; }));
}

TEST_F(S3UnitTest, RequestShouldNotIncludeAChecksumIfNotRequiredWithMD5Header) {
  S3ClientConfiguration configuration{};
  configuration.checksumConfig.requestChecksumCalculation = RequestChecksumCalculation::WHEN_REQUIRED;
  S3TestClient client{configuration};

  auto request = PutObjectRequest()
    .WithBucket("Crono")
    .WithKey("Trigger");

  std::shared_ptr<IOStream> body = Aws::MakeShared<StringStream>(ALLOCATION_TAG,
    "All life begins with Nu and ends with Nu… This is the truth! This is my belief! …at least for now.");

  request.SetBody(body);
  request.SetAdditionalCustomHeaderValue(MD5_HEADER,
    Utils::HashingUtils::Base64Encode(Utils::HashingUtils::CalculateMD5(*body)));

  auto mockRequest = Aws::MakeShared<Standard::StandardHttpRequest>(ALLOCATION_TAG, "end-of-time.com/", HttpMethod::HTTP_PUT);
  mockRequest->SetResponseStreamFactory([]() -> IOStream* {
    return Aws::New<StringStream>(ALLOCATION_TAG, "", std::ios_base::in | std::ios_base::binary);
  });
  auto mockResponse = Aws::MakeShared<Standard::StandardHttpResponse>(ALLOCATION_TAG, mockRequest);
  mockResponse->SetResponseCode(HttpResponseCode::OK);

  _mockHttpClient->AddResponseToReturn(mockResponse);

  const auto response = client.PutObject(request);
  EXPECT_TRUE(response.IsSuccess());

  const auto requestReceived = _mockHttpClient->GetMostRecentHttpRequest();
  const auto headers = requestReceived.GetHeaders();
  EXPECT_FALSE(std::any_of(headers.begin(), headers.end(),
    [](const std::pair<Aws::String, Aws::String>& keyValue) { return keyValue.first.find("x-amz-checksum") != Aws::String::npos; }));
  EXPECT_TRUE(std::any_of(headers.begin(), headers.end(),
    [](const std::pair<Aws::String, Aws::String>& keyValue) { return keyValue.first.find("content-md5") != Aws::String::npos; }));
}

TEST_F(S3UnitTest, RequestShouldNotIncludeAChecksumIfRequiredWithMD5Header) {
  struct ChecksumOptOutDeleteObjects : public Aws::S3::Model::DeleteObjectsRequest {
    inline bool RequestChecksumRequired() const override {
      return false;
    };
  };

  S3ClientConfiguration configuration{};
  configuration.checksumConfig.requestChecksumCalculation = RequestChecksumCalculation::WHEN_REQUIRED;
  S3TestClient client{configuration};

  auto request = ChecksumOptOutDeleteObjects();
  request.SetBucket("Chrono");
  request.SetDelete(S3::Model::Delete().WithObjects({ObjectIdentifier()
    .WithKey("Trigger")}));
  auto payload = request.SerializePayload();
  request.SetAdditionalCustomHeaderValue(MD5_HEADER,
    Aws::Utils::HashingUtils::Base64Encode(Aws::Utils::HashingUtils::CalculateMD5(payload)));

  auto mockRequest = Aws::MakeShared<Standard::StandardHttpRequest>(ALLOCATION_TAG, "end-of-time.com/", HttpMethod::HTTP_PUT);
  mockRequest->SetResponseStreamFactory([]() -> IOStream* {
    return Aws::New<StringStream>(ALLOCATION_TAG, "", std::ios_base::in | std::ios_base::binary);
  });
  auto mockResponse = Aws::MakeShared<Standard::StandardHttpResponse>(ALLOCATION_TAG, mockRequest);
  mockResponse->SetResponseCode(HttpResponseCode::OK);

  _mockHttpClient->AddResponseToReturn(mockResponse);

  const auto response = client.DeleteObjects(request);
  EXPECT_TRUE(response.IsSuccess());

  const auto requestReceived = _mockHttpClient->GetMostRecentHttpRequest();
  const auto headers = requestReceived.GetHeaders();
  EXPECT_FALSE(std::any_of(headers.begin(), headers.end(),
    [](const std::pair<Aws::String, Aws::String>& keyValue) { return keyValue.first.find("x-amz-checksum") != Aws::String::npos; }));
  EXPECT_TRUE(std::any_of(headers.begin(), headers.end(),
    [](const std::pair<Aws::String, Aws::String>& keyValue) { return keyValue.first.find("content-md5") != Aws::String::npos; }));
}

TEST_F(S3UnitTest, testLegacyApi)
{
    HeadBucketRequest headBucketRequest;
    headBucketRequest.SetBucket("dummy");

    auto uri = _s3Client->GeneratePresignedUrl("dummy",
      /*key=*/"", Aws::Http::HttpMethod::HTTP_HEAD);

    //We have to mock requset because it is used to create the return body, it actually isnt used.
    auto mockRequest = Aws::MakeShared<Standard::StandardHttpRequest>(ALLOCATION_TAG, "mockuri", HttpMethod::HTTP_GET);
    mockRequest->SetResponseStreamFactory([]() -> IOStream* {
      return Aws::New<StringStream>(ALLOCATION_TAG, "response-string", std::ios_base::in | std::ios_base::binary);
    });

    {
      auto mockResponse = Aws::MakeShared<Standard::StandardHttpResponse>(ALLOCATION_TAG, mockRequest);
        mockResponse->SetResponseCode(HttpResponseCode::OK);
        _mockHttpClient->AddResponseToReturn(mockResponse);
    }

    auto outcome = _s3Client->MakeRequest(uri, headBucketRequest, Aws::Http::HttpMethod::HTTP_HEAD,
      "SignatureV4");

    EXPECT_TRUE(outcome.IsSuccess());

    {
        auto mockResponse = Aws::MakeShared<Standard::StandardHttpResponse>(ALLOCATION_TAG, mockRequest);
        mockResponse->SetResponseCode(HttpResponseCode::OK);
        _mockHttpClient->AddResponseToReturn(mockResponse);
    }

    auto outcome2 = _s3Client->MakeRequest(uri, Aws::Http::HttpMethod::HTTP_HEAD,
      "SignatureV4");
    
    EXPECT_TRUE(outcome2.IsSuccess());
}