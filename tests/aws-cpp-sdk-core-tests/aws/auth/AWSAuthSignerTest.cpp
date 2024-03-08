/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/http/standard/StandardHttpRequest.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/platform/FileSystem.h>
#include <aws/core/platform/Platform.h>
#include <aws/core/utils/crypto/CRC32.h>
#include <aws/core/utils/crypto/Sha256.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/auth/signing.h>
#include <aws/cal/ecc.h>
#include <aws/common/encoding.h>
#include <fstream>
#include <tuple>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Http;

static const char ALLOC_TAG[] = "AwsAuthV4SignerTest";
static const char EMPTY_STRING_SHA256[] = "e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855";
static const char STREAMING_UNSIGNED_PAYLOAD_TRAILER[] = "STREAMING-UNSIGNED-PAYLOAD-TRAILER";
static const char UNSIGNED_PAYLOAD[] = "UNSIGNED-PAYLOAD";
static const char X_AMZ_SIGNATURE[] = "X-Amz-Signature";

//Simple test fixture that allows us to override the timestamp, and also turn off a header that isn't in the test sets.
class TestableAuthv4Signer : public AWSAuthV4Signer
{
public:
    TestableAuthv4Signer(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider, const char* serviceName, const Aws::String& region,
        AWSAuthV4Signer::PayloadSigningPolicy signPayloads, bool urlEscapePath, Aws::Auth::AWSSigningAlgorithm signingAlgorithm = Aws::Auth::AWSSigningAlgorithm::SIGV4)
        : AWSAuthV4Signer(credentialsProvider, serviceName, region, signPayloads, urlEscapePath, signingAlgorithm) { m_includeSha256HashHeader = false; }

    void SetSigningTimestamp(const DateTime& dateTime) { m_signingTimeStamp = dateTime; }

protected:
    virtual Aws::Utils::DateTime GetSigningTimestamp() const { return m_signingTimeStamp; }

private:
    DateTime m_signingTimeStamp;
};

static std::shared_ptr<Aws::Auth::AWSCredentialsProvider> MakeStaticCredentialsProvider()
{
    return Aws::MakeShared<Aws::Auth::SimpleAWSCredentialsProvider>(ALLOC_TAG, "AKIDEXAMPLE", "wJalrXUtnFEMI/K7MDENG+bPxRfiCYEXAMPLEKEY");
}

static DateTime ParseTestFileDateTime(const char* dateStr)
{
    Aws::StringStream ss;
    ss << dateStr[0] << dateStr[1] << dateStr[2] << dateStr[3] << "-" << dateStr[4] << dateStr[5] << "-" << dateStr[6] << dateStr[7] << "T"
        << dateStr[9] << dateStr[10] << ":" << dateStr[11] << dateStr[12] << ":" << dateStr[13] << dateStr[14] << "Z";
    return DateTime(ss.str().c_str(), DateFormat::ISO_8601);
}

static Standard::StandardHttpRequest ParseHttpRequest(Aws::IOStream& inputStream, DateTime& date, Aws::Http::Scheme scheme)
{
    Aws::String methodLine;
    std::getline(inputStream, methodLine);
    auto firstSpaceIter = methodLine.find_first_of(' ');
    auto secondSpaceIter = methodLine.find(' ', firstSpaceIter + 1);
    Aws::String methodStr = methodLine.substr(0, firstSpaceIter);
    Aws::String pathStr = methodLine.substr(firstSpaceIter + 1, secondSpaceIter - firstSpaceIter - 1);
    Aws::String hostStr;
    HeaderValueCollection headers;
    std::shared_ptr<Aws::IOStream> bodyStream = Aws::MakeShared<Aws::StringStream>("AuthSignerTest");

    Aws::String pairLine;
    Aws::String currentHeader;

    while (std::getline(inputStream, pairLine))
    {
        if(!pairLine.empty())
        {
            //if it's not form parameters, parse headers.
            if(pairLine.find('=') == std::string::npos)
            {
                auto pair = StringUtils::Split(pairLine, ':');
                if (pair[0] == "Host")
                {
                    hostStr = pair[1];
                }
                else if (pair[0] == "X-Amz-Date")
                {
                    date = ParseTestFileDateTime(pair[1].c_str());
                }
                else
                {
                    if (pair.size() == 2)
                    {
                        currentHeader = pair[0].c_str();

                        if (headers.find(currentHeader) == headers.end())
                        {
                            headers[currentHeader] = pair[1].c_str();
                        }
                        else
                        {
                            headers[currentHeader] += ",";
                            headers[currentHeader] += pair[1].c_str();
                        }
                    }
                    else
                    {
                        headers[currentHeader] += "\n";
                        headers[currentHeader] += pair[0].c_str();
                    }
                }
            }
            //parse content-body
            else
            {
                auto pair = StringUtils::Split(pairLine, '=');
                *bodyStream << StringUtils::URLEncode(pair[0].c_str()) << StringUtils::URLEncode(pair[1].c_str()) << "&" << std::endl;
            }
        }
    }

    auto pathAndQuery = StringUtils::Split(pathStr, '?');
    auto pathOnly = pathAndQuery[0];
    URI uri;
    uri.SetScheme(scheme);
    uri.SetAuthority(hostStr);
    uri.SetPath(pathOnly);

    if (pathAndQuery.size() == 2)
    {
        auto params = StringUtils::Split(pathAndQuery[1], '&');
        for (auto& param : params)
        {
            auto keyValue = StringUtils::Split(param, '=');
            if (keyValue.size() == 2)
            {
                uri.AddQueryStringParameter(keyValue[0].c_str(), keyValue[1]);
            }
        }
    }

    HttpMethod method = HttpMethod::HTTP_GET;
    if (methodStr == "GET")
    {
        method = HttpMethod::HTTP_GET;
    }
    else if (methodStr == "POST")
    {
        method = HttpMethod::HTTP_POST;
    }
    else if (methodStr == "DELETE")
    {
        method = HttpMethod::HTTP_DELETE;
    }
    else if (methodStr == "PUT")
    {
        method = HttpMethod::HTTP_PUT;
    }
    else if (methodStr == "HEAD")
    {
        method = HttpMethod::HTTP_HEAD;
    }

    Standard::StandardHttpRequest request(uri, method);
    for (auto& header : headers)
    {
        request.SetHeaderValue(header.first, header.second);
    }

    request.AddContentBody(bodyStream);
    return request;
}

static Aws::String MakeSigV4ResourceFilePath(const Aws::String& testName, const Aws::String& fileSuffix)
{
    Aws::StringStream fileName;
    #ifdef __ANDROID__
        fileName << Aws::Platform::GetCacheDirectory() << "resources" << Aws::FileSystem::PATH_DELIM;
    #else
        fileName << "./aws4_testsuite/aws4_testsuite/";
    #endif

    fileName << testName << Aws::FileSystem::PATH_DELIM << testName << "." << fileSuffix;

    return fileName.str();
}

static void VerifyV4ASignature(const Aws::String& stringToSign, const Aws::String& signature, const Aws::String& eccPublicKeyX, const Aws::String& eccPublicKeyY)
{
    Aws::Utils::ByteBuffer publicKeyXBuf = HashingUtils::HexDecode(eccPublicKeyX);
    Aws::Utils::ByteBuffer publicKeyYBuf = HashingUtils::HexDecode(eccPublicKeyY);
    aws_byte_cursor pub_x_cursor;
    pub_x_cursor.len = publicKeyXBuf.GetLength();
    pub_x_cursor.ptr = static_cast<uint8_t*>(publicKeyXBuf.GetUnderlyingData());
    aws_byte_cursor pub_y_cursor;
    pub_y_cursor.len = publicKeyYBuf.GetLength();
    pub_y_cursor.ptr = static_cast<uint8_t*>(publicKeyYBuf.GetUnderlyingData());
    aws_ecc_key_pair* verification_key = aws_ecc_key_pair_new_from_public_key(Aws::get_aws_allocator(), AWS_CAL_ECDSA_P256, &pub_x_cursor, &pub_y_cursor);
    aws_byte_cursor string_to_sign_cursor = Aws::Crt::ByteCursorFromCString(stringToSign.c_str());
    aws_byte_cursor signature_cursor = Aws::Crt::ByteCursorFromCString(signature.c_str());
    ASSERT_EQ(AWS_OP_SUCCESS, aws_validate_v4a_authorization_value(Aws::get_aws_allocator(), verification_key, string_to_sign_cursor, signature_cursor));
    aws_ecc_key_pair_release(verification_key);
}

static void AssertSigV4(const char* testCaseName)
{
    Aws::String requestFileName = MakeSigV4ResourceFilePath(testCaseName, "req");
    Aws::FStream requestFile(requestFileName.c_str(), std::ios::in);
    ASSERT_TRUE(requestFile.good());

    Aws::String expectedSignatureFileName = MakeSigV4ResourceFilePath(testCaseName, "sigv4.authz");
    Aws::FStream signatureFile(expectedSignatureFileName.c_str(), std::ios::in);
    ASSERT_TRUE(signatureFile.good());

    DateTime timestampForSigner;
    std::shared_ptr<Aws::Auth::AWSCredentialsProvider> credProvider = MakeStaticCredentialsProvider();

    auto httpRequestToMake = ParseHttpRequest(requestFile, timestampForSigner, Scheme::HTTP);
    TestableAuthv4Signer signer(credProvider, "service", "us-east-1", AWSAuthV4Signer::PayloadSigningPolicy::Never, false);

    signer.SetSigningTimestamp(timestampForSigner);
    bool successfullySigned = signer.SignRequest(httpRequestToMake);
    ASSERT_TRUE(successfullySigned);

    Aws::String expectedSignature;
    std::getline(signatureFile, expectedSignature);

    ASSERT_STREQ(expectedSignature.c_str(), httpRequestToMake.GetAwsAuthorization().c_str());

    // Override signer's region
    requestFile.clear();
    requestFile.seekg(0, std::ios::beg);
    httpRequestToMake = ParseHttpRequest(requestFile, timestampForSigner, Scheme::HTTP);
    TestableAuthv4Signer signerInUSWest2(credProvider, "service", "us-west-2", AWSAuthV4Signer::PayloadSigningPolicy::Never, false);
    signerInUSWest2.SetSigningTimestamp(timestampForSigner);
    successfullySigned = signerInUSWest2.SignRequest(httpRequestToMake, "us-east-1", true);
    ASSERT_TRUE(successfullySigned);
    ASSERT_STREQ(expectedSignature.c_str(), httpRequestToMake.GetAwsAuthorization().c_str());

    // Using signer's default region
    requestFile.clear();
    requestFile.seekg(0, std::ios::beg);
    httpRequestToMake = ParseHttpRequest(requestFile, timestampForSigner, Scheme::HTTP);
    successfullySigned = signerInUSWest2.SignRequest(httpRequestToMake);
    ASSERT_TRUE(successfullySigned);
    ASSERT_STRNE(expectedSignature.c_str(), httpRequestToMake.GetAwsAuthorization().c_str());

    // Next, testing presign
    requestFile.clear();
    requestFile.seekg(0, std::ios::beg);
    httpRequestToMake = ParseHttpRequest(requestFile, timestampForSigner, Scheme::HTTP);

    Aws::String signedRequestFileName = MakeSigV4ResourceFilePath(testCaseName, "sigv4.query.sreq");
    Aws::FStream signedRequestFile(signedRequestFileName.c_str(), std::ios::in);
    ASSERT_TRUE(signedRequestFile.good());
    Aws::String expectedUriPathAndQueryString;
    std::getline(signedRequestFile, expectedUriPathAndQueryString);

    successfullySigned = signer.PresignRequest(httpRequestToMake, 3600);
    ASSERT_TRUE(successfullySigned);
    ASSERT_NE(Aws::String::npos, expectedUriPathAndQueryString.find(httpRequestToMake.GetUri().GetPath()));
    ASSERT_NE(Aws::String::npos, expectedUriPathAndQueryString.find(httpRequestToMake.GetUri().GetQueryString()));

}

static void AssertSigV4a(const char* testCaseName)
{
    Aws::String requestFileName = MakeSigV4ResourceFilePath(testCaseName, "req");
    Aws::FStream requestFile(requestFileName.c_str(), std::ios::in);
    ASSERT_TRUE(requestFile.good());

    Aws::String expectedAuthorizationFileName = MakeSigV4ResourceFilePath(testCaseName, "sigv4a.authz");
    Aws::FStream AuthorizationFile(expectedAuthorizationFileName.c_str(), std::ios::in);
    ASSERT_TRUE(AuthorizationFile.good());

    DateTime timestampForSigner;
    std::shared_ptr<Aws::Auth::AWSCredentialsProvider> credProvider = MakeStaticCredentialsProvider();

    auto httpRequestToMake = ParseHttpRequest(requestFile, timestampForSigner, Scheme::HTTP);
    TestableAuthv4Signer signer(credProvider, "service", "us-east-1", AWSAuthV4Signer::PayloadSigningPolicy::Never, false, Aws::Auth::AWSSigningAlgorithm::ASYMMETRIC_SIGV4);

    signer.SetSigningTimestamp(timestampForSigner);
    bool successfullySigned = signer.SignRequest(httpRequestToMake);
    ASSERT_TRUE(successfullySigned);

    // The signature for sigv4a is non deterministic.
    Aws::String expectedAuthorization;
    std::getline(AuthorizationFile, expectedAuthorization);
    size_t signatureIndex = expectedAuthorization.find("Signature=");
    EXPECT_NE(Aws::String::npos, signatureIndex);
    Aws::String partialExpectedAuthorization = expectedAuthorization.substr(0, signatureIndex);
    Aws::String authorization = httpRequestToMake.GetAwsAuthorization();
    ASSERT_EQ(0u, authorization.find(partialExpectedAuthorization));

    Aws::String eccPublicKeyX = "b6618f6a65740a99e650b33b6b4b5bd0d43b176d721a3edfea7e7d2d56d936b1";
    Aws::String eccPublicKeyY = "865ed22a7eadc9c5cb9d2cbaca1b3699139fedc5043dc6661864218330c8e518";

    Aws::String expectedStringToSignFileName = MakeSigV4ResourceFilePath(testCaseName, "sigv4a.header.sts");
    Aws::FStream stringToSignFile(expectedStringToSignFileName.c_str(), std::ios::in);
    ASSERT_TRUE(stringToSignFile.good());
    char buf[1024];
    stringToSignFile.read(buf, sizeof(buf));
    Aws::String stringToSign(buf, static_cast<unsigned>(stringToSignFile.gcount()));

    signatureIndex = authorization.find("Signature=");
    EXPECT_NE(Aws::String::npos, signatureIndex);
    Aws::String signature = authorization.substr(signatureIndex + 10 /* len("Signature=") */);

    VerifyV4ASignature(stringToSign, signature, eccPublicKeyX, eccPublicKeyY);

    // Next, testing presign
    requestFile.clear();
    requestFile.seekg(0, std::ios::beg);
    httpRequestToMake = ParseHttpRequest(requestFile, timestampForSigner, Scheme::HTTP);

    Aws::String signedRequestFileName = MakeSigV4ResourceFilePath(testCaseName, "sigv4a.query.sreq");
    Aws::FStream signedRequestFile(signedRequestFileName.c_str(), std::ios::in);
    ASSERT_TRUE(signedRequestFile.good());
    Aws::String expectedUriPathAndQueryString;
    std::getline(signedRequestFile, expectedUriPathAndQueryString);

    successfullySigned = signer.PresignRequest(httpRequestToMake, 3600);
    ASSERT_TRUE(successfullySigned);
    ASSERT_NE(Aws::String::npos, expectedUriPathAndQueryString.find(httpRequestToMake.GetUri().GetPath()));
    for (const auto& entry : httpRequestToMake.GetUri().GetQueryStringParameters(false))
    {
        if (entry.first == X_AMZ_SIGNATURE)
        {
            expectedStringToSignFileName = MakeSigV4ResourceFilePath(testCaseName, "sigv4a.query.sts");
            Aws::FStream stringToPresignFile(expectedStringToSignFileName.c_str(), std::ios::in);
            ASSERT_TRUE(stringToPresignFile.good());
            stringToPresignFile.read(buf, sizeof(buf));
            stringToSign = Aws::String(buf, static_cast<unsigned>(stringToPresignFile.gcount()));
            VerifyV4ASignature(stringToSign, entry.second, eccPublicKeyX, eccPublicKeyY);
        }
        else
        {
            Aws::String query = entry.first + "=" + entry.second;
            ASSERT_NE(Aws::String::npos, expectedUriPathAndQueryString.find(query));
        }
    }
}

/**
 * Construct a standard http request object from local test suite file specified by testCaseName.
 * timestamp is parsed from the file and will be passed to signer as signing timestamp,
 * scheme will determine if secure http will be used.
 */
static Aws::Http::Standard::StandardHttpRequest GetHttpRequestFromTestCase(const char* testCaseName, DateTime& timestampForSigner, Aws::Http::Scheme scheme)
{
    Aws::String requestFileName = MakeSigV4ResourceFilePath(testCaseName, "req");
    Aws::FStream requestFile(requestFileName.c_str(), std::ios::in);
    EXPECT_TRUE(requestFile.good());
    return ParseHttpRequest(requestFile, timestampForSigner, scheme);
}

// Read in signature file based on payload signature identification
static Aws::String GetHttpRequestSignatureFromTestCase(const char* testCaseName, bool signPayload)
{
    Aws::String expectedSignatureFileName = MakeSigV4ResourceFilePath(testCaseName, signPayload ? "sigv4.signedPayload" : "sigv4.unsignedPayload");
    Aws::FStream signatureFile(expectedSignatureFileName.c_str(), std::ios::in);
    EXPECT_TRUE((signatureFile.good()));
    Aws::String signature;
    std::getline(signatureFile, signature);
    return signature;
}

/**
 * Payload Signing Matrix
 * +-------------+-------------------+---------------------+------------------+
 * | SignPayload |     Never         |      Always         | RequestDependent |
 * +--------------------------------------------------------------------------+
 * |    HTTP     |       Y           |          Y          |       Y          |
 * +--------------------------------------------------------------------------+
 * |    HTTPS    |       N           |          Y          |Depends on Request|
 * +-------------+-------------------+---------------------+------------------+
 */
static bool SignPayload(AWSAuthV4Signer::PayloadSigningPolicy policy, Aws::Http::Scheme scheme, bool requestSignPayload/*sign flag in request*/)
{
    if (scheme == Aws::Http::Scheme::HTTPS)
    {
        if (policy == AWSAuthV4Signer::PayloadSigningPolicy::Never || (policy == AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent && requestSignPayload == false))
        {
            return false;
        }
    }
    return true;
}

static void RunTestCaseWithPayload(const char* testCaseName, AWSAuthV4Signer::PayloadSigningPolicy policy, Aws::Http::Scheme scheme, bool requestSignPayload, const Aws::String& requestHash)
{
    DateTime timestampForSigner;
    std::shared_ptr<Aws::Auth::AWSCredentialsProvider> credProvider = MakeStaticCredentialsProvider();
    TestableAuthv4Signer signer(credProvider, "service", "us-east-1", policy, false);
    bool signPayload = SignPayload(policy, scheme, requestSignPayload);
    auto requestToMake = GetHttpRequestFromTestCase(testCaseName, timestampForSigner, scheme);

    // simulate what AWSClient does if client chooses a specific request hash type
    if (requestHash == "crc32") {
        requestToMake.SetRequestHash("crc32", Aws::MakeShared<Crypto::CRC32>("crc32"));
    } else if (requestHash == "sha256") {
        requestToMake.SetRequestHash("sha256", Aws::MakeShared<Crypto::Sha256>("sha256"));
    } else {
        ASSERT_STREQ("none", requestHash.c_str());
    }

    signer.SetSigningTimestamp(timestampForSigner);
    ASSERT_TRUE(signer.SignRequest(requestToMake, requestSignPayload));
    if (requestHash == "none") {
        ASSERT_STREQ(GetHttpRequestSignatureFromTestCase(testCaseName, signPayload).c_str(), requestToMake.GetAwsAuthorization().c_str());
    }

    TestableAuthv4Signer signerV4a(credProvider, "service", "us-east-1", policy, false, Aws::Auth::AWSSigningAlgorithm::ASYMMETRIC_SIGV4);
    requestToMake = GetHttpRequestFromTestCase(testCaseName, timestampForSigner, scheme);
    signerV4a.SetSigningTimestamp(timestampForSigner);
    ASSERT_TRUE(signerV4a.SignRequest(requestToMake, requestSignPayload));

    Aws::String expectedAuthorizationFileName = MakeSigV4ResourceFilePath(testCaseName, "sigv4a.authz");
    Aws::FStream AuthorizationFile(expectedAuthorizationFileName.c_str(), std::ios::in);
    ASSERT_TRUE(AuthorizationFile.good());
    Aws::String expectedAuthorization;
    std::getline(AuthorizationFile, expectedAuthorization);
    size_t signatureIndex = expectedAuthorization.find("Signature=");
    EXPECT_NE(Aws::String::npos, signatureIndex);
    Aws::String partialExpectedAuthorization = expectedAuthorization.substr(0, signatureIndex);
    Aws::String authorization = requestToMake.GetAwsAuthorization();
    ASSERT_EQ(0u, authorization.find(partialExpectedAuthorization));

    Aws::String eccPublicKeyX = "b6618f6a65740a99e650b33b6b4b5bd0d43b176d721a3edfea7e7d2d56d936b1";
    Aws::String eccPublicKeyY = "865ed22a7eadc9c5cb9d2cbaca1b3699139fedc5043dc6661864218330c8e518";

    Aws::String fileSuffix = signPayload ? "sigv4a.header.sts" : "sigv4a.sts.unsignedPayload";
    Aws::String expectedStringToSignFileName = MakeSigV4ResourceFilePath(testCaseName, fileSuffix);
    Aws::FStream stringToSignFile(expectedStringToSignFileName.c_str(), std::ios::in);
    ASSERT_TRUE(stringToSignFile.good());
    char buf[1024];
    stringToSignFile.read(buf, sizeof(buf));
    Aws::String stringToSign(buf, static_cast<unsigned>(stringToSignFile.gcount()));

    signatureIndex = authorization.find("Signature=");
    EXPECT_NE(Aws::String::npos, signatureIndex);
    Aws::String signature = authorization.substr(signatureIndex + 10 /* len("Signature=") */);

    VerifyV4ASignature(stringToSign, signature, eccPublicKeyX, eccPublicKeyY);
}

static void RunTestCaseWithoutPayload(AWSAuthV4Signer::PayloadSigningPolicy policy, Aws::Http::Scheme scheme, bool requestSignPayload, const Aws::String& requestHash)
{
    bool signPayload = SignPayload(policy, scheme, requestSignPayload);
    auto request = Standard::StandardHttpRequest(scheme == Aws::Http::Scheme::HTTP ? "http://test.com/query?key=val" : "https://test.com/query?key=val", Aws::Http::HttpMethod::HTTP_GET);

    const char *expectedContentHashHeader = 
        signPayload ? EMPTY_STRING_SHA256 : (requestHash == "none") ? UNSIGNED_PAYLOAD : STREAMING_UNSIGNED_PAYLOAD_TRAILER;

    if (requestHash == "crc32") {
        request.SetRequestHash("crc32", Aws::MakeShared<Crypto::CRC32>("crc32"));
    } else if (requestHash == "sha256") {
        request.SetRequestHash("sha256", Aws::MakeShared<Crypto::Sha256>("sha256"));
    } else {
        ASSERT_STREQ("none", requestHash.c_str());
    }

    std::shared_ptr<Aws::Auth::AWSCredentialsProvider> credProvider = MakeStaticCredentialsProvider();
    AWSAuthV4Signer signer(credProvider, "service", "us-east-1", policy, false);
    ASSERT_TRUE(signer.SignRequest(request, requestSignPayload));
    ASSERT_STREQ(expectedContentHashHeader, request.GetHeaderValue("x-amz-content-sha256").c_str());

    AWSAuthV4Signer signerV4a(credProvider, "service", "us-east-1", policy, false, Aws::Auth::AWSSigningAlgorithm::ASYMMETRIC_SIGV4);
    ASSERT_TRUE(signer.SignRequest(request, requestSignPayload));
    ASSERT_STREQ(expectedContentHashHeader, request.GetHeaderValue("x-amz-content-sha256").c_str());
}

class AWSAuthSignerEmptyTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(AWSAuthSignerEmptyTest, HeadersWithEmptyValues)
{
    auto request = Standard::StandardHttpRequest("https://test.com/query?key=val", Aws::Http::HttpMethod::HTTP_GET);
    request.SetHeaderValue("same_key", "    ");
    request.SetHeaderValue("same_key", "");
    request.SetHeaderValue("another", "");
    request.SetHeaderValue("yet_another", " \t\n ");
    request.SetHeaderValue("   ", " ");

    std::shared_ptr<Aws::Auth::AWSCredentialsProvider> credProvider = MakeStaticCredentialsProvider();
    AWSAuthV4Signer signer(credProvider, "service", "us-east-1", AWSAuthV4Signer::PayloadSigningPolicy::Never, false);

    ASSERT_TRUE(signer.SignRequest(request, false/*signPayload*/));
    ASSERT_STREQ(UNSIGNED_PAYLOAD, request.GetHeaderValue("x-amz-content-sha256").c_str());
}

class AWSAuthSignerTestSuite
  : public Aws::Testing::AwsCppSdkGTestSuite,
    public ::testing::WithParamInterface<
        std::tuple<
            AWSAuthV4Signer::PayloadSigningPolicy,
            Aws::Http::Scheme,
            bool /* requestSignPayload */,
            Aws::String /* requestHash */
        >
    >
{
};

TEST_P(AWSAuthSignerTestSuite, Signing)
{
    auto params = GetParam();
    RunTestCaseWithoutPayload(std::get<0>(params), std::get<1>(params), std::get<2>(params), std::get<3>(params));
    RunTestCaseWithPayload("post-x-www-form-urlencoded", std::get<0>(params), std::get<1>(params), std::get<2>(params), std::get<3>(params));
}

INSTANTIATE_TEST_SUITE_P(
    AWSAuthSignerTest,
    AWSAuthSignerTestSuite,
    ::testing::Combine(
        // welcome to the matrix
        ::testing::Values(
            AWSAuthV4Signer::PayloadSigningPolicy::Never,
            AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent,
            AWSAuthV4Signer::PayloadSigningPolicy::Always
        ),
        ::testing::Values(
            Aws::Http::Scheme::HTTP,
            Aws::Http::Scheme::HTTPS
        ),
        ::testing::Values(
            true,
            false
        ),
        ::testing::Values(
            "none",
            "crc32",
            "sha256"    // has a special case to avoid double-hashing the payload
        )
    )
);

class AWSAuthV4SignerTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(AWSAuthV4SignerTest, GetHeaderKeyDuplicate)
{
    AssertSigV4("get-header-key-duplicate");
}

TEST_F(AWSAuthV4SignerTest, GetHeaderValueMultiline)
{
    AssertSigV4("get-header-value-multiline");
}

TEST_F(AWSAuthV4SignerTest, GetHeaderValueOrder)
{
    AssertSigV4("get-header-value-order");
}

TEST_F(AWSAuthV4SignerTest, GetHeaderValueTrim)
{
    AssertSigV4("get-header-value-trim");
}

TEST_F(AWSAuthV4SignerTest, GetUnreserved)
{
    AssertSigV4("get-unreserved");
}

TEST_F(AWSAuthV4SignerTest, GetUtf8)
{
    AssertSigV4("get-utf8");
}

TEST_F(AWSAuthV4SignerTest, GetVanilla)
{
    AssertSigV4("get-vanilla");
}

TEST_F(AWSAuthV4SignerTest, GetVanillaEmptyQueryKey)
{
    AssertSigV4("get-vanilla-empty-query-key");
}

TEST_F(AWSAuthV4SignerTest, GetVanillaQuery)
{
    AssertSigV4("get-vanilla-query");
}

TEST_F(AWSAuthV4SignerTest, GetVanillaQueryOrderKeyCase)
{
    AssertSigV4("get-vanilla-query-order-key-case");
}

TEST_F(AWSAuthV4SignerTest, GetVanillaQueryUnreserved)
{
    AssertSigV4("get-vanilla-query-unreserved");
}

TEST_F(AWSAuthV4SignerTest, GetVanillaUtf8Query)
{
    AssertSigV4("get-vanilla-utf8-query");
}

TEST_F(AWSAuthV4SignerTest, PostHeaderKeyCase)
{
    AssertSigV4("post-header-key-case");
}

TEST_F(AWSAuthV4SignerTest, PostHeaderKeySort)
{
    AssertSigV4("post-header-key-sort");
}

TEST_F(AWSAuthV4SignerTest, PostHeaderValueCase)
{
    AssertSigV4("post-header-value-case");
}

TEST_F(AWSAuthV4SignerTest, PostVanilla)
{
    AssertSigV4("post-vanilla");
}

TEST_F(AWSAuthV4SignerTest, PostVanillaEmptyQueryValue)
{
    AssertSigV4("post-vanilla-empty-query-value");
}

TEST_F(AWSAuthV4SignerTest, PostVanillaQuery)
{
    AssertSigV4("post-vanilla-query");
}

TEST_F(AWSAuthV4SignerTest, PostXWWWFormURLEncoded)
{
    AssertSigV4("post-x-www-form-urlencoded");
}

class AWSAuthV4ASignerTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(AWSAuthV4ASignerTest, GetHeaderKeyDuplicate)
{
    AssertSigV4a("get-header-key-duplicate");
}

TEST_F(AWSAuthV4ASignerTest, GetHeaderValueMultiline)
{
    AssertSigV4a("get-header-value-multiline");
}

TEST_F(AWSAuthV4ASignerTest, GetHeaderValueOrder)
{
    AssertSigV4a("get-header-value-order");
}

TEST_F(AWSAuthV4ASignerTest, GetHeaderValueTrim)
{
    AssertSigV4a("get-header-value-trim");
}

TEST_F(AWSAuthV4ASignerTest, GetUnreserved)
{
    AssertSigV4a("get-unreserved");
}

TEST_F(AWSAuthV4ASignerTest, GetUtf8)
{
    AssertSigV4a("get-utf8");
}

TEST_F(AWSAuthV4ASignerTest, GetVanilla)
{
    AssertSigV4a("get-vanilla");
}

TEST_F(AWSAuthV4ASignerTest, GetVanillaEmptyQueryKey)
{
    AssertSigV4a("get-vanilla-empty-query-key");
}

TEST_F(AWSAuthV4ASignerTest, GetVanillaQuery)
{
    AssertSigV4a("get-vanilla-query");
}

TEST_F(AWSAuthV4ASignerTest, GetVanillaQueryOrderKeyCase)
{
    AssertSigV4a("get-vanilla-query-order-key-case");
}

TEST_F(AWSAuthV4ASignerTest, GetVanillaQueryUnreserved)
{
    AssertSigV4a("get-vanilla-query-unreserved");
}

TEST_F(AWSAuthV4ASignerTest, GetVanillaUtf8Query)
{
    AssertSigV4a("get-vanilla-utf8-query");
}

TEST_F(AWSAuthV4ASignerTest, PostHeaderKeyCase)
{
    AssertSigV4a("post-header-key-case");
}

TEST_F(AWSAuthV4ASignerTest, PostHeaderKeySort)
{
    AssertSigV4a("post-header-key-sort");
}

TEST_F(AWSAuthV4ASignerTest, PostHeaderValueCase)
{
    AssertSigV4a("post-header-value-case");
}

TEST_F(AWSAuthV4ASignerTest, PostVanilla)
{
    AssertSigV4a("post-vanilla");
}

TEST_F(AWSAuthV4ASignerTest, PostVanillaEmptyQueryValue)
{
    AssertSigV4a("post-vanilla-empty-query-value");
}

TEST_F(AWSAuthV4ASignerTest, PostVanillaQuery)
{
    AssertSigV4a("post-vanilla-query");
}

TEST_F(AWSAuthV4ASignerTest, PostXWWWFormURLEncoded)
{
    AssertSigV4a("post-x-www-form-urlencoded");
}
