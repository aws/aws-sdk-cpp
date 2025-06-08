/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/utils/crypto/Cipher.h>
#include <aws/core/utils/crypto/Factories.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/ratelimiter/DefaultRateLimiter.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/threading/PooledThreadExecutor.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/platform/Platform.h>
#include <aws/s3-crt/S3CrtClient.h>
#include <aws/s3-crt/model/DeleteBucketRequest.h>
#include <aws/s3-crt/model/CreateBucketRequest.h>
#include <aws/s3-crt/model/HeadBucketRequest.h>
#include <aws/s3-crt/model/PutObjectRequest.h>
#include <aws/s3-crt/model/CopyObjectRequest.h>
#include <aws/s3-crt/model/GetObjectRequest.h>
#include <aws/s3-crt/model/DeleteObjectRequest.h>
#include <aws/s3-crt/model/HeadObjectRequest.h>
#include <aws/s3-crt/model/CreateMultipartUploadRequest.h>
#include <aws/s3-crt/model/UploadPartRequest.h>
#include <aws/s3-crt/model/CompleteMultipartUploadRequest.h>
#include <aws/s3-crt/model/ListObjectsRequest.h>
#include <aws/s3-crt/model/GetBucketLocationRequest.h>
#include <aws/s3-crt/model/SelectObjectContentRequest.h>
#include <aws/s3-crt/model/Tagging.h>
#include <aws/s3-crt/model/PutBucketTaggingRequest.h>
#include <aws/s3-crt/ClientConfiguration.h>
#include <aws/testing/ProxyConfig.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/testing/TestingEnvironment.h>
#include <fstream>

#ifdef _WIN32
#pragma warning(disable: 4127)
#endif //_WIN32

#include <aws/core/http/standard/StandardHttpRequest.h>
#include <aws/core/monitoring/DefaultMonitoring.h>
#include <aws/core/monitoring/CoreMetrics.h>

using namespace Aws;
using namespace Aws::Http::Standard;
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;
using namespace Aws::S3Crt;
using namespace Aws::S3Crt::Model;
using namespace Aws::Utils;

namespace
{
    static std::string BASE_CREATE_BUCKET_TEST_NAME = "createbuckettest";
    static std::string BASE_DNS_UNFRIENDLY_TEST_NAME = "dns.unfriendly";
    static std::string BASE_LOCATION_BUCKET_TEST_NAME = "locbuckettest";
    static std::string BASE_OBJECTS_BUCKET_NAME = "objecttest";
    static std::string BASE_OBJECTS_DEFAULT_CTOR_BUCKET_NAME = "ctortest";
    static std::string BASE_PUT_OBJECTS_BUCKET_NAME = "putobjecttest";
    static std::string BASE_PUT_WEIRD_CHARSETS_OBJECTS_BUCKET_NAME = "charsetstest";
    static std::string BASE_PUT_OBJECTS_PRESIGNED_URLS_BUCKET_NAME = "presignedtest";
    static std::string BASE_PUT_MULTIPART_BUCKET_NAME = "multiparttest";
    static std::string BASE_ERRORS_TESTING_BUCKET = "errorstest";
    static std::string BASE_EVENT_STREAM_TEST_BUCKET_NAME = "eventstream";
    static std::string BASE_EVENT_STREAM_LARGE_FILE_TEST_BUCKET_NAME = "largeeventstream";
    static std::string BASE_EVENT_STREAM_ERRORS_IN_EVENT_TEST_BUCKET_NAME = "errorsinevent";
    static std::string BASE_CHECKSUMS_BUCKET_NAME = "checksums-crt";
    static const char* ALLOCATION_TAG = "BucketAndObjectOperationTest";
    static const char* TEST_OBJ_KEY = "TestObjectKey";
    static const char* TEST_NOT_MODIFIED_OBJ_KEY = "TestNotModifiedObjectKey";
    static const char* TEST_DNS_UNFRIENDLY_OBJ_KEY = "WhySoHostile";
    static const char* TEST_EVENT_STREAM_OBJ_KEY = "TestEventStream.csv";
    //windows won't let you hard code unicode strings in a source file and assign them to a char*. Every other compiler does and I need to test this.
    //to get around this, this string is url encoded version of "TestUnicode中国Key". At test time, we'll convert it to the unicode string
    static const char* URLENCODED_UNICODE_KEY = "TestUnicode%E4%B8%AD%E5%9B%BDKey";
    static const char* URIESCAPE_KEY = "Esc a=pe+Me$";
    static const char* TEST_BUCKET_TAG = "IntegrationTestResource";

    static const int TIMEOUT_MAX = 20;

    void AppendUUID(std::string& bucketName)
    {
        using Aws::Utils::UUID;
        Aws::StringStream s;
        s << bucketName << "-" << static_cast<Aws::String>(UUID::RandomUUID());
        bucketName = Aws::Utils::StringUtils::ToLower(s.str().c_str()).c_str();
    }

    void EnsureUniqueBucketNames()
    {
        Aws::Vector<std::reference_wrapper<std::string>> TEST_BUCKETS =
            {
              std::ref(BASE_CREATE_BUCKET_TEST_NAME),
              std::ref(BASE_DNS_UNFRIENDLY_TEST_NAME),
              std::ref(BASE_LOCATION_BUCKET_TEST_NAME),
              std::ref(BASE_OBJECTS_BUCKET_NAME),
              std::ref(BASE_OBJECTS_DEFAULT_CTOR_BUCKET_NAME),
              std::ref(BASE_PUT_OBJECTS_BUCKET_NAME),
              std::ref(BASE_PUT_WEIRD_CHARSETS_OBJECTS_BUCKET_NAME),
              std::ref(BASE_PUT_OBJECTS_PRESIGNED_URLS_BUCKET_NAME),
              std::ref(BASE_PUT_MULTIPART_BUCKET_NAME),
              std::ref(BASE_ERRORS_TESTING_BUCKET),
              std::ref(BASE_EVENT_STREAM_TEST_BUCKET_NAME),
              std::ref(BASE_EVENT_STREAM_LARGE_FILE_TEST_BUCKET_NAME),
              std::ref(BASE_EVENT_STREAM_ERRORS_IN_EVENT_TEST_BUCKET_NAME),
              std::ref(BASE_CHECKSUMS_BUCKET_NAME)
            };

        for (auto& testBucketName : TEST_BUCKETS)
        {
            AppendUUID(testBucketName);
            SCOPED_TRACE(Aws::String("EnsureUniqueBucketNames: ") + testBucketName.get().c_str());
        }
    }

    class RetryFiveTimesRetryStrategy: public Aws::Client::RetryStrategy
    {
    public:
        bool ShouldRetry(const AWSError<CoreErrors>&, long attemptedRetries) const override { return attemptedRetries < 5; }
        long CalculateDelayBeforeNextRetry(const AWSError<CoreErrors>&, long) const override { return 0; }
    };

    class BucketAndObjectOperationTest : public ::testing::Test
    {
    public:
        static std::shared_ptr<S3CrtClient> Client;
        static std::shared_ptr<S3CrtClient> oregonClient;
        static std::shared_ptr<HttpClient> m_HttpClient;

    protected:

        static void SetUpTestCase()
        {
            EnsureUniqueBucketNames();
        }

        static void TearDownTestCase()
        {
            DeleteBucket(CalculateBucketName(BASE_CREATE_BUCKET_TEST_NAME.c_str()));
            DeleteBucket(CalculateBucketName(BASE_DNS_UNFRIENDLY_TEST_NAME.c_str()));
            DeleteBucket(CalculateBucketName(BASE_LOCATION_BUCKET_TEST_NAME.c_str()));
            DeleteBucket(CalculateBucketName(BASE_OBJECTS_BUCKET_NAME.c_str()));
            DeleteBucket(CalculateBucketName(BASE_OBJECTS_DEFAULT_CTOR_BUCKET_NAME.c_str()));
            DeleteBucket(CalculateBucketName(BASE_PUT_OBJECTS_BUCKET_NAME.c_str()));
            DeleteBucket(CalculateBucketName(BASE_PUT_OBJECTS_PRESIGNED_URLS_BUCKET_NAME.c_str()));
            DeleteBucket(CalculateBucketName(BASE_PUT_MULTIPART_BUCKET_NAME.c_str()));
            DeleteBucket(CalculateBucketName(BASE_ERRORS_TESTING_BUCKET.c_str()));
            DeleteBucket(CalculateBucketName(BASE_PUT_WEIRD_CHARSETS_OBJECTS_BUCKET_NAME.c_str()));
            DeleteBucket(CalculateBucketName(BASE_EVENT_STREAM_TEST_BUCKET_NAME.c_str()));
            DeleteBucket(CalculateBucketName(BASE_EVENT_STREAM_LARGE_FILE_TEST_BUCKET_NAME.c_str()));
            DeleteBucket(CalculateBucketName(BASE_EVENT_STREAM_ERRORS_IN_EVENT_TEST_BUCKET_NAME.c_str()));
            DeleteBucket(CalculateBucketName(BASE_CHECKSUMS_BUCKET_NAME.c_str()));

            Client = nullptr;
            oregonClient = nullptr;
            m_HttpClient = nullptr;
        }

        // Create new S3 CRT Client for each test case, as multiple bucket is not supported yet.
        virtual void SetUp()
        {
            Aws::S3Crt::ClientConfiguration s3ClientConfig;
            s3ClientConfig.region = Aws::Region::US_EAST_1;
            s3ClientConfig.scheme = Scheme::HTTPS;
            s3ClientConfig.executor = Aws::MakeShared<Aws::Utils::Threading::PooledThreadExecutor>(ALLOCATION_TAG, 4);
            s3ClientConfig.throughputTargetGbps = 2.0;
            s3ClientConfig.partSize = 5 * 1024 * 1024;

            Client = Aws::MakeShared<S3CrtClient>(ALLOCATION_TAG,
                Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), s3ClientConfig,
                AWSAuthV4Signer::PayloadSigningPolicy::Never /*signPayloads*/, true /*useVirtualAddressing*/,
                Aws::S3Crt::US_EAST_1_REGIONAL_ENDPOINT_OPTION::LEGACY);

            s3ClientConfig.region = Aws::Region::US_WEST_2;
            s3ClientConfig.useDualStack = true;
            oregonClient = Aws::MakeShared<S3CrtClient>(ALLOCATION_TAG,
                Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), s3ClientConfig,
                AWSAuthV4Signer::PayloadSigningPolicy::Never /*signPayloads*/, true /*useVirtualAddressing*/);
            m_HttpClient = Aws::Http::CreateHttpClient(s3ClientConfig);
        }

        static std::shared_ptr<Aws::StringStream> CreateStreamForUploadPart(uint32_t sizeInMb, const char* partTag)
        {
            uint32_t fiveMbSize = sizeInMb * 1024 * 1024;

            Aws::StringStream patternStream;
            patternStream << "Multi-Part upload Test Part " << partTag << ":" << std::endl;
            Aws::String pattern = patternStream.str();

            Aws::String scratchString;
            scratchString.reserve(fiveMbSize);

            // 5MB is a hard minimum for multi part uploads; make sure the final string is at least that long
            uint32_t patternCopyCount = static_cast< uint32_t >( fiveMbSize / pattern.size() + 1 );
            for(uint32_t i = 0; i < patternCopyCount; ++i)
            {
                scratchString.append( pattern );
            }

            std::shared_ptr<Aws::StringStream> streamPtr = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG, scratchString);

            streamPtr->seekg(0);
            streamPtr->seekp(0, std::ios_base::end);

            return streamPtr;
        }

        static UploadPartOutcomeCallable MakeUploadPartOutcomeAndGetCallable(unsigned partNumber, const ByteBuffer& md5OfStream,
                                                                             const std::shared_ptr<Aws::IOStream>& partStream,
                                                                             const Aws::String& bucketName, const char* objectName, const Aws::String& uploadId)
        {
            UploadPartRequest uploadPart1Request;
            uploadPart1Request.SetBucket(bucketName);
            uploadPart1Request.SetKey(objectName);
            uploadPart1Request.SetPartNumber(partNumber);
            uploadPart1Request.SetUploadId(uploadId);
            uploadPart1Request.SetBody(partStream);
            uploadPart1Request.SetContentMD5(HashingUtils::Base64Encode(md5OfStream));

            auto startingPoint = partStream->tellg();
            partStream->seekg(0LL, partStream->end);
            uploadPart1Request.SetContentLength(static_cast<long>(partStream->tellg()));
            partStream->seekg(startingPoint);

            return Client->UploadPartCallable(uploadPart1Request);
        }

        static void VerifyUploadPartOutcome(UploadPartOutcome& outcome, const ByteBuffer& md5OfStream)
        {
            AWS_ASSERT_SUCCESS(outcome);
            Aws::StringStream ss;
            ss << "\"" << HashingUtils::HexEncode(md5OfStream) << "\"";
            ASSERT_STREQ(ss.str().c_str(), outcome.GetResult().GetETag().c_str());
        }

        static void TagTestBucket(const Aws::String& bucketName, const std::shared_ptr<S3CrtClient>& client) {
            ASSERT_TRUE(!bucketName.empty());
            ASSERT_TRUE(client);

            PutBucketTaggingRequest taggingRequest;
            taggingRequest.SetBucket(bucketName);
            Tag tag;
            tag.SetKey(TEST_BUCKET_TAG);
            tag.SetValue(TEST_BUCKET_TAG);
            Tagging tagging;
            tagging.AddTagSet(tag);
            taggingRequest.SetTagging(tagging);

            auto taggingOutcome = CallOperationWithUnconditionalRetry(client.get(), &Aws::S3Crt::S3CrtClient::PutBucketTagging, taggingRequest);
            AWS_ASSERT_SUCCESS(taggingOutcome);
        }

        static bool WaitForBucketToPropagate(const Aws::String& bucketName, const std::shared_ptr<S3CrtClient>& client = Client)
        {
            unsigned timeoutCount = 0;
            while (timeoutCount++ < TIMEOUT_MAX)
            {
                ListObjectsRequest listObjectsRequest;
                listObjectsRequest.SetBucket(bucketName);
                ListObjectsOutcome listObjectsOutcome = client->ListObjects(listObjectsRequest);
                if (listObjectsOutcome.IsSuccess())
                {
                    return true;
                }

                std::this_thread::sleep_for(std::chrono::seconds(10));
            }

            return false;
        }

        static bool WaitForObjectToPropagate(const Aws::String& bucketName, const char* objectKey)
        {
            unsigned timeoutCount = 0;
            while (timeoutCount++ < TIMEOUT_MAX)
            {
                GetObjectRequest getObjectRequest;
                getObjectRequest.SetBucket(bucketName);
                getObjectRequest.SetKey(objectKey);
                GetObjectOutcome getObjectOutcome = Client->GetObject(getObjectRequest);
                if (getObjectOutcome.IsSuccess())
                {
                   return true;
                }

                std::this_thread::sleep_for(std::chrono::seconds(5));
            }

            return false;
        }

        static void EmptyBucket(const Aws::String& bucketName)
        {
            ListObjectsRequest listObjectsRequest;
            listObjectsRequest.SetBucket(bucketName);

            ListObjectsOutcome listObjectsOutcome = Client->ListObjects(listObjectsRequest);

            if (!listObjectsOutcome.IsSuccess())
                return;

            for (const auto& object : listObjectsOutcome.GetResult().GetContents())
            {
                DeleteObjectRequest deleteObjectRequest;
                deleteObjectRequest.SetBucket(bucketName);
                deleteObjectRequest.SetKey(object.GetKey());
                Client->DeleteObject(deleteObjectRequest);
            }
        }

        static void WaitForBucketToEmpty(const Aws::String& bucketName)
        {
            ListObjectsRequest listObjectsRequest;
            listObjectsRequest.SetBucket(bucketName);

            unsigned checkForObjectsCount = 0;
            while (checkForObjectsCount++ < TIMEOUT_MAX)
            {
                ListObjectsOutcome listObjectsOutcome = Client->ListObjects(listObjectsRequest);
                AWS_ASSERT_SUCCESS(listObjectsOutcome);

                if (listObjectsOutcome.GetResult().GetContents().size() > 0)
                {
                    std::this_thread::sleep_for(std::chrono::seconds(5));
                }
                else
                {
                    break;
                }
            }
        }

        static void DeleteBucket(const Aws::String& bucketName)
        {
            HeadBucketRequest headBucketRequest;
            headBucketRequest.SetBucket(bucketName);
            HeadBucketOutcome bucketOutcome = Client->HeadBucket(headBucketRequest);

            if (bucketOutcome.IsSuccess())
            {
                EmptyBucket(bucketName);
                WaitForBucketToEmpty(bucketName);

                DeleteBucketRequest deleteBucketRequest;
                deleteBucketRequest.SetBucket(bucketName);

                auto deleteBucketOutcome = CallOperationWithUnconditionalRetry(Client.get(), &Aws::S3Crt::S3CrtClient::DeleteBucket, deleteBucketRequest);
                AWS_ASSERT_SUCCESS(deleteBucketOutcome);
            }
        }

        static Aws::String CalculateBucketName(const Aws::String& bucketPrefix)
        {
            return Aws::Testing::GetAwsResourcePrefix() + bucketPrefix;
        }

        static Aws::String PreparePresignedUrlTest()
        {
            Aws::String fullBucketName = CalculateBucketName(BASE_PUT_OBJECTS_PRESIGNED_URLS_BUCKET_NAME.c_str());
            SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
            CreateBucketRequest createBucketRequest;
            createBucketRequest.SetBucket(fullBucketName);
            createBucketRequest.SetACL(BucketCannedACL::private_);
            CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
            AWS_EXPECT_SUCCESS(createBucketOutcome);
            const CreateBucketResult& createBucketResult = createBucketOutcome.GetResult();
            EXPECT_TRUE(!createBucketResult.GetLocation().empty());
            EXPECT_TRUE(WaitForBucketToPropagate(fullBucketName));
            TagTestBucket(fullBucketName, Client);
            return fullBucketName;
        }

        static void DoPresignedUrlTest(const Aws::String& bucketName, std::shared_ptr<HttpRequest>& putRequest)
        {
            std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>("BucketAndObjectOperationTest");
            *objectStream << "Test Object";
            objectStream->flush();

            putRequest->AddContentBody(objectStream);
            Aws::StringStream intConverter;
            intConverter << objectStream->tellp();
            putRequest->SetContentLength(intConverter.str());
            putRequest->SetContentType("text/plain");
            std::shared_ptr<HttpResponse> putResponse = m_HttpClient->MakeRequest(putRequest);

            ASSERT_EQ(HttpResponseCode::OK, putResponse->GetResponseCode());

            ASSERT_TRUE(WaitForObjectToPropagate(bucketName, TEST_OBJ_KEY));

            // GetObject with presigned url
            Aws::String presignedUrlGet = Client->GeneratePresignedUrl(bucketName, TEST_OBJ_KEY, HttpMethod::HTTP_GET);
            std::shared_ptr<HttpRequest> getRequest = CreateHttpRequest(presignedUrlGet, HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
            std::shared_ptr<HttpResponse> getResponse = m_HttpClient->MakeRequest(getRequest);

            ASSERT_EQ(HttpResponseCode::OK, getResponse->GetResponseCode());
            Aws::StringStream ss;
            ss << getResponse->GetResponseBody().rdbuf();
            ASSERT_STREQ("Test Object", ss.str().c_str());

            Aws::S3Crt::Model::GetObjectRequest getObjectRequest;
            getObjectRequest.WithBucket(bucketName).WithKey(TEST_OBJ_KEY);
            auto outcome = Client->GetObject(getObjectRequest);
            AWS_ASSERT_SUCCESS(outcome);
            if (putRequest->HasHeader(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION))
            {
                ASSERT_STREQ(Aws::S3Crt::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(outcome.GetResult().GetServerSideEncryption()).c_str(), putRequest->GetHeaderValue(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION).c_str());
            }
        }

        static void CleanUpPresignedUrlTest()
        {
            Aws::String fullBucketName = CalculateBucketName(BASE_PUT_OBJECTS_PRESIGNED_URLS_BUCKET_NAME.c_str());
            SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
            Aws::String presignedUrlDelete = Client->GeneratePresignedUrl(fullBucketName, TEST_OBJ_KEY, HttpMethod::HTTP_DELETE);
            std::shared_ptr<HttpRequest> deleteRequest = CreateHttpRequest(presignedUrlDelete, HttpMethod::HTTP_DELETE, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
            std::shared_ptr<HttpResponse> deleteResponse = m_HttpClient->MakeRequest(deleteRequest);
            ASSERT_EQ(HttpResponseCode::NO_CONTENT, deleteResponse->GetResponseCode());
            WaitForBucketToEmpty(fullBucketName);
        }

    };

    std::shared_ptr<S3CrtClient> BucketAndObjectOperationTest::Client(nullptr);
    std::shared_ptr<S3CrtClient> BucketAndObjectOperationTest::oregonClient(nullptr);
    std::shared_ptr<HttpClient> BucketAndObjectOperationTest::m_HttpClient(nullptr);

    TEST_F(BucketAndObjectOperationTest, TestBucketOperationsErrorWithMissingRequiredFields)
    {
        Aws::String fullBucketName = CalculateBucketName(BASE_CREATE_BUCKET_TEST_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        HeadBucketRequest headBucketRequest;
        HeadBucketOutcome headBucketOutcome = Client->HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        ASSERT_EQ(headBucketOutcome.GetError().GetErrorType(), Aws::S3Crt::S3CrtErrors::MISSING_PARAMETER);

        CreateBucketRequest createBucketRequest;
        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        ASSERT_FALSE(createBucketOutcome.IsSuccess());
        ASSERT_EQ(createBucketOutcome.GetError().GetErrorType(), Aws::S3Crt::S3CrtErrors::MISSING_PARAMETER);
    }

    TEST_F(BucketAndObjectOperationTest, TestBucketCreationAndListing)
    {
        const Aws::String fullBucketName = CalculateBucketName(BASE_CREATE_BUCKET_TEST_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);

        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        const CreateBucketResult& createBucketResult = createBucketOutcome.GetResult();
        ASSERT_FALSE(createBucketResult.GetLocation().empty());
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName));
        TagTestBucket(fullBucketName, Client);

        ListBucketsOutcome listBucketsOutcome = Client->ListBuckets();
        AWS_ASSERT_SUCCESS(listBucketsOutcome);
        ASSERT_GE(listBucketsOutcome.GetResult().GetBuckets().size(), 1u);

        bool foundBucket(false);

        for (const auto& bucket : listBucketsOutcome.GetResult().GetBuckets())
        {
            if (bucket.GetName() == fullBucketName)
            {
                foundBucket = true;
            }
        }

        ASSERT_TRUE(foundBucket);

        DeleteBucketRequest deleteBucketRequest;
        deleteBucketRequest.SetBucket(fullBucketName);
        DeleteBucketOutcome deleteBucketOutcome = Client->DeleteBucket(deleteBucketRequest);
        AWS_ASSERT_SUCCESS(deleteBucketOutcome);
    }

    //Create a bucket somewhere other than US Standard and ensure the location is correctly shown later
    TEST_F(BucketAndObjectOperationTest, TestBucketLocation)
    {
        Aws::String fullBucketName = CalculateBucketName(BASE_LOCATION_BUCKET_TEST_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        CreateBucketConfiguration bucketConfiguration;
        bucketConfiguration.SetLocationConstraint(BucketLocationConstraint::us_west_2);
        createBucketRequest.SetCreateBucketConfiguration(bucketConfiguration);

        CreateBucketOutcome createBucketOutcome = oregonClient->CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        const CreateBucketResult& createBucketResult = createBucketOutcome.GetResult();
        ASSERT_FALSE(createBucketResult.GetLocation().empty());
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName, oregonClient));
        TagTestBucket(fullBucketName, oregonClient);

        GetBucketLocationRequest locationRequest;
        locationRequest.SetBucket(fullBucketName);
        auto locationOutcome = oregonClient->GetBucketLocation(locationRequest);
        AWS_ASSERT_SUCCESS(locationOutcome);
        ASSERT_EQ(locationOutcome.GetResult().GetLocationConstraint(), BucketLocationConstraint::us_west_2);

        DeleteBucketRequest deleteBucketRequest;
        deleteBucketRequest.SetBucket(fullBucketName);
        DeleteBucketOutcome deleteBucketOutcome = oregonClient->DeleteBucket(deleteBucketRequest);
        AWS_ASSERT_SUCCESS(deleteBucketOutcome);
    }

    // S3 CRT Client could not handle these special characters in key name right now.
    TEST_F(BucketAndObjectOperationTest, TestPutWithSpecialCharactersInKeyName)
    {
        const Aws::String fullBucketName = CalculateBucketName(BASE_PUT_OBJECTS_BUCKET_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);

        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        const CreateBucketResult& createBucketResult = createBucketOutcome.GetResult();
        ASSERT_TRUE(!createBucketResult.GetLocation().empty());
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName));
        TagTestBucket(fullBucketName, Client);

        PutObjectRequest putObjectRequest;
        putObjectRequest.SetBucket(fullBucketName);
        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>("BucketAndObjectOperationTest");
        *objectStream << "Test Object";
        putObjectRequest.SetBody(objectStream);
        putObjectRequest.SetContentType("text/plain");
        putObjectRequest.SetKey("foo;jsessionid=40+2");
        PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
        AWS_ASSERT_SUCCESS(putObjectOutcome);
    }

    TEST_F(BucketAndObjectOperationTest, TestObjectOperations)
    {
        const Aws::String fullBucketName = CalculateBucketName(BASE_OBJECTS_BUCKET_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        const CreateBucketResult& createBucketResult = createBucketOutcome.GetResult();
        ASSERT_TRUE(!createBucketResult.GetLocation().empty());
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName));
        TagTestBucket(fullBucketName, Client);

        PutObjectRequest putObjectRequest;
        putObjectRequest.SetBucket(fullBucketName);

        std::shared_ptr<Aws::IOStream> bigStream = CreateStreamForUploadPart(25, "La");
        putObjectRequest.SetBody(bigStream);
        long long contentLength = static_cast<long long>(putObjectRequest.GetBody()->tellp());
        putObjectRequest.SetContentLength(contentLength);
        // putObjectRequest.SetContentMD5(HashingUtils::Base64Encode(HashingUtils::CalculateMD5(*putObjectRequest.GetBody())));
        putObjectRequest.SetContentType("text/plain");
        putObjectRequest.SetKey(TEST_OBJ_KEY);

        PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
        AWS_ASSERT_SUCCESS(putObjectOutcome);

        ASSERT_TRUE(WaitForObjectToPropagate(fullBucketName, TEST_OBJ_KEY));

        GetObjectRequest getObjectRequest;
        getObjectRequest.SetBucket(fullBucketName);
        getObjectRequest.SetKey(TEST_OBJ_KEY);

        GetObjectOutcome getObjectOutcome = Client->GetObject(getObjectRequest);
        AWS_ASSERT_SUCCESS(getObjectOutcome);
        ASSERT_EQ(contentLength, getObjectOutcome.GetResult().GetContentLength());
        EXPECT_TRUE(getObjectOutcome.GetResult().GetCacheControl().empty());

        // GET with range
        getObjectRequest.SetRange("bytes=128-1024");
        getObjectOutcome = Client->GetObject(getObjectRequest);
        AWS_ASSERT_SUCCESS(getObjectOutcome);
        ASSERT_EQ(1024-128+1, getObjectOutcome.GetResult().GetContentLength());

        HeadObjectRequest headObjectRequest;
        headObjectRequest.SetBucket(fullBucketName);
        headObjectRequest.SetKey(TEST_OBJ_KEY);

        HeadObjectOutcome headObjectOutcome = Client->HeadObject(headObjectRequest);
        AWS_ASSERT_SUCCESS(headObjectOutcome);

        DeleteObjectRequest deleteObjectRequest;
        deleteObjectRequest.SetBucket(fullBucketName);
        deleteObjectRequest.SetKey(TEST_OBJ_KEY);
        DeleteObjectOutcome deleteObjectOutcome = Client->DeleteObject(deleteObjectRequest);
        AWS_ASSERT_SUCCESS(deleteObjectOutcome);

        WaitForBucketToEmpty(fullBucketName);

        headObjectOutcome = Client->HeadObject(headObjectRequest);
        ASSERT_FALSE(headObjectOutcome.IsSuccess());
    }

    TEST_F(BucketAndObjectOperationTest, TestObjectOperationsWithDefaultConstructor)
    {
        //Create Client with default constructor
        Client = Aws::MakeShared<S3CrtClient>(ALLOCATION_TAG);

        const Aws::String fullBucketName = CalculateBucketName(BASE_OBJECTS_DEFAULT_CTOR_BUCKET_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);
        {
            CreateBucketConfiguration bucketConfiguration;
            Aws::S3Crt::ClientConfiguration dummyClientConfig;
            bucketConfiguration.SetLocationConstraint(
                    BucketLocationConstraintMapper::GetBucketLocationConstraintForName(dummyClientConfig.region));
            createBucketRequest.SetCreateBucketConfiguration(bucketConfiguration);
        }

        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        const CreateBucketResult& createBucketResult = createBucketOutcome.GetResult();
        ASSERT_TRUE(!createBucketResult.GetLocation().empty());
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName));
        TagTestBucket(fullBucketName, Client);

        PutObjectRequest putObjectRequest;
        putObjectRequest.SetBucket(fullBucketName);

        std::shared_ptr<Aws::IOStream> bigStream = CreateStreamForUploadPart(25, "La");
        putObjectRequest.SetBody(bigStream);
        long long contentLength = static_cast<long long>(putObjectRequest.GetBody()->tellp());
        putObjectRequest.SetContentLength(contentLength);
        putObjectRequest.SetContentType("text/plain");
        putObjectRequest.SetKey(TEST_OBJ_KEY);

        PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
        AWS_ASSERT_SUCCESS(putObjectOutcome);

        ASSERT_TRUE(WaitForObjectToPropagate(fullBucketName, TEST_OBJ_KEY));

        GetObjectRequest getObjectRequest;
        getObjectRequest.SetBucket(fullBucketName);
        getObjectRequest.SetKey(TEST_OBJ_KEY);

        GetObjectOutcome getObjectOutcome = Client->GetObject(getObjectRequest);
        AWS_ASSERT_SUCCESS(getObjectOutcome);
        ASSERT_EQ(contentLength, getObjectOutcome.GetResult().GetContentLength());

        // GET with range
        getObjectRequest.SetRange("bytes=128-1024");
        getObjectOutcome = Client->GetObject(getObjectRequest);
        AWS_ASSERT_SUCCESS(getObjectOutcome);
        ASSERT_EQ(1024-128+1, getObjectOutcome.GetResult().GetContentLength());

        HeadObjectRequest headObjectRequest;
        headObjectRequest.SetBucket(fullBucketName);
        headObjectRequest.SetKey(TEST_OBJ_KEY);

        HeadObjectOutcome headObjectOutcome = Client->HeadObject(headObjectRequest);
        AWS_ASSERT_SUCCESS(headObjectOutcome);

        DeleteObjectRequest deleteObjectRequest;
        deleteObjectRequest.SetBucket(fullBucketName);
        deleteObjectRequest.SetKey(TEST_OBJ_KEY);
        DeleteObjectOutcome deleteObjectOutcome = Client->DeleteObject(deleteObjectRequest);
        AWS_ASSERT_SUCCESS(deleteObjectOutcome);

        WaitForBucketToEmpty(fullBucketName);

        headObjectOutcome = Client->HeadObject(headObjectRequest);
        ASSERT_FALSE(headObjectOutcome.IsSuccess());
    }

    TEST_F(BucketAndObjectOperationTest, TestKeysWithCrazyCharacterSets)
    {
        const Aws::String fullBucketName = CalculateBucketName(BASE_PUT_WEIRD_CHARSETS_OBJECTS_BUCKET_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);

        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        const CreateBucketResult& createBucketResult = createBucketOutcome.GetResult();
        ASSERT_TRUE(!createBucketResult.GetLocation().empty());
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName));
        TagTestBucket(fullBucketName, Client);

        // S3 CRT Client doesn't support this edge case right now.
        //test unicode
        {
            //we already have verification that this is a legit unicode string via the StringUtils test.
            Aws::String unicodekey = StringUtils::URLDecode(URLENCODED_UNICODE_KEY);
            PutObjectRequest putObjectRequest;
            putObjectRequest.SetBucket(fullBucketName);

            std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>("TestKeysWithCrazyCharacterSets");
            *objectStream << "Test Object";
            objectStream->flush();
            putObjectRequest.SetBody(objectStream);
            putObjectRequest.SetKey(unicodekey);

            PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
            AWS_ASSERT_SUCCESS(putObjectOutcome);

            ASSERT_TRUE(WaitForObjectToPropagate(fullBucketName, unicodekey.c_str()));

            DeleteObjectRequest deleteObjectRequest;
            deleteObjectRequest.SetBucket(fullBucketName);
            deleteObjectRequest.SetKey(unicodekey);
            DeleteObjectOutcome deleteObjectOutcome = Client->DeleteObject(deleteObjectRequest);
            AWS_ASSERT_SUCCESS(deleteObjectOutcome);
        }

        // test uri encoding edge case.
        {
            PutObjectRequest putObjectRequest;
            putObjectRequest.SetBucket(fullBucketName);

            std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>("TestKeysWithCrazyCharacterSets");
            *objectStream << "Test Object";
            objectStream->flush();
            putObjectRequest.SetBody(objectStream);
            putObjectRequest.SetKey(URIESCAPE_KEY);

            PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
            AWS_ASSERT_SUCCESS(putObjectOutcome);

            ASSERT_TRUE(WaitForObjectToPropagate(fullBucketName, URIESCAPE_KEY));

            DeleteObjectRequest deleteObjectRequest;
            deleteObjectRequest.SetBucket(fullBucketName);
            deleteObjectRequest.SetKey(URIESCAPE_KEY);
            DeleteObjectOutcome deleteObjectOutcome = Client->DeleteObject(deleteObjectRequest);
            AWS_ASSERT_SUCCESS(deleteObjectOutcome);
        }
        WaitForBucketToEmpty(fullBucketName);
    }

    TEST_F(BucketAndObjectOperationTest, TestObjectOperationsWithPresignedUrls)
    {
        Aws::String fullBucketName = PreparePresignedUrlTest();
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        Aws::String presignedUrlPut = Client->GeneratePresignedUrl(fullBucketName, TEST_OBJ_KEY, HttpMethod::HTTP_PUT);
        std::shared_ptr<HttpRequest> putRequest = CreateHttpRequest(presignedUrlPut, HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        DoPresignedUrlTest(fullBucketName, putRequest);
        CleanUpPresignedUrlTest();
    }

    TEST_F(BucketAndObjectOperationTest, TestObjectOperationsWithPresignedUrlsAndCustomizedHeaders)
    {
        Aws::String fullBucketName = PreparePresignedUrlTest();
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        Aws::Http::HeaderValueCollection collections;
        collections.emplace("TestKey1", "TestVal1");
        collections.emplace("TestKey2", "TestVal2");

        Aws::String presignedUrlPut = Client->GeneratePresignedUrl(fullBucketName, TEST_OBJ_KEY, HttpMethod::HTTP_PUT, collections);
        std::shared_ptr<HttpRequest> putRequest = CreateHttpRequest(presignedUrlPut, HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        ASSERT_NE(presignedUrlPut.find("testkey1"), Aws::String::npos);
        ASSERT_NE(presignedUrlPut.find("testkey2"), Aws::String::npos);
        putRequest->SetHeaderValue("TestKey1", "TestVal1");
        putRequest->SetHeaderValue("TestKey2", "TestVal2");
        DoPresignedUrlTest(fullBucketName, putRequest);
        CleanUpPresignedUrlTest();
    }

    TEST_F(BucketAndObjectOperationTest, TestObjectOperationsWithPresignedUrlsWithSSES3)
    {
        Aws::String fullBucketName = PreparePresignedUrlTest();
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        Aws::String presignedUrlPut = Client->GeneratePresignedUrlWithSSES3(fullBucketName, TEST_OBJ_KEY, HttpMethod::HTTP_PUT);
        std::shared_ptr<HttpRequest> putRequest = CreateHttpRequest(presignedUrlPut, HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        putRequest->SetHeaderValue(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION,
                Aws::S3Crt::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3Crt::Model::ServerSideEncryption::AES256));
        DoPresignedUrlTest(fullBucketName, putRequest);
        CleanUpPresignedUrlTest();
    }

    TEST_F(BucketAndObjectOperationTest, TestObjectOperationsWithPresignedUrlsWithSSES3AndCustomizedHeaders)
    {
        Aws::String fullBucketName = PreparePresignedUrlTest();
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        Aws::Http::HeaderValueCollection collections;
        collections.emplace("TestKey1", "TestVal1");
        collections.emplace("TestKey2", "TestVal2");

        Aws::String presignedUrlPut = Client->GeneratePresignedUrlWithSSES3(fullBucketName, TEST_OBJ_KEY, HttpMethod::HTTP_PUT, collections);
        std::shared_ptr<HttpRequest> putRequest = CreateHttpRequest(presignedUrlPut, HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        putRequest->SetHeaderValue(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION,
                Aws::S3Crt::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3Crt::Model::ServerSideEncryption::AES256));
        ASSERT_NE(presignedUrlPut.find("testkey1"), Aws::String::npos);
        ASSERT_NE(presignedUrlPut.find("testkey2"), Aws::String::npos);
        putRequest->SetHeaderValue("TestKey1", "TestVal1");
        putRequest->SetHeaderValue("TestKey2", "TestVal2");
        DoPresignedUrlTest(fullBucketName, putRequest);
        CleanUpPresignedUrlTest();
    }

    TEST_F(BucketAndObjectOperationTest, TestObjectOperationsWithPresignedUrlsWithSSEKMS)
    {
        Aws::String fullBucketName = PreparePresignedUrlTest();
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        Aws::String presignedUrlPut = Client->GeneratePresignedUrlWithSSEKMS(fullBucketName, TEST_OBJ_KEY, HttpMethod::HTTP_PUT); //Using default KMS key in this AWS account
        std::shared_ptr<HttpRequest> putRequest = CreateHttpRequest(presignedUrlPut, HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        putRequest->SetHeaderValue(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION,
                Aws::S3Crt::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3Crt::Model::ServerSideEncryption::aws_kms));
        DoPresignedUrlTest(fullBucketName, putRequest);
        CleanUpPresignedUrlTest();
    }


    TEST_F(BucketAndObjectOperationTest, TestObjectOperationsWithPresignedUrlsWithSSEKMSAndCustomizedHeaders)
    {
        Aws::String fullBucketName = PreparePresignedUrlTest();
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        Aws::Http::HeaderValueCollection collections;
        collections.emplace("TestKey1", "TestVal1");
        collections.emplace("TestKey2", "TestVal2");

        Aws::String presignedUrlPut = Client->GeneratePresignedUrlWithSSEKMS(fullBucketName, TEST_OBJ_KEY, HttpMethod::HTTP_PUT, collections); //Using default KMS key in this AWS account
        std::shared_ptr<HttpRequest> putRequest = CreateHttpRequest(presignedUrlPut, HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        putRequest->SetHeaderValue(Aws::S3Crt::SSEHeaders::SERVER_SIDE_ENCRYPTION,
                Aws::S3Crt::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3Crt::Model::ServerSideEncryption::aws_kms));
        ASSERT_NE(presignedUrlPut.find("testkey1"), Aws::String::npos);
        ASSERT_NE(presignedUrlPut.find("testkey2"), Aws::String::npos);
        putRequest->SetHeaderValue("TestKey1", "TestVal1");
        putRequest->SetHeaderValue("TestKey2", "TestVal2");
        DoPresignedUrlTest(fullBucketName, putRequest);
        CleanUpPresignedUrlTest();
    }

    TEST_F(BucketAndObjectOperationTest, TestThatErrorsParse)
    {
        const Aws::String fullBucketName = CalculateBucketName(BASE_ERRORS_TESTING_BUCKET.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        ListObjectsRequest listObjectsRequest;
        listObjectsRequest.SetBucket("abcdedoikengi");

        ListObjectsOutcome listObjectsOutcome = Client->ListObjects(listObjectsRequest);
        ASSERT_FALSE(listObjectsOutcome.IsSuccess());
#if ENABLE_CURL_CLIENT
        ASSERT_FALSE(listObjectsOutcome.GetError().GetRemoteHostIpAddress().empty());
#endif
        ASSERT_FALSE(listObjectsOutcome.GetError().GetRequestId().empty());
        ASSERT_EQ(S3CrtErrors::NO_SUCH_BUCKET, listObjectsOutcome.GetError().GetErrorType());

        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);

        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName));
        TagTestBucket(fullBucketName, Client);

        GetObjectRequest getObjectRequest;
        getObjectRequest.SetBucket(fullBucketName);
        getObjectRequest.SetKey("non-Existent");
        GetObjectOutcome getObjectOutcome = Client->GetObject(getObjectRequest);
        ASSERT_FALSE(getObjectOutcome.IsSuccess());
    }

    TEST_F(BucketAndObjectOperationTest, TestNotModifiedIsSuccess)
    {
        Aws::String fullBucketName = CalculateBucketName(BASE_PUT_OBJECTS_BUCKET_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);
        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName));
        TagTestBucket(fullBucketName, Client);

        PutObjectRequest putObjectRequest;
        putObjectRequest.SetBucket(fullBucketName);

        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>("BucketAndObjectOperationTest");
        *objectStream << "Test never modified!";
        objectStream->flush();
        putObjectRequest.SetBody(objectStream);
        putObjectRequest.SetContentLength(static_cast<long>(putObjectRequest.GetBody()->tellp()));
        putObjectRequest.SetContentType("text/plain");
        putObjectRequest.WithKey(TEST_NOT_MODIFIED_OBJ_KEY);

        PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
        AWS_ASSERT_SUCCESS(putObjectOutcome);

        GetObjectRequest getObjectRequest;
        getObjectRequest.WithBucket(fullBucketName)
            .WithKey(TEST_NOT_MODIFIED_OBJ_KEY)
            .WithIfNoneMatch(putObjectOutcome.GetResult().GetETag());

        GetObjectOutcome getObjectOutcome = Client->GetObject(getObjectRequest);
        ASSERT_FALSE(getObjectOutcome.IsSuccess());
        ASSERT_EQ(Aws::Http::HttpResponseCode::NOT_MODIFIED, getObjectOutcome.GetError().GetResponseCode());
    }

    TEST_F(BucketAndObjectOperationTest, TestVirtualAddressingWithUnfriendlyBucketName)
    {
        Aws::String fullBucketName = CalculateBucketName(BASE_DNS_UNFRIENDLY_TEST_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);
        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName));
        TagTestBucket(fullBucketName, Client);

        PutObjectRequest putObjectRequest;
        putObjectRequest.SetBucket(fullBucketName);

        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>("BucketAndObjectOperationTest");
        *objectStream << "'A program that has not been tested does not work'-- Bjarne Stroustrup";
        objectStream->flush();
        putObjectRequest.SetBody(objectStream);
        putObjectRequest.SetContentLength(static_cast<long>(putObjectRequest.GetBody()->tellp()));
        putObjectRequest.SetContentType("text/plain");
        putObjectRequest.WithKey(TEST_DNS_UNFRIENDLY_OBJ_KEY);

        PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
        AWS_ASSERT_SUCCESS(putObjectOutcome);

        Aws::String presignedUrlPut = Client->GeneratePresignedUrl(fullBucketName, TEST_DNS_UNFRIENDLY_OBJ_KEY, HttpMethod::HTTP_PUT);
        // URI-segment addressing style, new default of the SDK
        const Aws::String expectedUri = Aws::String("https://s3.") + Aws::Region::US_EAST_1 + ".amazonaws.com/" + fullBucketName + "/" + TEST_DNS_UNFRIENDLY_OBJ_KEY;
        bool presignedUrlPutStartsWithExpectedUri = presignedUrlPut.rfind(expectedUri, 0) == 0;
        ASSERT_TRUE(presignedUrlPutStartsWithExpectedUri) << "Generated pre-signed url: " << presignedUrlPut.substr(0, expectedUri.size() + 10) << "...\n"
            << " Does not start with\n  " << expectedUri;
    }

    TEST_F(BucketAndObjectOperationTest, TestCopyingFromKeysWithUnicodeCharacters)
    {
        Aws::String fullBucketName = CalculateBucketName(BASE_CREATE_BUCKET_TEST_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);
        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName));
        TagTestBucket(fullBucketName, Client);

        auto objectStream = Aws::MakeShared<Aws::StringStream>("BucketAndObjectOperationTest");
        *objectStream << "Test Japanese & Chinese Unicode keys";
        objectStream->flush();
        const char encodedKeyName[] = "%E3%83%86%E3%82%B9%E3%83%88%20%E6%B5%8B%E8%AF%95.txt"; // "テスト 测试.txt";
        Aws::String unicodekey = StringUtils::URLDecode(encodedKeyName);
        PutObjectRequest putObjectRequest;
        putObjectRequest.SetBucket(fullBucketName);
        putObjectRequest.SetBody(objectStream);
        putObjectRequest.SetContentLength(static_cast<long>(putObjectRequest.GetBody()->tellp()));
        putObjectRequest.SetContentType("text/plain");
        putObjectRequest.SetKey(unicodekey);
        PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
        AWS_ASSERT_SUCCESS(putObjectOutcome);

        CopyObjectRequest copyRequest;
        copyRequest.WithBucket(fullBucketName)
            .WithKey("destination/" + unicodekey)
            .WithCopySource(fullBucketName + "/" + unicodekey);

        auto copyOutcome = Client->CopyObject(copyRequest);
        AWS_ASSERT_SUCCESS(copyOutcome);
    }

//     TEST_F(BucketAndObjectOperationTest, TestObjectOperationWithEventStream)
//     {
//         Aws::String fullBucketName = CalculateBucketName(BASE_EVENT_STREAM_TEST_BUCKET_NAME.c_str());
//         SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
//         CreateBucketRequest createBucketRequest;
//         createBucketRequest.SetBucket(fullBucketName);
//         createBucketRequest.SetACL(BucketCannedACL::private_);
//         CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
//         AWS_ASSERT_SUCCESS(createBucketOutcome);
//         ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName));
//         TagTestBucket(fullBucketName, Client);

//         PutObjectRequest putObjectRequest;
//         putObjectRequest.SetBucket(fullBucketName);

//         std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
//         *objectStream << "Name,Number\nAlice,1\nBob,2";
//         Aws::String firstColumn = "Name\nAlice\nBob\n";
//         objectStream->flush();
//         putObjectRequest.SetBody(objectStream);
//         putObjectRequest.SetKey(TEST_EVENT_STREAM_OBJ_KEY);
//         auto objectSize = putObjectRequest.GetBody()->tellp();
//         putObjectRequest.SetContentLength(static_cast<long>(objectSize));
//         // putObjectRequest.SetContentMD5(HashingUtils::Base64Encode(HashingUtils::CalculateMD5(*putObjectRequest.GetBody())));
//         putObjectRequest.SetContentType("text/csv");

//         PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
//         AWS_ASSERT_SUCCESS(putObjectOutcome);

//         ASSERT_TRUE(WaitForObjectToPropagate(fullBucketName, TEST_EVENT_STREAM_OBJ_KEY));

//         SelectObjectContentRequest selectObjectContentRequest;
//         selectObjectContentRequest.SetBucket(fullBucketName);
//         selectObjectContentRequest.SetKey(TEST_EVENT_STREAM_OBJ_KEY);

//         selectObjectContentRequest.SetExpressionType(ExpressionType::SQL);

//         selectObjectContentRequest.SetExpression("select s._1 from S3Object s");

//         CSVInput csvInput;
//         csvInput.SetFileHeaderInfo(FileHeaderInfo::NONE);
//         InputSerialization inputSerialization;
//         inputSerialization.SetCSV(csvInput);
//         selectObjectContentRequest.SetInputSerialization(inputSerialization);

//         CSVOutput csvOutput;
//         OutputSerialization outputSerialization;
//         outputSerialization.SetCSV(csvOutput);
//         selectObjectContentRequest.SetOutputSerialization(outputSerialization);

//         bool isRecordsEventReceived = false;
//         bool isStatsEventReceived = false;

//         SelectObjectContentHandler handler;
//         handler.SetRecordsEventCallback([&](const RecordsEvent& recordsEvent)
//         {
//             isRecordsEventReceived = true;
//             auto recordsVector = recordsEvent.GetPayload();
//             Aws::String records(recordsVector.begin(), recordsVector.end());
//             ASSERT_STREQ(firstColumn.c_str(), records.c_str());
//         });
//         handler.SetStatsEventCallback([&](const StatsEvent& statsEvent)
//         {
//             isStatsEventReceived = true;
//             ASSERT_EQ(static_cast<long long>(objectSize), statsEvent.GetDetails().GetBytesScanned());
//             ASSERT_EQ(static_cast<long long>(objectSize), statsEvent.GetDetails().GetBytesProcessed());
//             ASSERT_EQ(static_cast<long long>(firstColumn.size()), statsEvent.GetDetails().GetBytesReturned());
//         });

//         selectObjectContentRequest.SetEventStreamHandler(handler);

//         auto selectObjectContentOutcome = Client->SelectObjectContent(selectObjectContentRequest);
//         AWS_ASSERT_SUCCESS(selectObjectContentOutcome);
//         ASSERT_TRUE(isRecordsEventReceived);
//         ASSERT_TRUE(isStatsEventReceived);
//     }

// #if 0
//     // S3 CRT Client doesn't support custom retry strategy right now.
//     // This test is to test failed event stream request will not cause crash during retry.
//     TEST_F(BucketAndObjectOperationTest, TestSelectObjectOperationWithEventStreamFailWithRetry)
//     {
//         Aws::String fullBucketName = CalculateBucketName(BASE_EVENT_STREAM_TEST_BUCKET_NAME.c_str());
//         SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
//         CreateBucketRequest createBucketRequest;
//         createBucketRequest.SetBucket(fullBucketName);
//         createBucketRequest.SetACL(BucketCannedACL::private_);
//         CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
//         AWS_ASSERT_SUCCESS(createBucketOutcome);
//         ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName));
//         TagTestBucket(fullBucketName);

//         PutObjectRequest putObjectRequest;
//         putObjectRequest.SetBucket(fullBucketName);

//         std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
//         *objectStream << "Name,Number\nAlice,1\nBob,2";
//         Aws::String firstColumn = "Name\nAlice\nBob\n";
//         objectStream->flush();
//         putObjectRequest.SetBody(objectStream);
//         putObjectRequest.SetKey(TEST_EVENT_STREAM_OBJ_KEY);
//         auto objectSize = putObjectRequest.GetBody()->tellp();
//         putObjectRequest.SetContentLength(static_cast<long>(objectSize));
//         putObjectRequest.SetContentMD5(HashingUtils::Base64Encode(HashingUtils::CalculateMD5(*putObjectRequest.GetBody())));
//         putObjectRequest.SetContentType("text/csv");

//         PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
//         AWS_ASSERT_SUCCESS(putObjectOutcome);

//         ASSERT_TRUE(WaitForObjectToPropagate(fullBucketName, TEST_EVENT_STREAM_OBJ_KEY));

//         SelectObjectContentRequest selectObjectContentRequest;
//         selectObjectContentRequest.SetBucket(fullBucketName);
//         selectObjectContentRequest.SetKey("ANonExistenceKey");

//         selectObjectContentRequest.SetExpressionType(ExpressionType::SQL);

//         selectObjectContentRequest.SetExpression("select s._1 from S3Object s");

//         CSVInput csvInput;
//         csvInput.SetFileHeaderInfo(FileHeaderInfo::NONE);
//         InputSerialization inputSerialization;
//         inputSerialization.SetCSV(csvInput);
//         selectObjectContentRequest.SetInputSerialization(inputSerialization);

//         CSVOutput csvOutput;
//         OutputSerialization outputSerialization;
//         outputSerialization.SetCSV(csvOutput);
//         selectObjectContentRequest.SetOutputSerialization(outputSerialization);

//         bool isRecordsEventReceived = false;
//         bool isStatsEventReceived = false;

//         SelectObjectContentHandler handler;
//         handler.SetRecordsEventCallback([&](const RecordsEvent& recordsEvent)
//         {
//             isRecordsEventReceived = true;
//             auto recordsVector = recordsEvent.GetPayload();
//             Aws::String records(recordsVector.begin(), recordsVector.end());
//             ASSERT_STREQ(firstColumn.c_str(), records.c_str());
//         });
//         handler.SetStatsEventCallback([&](const StatsEvent& statsEvent)
//         {
//             isStatsEventReceived = true;
//             ASSERT_EQ(static_cast<long long>(objectSize), statsEvent.GetDetails().GetBytesScanned());
//             ASSERT_EQ(static_cast<long long>(objectSize), statsEvent.GetDetails().GetBytesProcessed());
//             ASSERT_EQ(static_cast<long long>(firstColumn.size()), statsEvent.GetDetails().GetBytesReturned());
//         });

//         selectObjectContentRequest.SetEventStreamHandler(handler);

//         auto selectObjectContentOutcome = retryClient->SelectObjectContent(selectObjectContentRequest);
//         ASSERT_FALSE(selectObjectContentOutcome.IsSuccess());
//     }
// #endif

//     TEST_F(BucketAndObjectOperationTest, TestEventStreamWithLargeFile)
//     {
//         Aws::String fullBucketName = CalculateBucketName(BASE_EVENT_STREAM_LARGE_FILE_TEST_BUCKET_NAME.c_str());
//         SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
//         CreateBucketRequest createBucketRequest;
//         createBucketRequest.SetBucket(fullBucketName);
//         createBucketRequest.SetACL(BucketCannedACL::private_);
//         CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
//         AWS_ASSERT_SUCCESS(createBucketOutcome);
//         ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName));
//         TagTestBucket(fullBucketName, Client);

//         PutObjectRequest putObjectRequest;
//         putObjectRequest.SetBucket(fullBucketName);

//         std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
//         *objectStream << "Name,Number\n";
//         for (int i = 0; i < 1000000; i++)
//         {
//             *objectStream << "foo,0\n";
//         }
//         objectStream->flush();
//         putObjectRequest.SetBody(objectStream);
//         putObjectRequest.SetKey(TEST_EVENT_STREAM_OBJ_KEY);
//         auto objectSize = putObjectRequest.GetBody()->tellp();
//         putObjectRequest.SetContentLength(static_cast<long>(objectSize));
//         // putObjectRequest.SetContentMD5(HashingUtils::Base64Encode(HashingUtils::CalculateMD5(*putObjectRequest.GetBody())));
//         putObjectRequest.SetContentType("text/csv");

//         PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
//         AWS_ASSERT_SUCCESS(putObjectOutcome);

//         ASSERT_TRUE(WaitForObjectToPropagate(fullBucketName, TEST_EVENT_STREAM_OBJ_KEY));

//         SelectObjectContentRequest selectObjectContentRequest;
//         selectObjectContentRequest.SetBucket(fullBucketName);
//         selectObjectContentRequest.SetKey(TEST_EVENT_STREAM_OBJ_KEY);

//         selectObjectContentRequest.SetExpressionType(ExpressionType::SQL);

//         selectObjectContentRequest.SetExpression("select * from S3Object where cast(number as int) < 1");

//         CSVInput csvInput;
//         csvInput.SetFileHeaderInfo(FileHeaderInfo::USE);
//         InputSerialization inputSerialization;
//         inputSerialization.SetCSV(csvInput);
//         selectObjectContentRequest.SetInputSerialization(inputSerialization);

//         CSVOutput csvOutput;
//         OutputSerialization outputSerialization;
//         outputSerialization.SetCSV(csvOutput);
//         selectObjectContentRequest.SetOutputSerialization(outputSerialization);

//         size_t recordsTotalLength = 0;
//         bool isStatsEventReceived = false;

//         SelectObjectContentHandler handler;
//         handler.SetRecordsEventCallback([&](const RecordsEvent& recordsEvent)
//         {
//             recordsTotalLength += recordsEvent.GetPayload().size();
//         });
//         handler.SetStatsEventCallback([&](const StatsEvent& statsEvent)
//         {
//             isStatsEventReceived = true;
//             ASSERT_EQ(12ll/*length of the 1st row*/ + 6/*length of all the other row*/ * 1000000ll, statsEvent.GetDetails().GetBytesScanned());
//             ASSERT_EQ(6000012ll, statsEvent.GetDetails().GetBytesProcessed());
//             ASSERT_EQ(6000000ll, statsEvent.GetDetails().GetBytesReturned());
//         });

//         selectObjectContentRequest.SetEventStreamHandler(handler);

//         auto selectObjectContentOutcome = Client->SelectObjectContent(selectObjectContentRequest);
//         ASSERT_EQ(6000000u, recordsTotalLength);
//         ASSERT_TRUE(isStatsEventReceived);
//     }

//     TEST_F(BucketAndObjectOperationTest, TestErrorsInXml)
//     {
//         SelectObjectContentRequest selectObjectContentRequest;
//         selectObjectContentRequest.SetBucket("adskflaklfakl");
//         selectObjectContentRequest.SetKey(TEST_EVENT_STREAM_OBJ_KEY);

//         selectObjectContentRequest.SetExpressionType(ExpressionType::SQL);

//         selectObjectContentRequest.SetExpression("select s._1 from S3Object s");

//         CSVInput csvInput;
//         csvInput.SetFileHeaderInfo(FileHeaderInfo::USE);
//         InputSerialization inputSerialization;
//         inputSerialization.SetCSV(csvInput);
//         selectObjectContentRequest.SetInputSerialization(inputSerialization);

//         CSVOutput csvOutput;
//         OutputSerialization outputSerialization;
//         outputSerialization.SetCSV(csvOutput);
//         selectObjectContentRequest.SetOutputSerialization(outputSerialization);

//         auto selectObjectContentOutcome = Client->SelectObjectContent(selectObjectContentRequest);
//         ASSERT_FALSE(selectObjectContentOutcome.IsSuccess());
// #if ENABLE_CURL_CLIENT
//         ASSERT_FALSE(selectObjectContentOutcome.GetError().GetRemoteHostIpAddress().empty());
// #endif
//         ASSERT_FALSE(selectObjectContentOutcome.GetError().GetRequestId().empty());
//         ASSERT_EQ(S3CrtErrors::NO_SUCH_BUCKET, selectObjectContentOutcome.GetError().GetErrorType());
//     }

//     TEST_F(BucketAndObjectOperationTest, TestErrorsInEventStream)
//     {
//         Aws::String fullBucketName = CalculateBucketName(BASE_EVENT_STREAM_ERRORS_IN_EVENT_TEST_BUCKET_NAME.c_str());
//         SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
//         CreateBucketRequest createBucketRequest;
//         createBucketRequest.SetBucket(fullBucketName);
//         createBucketRequest.SetACL(BucketCannedACL::private_);
//         CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
//         AWS_ASSERT_SUCCESS(createBucketOutcome);
//         ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName));
//         TagTestBucket(fullBucketName, Client);

//         PutObjectRequest putObjectRequest;
//         putObjectRequest.SetBucket(fullBucketName);

//         std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
//         *objectStream << "Name,Number\n";
//         for (int i = 0; i < 1000000; i++)
//         {
//             *objectStream << "foo,0\n";
//         }
//         *objectStream << "bar,NAN";
//         objectStream->flush();
//         putObjectRequest.SetBody(objectStream);
//         putObjectRequest.SetKey(TEST_EVENT_STREAM_OBJ_KEY);
//         auto objectSize = putObjectRequest.GetBody()->tellp();
//         putObjectRequest.SetContentLength(static_cast<long>(objectSize));
//         // putObjectRequest.SetContentMD5(HashingUtils::Base64Encode(HashingUtils::CalculateMD5(*putObjectRequest.GetBody())));
//         putObjectRequest.SetContentType("text/csv");

//         PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
//         AWS_ASSERT_SUCCESS(putObjectOutcome);

//         ASSERT_TRUE(WaitForObjectToPropagate(fullBucketName, TEST_EVENT_STREAM_OBJ_KEY));

//         SelectObjectContentRequest selectObjectContentRequest;
//         selectObjectContentRequest.SetBucket(fullBucketName);
//         selectObjectContentRequest.SetKey(TEST_EVENT_STREAM_OBJ_KEY);

//         selectObjectContentRequest.SetExpressionType(ExpressionType::SQL);

//         selectObjectContentRequest.SetExpression("select * from S3Object where cast(number as int) < 1");

//         CSVInput csvInput;
//         csvInput.SetFileHeaderInfo(FileHeaderInfo::USE);
//         InputSerialization inputSerialization;
//         inputSerialization.SetCSV(csvInput);
//         selectObjectContentRequest.SetInputSerialization(inputSerialization);

//         CSVOutput csvOutput;
//         OutputSerialization outputSerialization;
//         outputSerialization.SetCSV(csvOutput);
//         selectObjectContentRequest.SetOutputSerialization(outputSerialization);

//         bool isErrorEventReceived = false;

//         SelectObjectContentHandler handler;
//         handler.SetOnErrorCallback([&](const AWSError<S3CrtErrors>& s3Error)
//         {
//             isErrorEventReceived = true;
//             ASSERT_EQ(CoreErrors::UNKNOWN, static_cast<CoreErrors>(s3Error.GetErrorType()));
//             ASSERT_STREQ("CastFailed", s3Error.GetExceptionName().c_str());
//         });

//         selectObjectContentRequest.SetEventStreamHandler(handler);

//         Client->SelectObjectContent(selectObjectContentRequest);

//         ASSERT_TRUE(isErrorEventReceived);
//     }

    TEST_F(BucketAndObjectOperationTest, TestNullBody)
    {
        const Aws::String fullBucketName = CalculateBucketName(BASE_PUT_OBJECTS_BUCKET_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);

        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        const CreateBucketResult& createBucketResult = createBucketOutcome.GetResult();
        ASSERT_TRUE(!createBucketResult.GetLocation().empty());
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName));
        TagTestBucket(fullBucketName, Client);

        PutObjectRequest putObjectRequest;
        putObjectRequest.SetBucket(fullBucketName);
        putObjectRequest.SetKey("sbiscigl_was_here_null");
        PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
        AWS_ASSERT_SUCCESS(putObjectOutcome);
    }

    TEST_F(BucketAndObjectOperationTest, TestEmptyBody)
    {
        const Aws::String fullBucketName = CalculateBucketName(BASE_PUT_OBJECTS_BUCKET_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);

        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        const CreateBucketResult& createBucketResult = createBucketOutcome.GetResult();
        ASSERT_TRUE(!createBucketResult.GetLocation().empty());
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName));
        TagTestBucket(fullBucketName, Client);

        PutObjectRequest putObjectRequest;
        putObjectRequest.SetBucket(fullBucketName);
        putObjectRequest.SetKey("sbiscigl_was_here_empty");
        putObjectRequest.SetBody(Aws::MakeShared<StringStream>(ALLOCATION_TAG, ""));
        PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
        AWS_ASSERT_SUCCESS(putObjectOutcome);
    }

    TEST_F(BucketAndObjectOperationTest, NoAuthPublicBucket) {
        Aws::S3Crt::ClientConfiguration s3ClientConfig;
        s3ClientConfig.region = Aws::Region::US_EAST_1;
        s3ClientConfig.scheme = Scheme::HTTPS;
        s3ClientConfig.executor = Aws::MakeShared<Aws::Utils::Threading::PooledThreadExecutor>(ALLOCATION_TAG, 4);
        s3ClientConfig.throughputTargetGbps = 2.0;
        s3ClientConfig.partSize = 5 * 1024 * 1024;

        Client = Aws::MakeShared<S3CrtClient>(ALLOCATION_TAG,
                                              Aws::Auth::AWSCredentials{"", ""},
                                              s3ClientConfig,
                                              Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::Never);

        //Make a request for one of out public doc pages
        GetObjectRequest getObjectRequest;
        getObjectRequest.SetBucket("aws-sdk-cpp-docs");
        getObjectRequest.SetKey("cpp/api/LATEST/index.html");

        AWS_ASSERT_SUCCESS(Client->GetObject(getObjectRequest));
    }

    TEST_F(BucketAndObjectOperationTest, LocalHostCrtError) {
        Aws::S3Crt::ClientConfiguration s3ClientConfig;
        s3ClientConfig.region = Aws::Region::US_EAST_1;
        s3ClientConfig.scheme = Scheme::HTTPS;
        s3ClientConfig.executor = Aws::MakeShared<Aws::Utils::Threading::PooledThreadExecutor>(ALLOCATION_TAG, 4);
        s3ClientConfig.throughputTargetGbps = 2.0;
        s3ClientConfig.partSize = 5 * 1024 * 1024;
        s3ClientConfig.endpointOverride = "localhost";

        Client = Aws::MakeShared<S3CrtClient>(ALLOCATION_TAG,
                                              Aws::Auth::AWSCredentials{"", ""},
                                              s3ClientConfig,
                                              Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::Never);

        //Make a request for one of out public doc pages
        GetObjectRequest getObjectRequest;
        getObjectRequest.SetBucket("aws-sdk-cpp-docs");
        getObjectRequest.SetKey("cpp/api/LATEST/index.html");

        GetObjectOutcome outcome = Client->GetObject(getObjectRequest);

        ASSERT_FALSE(outcome.IsSuccess());
    }

    TEST_F(BucketAndObjectOperationTest, MissingCertificate) {
        Aws::S3Crt::ClientConfiguration s3ClientConfig;
        s3ClientConfig.region = Aws::Region::US_EAST_1;
        s3ClientConfig.caFile = "/some-non-existing-certificate/cert.crt";
        s3ClientConfig.verifySSL = true;

        S3CrtClient crtClient = S3CrtClient(Aws::Auth::AWSCredentials{"", ""},
                                              s3ClientConfig,
                                              Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::Never);

        GetObjectRequest getObjectRequest;
        getObjectRequest.SetBucket("aws-sdk-cpp-docs");
        getObjectRequest.SetKey("cpp/api/LATEST/index.html");

        auto result = crtClient.GetObject(getObjectRequest);
        ASSERT_FALSE(result.IsSuccess());
        ASSERT_EQ((Aws::Client::CoreErrors) result.GetError().GetErrorType(), Aws::Client::CoreErrors::NOT_INITIALIZED);
    }

    TEST_F(BucketAndObjectOperationTest, PutObjectChecksum) {
        struct ChecksumTestCase {
            std::function<PutObjectRequest(PutObjectRequest)> chucksumRequestMutator;
            HttpResponseCode responseCode;
            String body;
        };

        const String fullBucketName = CalculateBucketName(BASE_CHECKSUMS_BUCKET_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);
        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);

        Vector<ChecksumTestCase> testCases{
            {
                [](PutObjectRequest request) -> PutObjectRequest {
                    return request.WithChecksumAlgorithm(ChecksumAlgorithm::CRC32).WithChecksumCRC32("Just runnin' scared each place we go");
                },
                HttpResponseCode::BAD_REQUEST,
                "Just runnin' scared each place we go"
            },
            {
                [](PutObjectRequest request) -> PutObjectRequest {
                    return request.WithChecksumAlgorithm(ChecksumAlgorithm::SHA1).WithChecksumSHA1("So afraid that he might show");
                },
                HttpResponseCode::BAD_REQUEST,
                "So afraid that he might show"
            },
            {
                [](PutObjectRequest request) -> PutObjectRequest {
                    return request.WithChecksumAlgorithm(ChecksumAlgorithm::SHA256).WithChecksumSHA256("Yeah, runnin' scared, what would I do");
                },
                HttpResponseCode::BAD_REQUEST,
                "Yeah, runnin' scared, what would I do"
            },
            {
                [](PutObjectRequest request) -> PutObjectRequest {
                    return request.WithChecksumAlgorithm(ChecksumAlgorithm::CRC32C).WithChecksumCRC32C("If he came back and wanted you?");
                },
                HttpResponseCode::BAD_REQUEST,
                "If he came back and wanted you?"
            },
            {
                [](PutObjectRequest request) -> PutObjectRequest {
                    return request.WithContentMD5("Just runnin' scared, feelin' low");
                },
                HttpResponseCode::BAD_REQUEST,
                "Just runnin' scared, feelin' low",
            },
            {
                [](PutObjectRequest request) -> PutObjectRequest {
                    return request.WithChecksumAlgorithm(ChecksumAlgorithm::CRC32)
                        .WithChecksumCRC32(HashingUtils::Base64Encode(HashingUtils::CalculateCRC32("Runnin' scared, you love him so")));
                },
                HttpResponseCode::OK,
                "Runnin' scared, you love him so"
            },
            {
                [](PutObjectRequest request) -> PutObjectRequest {
                    return request.WithChecksumAlgorithm(ChecksumAlgorithm::SHA1)
                        .WithChecksumSHA1(HashingUtils::Base64Encode(HashingUtils::CalculateSHA1("Just runnin' scared, afraid to lose")));
                },
                HttpResponseCode::OK,
                "Just runnin' scared, afraid to lose"
            },
            {
                [](PutObjectRequest request) -> PutObjectRequest {
                    return request.WithChecksumAlgorithm(ChecksumAlgorithm::SHA256)
                        .WithChecksumSHA256(HashingUtils::Base64Encode(HashingUtils::CalculateSHA256("If he came back, which one would you choose?")));
                },
                HttpResponseCode::OK,
                "If he came back, which one would you choose?"
            },
            {
                [](PutObjectRequest request) -> PutObjectRequest {
                    return request.WithChecksumAlgorithm(ChecksumAlgorithm::CRC32C)
                        .WithChecksumCRC32C(HashingUtils::Base64Encode(HashingUtils::CalculateCRC32C("Then all at once he was standing there")));
                },
                HttpResponseCode::OK,
                "Then all at once he was standing there"
            },
            {
                [](PutObjectRequest request) -> PutObjectRequest {
                    return request.WithContentMD5(HashingUtils::Base64Encode(HashingUtils::CalculateMD5("So sure of himself, his head in the air")));
                },
                HttpResponseCode::OK,
                "So sure of himself, his head in the air"
            }
        };

        for (const auto&testCase: testCases) {
            auto request = testCase.chucksumRequestMutator(PutObjectRequest()
                .WithBucket(fullBucketName)
                .WithKey("RunningScared"));
            std::shared_ptr<IOStream> body = Aws::MakeShared<StringStream>(ALLOCATION_TAG,
                testCase.body,
                std::ios_base::in | std::ios_base::binary);
            request.SetBody(body);
            const auto response = Client->PutObject(request);
            if (!response.IsSuccess()) {
                ASSERT_EQ(testCase.responseCode, response.GetError().GetResponseCode());
            } else {
                ASSERT_EQ(testCase.responseCode, HttpResponseCode::OK);
                ASSERT_TRUE(response.IsSuccess());
            }
        }
    }

    class TestMonitoring: public Aws::Monitoring::MonitoringInterface
    {
        mutable std::shared_ptr<Aws::Vector<Aws::String>> m_sequence;
        mutable std::mutex m_mutex; 

        inline void logCommand(const Aws::String& log) const{
            const std::lock_guard<std::mutex> lock(m_mutex);
            if(m_sequence)
            {
                std::cout<<log<< std::endl;
                m_sequence->emplace_back(log);
            }
        }

    public:

        explicit TestMonitoring( std::shared_ptr<Aws::Vector<Aws::String> >& sequence):m_sequence{sequence}{};

        void* OnRequestStarted(const Aws::String& serviceName, const Aws::String& requestName, const std::shared_ptr<const Aws::Http::HttpRequest>& request) const override
        {
            AWS_UNREFERENCED_PARAM(serviceName);
            AWS_UNREFERENCED_PARAM(requestName);
            AWS_UNREFERENCED_PARAM(request);
            logCommand("OnRequestStarted");
            return &m_sequence;
        }

        void OnRequestSucceeded(const Aws::String& serviceName, const Aws::String& requestName, const std::shared_ptr<const Aws::Http::HttpRequest>& request,
            const Aws::Client::HttpResponseOutcome& outcome, const Aws::Monitoring::CoreMetricsCollection& metricsFromCore, void* context) const override
        {
            AWS_UNREFERENCED_PARAM(serviceName);
            AWS_UNREFERENCED_PARAM(requestName);
            AWS_UNREFERENCED_PARAM(request);
            AWS_UNREFERENCED_PARAM(outcome);
            AWS_UNREFERENCED_PARAM(metricsFromCore);
            AWS_UNREFERENCED_PARAM(context);
            logCommand("OnRequestSucceeded");
            
        }


        void OnRequestFailed(const Aws::String& serviceName, const Aws::String& requestName, const std::shared_ptr<const Aws::Http::HttpRequest>& request,
            const Aws::Client::HttpResponseOutcome& outcome, const Aws::Monitoring::CoreMetricsCollection& metricsFromCore, void* context) const override
        {
            AWS_UNREFERENCED_PARAM(serviceName);
            AWS_UNREFERENCED_PARAM(requestName);
            AWS_UNREFERENCED_PARAM(request);
            AWS_UNREFERENCED_PARAM(outcome);
            AWS_UNREFERENCED_PARAM(metricsFromCore);
            AWS_UNREFERENCED_PARAM(context);
            logCommand("OnRequestFailed");
        }


        void OnRequestRetry(const Aws::String& serviceName, const Aws::String& requestName,
            const std::shared_ptr<const Aws::Http::HttpRequest>& request, void* context) const override
        {
            AWS_UNREFERENCED_PARAM(serviceName);
            AWS_UNREFERENCED_PARAM(requestName);
            AWS_UNREFERENCED_PARAM(request);
            AWS_UNREFERENCED_PARAM(context);
            logCommand("OnRequestRetry");
        }


        void OnFinish(const Aws::String& serviceName, const Aws::String& requestName,
            const std::shared_ptr<const Aws::Http::HttpRequest>& request, void* context) const override
        {
            AWS_UNREFERENCED_PARAM(serviceName);
            AWS_UNREFERENCED_PARAM(requestName);
            AWS_UNREFERENCED_PARAM(request);
            AWS_UNREFERENCED_PARAM(context);
            logCommand("OnFinish");
        }
    };

    class TestMonitoringFactory : public Aws::Monitoring::MonitoringFactory
    {
    public:
        mutable std::shared_ptr<Aws::Vector<Aws::String>> m_sequenceSp;
        explicit TestMonitoringFactory(  std::shared_ptr<Aws::Vector<Aws::String>>& seq): m_sequenceSp{seq}
        {

        }
        Aws::UniquePtr<Aws::Monitoring::MonitoringInterface> CreateMonitoringInstance() const override
        {
            return Aws::MakeUnique<TestMonitoring>("CreateMonitoringInstance",m_sequenceSp);
        }
    };


    TEST_F(BucketAndObjectOperationTest, TestMonitor)
    {
        std::shared_ptr<Aws::Vector<Aws::String>> monitorCallSequenceSp = Aws::MakeShared<Aws::Vector<Aws::String>>("monitorSequence");
        std::vector<Aws::Monitoring::MonitoringFactoryCreateFunction> monitoringFactoryCreateFunctions;

        monitoringFactoryCreateFunctions.emplace_back(
            [&monitorCallSequenceSp](){
                return Aws::MakeUnique<TestMonitoringFactory>("monitor",monitorCallSequenceSp);
            }
        );

        const Aws::String fullBucketName = CalculateBucketName(BASE_PUT_OBJECTS_BUCKET_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);

        CreateBucketOutcome createBucketOutcome = Client->CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        const CreateBucketResult& createBucketResult = createBucketOutcome.GetResult();
        ASSERT_TRUE(!createBucketResult.GetLocation().empty());
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName));
        TagTestBucket(fullBucketName, Client);

        PutObjectRequest putObjectRequest;
        putObjectRequest.SetBucket(fullBucketName);
        putObjectRequest.SetKey("sbiscigl_was_here");

        //Note monitoring already has default monitoring interface ins InitApi()
        //adding custom monitoring
        Aws::Monitoring::AddMonitoring(monitoringFactoryCreateFunctions);
        PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
        AWS_ASSERT_SUCCESS(putObjectOutcome);

        EXPECT_EQ(monitorCallSequenceSp->size(), 2u);
        EXPECT_EQ( (*monitorCallSequenceSp)[0], "OnRequestStarted");
        EXPECT_EQ( (*monitorCallSequenceSp)[1], "OnRequestSucceeded");

        Aws::Monitoring::CleanupMonitoring();
    }
}
