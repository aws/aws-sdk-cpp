/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <smithy/client/features/ChecksumInterceptor.h>

using namespace smithy::interceptor;
using namespace smithy::client;
using namespace Aws;
using namespace Aws::Http;
using namespace Aws::Http::Standard;
using namespace Aws::Testing;

static const char* ALLOC_TAG = "ChecksumInterceptorTest";

class ChecksumInterceptorTest : public AwsCppSdkGTestSuite
{
protected:
    ChecksumInterceptor m_interceptor;
};

class MockChecksumRequest: public AmazonWebServiceRequest
{
public:
    explicit MockChecksumRequest(const Aws::String& m_response_body,
        const Aws::String& checksumAlgorithmName = "",
        const bool shouldAwsChunk = false,
        const bool shouldValidateResponseChecksum = false,
        const Aws::Vector<Aws::String>& responseValidationChecksums = {})
        : m_responseBody(m_response_body),
          m_checksumAlgorithmName{checksumAlgorithmName},
          m_shouldAwsChunk{shouldAwsChunk},
          m_shouldValidateResponseChecksum{shouldValidateResponseChecksum},
          m_responseChecksumsToValidate{responseValidationChecksums}
    {
    }

    ~MockChecksumRequest() override = default;

    std::shared_ptr<Aws::IOStream> GetBody() const override
    {
        return Aws::MakeShared<Aws::StringStream>(ALLOC_TAG, m_responseBody);
    }

    Aws::Http::HeaderValueCollection GetHeaders() const override
    {
        return {};
    }

    const char* GetServiceRequestName() const override
    {
        return "LeblancCafeService";
    }

    inline Aws::String GetChecksumAlgorithmName() const override
    {
        return m_checksumAlgorithmName;
    }

    bool IsStreaming() const override
    {
        return m_shouldAwsChunk;
    }

    inline bool ShouldValidateResponseChecksum() const override
    {
        return m_shouldValidateResponseChecksum;
    }

    inline Aws::Vector<Aws::String> GetResponseChecksumAlgorithmNames() const override
    {
        return m_responseChecksumsToValidate;
    }

private:
    Aws::String m_responseBody;
    Aws::String m_checksumAlgorithmName{};
    bool m_shouldAwsChunk{false};
    bool m_shouldValidateResponseChecksum{false};
    Aws::Vector<Aws::String> m_responseChecksumsToValidate{};
};

TEST_F(ChecksumInterceptorTest, MissingRequestInContextShouldReturnError)
{
    MockChecksumRequest request{"Take your time"};
    InterceptorContext context{request};
    const auto outcome = m_interceptor.ModifyBeforeSigning(context);
    EXPECT_FALSE(outcome.IsSuccess());
    EXPECT_EQ(Client::CoreErrors::VALIDATION, outcome.GetError().GetErrorType());
    EXPECT_EQ("Checksum request validation missing request", outcome.GetError().GetMessage());
    EXPECT_EQ("ValidationErrorException", outcome.GetError().GetExceptionName());
}

TEST_F(ChecksumInterceptorTest, MissingResponseInContextShouldReturnError)
{
    MockChecksumRequest request{"Take your time"};
    InterceptorContext context{request};
    const auto outcome = m_interceptor.ModifyBeforeDeserialization(context);
    EXPECT_FALSE(outcome.IsSuccess());
    EXPECT_EQ(Client::CoreErrors::VALIDATION, outcome.GetError().GetErrorType());
    EXPECT_EQ("Checksum response validation missing request or response", outcome.GetError().GetMessage());
    EXPECT_EQ("ValidationErrorException", outcome.GetError().GetExceptionName());
}

TEST_F(ChecksumInterceptorTest, ChecksumInterceptorShouldAddTrailingChecksumToRequest)
{
    MockChecksumRequest modeledRequest{"Take your time", "crc32", true};
    InterceptorContext context{modeledRequest};
    URI uri{"https://www.persona5.com/joker"};
    std::shared_ptr<HttpRequest> request(CreateHttpRequest(uri, HttpMethod::HTTP_GET, Utils::Stream::DefaultResponseStreamFactoryMethod));
    context.SetTransmitRequest(request);
    const auto outcome = m_interceptor.ModifyBeforeSigning(context);
    EXPECT_TRUE(outcome.IsSuccess());
    EXPECT_EQ("crc32", outcome.GetResult()->GetRequestHash().first);
}

TEST_F(ChecksumInterceptorTest, ChecksumInterceptorShouldAddHeaderChecksumToRequest)
{
    MockChecksumRequest modeledRequest{"Take your time", "crc32", false};
    InterceptorContext context{modeledRequest};
    URI uri{"https://www.persona5.com/joker"};
    std::shared_ptr<HttpRequest> request(CreateHttpRequest(uri, HttpMethod::HTTP_GET, Utils::Stream::DefaultResponseStreamFactoryMethod));
    context.SetTransmitRequest(request);
    const auto outcome = m_interceptor.ModifyBeforeSigning(context);
    EXPECT_TRUE(outcome.IsSuccess());
    EXPECT_EQ("", outcome.GetResult()->GetRequestHash().first);
    EXPECT_EQ(nullptr, outcome.GetResult()->GetRequestHash().second);
    EXPECT_EQ(2ul, outcome.GetResult()->GetHeaders().size());
    EXPECT_EQ("www.persona5.com", outcome.GetResult()->GetHeaderValue("host"));
    EXPECT_EQ("KQcztA==", outcome.GetResult()->GetHeaderValue("x-amz-checksum-crc32"));
}

TEST_F(ChecksumInterceptorTest, ChecksumInterceptorShouldValidateCorrectResponseChecksum)
{
    Aws::Vector<Aws::String> responseValidationChecksumsToValidate{"crc32"};
    MockChecksumRequest modeledRequest{"Take your time", "crc32", true, true, responseValidationChecksumsToValidate};
    InterceptorContext context{modeledRequest};
    URI uri{"https://www.persona5.com/joker"};
    std::shared_ptr<HttpRequest> request(CreateHttpRequest(uri, HttpMethod::HTTP_GET, Utils::Stream::DefaultResponseStreamFactoryMethod));
    context.SetTransmitRequest(request);
    const auto requestOutcome = m_interceptor.ModifyBeforeSigning(context);
    auto responseHashes = request->GetResponseValidationHashes();
    EXPECT_EQ(1ul, responseHashes.size());
    EXPECT_EQ("crc32", responseHashes[0].first);
    EXPECT_NE(nullptr, responseHashes[0].second);
    auto bodyStr = Crt::ByteBufFromCString("Take your time");
    responseHashes[0].second->Update(bodyStr.buffer, bodyStr.len);
    EXPECT_TRUE(requestOutcome.IsSuccess());
    std::shared_ptr<HttpResponse> response = Aws::MakeShared<StandardHttpResponse>(ALLOC_TAG, request);
    response->AddHeader("x-amz-checksum-crc32", "KQcztA==");
    context.SetTransmitResponse(response);
    const auto responseOutcome = m_interceptor.ModifyBeforeDeserialization(context);
    EXPECT_TRUE(responseOutcome.IsSuccess());
}

TEST_F(ChecksumInterceptorTest, ChecksumInterceptorShouldValidateBadResponseChecksum)
{
    Aws::Vector<Aws::String> responseValidationChecksumsToValidate{"crc32"};
    MockChecksumRequest modeledRequest{"Take your time", "crc32", true, true, responseValidationChecksumsToValidate};
    InterceptorContext context{modeledRequest};
    URI uri{"https://www.persona5.com/joker"};
    std::shared_ptr<HttpRequest> request(CreateHttpRequest(uri, HttpMethod::HTTP_GET, Utils::Stream::DefaultResponseStreamFactoryMethod));
    context.SetTransmitRequest(request);
    const auto requestOutcome = m_interceptor.ModifyBeforeSigning(context);
    auto responseHashes = request->GetResponseValidationHashes();
    EXPECT_EQ(1ul, responseHashes.size());
    EXPECT_EQ("crc32", responseHashes[0].first);
    EXPECT_NE(nullptr, responseHashes[0].second);
    auto bodyStr = Crt::ByteBufFromCString("Take your ~corrupted~ time");
    responseHashes[0].second->Update(bodyStr.buffer, bodyStr.len);
    EXPECT_TRUE(requestOutcome.IsSuccess());
    std::shared_ptr<HttpResponse> response = Aws::MakeShared<StandardHttpResponse>(ALLOC_TAG, request);
    response->AddHeader("x-amz-checksum-crc32", "KQcztA==");
    context.SetTransmitResponse(response);
    const auto responseOutcome = m_interceptor.ModifyBeforeDeserialization(context);
    EXPECT_FALSE(responseOutcome.IsSuccess());
    EXPECT_EQ(Client::CoreErrors::VALIDATION, responseOutcome.GetError().GetErrorType());
    EXPECT_EQ("Response checksums mismatch", responseOutcome.GetError().GetMessage());
}

TEST_F(ChecksumInterceptorTest, ChecksumInterceptorShouldSkipCompositeChecksum) {
    Aws::Vector<Aws::String> responseValidationChecksumsToValidate{"crc32"};
    MockChecksumRequest modeledRequest{"beached things", "crc32", true, true, responseValidationChecksumsToValidate};
    InterceptorContext context{modeledRequest};
    URI uri{"https://www.timefall.com/bts"};
    std::shared_ptr<HttpRequest> request(CreateHttpRequest(uri, HttpMethod::HTTP_GET, Utils::Stream::DefaultResponseStreamFactoryMethod));
    context.SetTransmitRequest(request);
    const auto requestOutcome = m_interceptor.ModifyBeforeSigning(context);
    auto responseHashes = request->GetResponseValidationHashes();
    EXPECT_EQ(1ul, responseHashes.size());
    EXPECT_EQ("crc32", responseHashes[0].first);
    EXPECT_NE(nullptr, responseHashes[0].second);
    auto bodyStr = Crt::ByteBufFromCString("beached things");
    responseHashes[0].second->Update(bodyStr.buffer, bodyStr.len);
    EXPECT_TRUE(requestOutcome.IsSuccess());
    std::shared_ptr<HttpResponse> response = Aws::MakeShared<StandardHttpResponse>(ALLOC_TAG, request);
    response->AddHeader("x-amz-checksum-crc32", "bb28==-1");
    context.SetTransmitResponse(response);
    const auto responseOutcome = m_interceptor.ModifyBeforeDeserialization(context);
    EXPECT_TRUE(responseOutcome.IsSuccess());
}

TEST_F(ChecksumInterceptorTest, ChecksumInterceptorShouldFailForNonNumericCompositeTrailer) {
    Aws::Vector<Aws::String> responseValidationChecksumsToValidate{"crc32"};
    MockChecksumRequest modeledRequest{"beached things", "crc32", true, true, responseValidationChecksumsToValidate};
    InterceptorContext context{modeledRequest};
    URI uri{"https://www.timefall.com/bts"};
    std::shared_ptr<HttpRequest> request(CreateHttpRequest(uri, HttpMethod::HTTP_GET, Utils::Stream::DefaultResponseStreamFactoryMethod));
    context.SetTransmitRequest(request);
    const auto requestOutcome = m_interceptor.ModifyBeforeSigning(context);
    auto responseHashes = request->GetResponseValidationHashes();
    EXPECT_EQ(1ul, responseHashes.size());
    EXPECT_EQ("crc32", responseHashes[0].first);
    EXPECT_NE(nullptr, responseHashes[0].second);
    auto bodyStr = Crt::ByteBufFromCString("beached things");
    responseHashes[0].second->Update(bodyStr.buffer, bodyStr.len);
    EXPECT_TRUE(requestOutcome.IsSuccess());
    std::shared_ptr<HttpResponse> response = Aws::MakeShared<StandardHttpResponse>(ALLOC_TAG, request);
    response->AddHeader("x-amz-checksum-crc32", "bb28==-ABC");
    context.SetTransmitResponse(response);
    const auto responseOutcome = m_interceptor.ModifyBeforeDeserialization(context);
    EXPECT_FALSE(responseOutcome.IsSuccess());
}

/*
 * Sha 512 tests
 */

TEST_F(ChecksumInterceptorTest, ChecksumInterceptorShouldAddTrailingSha512ChecksumToRequest) {
  MockChecksumRequest modeledRequest{"Memento Mori", "sha512", true};
  InterceptorContext context{modeledRequest};
  URI uri{"https://aws.tartarus.com/makoto"};
  std::shared_ptr<HttpRequest> request(CreateHttpRequest(uri, HttpMethod::HTTP_GET, Utils::Stream::DefaultResponseStreamFactoryMethod));
  context.SetTransmitRequest(request);
  const auto outcome = m_interceptor.ModifyBeforeSigning(context);
  EXPECT_TRUE(outcome.IsSuccess());
  EXPECT_EQ("sha512", outcome.GetResult()->GetRequestHash().first);
}

TEST_F(ChecksumInterceptorTest, ChecksumInterceptorShouldAddHeaderSha512ChecksumToRequest) {
  MockChecksumRequest modeledRequest{"Memento Mori", "sha512", false};
  InterceptorContext context{modeledRequest};
  URI uri{"https://aws.tartarus.com/makoto"};
  std::shared_ptr<HttpRequest> request(CreateHttpRequest(uri, HttpMethod::HTTP_GET, Utils::Stream::DefaultResponseStreamFactoryMethod));
  context.SetTransmitRequest(request);
  const auto outcome = m_interceptor.ModifyBeforeSigning(context);
  EXPECT_TRUE(outcome.IsSuccess());
  EXPECT_EQ("", outcome.GetResult()->GetRequestHash().first);
  EXPECT_EQ(nullptr, outcome.GetResult()->GetRequestHash().second);
  EXPECT_EQ(2ul, outcome.GetResult()->GetHeaders().size());
  EXPECT_EQ("aws.tartarus.com", outcome.GetResult()->GetHeaderValue("host"));
  EXPECT_EQ("b3tSwOm8ciYgInIl7qsmQMTRTg6bftRpEBagE0ZWONKrb19uOBf1HZX++/ttF/2n/6MFWBq3O4Msl2oP/XC+pQ==",
            outcome.GetResult()->GetHeaderValue("x-amz-checksum-sha512"));
}

TEST_F(ChecksumInterceptorTest, ChecksumInterceptorShouldValidateCorrectResponseSha512Checksum) {
  Aws::Vector<Aws::String> responseValidationChecksumsToValidate{"sha512"};
  MockChecksumRequest modeledRequest{"Memento Mori", "sha512", true, true, responseValidationChecksumsToValidate};
  InterceptorContext context{modeledRequest};
  URI uri{"https://aws.tartarus.com/makoto"};
  std::shared_ptr<HttpRequest> request(CreateHttpRequest(uri, HttpMethod::HTTP_GET, Utils::Stream::DefaultResponseStreamFactoryMethod));
  context.SetTransmitRequest(request);
  const auto requestOutcome = m_interceptor.ModifyBeforeSigning(context);
  auto responseHashes = request->GetResponseValidationHashes();
  EXPECT_EQ(1ul, responseHashes.size());
  EXPECT_EQ("sha512", responseHashes[0].first);
  EXPECT_NE(nullptr, responseHashes[0].second);
  auto bodyStr = Crt::ByteBufFromCString("Memento Mori");
  responseHashes[0].second->Update(bodyStr.buffer, bodyStr.len);
  EXPECT_TRUE(requestOutcome.IsSuccess());
  std::shared_ptr<HttpResponse> response = Aws::MakeShared<StandardHttpResponse>(ALLOC_TAG, request);
  response->AddHeader("x-amz-checksum-sha512", "b3tSwOm8ciYgInIl7qsmQMTRTg6bftRpEBagE0ZWONKrb19uOBf1HZX++/ttF/2n/6MFWBq3O4Msl2oP/XC+pQ==");
  context.SetTransmitResponse(response);
  const auto responseOutcome = m_interceptor.ModifyBeforeDeserialization(context);
  EXPECT_TRUE(responseOutcome.IsSuccess());
}

/*
 * XXHash64 tests
 */

TEST_F(ChecksumInterceptorTest, ChecksumInterceptorShouldAddTrailingXXHash64ChecksumToRequest) {
  MockChecksumRequest modeledRequest{"Memento Mori", "xxhash64", true};
  InterceptorContext context{modeledRequest};
  URI uri{"https://aws.tartarus.com/makoto"};
  std::shared_ptr<HttpRequest> request(CreateHttpRequest(uri, HttpMethod::HTTP_GET, Utils::Stream::DefaultResponseStreamFactoryMethod));
  context.SetTransmitRequest(request);
  const auto outcome = m_interceptor.ModifyBeforeSigning(context);
  EXPECT_TRUE(outcome.IsSuccess());
  EXPECT_EQ("xxhash64", outcome.GetResult()->GetRequestHash().first);
}

TEST_F(ChecksumInterceptorTest, ChecksumInterceptorShouldAddHeaderXXHash64ChecksumToRequest) {
  MockChecksumRequest modeledRequest{"Memento Mori", "xxhash64", false};
  InterceptorContext context{modeledRequest};
  URI uri{"https://aws.tartarus.com/makoto"};
  std::shared_ptr<HttpRequest> request(CreateHttpRequest(uri, HttpMethod::HTTP_GET, Utils::Stream::DefaultResponseStreamFactoryMethod));
  context.SetTransmitRequest(request);
  const auto outcome = m_interceptor.ModifyBeforeSigning(context);
  EXPECT_TRUE(outcome.IsSuccess());
  EXPECT_EQ("", outcome.GetResult()->GetRequestHash().first);
  EXPECT_EQ(nullptr, outcome.GetResult()->GetRequestHash().second);
  EXPECT_EQ(2ul, outcome.GetResult()->GetHeaders().size());
  EXPECT_EQ("aws.tartarus.com", outcome.GetResult()->GetHeaderValue("host"));
  EXPECT_EQ("gpWjYMLp9XA=", outcome.GetResult()->GetHeaderValue("x-amz-checksum-xxhash64"));
}

TEST_F(ChecksumInterceptorTest, ChecksumInterceptorShouldValidateCorrectResponseXXHash64Checksum) {
  Aws::Vector<Aws::String> responseValidationChecksumsToValidate{"xxhash64"};
  MockChecksumRequest modeledRequest{"Memento Mori", "xxhash64", true, true, responseValidationChecksumsToValidate};
  InterceptorContext context{modeledRequest};
  URI uri{"https://aws.tartarus.com/makoto"};
  std::shared_ptr<HttpRequest> request(CreateHttpRequest(uri, HttpMethod::HTTP_GET, Utils::Stream::DefaultResponseStreamFactoryMethod));
  context.SetTransmitRequest(request);
  const auto requestOutcome = m_interceptor.ModifyBeforeSigning(context);
  auto responseHashes = request->GetResponseValidationHashes();
  EXPECT_EQ(1ul, responseHashes.size());
  EXPECT_EQ("xxhash64", responseHashes[0].first);
  EXPECT_NE(nullptr, responseHashes[0].second);
  auto bodyStr = Crt::ByteBufFromCString("Memento Mori");
  responseHashes[0].second->Update(bodyStr.buffer, bodyStr.len);
  EXPECT_TRUE(requestOutcome.IsSuccess());
  std::shared_ptr<HttpResponse> response = Aws::MakeShared<StandardHttpResponse>(ALLOC_TAG, request);
  response->AddHeader("x-amz-checksum-xxhash64", "gpWjYMLp9XA=");
  context.SetTransmitResponse(response);
  const auto responseOutcome = m_interceptor.ModifyBeforeDeserialization(context);
  EXPECT_TRUE(responseOutcome.IsSuccess());
}

/*
 * XXHash3 tests
 */

TEST_F(ChecksumInterceptorTest, ChecksumInterceptorShouldAddTrailingXXHash3ChecksumToRequest) {
  MockChecksumRequest modeledRequest{"TMemento Mori", "xxhash3", true};
  InterceptorContext context{modeledRequest};
  URI uri{"https://aws.tartarus.com/makoto"};
  std::shared_ptr<HttpRequest> request(CreateHttpRequest(uri, HttpMethod::HTTP_GET, Utils::Stream::DefaultResponseStreamFactoryMethod));
  context.SetTransmitRequest(request);
  const auto outcome = m_interceptor.ModifyBeforeSigning(context);
  EXPECT_TRUE(outcome.IsSuccess());
  EXPECT_EQ("xxhash3", outcome.GetResult()->GetRequestHash().first);
}

TEST_F(ChecksumInterceptorTest, ChecksumInterceptorShouldAddHeaderXXHash3ChecksumToRequest) {
  MockChecksumRequest modeledRequest{"Memento Mori", "xxhash3", false};
  InterceptorContext context{modeledRequest};
  URI uri{"https://aws.tartarus.com/makoto"};
  std::shared_ptr<HttpRequest> request(CreateHttpRequest(uri, HttpMethod::HTTP_GET, Utils::Stream::DefaultResponseStreamFactoryMethod));
  context.SetTransmitRequest(request);
  const auto outcome = m_interceptor.ModifyBeforeSigning(context);
  EXPECT_TRUE(outcome.IsSuccess());
  EXPECT_EQ("", outcome.GetResult()->GetRequestHash().first);
  EXPECT_EQ(nullptr, outcome.GetResult()->GetRequestHash().second);
  EXPECT_EQ(2ul, outcome.GetResult()->GetHeaders().size());
  EXPECT_EQ("aws.tartarus.com", outcome.GetResult()->GetHeaderValue("host"));
  EXPECT_EQ("9RrF7krhuOI=", outcome.GetResult()->GetHeaderValue("x-amz-checksum-xxhash3"));
}

TEST_F(ChecksumInterceptorTest, ChecksumInterceptorShouldValidateCorrectResponseXXHash3Checksum) {
  Aws::Vector<Aws::String> responseValidationChecksumsToValidate{"xxhash3"};
  MockChecksumRequest modeledRequest{"Memento Mori", "xxhash3", true, true, responseValidationChecksumsToValidate};
  InterceptorContext context{modeledRequest};
  URI uri{"https://aws.tartarus.com/makoto"};
  std::shared_ptr<HttpRequest> request(CreateHttpRequest(uri, HttpMethod::HTTP_GET, Utils::Stream::DefaultResponseStreamFactoryMethod));
  context.SetTransmitRequest(request);
  const auto requestOutcome = m_interceptor.ModifyBeforeSigning(context);
  auto responseHashes = request->GetResponseValidationHashes();
  EXPECT_EQ(1ul, responseHashes.size());
  EXPECT_EQ("xxhash3", responseHashes[0].first);
  EXPECT_NE(nullptr, responseHashes[0].second);
  auto bodyStr = Crt::ByteBufFromCString("Memento Mori");
  responseHashes[0].second->Update(bodyStr.buffer, bodyStr.len);
  EXPECT_TRUE(requestOutcome.IsSuccess());
  std::shared_ptr<HttpResponse> response = Aws::MakeShared<StandardHttpResponse>(ALLOC_TAG, request);
  response->AddHeader("x-amz-checksum-xxhash3", "9RrF7krhuOI=");
  context.SetTransmitResponse(response);
  const auto responseOutcome = m_interceptor.ModifyBeforeDeserialization(context);
  EXPECT_TRUE(responseOutcome.IsSuccess());
}

/*
 * XXHash128 tests
 */

TEST_F(ChecksumInterceptorTest, ChecksumInterceptorShouldAddTrailingXXHash128ChecksumToRequest) {
  MockChecksumRequest modeledRequest{"Memento Mori", "xxhash128", true};
  InterceptorContext context{modeledRequest};
  URI uri{"https://aws.tartarus.com/makoto"};
  std::shared_ptr<HttpRequest> request(CreateHttpRequest(uri, HttpMethod::HTTP_GET, Utils::Stream::DefaultResponseStreamFactoryMethod));
  context.SetTransmitRequest(request);
  const auto outcome = m_interceptor.ModifyBeforeSigning(context);
  EXPECT_TRUE(outcome.IsSuccess());
  EXPECT_EQ("xxhash128", outcome.GetResult()->GetRequestHash().first);
}

TEST_F(ChecksumInterceptorTest, ChecksumInterceptorShouldAddHeaderXXHash128ChecksumToRequest) {
  MockChecksumRequest modeledRequest{"Memento Mori", "xxhash128", false};
  InterceptorContext context{modeledRequest};
  URI uri{"https://aws.tartarus.com/makoto"};
  std::shared_ptr<HttpRequest> request(CreateHttpRequest(uri, HttpMethod::HTTP_GET, Utils::Stream::DefaultResponseStreamFactoryMethod));
  context.SetTransmitRequest(request);
  const auto outcome = m_interceptor.ModifyBeforeSigning(context);
  EXPECT_TRUE(outcome.IsSuccess());
  EXPECT_EQ("", outcome.GetResult()->GetRequestHash().first);
  EXPECT_EQ(nullptr, outcome.GetResult()->GetRequestHash().second);
  EXPECT_EQ(2ul, outcome.GetResult()->GetHeaders().size());
  EXPECT_EQ("aws.tartarus.com", outcome.GetResult()->GetHeaderValue("host"));
  EXPECT_EQ("AW5DBY+18wW7VuSsFyNFAg==", outcome.GetResult()->GetHeaderValue("x-amz-checksum-xxhash128"));
}

TEST_F(ChecksumInterceptorTest, ChecksumInterceptorShouldValidateCorrectResponseXXHash128Checksum) {
  Aws::Vector<Aws::String> responseValidationChecksumsToValidate{"xxhash128"};
  MockChecksumRequest modeledRequest{"Memento Mori", "xxhash128", true, true, responseValidationChecksumsToValidate};
  InterceptorContext context{modeledRequest};
  URI uri{"https://aws.tartarus.com/makoto"};
  std::shared_ptr<HttpRequest> request(CreateHttpRequest(uri, HttpMethod::HTTP_GET, Utils::Stream::DefaultResponseStreamFactoryMethod));
  context.SetTransmitRequest(request);
  const auto requestOutcome = m_interceptor.ModifyBeforeSigning(context);
  auto responseHashes = request->GetResponseValidationHashes();
  EXPECT_EQ(1ul, responseHashes.size());
  EXPECT_EQ("xxhash128", responseHashes[0].first);
  EXPECT_NE(nullptr, responseHashes[0].second);
  auto bodyStr = Crt::ByteBufFromCString("Memento Mori");
  responseHashes[0].second->Update(bodyStr.buffer, bodyStr.len);
  EXPECT_TRUE(requestOutcome.IsSuccess());
  std::shared_ptr<HttpResponse> response = Aws::MakeShared<StandardHttpResponse>(ALLOC_TAG, request);
  response->AddHeader("x-amz-checksum-xxhash128", "AW5DBY+18wW7VuSsFyNFAg==");
  context.SetTransmitResponse(response);
  const auto responseOutcome = m_interceptor.ModifyBeforeDeserialization(context);
  EXPECT_TRUE(responseOutcome.IsSuccess());
}
