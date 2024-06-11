﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/client/DefaultRetryStrategy.h>
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
#include <aws/s3/S3Client.h>
#include <aws/s3/model/DeleteBucketRequest.h>
#include <aws/s3/model/CreateBucketRequest.h>
#include <aws/s3/model/HeadBucketRequest.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/s3/model/CopyObjectRequest.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/DeleteObjectRequest.h>
#include <aws/s3/model/DeleteObjectsRequest.h>
#include <aws/s3/model/HeadObjectRequest.h>
#include <aws/s3/model/CreateMultipartUploadRequest.h>
#include <aws/s3/model/UploadPartRequest.h>
#include <aws/s3/model/CompleteMultipartUploadRequest.h>
#include <aws/s3/model/ListObjectsRequest.h>
#include <aws/s3/model/GetBucketLocationRequest.h>
#include <aws/s3/model/SelectObjectContentRequest.h>
#include <aws/s3/model/WriteGetObjectResponseRequest.h>
#include <aws/s3/model/PutBucketTaggingRequest.h>
#include <aws/testing/ProxyConfig.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/testing/TestingEnvironment.h>
#include <aws/testing/mocks/monitoring/TestingMonitoring.h>
#include <fstream>
#include <thread>

#ifdef _WIN32
#pragma warning(disable: 4127)
#ifdef GetObject
#undef GetObject
#endif
#endif

#include <aws/core/http/standard/StandardHttpRequest.h>


using namespace Aws;
using namespace Aws::Http::Standard;
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;
using namespace Aws::S3;
using namespace Aws::S3::Model;
using namespace Aws::Utils;

namespace
{

    static std::string BASE_CREATE_BUCKET_TEST_NAME = "createbuckettest";
    static std::string BASE_DNS_UNFRIENDLY_TEST_NAME = "dns.unfriendly";
    static std::string BASE_LOCATION_BUCKET_TEST_NAME = "locbuckettest";
    static std::string BASE_OBJECTS_BUCKET_NAME = "objecttest";
    static std::string BASE_OBJECTS_NEWLINE_BUCKET_NAME = "newlinetest";
    static std::string BASE_PUT_OBJECTS_BUCKET_NAME = "putobjecttest";
    static std::string BASE_PUT_WEIRD_CHARSETS_OBJECTS_BUCKET_NAME = "charsetstest";
    static std::string BASE_PUT_OBJECTS_PRESIGNED_URLS_BUCKET_NAME = "presignedtest";
    static std::string BASE_PUT_MULTIPART_BUCKET_NAME = "multiparttest";
    static std::string BASE_OBJECT_LOCK_BUCKET_NAME = "objectlock";
    static std::string BASE_ERRORS_TESTING_BUCKET = "errorstest";
    static std::string BASE_INTERRUPT_TESTING_BUCKET = "interrupttest";
    static std::string BASE_EVENT_STREAM_TEST_BUCKET_NAME = "eventstream";
    static std::string BASE_EVENT_STREAM_LARGE_FILE_TEST_BUCKET_NAME = "largeeventstream";
    static std::string BASE_EVENT_STREAM_ERRORS_IN_EVENT_TEST_BUCKET_NAME = "errorsinevent";
    static std::string BASE_CHECKSUMS_BUCKET_NAME = "checksums";
    static std::string BASE_CROSS_REGION_BUCKET_NAME = "crossregion";
    static std::string BASE_ENDPOINT_OVERRIDE_BUCKET_NAME = "endpointoverride";
    static const char* ALLOCATION_TAG = "BucketAndObjectOperationTest";
    static const char* TEST_OBJ_KEY = "TestObjectKey";
    static const char* TEST_NEWLINE_KEY = "TestNewlineKey";
    static const char* TEST_NOT_MODIFIED_OBJ_KEY = "TestNotModifiedObjectKey";
    static const char* TEST_OBJECT_LOCK_OBJ_KEY = "TestObjectLock";
    static const char* TEST_DNS_UNFRIENDLY_OBJ_KEY = "WhySoHostile";
    static const char* TEST_EVENT_STREAM_OBJ_KEY = "TestEventStream.csv";
    //windows won't let you hard code unicode strings in a source file and assign them to a char*. Every other compiler does and I need to test this.
    //to get around this, this string is url encoded version of "TestUnicode中国Key". At test time, we'll convert it to the unicode string
    static const char* URLENCODED_UNICODE_KEY = "TestUnicode%E4%B8%AD%E5%9B%BDKey";
    static const char* URIESCAPE_KEY = "Esc a=pe+Me$";
    static const char* CUSTOM_ENDPOINT_OVERRIDE = "beta.example.com";
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
              std::ref(BASE_OBJECTS_NEWLINE_BUCKET_NAME),
              std::ref(BASE_PUT_OBJECTS_BUCKET_NAME),
              std::ref(BASE_PUT_WEIRD_CHARSETS_OBJECTS_BUCKET_NAME),
              std::ref(BASE_PUT_OBJECTS_PRESIGNED_URLS_BUCKET_NAME),
              std::ref(BASE_PUT_MULTIPART_BUCKET_NAME),
              std::ref(BASE_OBJECT_LOCK_BUCKET_NAME),
              std::ref(BASE_ERRORS_TESTING_BUCKET),
              std::ref(BASE_INTERRUPT_TESTING_BUCKET),
              std::ref(BASE_EVENT_STREAM_TEST_BUCKET_NAME),
              std::ref(BASE_EVENT_STREAM_LARGE_FILE_TEST_BUCKET_NAME),
              std::ref(BASE_EVENT_STREAM_ERRORS_IN_EVENT_TEST_BUCKET_NAME),
              std::ref(BASE_CHECKSUMS_BUCKET_NAME),
              std::ref(BASE_CROSS_REGION_BUCKET_NAME),
              std::ref(BASE_ENDPOINT_OVERRIDE_BUCKET_NAME),
            };

        for (auto& testBucketName : TEST_BUCKETS)
        {
            AppendUUID(testBucketName);
        }
    }

    class RetryFiveTimesRetryStrategy: public Aws::Client::RetryStrategy
    {
    public:
        bool ShouldRetry(const AWSError<CoreErrors>&, long attemptedRetries) const override { return attemptedRetries < 5; }
        long CalculateDelayBeforeNextRetry(const AWSError<CoreErrors>&, long) const override { return 0; }
    };

    class BucketAndObjectOperationTest : public Aws::Testing::AwsCppSdkGTestSuite
    {
    protected:
        std::shared_ptr<S3Client> Client;
        std::shared_ptr<S3Client> globalClient;
        std::shared_ptr<S3Client> oregonClient;
        std::shared_ptr<S3Client> retryClient;
        std::shared_ptr<HttpClientFactory> ClientFactory;
        std::shared_ptr<HttpClient> m_HttpClient;
        std::shared_ptr<Aws::Utils::RateLimits::RateLimiterInterface> Limiter;
        Aws::UnorderedSet<Aws::String> m_bucketsToDelete;


        void SetUp() override
        {
            static std::once_flag flag;
            std::call_once(flag, EnsureUniqueBucketNames);

            Limiter = Aws::MakeShared<Aws::Utils::RateLimits::DefaultRateLimiter<>>(ALLOCATION_TAG, 50000000);

            // Create a client
            ClientConfiguration config;
            config.region = Aws::Region::US_EAST_1;
            config.scheme = Scheme::HTTPS;
            config.connectTimeoutMs = 30000;
            config.requestTimeoutMs = 30000;
            config.readRateLimiter = Limiter;
            config.writeRateLimiter = Limiter;
            config.executor = Aws::MakeShared<Aws::Utils::Threading::PooledThreadExecutor>(ALLOCATION_TAG, 4);
            config.enableHttpClientTrace = true;

            //to use a proxy, uncomment the next two lines.
            if (USE_PROXY_FOR_TESTS)
            {
                config.proxyHost = PROXY_HOST;
                config.proxyPort = PROXY_PORT;
            }

            Client = Aws::MakeShared<S3Client>(ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), config,
                        AWSAuthV4Signer::PayloadSigningPolicy::Never /*signPayloads*/, true /*useVirtualAddressing*/, Aws::S3::US_EAST_1_REGIONAL_ENDPOINT_OPTION::LEGACY);
            config.region = Aws::Region::AWS_GLOBAL;
            globalClient = Aws::MakeShared<S3Client>(ALLOCATION_TAG,
                Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), config,
                    AWSAuthV4Signer::PayloadSigningPolicy::Never /*signPayloads*/, true /*useVirtualAddressing*/);
            config.region = Aws::Region::US_WEST_2;
            config.useDualStack = true;
            oregonClient = Aws::MakeShared<S3Client>(ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), config,
                        AWSAuthV4Signer::PayloadSigningPolicy::Never /*signPayloads*/, true /*useVirtualAddressing*/);
            m_HttpClient = Aws::Http::CreateHttpClient(config);

            config.retryStrategy = Aws::MakeShared<RetryFiveTimesRetryStrategy>(ALLOCATION_TAG);
            retryClient = Aws::MakeShared<S3Client>(ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), config,
                        AWSAuthV4Signer::PayloadSigningPolicy::Never /*signPayloads*/, true /*useVirtualAddressing*/);
            // Using client side monitoring for endpoint override testing.
            TestingMonitoringManager::InitTestingMonitoring();
        }

        void TearDown() override
        {
            TestingMonitoringManager::CleanupTestingMonitoring();
            for (const auto& bucketName : m_bucketsToDelete)
            {
                DeleteBucket(bucketName);
            }
            m_bucketsToDelete.clear();
            Limiter = nullptr;
            Client = nullptr;
            globalClient = nullptr;
            oregonClient = nullptr;
            m_HttpClient = nullptr;
            retryClient = nullptr;
        }

        static std::shared_ptr<Aws::StringStream> Create5MbStreamForUploadPart(const char* partTag)
        {
            uint32_t fiveMbSize = 5 * 1024 * 1024;

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

        UploadPartOutcomeCallable MakeUploadPartOutcomeAndGetCallable(unsigned partNumber, const ByteBuffer& md5OfStream,
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

        static void TagTestBucket(const Aws::String& bucketName, const std::shared_ptr<Aws::S3::S3Client>& client) {
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

            auto taggingOutcome = CallOperationWithUnconditionalRetry(client.get(), &Aws::S3::S3Client::PutBucketTagging, taggingRequest);
            AWS_ASSERT_SUCCESS(taggingOutcome);
        }

        bool WaitForBucketToPropagate(const Aws::String& bucketName, std::shared_ptr<S3Client>& client)
        {
            if (!client)
            {
                client = Client;
            }

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

        bool WaitForObjectToPropagate(const Aws::String& bucketName, const char* objectKey)
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

        bool WaitForObjectWithSSECToPropagate(const Aws::String& bucketName, const char* objectKey, const ByteBuffer& sseKey)
        {
            unsigned timeoutCount = 0;
            Aws::String strBuffer(reinterpret_cast<char*>(sseKey.GetUnderlyingData()), sseKey.GetLength());
            while (timeoutCount++ < TIMEOUT_MAX)
            {
                GetObjectRequest getObjectRequest;
                getObjectRequest.SetBucket(bucketName);
                getObjectRequest.SetKey(objectKey);
                getObjectRequest.WithSSECustomerAlgorithm(Aws::S3::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3::Model::ServerSideEncryption::AES256))
                    .WithSSECustomerKey(HashingUtils::Base64Encode(sseKey))
                    .WithSSECustomerKeyMD5(HashingUtils::Base64Encode(HashingUtils::CalculateMD5(strBuffer)));
                GetObjectOutcome getObjectOutcome = Client->GetObject(getObjectRequest);
                if (getObjectOutcome.IsSuccess())
                {
                    return true;
                }

                std::this_thread::sleep_for(std::chrono::seconds(5));
            }

            return false;
        }

        CreateBucketOutcome CreateBucket(const CreateBucketRequest& request, std::shared_ptr<S3Client> client = nullptr)
        {
            if (!client)
            {
                client = Client;
            }
            CreateBucketOutcome createBucketOutcome = Client->CreateBucket(request);
            m_bucketsToDelete.insert(request.GetBucket());

            return createBucketOutcome;
        }

        void EmptyBucket(const Aws::String& bucketName)
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
                auto deleteObjectOutcome = Client->DeleteObject(deleteObjectRequest);
                AWS_ASSERT_SUCCESS(deleteObjectOutcome);
            }
        }

        void WaitForBucketToEmpty(const Aws::String& bucketName)
        {
            ListObjectsRequest listObjectsRequest;
            listObjectsRequest.SetBucket(bucketName);

            unsigned checkForObjectsCount = 0;
            while (checkForObjectsCount++ < TIMEOUT_MAX)
            {
                ListObjectsOutcome listObjectsOutcome = Client->ListObjects(listObjectsRequest);
                AWS_EXPECT_SUCCESS(listObjectsOutcome);

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

        void DeleteBucket(const Aws::String& bucketName)
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

                auto deleteBucketOutcome = CallOperationWithUnconditionalRetry(Client.get(), &Aws::S3::S3Client::DeleteBucket, deleteBucketRequest);
                AWS_EXPECT_SUCCESS(deleteBucketOutcome);
            }
        }

        static Aws::String CalculateBucketName(const Aws::String& bucketPrefix)
        {
            return Aws::Testing::GetAwsResourcePrefix() + bucketPrefix;
        }

        Aws::String PreparePresignedUrlTest()
        {
            Aws::String fullBucketName = CalculateBucketName(BASE_PUT_OBJECTS_PRESIGNED_URLS_BUCKET_NAME.c_str());
            CreateBucketRequest createBucketRequest;
            createBucketRequest.SetBucket(fullBucketName);
            createBucketRequest.SetACL(BucketCannedACL::private_);
            CreateBucketOutcome createBucketOutcome = CreateBucket(createBucketRequest);
            AWS_EXPECT_SUCCESS(createBucketOutcome);
            const CreateBucketResult& createBucketResult = createBucketOutcome.GetResult();
            EXPECT_TRUE(!createBucketResult.GetLocation().empty());
            EXPECT_TRUE(WaitForBucketToPropagate(fullBucketName, Client));
            TagTestBucket(fullBucketName, Client);
            return fullBucketName;
        }

        void DoPresignedUrlTest(const Aws::String& bucketName, std::shared_ptr<HttpRequest>& putRequest)
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

            Aws::S3::Model::GetObjectRequest getObjectRequest;
            getObjectRequest.WithBucket(bucketName).WithKey(TEST_OBJ_KEY);
            auto outcome = Client->GetObject(getObjectRequest);
            AWS_ASSERT_SUCCESS(outcome);
            if (putRequest->HasHeader(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION))
            {
                ASSERT_STREQ(Aws::S3::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(outcome.GetResult().GetServerSideEncryption()).c_str(), putRequest->GetHeaderValue(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION).c_str());
            }
        }

        void CleanUpPresignedUrlTest()
        {
            Aws::String fullBucketName = CalculateBucketName(BASE_PUT_OBJECTS_PRESIGNED_URLS_BUCKET_NAME.c_str());
            Aws::String presignedUrlDelete = Client->GeneratePresignedUrl(fullBucketName, TEST_OBJ_KEY, HttpMethod::HTTP_DELETE);
            std::shared_ptr<HttpRequest> deleteRequest = CreateHttpRequest(presignedUrlDelete, HttpMethod::HTTP_DELETE, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
            static const size_t RETRIES = 5;
            size_t deleteAttempt = 0;
            Aws::Http::HttpResponseCode deleteResponseCode = Aws::Http::HttpResponseCode::REQUEST_NOT_MADE;
            while(deleteAttempt < RETRIES && deleteResponseCode == Aws::Http::HttpResponseCode::REQUEST_NOT_MADE)
            {
                deleteResponseCode = m_HttpClient->MakeRequest(deleteRequest)->GetResponseCode();
                deleteAttempt++;
                if(deleteResponseCode == Aws::Http::HttpResponseCode::REQUEST_NOT_MADE) {
                    std::this_thread::sleep_for(std::chrono::milliseconds(500));
                }
            }
            ASSERT_EQ(HttpResponseCode::NO_CONTENT, deleteResponseCode);
            WaitForBucketToEmpty(fullBucketName);
        }

        void DoTestObjectOperationsWithPresignedUrlsWithSSEC(bool withCustomizedHeaders)
        {
            const Aws::String fullBucketName = PreparePresignedUrlTest();
            SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
            std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>("BucketAndObjectOperationTest");
            *objectStream << "Test Object";
            objectStream->flush();

            ByteBuffer sseKey(32);
            for (int i = 0; i < 32; i++)
            {
                sseKey[i] = 'a';
            }
            Aws::String presignedUrlPut;
            if (withCustomizedHeaders)
            {
                Aws::Http::HeaderValueCollection collections;
                collections.emplace("TestKey1", "TestVal1");
                collections.emplace("TestKey2", "TestVal2");
                presignedUrlPut = Client->GeneratePresignedUrlWithSSEC(fullBucketName, TEST_OBJ_KEY, HttpMethod::HTTP_PUT, collections, HashingUtils::Base64Encode(sseKey));
            }
            else
            {
                presignedUrlPut = Client->GeneratePresignedUrlWithSSEC(fullBucketName, TEST_OBJ_KEY, HttpMethod::HTTP_PUT, HashingUtils::Base64Encode(sseKey));
            }

            std::shared_ptr<HttpRequest> putRequest = CreateHttpRequest(presignedUrlPut, HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
            putRequest->AddContentBody(objectStream);
            putRequest->SetHeaderValue(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_ALGORITHM,
                    Aws::S3::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3::Model::ServerSideEncryption::AES256));
            putRequest->SetHeaderValue(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_KEY, HashingUtils::Base64Encode(sseKey));
            Aws::String strBuffer(reinterpret_cast<char*>(sseKey.GetUnderlyingData()), sseKey.GetLength());
            putRequest->SetHeaderValue(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_KEY_MD5, HashingUtils::Base64Encode(HashingUtils::CalculateMD5(strBuffer)));
            if (withCustomizedHeaders)
            {
                ASSERT_NE(presignedUrlPut.find("testkey1"), std::string::npos);
                ASSERT_NE(presignedUrlPut.find("testkey2"), std::string::npos);
                putRequest->SetHeaderValue("TestKey1", "TestVal1");
                putRequest->SetHeaderValue("TestKey2", "TestVal2");
            }

            Aws::StringStream intConverter;
            intConverter << objectStream->tellp();
            putRequest->SetContentLength(intConverter.str());
            putRequest->SetContentType("text/plain");
            std::shared_ptr<HttpResponse> putResponse = m_HttpClient->MakeRequest(putRequest);

            ASSERT_EQ(HttpResponseCode::OK, putResponse->GetResponseCode());

            ASSERT_TRUE(WaitForObjectWithSSECToPropagate(fullBucketName, TEST_OBJ_KEY, sseKey));

            // Test GetObject with SSEC Presigned Url
            Aws::String presignedUrlGet = Client->GeneratePresignedUrlWithSSEC(fullBucketName, TEST_OBJ_KEY, HttpMethod::HTTP_GET, HashingUtils::Base64Encode(sseKey));
            std::shared_ptr<HttpRequest> getRequest = CreateHttpRequest(presignedUrlGet, HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
            getRequest->SetHeaderValue(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_ALGORITHM,
                    Aws::S3::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3::Model::ServerSideEncryption::AES256));
            getRequest->SetHeaderValue(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_KEY, HashingUtils::Base64Encode(sseKey));
            getRequest->SetHeaderValue(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION_CUSTOMER_KEY_MD5, HashingUtils::Base64Encode(HashingUtils::CalculateMD5(strBuffer)));

            std::shared_ptr<HttpResponse> getResponse = m_HttpClient->MakeRequest(getRequest);

            ASSERT_EQ(HttpResponseCode::OK, getResponse->GetResponseCode());
            Aws::StringStream ss;
            ss << getResponse->GetResponseBody().rdbuf();
            ASSERT_STREQ("Test Object", ss.str().c_str());

            // Test GetObject without required Headers
            Aws::S3::Model::GetObjectRequest getObjectRequest;
            getObjectRequest.WithBucket(fullBucketName).WithKey(TEST_OBJ_KEY);
            auto outcome = Client->GetObject(getObjectRequest);
            ASSERT_FALSE(outcome.IsSuccess());

            // Test GetObject with SSEC required Headers
            getObjectRequest.WithSSECustomerAlgorithm(Aws::S3::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3::Model::ServerSideEncryption::AES256))
                .WithSSECustomerKey(HashingUtils::Base64Encode(sseKey))
                .WithSSECustomerKeyMD5(HashingUtils::Base64Encode(HashingUtils::CalculateMD5(strBuffer)));
            outcome = Client->GetObject(getObjectRequest);
            AWS_ASSERT_SUCCESS(outcome);
            ss.str("");
            ss << outcome.GetResult().GetBody().rdbuf();
            ASSERT_STREQ("Test Object", ss.str().c_str());
            ASSERT_EQ(outcome.GetResult().GetSSECustomerAlgorithm(), Aws::S3::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3::Model::ServerSideEncryption::AES256));
            CleanUpPresignedUrlTest();
        }

        void DoTestGetObjectWithBucketARN(const ClientConfiguration& config, const Aws::String& bucketArn, const Aws::String& expectedEndpoint,
            const Aws::String& expectedSignerRegion, const Aws::String& expectedSignerServiceName, bool arnExpectedToBeValid)
        {
            S3Client s3Client(config);
            GetObjectRequest getObjectRequest;
            getObjectRequest.SetBucket(bucketArn);
            getObjectRequest.SetKey("fakeObjectKey");
            auto getObjectOutcome = s3Client.GetObject(getObjectRequest);
            ASSERT_FALSE(getObjectOutcome.IsSuccess());
            if (arnExpectedToBeValid)
            {
                ASSERT_NE(S3Errors::VALIDATION, getObjectOutcome.GetError().GetErrorType());
                Aws::StringStream ss;
                ss << "https://" << expectedEndpoint << "/fakeObjectKey";
                if (ss.str() != TestingMonitoringMetrics::s_lastUriString.c_str()) {
                    std::cout << "Error";
                }
                ASSERT_STREQ(ss.str().c_str(), TestingMonitoringMetrics::s_lastUriString.c_str());
                ASSERT_STREQ(expectedSignerRegion.c_str(), TestingMonitoringMetrics::s_lastSigningRegion.c_str());
                ASSERT_STREQ(expectedSignerServiceName.c_str(), TestingMonitoringMetrics::s_lastSigningServiceName.c_str());
            }
            else
            {
                if (CoreErrors::ENDPOINT_RESOLUTION_FAILURE != (CoreErrors) getObjectOutcome.GetError().GetErrorType()) {
                    std::cout << "Error";
                }
                ASSERT_EQ(CoreErrors::ENDPOINT_RESOLUTION_FAILURE, (CoreErrors) getObjectOutcome.GetError().GetErrorType());
            }
        }

        void DoTestWriteGetObjectResponse(const ClientConfiguration& config, const Aws::String& expectedEndpoint)
        {
            // Chunked encoding
            S3Client s3Client(config);
            WriteGetObjectResponseRequest writeGetObjectResponseRequest;
            writeGetObjectResponseRequest.SetRequestRoute("fakeRoute");
            writeGetObjectResponseRequest.SetRequestToken("fakeToken");
            auto bodyStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
            *bodyStream << "fakeBody";
            writeGetObjectResponseRequest.SetBody(bodyStream);
            auto writeGetObjectResponseOutcome = s3Client.WriteGetObjectResponse(writeGetObjectResponseRequest);
            ASSERT_FALSE(writeGetObjectResponseOutcome.IsSuccess());
            Aws::StringStream ss;
            ss << "https://" << "fakeRoute." << expectedEndpoint << "/WriteGetObjectResponse";
            ASSERT_STREQ(ss.str().c_str(), TestingMonitoringMetrics::s_lastUriString.c_str());
            ASSERT_STREQ("s3-object-lambda", TestingMonitoringMetrics::s_lastSigningServiceName.c_str());
            ASSERT_EQ(TestingMonitoringMetrics::s_lastRequestHeaders.end(), TestingMonitoringMetrics::s_lastRequestHeaders.find(Aws::Http::CONTENT_LENGTH_HEADER));
            ASSERT_NE(TestingMonitoringMetrics::s_lastRequestHeaders.end(), TestingMonitoringMetrics::s_lastRequestHeaders.find(Aws::Http::TRANSFER_ENCODING_HEADER));
            ASSERT_STREQ(Aws::Http::CHUNKED_VALUE, TestingMonitoringMetrics::s_lastRequestHeaders[Aws::Http::TRANSFER_ENCODING_HEADER].c_str());

            // Non checked when customers specify content-length
            bodyStream->clear();
            bodyStream->seekg(0, bodyStream->end);
            writeGetObjectResponseRequest.SetContentLength(static_cast<long>(bodyStream->tellg()));
            bodyStream->seekg(0);
            writeGetObjectResponseOutcome = s3Client.WriteGetObjectResponse(writeGetObjectResponseRequest);
            ASSERT_FALSE(writeGetObjectResponseOutcome.IsSuccess());
            ASSERT_STREQ(ss.str().c_str(), TestingMonitoringMetrics::s_lastUriString.c_str());
            ASSERT_STREQ("s3-object-lambda", TestingMonitoringMetrics::s_lastSigningServiceName.c_str());
            ASSERT_EQ(TestingMonitoringMetrics::s_lastRequestHeaders.end(), TestingMonitoringMetrics::s_lastRequestHeaders.find(Aws::Http::TRANSFER_ENCODING_HEADER));
            ASSERT_NE(TestingMonitoringMetrics::s_lastRequestHeaders.end(), TestingMonitoringMetrics::s_lastRequestHeaders.find(Aws::Http::CONTENT_LENGTH_HEADER));
            ASSERT_STREQ("8" /* length of "fakeBody"*/, TestingMonitoringMetrics::s_lastRequestHeaders[Aws::Http::CONTENT_LENGTH_HEADER].c_str());
        }

    };

    TEST_F(BucketAndObjectOperationTest, TestInterrupt)
    {
        const Aws::String fullBucketName = CalculateBucketName(BASE_INTERRUPT_TESTING_BUCKET.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);

        CreateBucketOutcome createBucketOutcome = CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        const CreateBucketResult& createBucketResult = createBucketOutcome.GetResult();
        ASSERT_TRUE(!createBucketResult.GetLocation().empty());
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName, Client));
        TagTestBucket(fullBucketName, Client);

        PutObjectRequest putObjectRequest;
        putObjectRequest.SetBucket(fullBucketName);

        std::shared_ptr<Aws::IOStream> bigStream = Create5MbStreamForUploadPart("La");

        putObjectRequest.SetBody(bigStream);
        putObjectRequest.SetContentLength(static_cast<long>(putObjectRequest.GetBody()->tellp()));
        putObjectRequest.SetContentMD5(HashingUtils::Base64Encode(HashingUtils::CalculateMD5(*putObjectRequest.GetBody())));
        putObjectRequest.SetContentType("text/plain");
        putObjectRequest.SetKey(TEST_OBJ_KEY);

        PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
        AWS_ASSERT_SUCCESS(putObjectOutcome);

        //verify md5 sums between what was sent and what s3 told us they received.
        putObjectRequest.GetBody()->clear();
        Aws::StringStream ss;
        ss << "\"" << HashingUtils::HexEncode(HashingUtils::CalculateMD5(*putObjectRequest.GetBody())) << "\"";
        ASSERT_STREQ(ss.str().c_str(), putObjectOutcome.GetResult().GetETag().c_str());

        ASSERT_TRUE(WaitForObjectToPropagate(fullBucketName, TEST_OBJ_KEY));

        GetObjectRequest getObjectRequest;
        getObjectRequest.SetBucket(fullBucketName);
        getObjectRequest.SetKey(TEST_OBJ_KEY);

        // because we use std::launch::async we know this will go to another thread
        auto&& getCallable = Client->GetObjectCallable(getObjectRequest);

        Client->DisableRequestProcessing();

        auto taskStatus = getCallable.wait_for(std::chrono::seconds(10));
        ASSERT_EQ(taskStatus, std::future_status::ready);
        auto&& getOutcome = getCallable.get();
        Client->EnableRequestProcessing();

        ASSERT_FALSE(getOutcome.IsSuccess());
    }

    TEST_F(BucketAndObjectOperationTest, TestBucketOperationsErrorWithMissingRequiredFields)
    {
        const Aws::String fullBucketName = CalculateBucketName(BASE_CREATE_BUCKET_TEST_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        HeadBucketRequest headBucketRequest;
        HeadBucketOutcome headBucketOutcome = Client->HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        ASSERT_EQ(headBucketOutcome.GetError().GetErrorType(), Aws::S3::S3Errors::MISSING_PARAMETER);

        CreateBucketRequest createBucketRequest;
        CreateBucketOutcome createBucketOutcome = CreateBucket(createBucketRequest);
        ASSERT_FALSE(createBucketOutcome.IsSuccess());
        ASSERT_EQ(createBucketOutcome.GetError().GetErrorType(), Aws::S3::S3Errors::MISSING_PARAMETER);
    }

    TEST_F(BucketAndObjectOperationTest, TestBucketCreationAndListing)
    {
        const Aws::String fullBucketName = CalculateBucketName(BASE_CREATE_BUCKET_TEST_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);

        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);

        CreateBucketOutcome createBucketOutcome = CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        const CreateBucketResult& createBucketResult = createBucketOutcome.GetResult();
        ASSERT_FALSE(createBucketResult.GetLocation().empty());
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName, Client));
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
        const Aws::String fullBucketName = CalculateBucketName(BASE_LOCATION_BUCKET_TEST_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        CreateBucketConfiguration bucketConfiguration;
        bucketConfiguration.SetLocationConstraint(BucketLocationConstraint::us_west_2);
        createBucketRequest.SetCreateBucketConfiguration(bucketConfiguration);

        CreateBucketOutcome createBucketOutcome = CreateBucket(createBucketRequest, oregonClient);
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

    TEST_F(BucketAndObjectOperationTest, TestPutWithSpecialCharactersInKeyName)
    {
        const Aws::String fullBucketName = CalculateBucketName(BASE_PUT_OBJECTS_BUCKET_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);

        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);

        CreateBucketOutcome createBucketOutcome = CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        const CreateBucketResult& createBucketResult = createBucketOutcome.GetResult();
        ASSERT_TRUE(!createBucketResult.GetLocation().empty());
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName, Client));
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

    TEST_F(BucketAndObjectOperationTest, TestKeysWithNewlineCharacterSets)
    {
        const Aws::String fullBucketName = CalculateBucketName(BASE_OBJECTS_NEWLINE_BUCKET_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);

        CreateBucketOutcome createBucketOutcome = CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        const CreateBucketResult& createBucketResult = createBucketOutcome.GetResult();
        ASSERT_TRUE(!createBucketResult.GetLocation().empty());
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName, Client));
        TagTestBucket(fullBucketName, Client);

        Aws::Vector<Aws::String> objectKeysWithNewlineCharacter;
        objectKeysWithNewlineCharacter.push_back(Aws::String(TEST_NEWLINE_KEY) + "-\n-LF");
        objectKeysWithNewlineCharacter.push_back(Aws::String(TEST_NEWLINE_KEY) + "-\r-CR");
        objectKeysWithNewlineCharacter.push_back(Aws::String(TEST_NEWLINE_KEY) + "-" + StringUtils::URLDecode("%c2%85") + "-NEXTLINE");
        objectKeysWithNewlineCharacter.push_back(Aws::String(TEST_NEWLINE_KEY) + "-" + StringUtils::URLDecode("%e2%80%a8") + "-LINESEPARATOR");

        for (const Aws::String& key : objectKeysWithNewlineCharacter)
        {
            PutObjectRequest putObjectRequest;
            putObjectRequest.SetBucket(fullBucketName);
            std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>("BucketAndObjectOperationTest");
            *objectStream << "Object Key: " << key;
            putObjectRequest.SetBody(objectStream);
            putObjectRequest.SetContentType("text/plain");
            putObjectRequest.SetKey(key);
            PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
            AWS_ASSERT_SUCCESS(putObjectOutcome);
        }

        for (const Aws::String& key : objectKeysWithNewlineCharacter)
        {
            GetObjectRequest getObjectRequest;
            getObjectRequest.SetBucket(fullBucketName);
            getObjectRequest.SetKey(key);
            GetObjectOutcome getObjectOutcome = Client->GetObject(getObjectRequest);
            AWS_ASSERT_SUCCESS(getObjectOutcome);
            Aws::StringStream ss;
            ss << getObjectOutcome.GetResult().GetBody().rdbuf();
            ASSERT_NE(Aws::String::npos, ss.str().find(key));
        }

        Aws::Vector<ObjectIdentifier> objectIdentifiers;
        for (const Aws::String& key : objectKeysWithNewlineCharacter)
        {
            ObjectIdentifier objectIdentifier;
            objectIdentifier.SetKey(key);
            objectIdentifiers.push_back(objectIdentifier);
        }
        DeleteObjectsRequest deleteObjectsRequest;
        deleteObjectsRequest.SetBucket(fullBucketName);
        S3::Model::Delete deleteObjects;
        deleteObjects.SetObjects(objectIdentifiers);
        deleteObjectsRequest.SetDelete(deleteObjects);
        DeleteObjectsOutcome deleteObjectsOutcome = Client->DeleteObjects(deleteObjectsRequest);
        AWS_ASSERT_SUCCESS(deleteObjectsOutcome);
        ASSERT_EQ(objectKeysWithNewlineCharacter.size(), deleteObjectsOutcome.GetResult().GetDeleted().size());

        ListObjectsRequest listObjectsRequest;
        listObjectsRequest.SetBucket(fullBucketName);
        ListObjectsOutcome listObjectsOutcome = Client->ListObjects(listObjectsRequest);
        AWS_ASSERT_SUCCESS(listObjectsOutcome);
        ASSERT_EQ(0u, listObjectsOutcome.GetResult().GetContents().size());
    }

    TEST_F(BucketAndObjectOperationTest, TestObjectOperations)
    {
        const Aws::String fullBucketName = CalculateBucketName(BASE_OBJECTS_BUCKET_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);

        CreateBucketOutcome createBucketOutcome = CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        const CreateBucketResult& createBucketResult = createBucketOutcome.GetResult();
        ASSERT_TRUE(!createBucketResult.GetLocation().empty());
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName, Client));
        TagTestBucket(fullBucketName, Client);

        PutObjectRequest putObjectRequest;
        putObjectRequest.SetBucket(fullBucketName);

        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>("BucketAndObjectOperationTest");
        *objectStream << "Test Object";
        objectStream->flush();
        putObjectRequest.SetBody(objectStream);
        putObjectRequest.SetContentLength(static_cast<long>(putObjectRequest.GetBody()->tellp()));
        putObjectRequest.SetContentMD5(HashingUtils::Base64Encode(HashingUtils::CalculateMD5(*putObjectRequest.GetBody())));
        putObjectRequest.SetContentType("text/plain");
        putObjectRequest.SetKey(TEST_OBJ_KEY);

        PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
        AWS_ASSERT_SUCCESS(putObjectOutcome);

        //verify md5 sums between what was sent and what s3 told us they received.
        putObjectRequest.GetBody()->clear();
        Aws::StringStream ss;
        ss << "\"" << HashingUtils::HexEncode(HashingUtils::CalculateMD5(*putObjectRequest.GetBody())) << "\"";
        ASSERT_STREQ(ss.str().c_str(), putObjectOutcome.GetResult().GetETag().c_str());

        ASSERT_TRUE(WaitForObjectToPropagate(fullBucketName, TEST_OBJ_KEY));
        GetObjectRequest getObjectAsyncRequest;
        getObjectAsyncRequest.WithBucket(fullBucketName).WithKey(TEST_OBJ_KEY);
        Aws::Utils::Threading::Semaphore sem(0, 1);
        auto getObjectCallback = [&](const S3Client *client, const GetObjectRequest &request,
                                    GetObjectOutcome outcome, const std::shared_ptr<const AsyncCallerContext> &) {
            ASSERT_TRUE(client);
            AWS_ASSERT_SUCCESS(outcome);
            ss.str("");
            ss << outcome.GetResult().GetBody().rdbuf();
            ASSERT_STREQ("Test Object", ss.str().c_str());
            ASSERT_STREQ("TestObjectKey", request.GetKey().c_str());
            sem.ReleaseAll();
        };
        Client->GetObjectAsync(getObjectAsyncRequest, getObjectCallback, nullptr);
        sem.WaitOne();

        GetObjectRequest getObjectRequest;
        getObjectRequest.SetBucket(fullBucketName);
        getObjectRequest.SetKey(TEST_OBJ_KEY);

        GetObjectOutcome getObjectOutcome = Client->GetObject(getObjectRequest);
        AWS_ASSERT_SUCCESS(getObjectOutcome);
        ss.str("");
        ss << getObjectOutcome.GetResult().GetBody().rdbuf();
        ASSERT_STREQ("Test Object", ss.str().c_str());
        EXPECT_TRUE(getObjectOutcome.GetResult().GetCacheControl().empty());

        HeadObjectRequest headObjectRequest;
        headObjectRequest.SetBucket(fullBucketName);
        headObjectRequest.SetKey(TEST_OBJ_KEY);

        HeadObjectOutcome headObjectOutcome = Client->HeadObject(headObjectRequest);
        AWS_ASSERT_SUCCESS(headObjectOutcome);

        //verify md5 sums between what was sent and what the file s3 gave us back.
        ss.str("");
        ss << "\"" << HashingUtils::HexEncode(HashingUtils::CalculateMD5(*putObjectRequest.GetBody())) << "\"";
        ASSERT_STREQ(ss.str().c_str(), getObjectOutcome.GetResult().GetETag().c_str());

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

        CreateBucketOutcome createBucketOutcome = CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        const CreateBucketResult& createBucketResult = createBucketOutcome.GetResult();
        ASSERT_TRUE(!createBucketResult.GetLocation().empty());
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName, Client));
        TagTestBucket(fullBucketName, Client);

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

        //test uri encoding edge case.
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
        const Aws::String fullBucketName = PreparePresignedUrlTest();
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        Aws::String presignedUrlPut = Client->GeneratePresignedUrl(fullBucketName, TEST_OBJ_KEY, HttpMethod::HTTP_PUT);
        std::shared_ptr<HttpRequest> putRequest = CreateHttpRequest(presignedUrlPut, HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        DoPresignedUrlTest(fullBucketName, putRequest);
        CleanUpPresignedUrlTest();
    }

    TEST_F(BucketAndObjectOperationTest, TestObjectOperationsWithPresignedUrlsAndCustomizedHeaders)
    {
        const Aws::String fullBucketName = PreparePresignedUrlTest();
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        Aws::Http::HeaderValueCollection collections;
        collections.emplace("TestKey1", "TestVal1");
        collections.emplace("TestKey2", "TestVal2");

        Aws::String presignedUrlPut = Client->GeneratePresignedUrl(fullBucketName, TEST_OBJ_KEY, HttpMethod::HTTP_PUT, collections);
        std::shared_ptr<HttpRequest> putRequest = CreateHttpRequest(presignedUrlPut, HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        ASSERT_NE(presignedUrlPut.find("testkey1"), std::string::npos);
        ASSERT_NE(presignedUrlPut.find("testkey2"), std::string::npos);
        putRequest->SetHeaderValue("TestKey1", "TestVal1");
        putRequest->SetHeaderValue("TestKey2", "TestVal2");
        DoPresignedUrlTest(fullBucketName, putRequest);
        CleanUpPresignedUrlTest();
    }

    TEST_F(BucketAndObjectOperationTest, TestObjectOperationsWithPresignedUrlsWithSSES3)
    {
        const Aws::String fullBucketName = PreparePresignedUrlTest();
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        Aws::String presignedUrlPut = Client->GeneratePresignedUrlWithSSES3(fullBucketName, TEST_OBJ_KEY, HttpMethod::HTTP_PUT);
        std::shared_ptr<HttpRequest> putRequest = CreateHttpRequest(presignedUrlPut, HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        putRequest->SetHeaderValue(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION,
                Aws::S3::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3::Model::ServerSideEncryption::AES256));
        DoPresignedUrlTest(fullBucketName, putRequest);
        CleanUpPresignedUrlTest();
    }

    TEST_F(BucketAndObjectOperationTest, TestObjectOperationsWithPresignedUrlsWithSSES3AndCustomizedHeaders)
    {
        const Aws::String fullBucketName = PreparePresignedUrlTest();
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        Aws::Http::HeaderValueCollection collections;
        collections.emplace("TestKey1", "TestVal1");
        collections.emplace("TestKey2", "TestVal2");

        Aws::String presignedUrlPut = Client->GeneratePresignedUrlWithSSES3(fullBucketName, TEST_OBJ_KEY, HttpMethod::HTTP_PUT, collections);
        std::shared_ptr<HttpRequest> putRequest = CreateHttpRequest(presignedUrlPut, HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        putRequest->SetHeaderValue(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION,
                Aws::S3::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3::Model::ServerSideEncryption::AES256));
        ASSERT_NE(presignedUrlPut.find("testkey1"), std::string::npos);
        ASSERT_NE(presignedUrlPut.find("testkey2"), std::string::npos);
        putRequest->SetHeaderValue("TestKey1", "TestVal1");
        putRequest->SetHeaderValue("TestKey2", "TestVal2");
        DoPresignedUrlTest(fullBucketName, putRequest);
        CleanUpPresignedUrlTest();
    }

    TEST_F(BucketAndObjectOperationTest, TestObjectOperationsWithPresignedUrlsWithSSEKMS)
    {
        const Aws::String fullBucketName = PreparePresignedUrlTest();
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        Aws::String presignedUrlPut = Client->GeneratePresignedUrlWithSSEKMS(fullBucketName, TEST_OBJ_KEY, HttpMethod::HTTP_PUT); //Using default KMS key in this AWS account
        std::shared_ptr<HttpRequest> putRequest = CreateHttpRequest(presignedUrlPut, HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        putRequest->SetHeaderValue(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION,
                Aws::S3::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3::Model::ServerSideEncryption::aws_kms));
        DoPresignedUrlTest(fullBucketName, putRequest);
        CleanUpPresignedUrlTest();
    }


    TEST_F(BucketAndObjectOperationTest, TestObjectOperationsWithPresignedUrlsWithSSEKMSAndCustomizedHeaders)
    {
        const Aws::String fullBucketName = PreparePresignedUrlTest();
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        Aws::Http::HeaderValueCollection collections;
        collections.emplace("TestKey1", "TestVal1");
        collections.emplace("TestKey2", "TestVal2");

        Aws::String presignedUrlPut = Client->GeneratePresignedUrlWithSSEKMS(fullBucketName, TEST_OBJ_KEY, HttpMethod::HTTP_PUT, collections); //Using default KMS key in this AWS account
        std::shared_ptr<HttpRequest> putRequest = CreateHttpRequest(presignedUrlPut, HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        putRequest->SetHeaderValue(Aws::S3::SSEHeaders::SERVER_SIDE_ENCRYPTION,
                Aws::S3::Model::ServerSideEncryptionMapper::GetNameForServerSideEncryption(Aws::S3::Model::ServerSideEncryption::aws_kms));
        ASSERT_NE(presignedUrlPut.find("testkey1"), std::string::npos);
        ASSERT_NE(presignedUrlPut.find("testkey2"), std::string::npos);
        putRequest->SetHeaderValue("TestKey1", "TestVal1");
        putRequest->SetHeaderValue("TestKey2", "TestVal2");
        DoPresignedUrlTest(fullBucketName, putRequest);
        CleanUpPresignedUrlTest();
    }


    TEST_F(BucketAndObjectOperationTest, TestObjectOperationsWithPresignedUrlsWithSSEC)
    {
        DoTestObjectOperationsWithPresignedUrlsWithSSEC(false);
    }

    TEST_F(BucketAndObjectOperationTest, TestObjectOperationsWithPresignedUrlsWithSSECWithCustomizedHeaders)
    {
        DoTestObjectOperationsWithPresignedUrlsWithSSEC(true);
    }

    TEST_F(BucketAndObjectOperationTest, TestMultiPartObjectOperations)
    {
        const char* multipartKeyName = "MultiPartKey";
        const Aws::String fullBucketName = CalculateBucketName(BASE_PUT_MULTIPART_BUCKET_NAME.c_str());
        m_bucketsToDelete.insert(fullBucketName);
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);

        CreateBucketOutcome createBucketOutcome = CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        const CreateBucketResult& createBucketResult = createBucketOutcome.GetResult();
        ASSERT_TRUE(!createBucketResult.GetLocation().empty());
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName, Client));
        TagTestBucket(fullBucketName, Client);

        CreateMultipartUploadRequest createMultipartUploadRequest;
        createMultipartUploadRequest.SetBucket(fullBucketName);
        createMultipartUploadRequest.SetKey(multipartKeyName);
        createMultipartUploadRequest.SetContentType("text/plain");

        CreateMultipartUploadOutcome createMultipartUploadOutcome = Client->CreateMultipartUpload(
                createMultipartUploadRequest);
        AWS_ASSERT_SUCCESS(createMultipartUploadOutcome);

        std::shared_ptr<Aws::IOStream> part1Stream = Create5MbStreamForUploadPart("1");
        ByteBuffer part1Md5(HashingUtils::CalculateMD5(*part1Stream));
        UploadPartOutcomeCallable uploadPartOutcomeCallable1 =
                MakeUploadPartOutcomeAndGetCallable(1, part1Md5, part1Stream, fullBucketName,
                                                    multipartKeyName, createMultipartUploadOutcome.GetResult().GetUploadId());

        std::shared_ptr<Aws::IOStream> part2Stream = Create5MbStreamForUploadPart("2");
        ByteBuffer part2Md5(HashingUtils::CalculateMD5(*part2Stream));
        UploadPartOutcomeCallable uploadPartOutcomeCallable2 =
                MakeUploadPartOutcomeAndGetCallable(2, part2Md5, part2Stream, fullBucketName,
                                                    multipartKeyName,
                                                    createMultipartUploadOutcome.GetResult().GetUploadId());

        std::shared_ptr<Aws::IOStream> part3Stream = Create5MbStreamForUploadPart("3");
        ByteBuffer part3Md5(HashingUtils::CalculateMD5(*part3Stream));
        UploadPartOutcomeCallable uploadPartOutcomeCallable3 =
                MakeUploadPartOutcomeAndGetCallable(3, part3Md5, part3Stream, fullBucketName,
                                                    multipartKeyName,
                                                    createMultipartUploadOutcome.GetResult().GetUploadId());

        UploadPartOutcome uploadPartOutcome1 = uploadPartOutcomeCallable1.get();
        UploadPartOutcome uploadPartOutcome2 = uploadPartOutcomeCallable2.get();
        UploadPartOutcome uploadPartOutcome3 = uploadPartOutcomeCallable3.get();

        VerifyUploadPartOutcome(uploadPartOutcome1, part1Md5);

        CompletedPart completedPart1;
        completedPart1.SetETag(uploadPartOutcome1.GetResult().GetETag());
        completedPart1.SetPartNumber(1);

        VerifyUploadPartOutcome(uploadPartOutcome2, part2Md5);

        CompletedPart completedPart2;
        completedPart2.SetETag(uploadPartOutcome2.GetResult().GetETag());
        completedPart2.SetPartNumber(2);

        VerifyUploadPartOutcome(uploadPartOutcome3, part3Md5);

        CompletedPart completedPart3;
        completedPart3.SetETag(uploadPartOutcome3.GetResult().GetETag());
        completedPart3.SetPartNumber(3);

        CompleteMultipartUploadRequest completeMultipartUploadRequest;
        completeMultipartUploadRequest.SetBucket(fullBucketName);
        completeMultipartUploadRequest.SetKey(multipartKeyName);
        completeMultipartUploadRequest.SetUploadId(createMultipartUploadOutcome.GetResult().GetUploadId());

        CompletedMultipartUpload completedMultipartUpload;
        completedMultipartUpload.AddParts(completedPart1);
        completedMultipartUpload.AddParts(completedPart2);
        completedMultipartUpload.AddParts(completedPart3);
        completeMultipartUploadRequest.WithMultipartUpload(completedMultipartUpload);

        CompleteMultipartUploadOutcome completeMultipartUploadOutcome = Client->CompleteMultipartUpload(
                completeMultipartUploadRequest);
        AWS_ASSERT_SUCCESS(completeMultipartUploadOutcome);

        ASSERT_TRUE(WaitForObjectToPropagate(fullBucketName, multipartKeyName));

        GetObjectRequest getObjectRequest;
        getObjectRequest.SetBucket(fullBucketName);
        getObjectRequest.SetKey(multipartKeyName);
        // This is to verify that user specified additional query strings will be in the URI and won't affect current operation.
        // Verified via integration test result that operation is not affected. And log shows query is attached to URI.
        Aws::Map<Aws::String, Aws::String> queries;
        queries.emplace("x-key1", "value1");
        queries.emplace("x-key2", "value2");
        getObjectRequest.SetCustomizedAccessLogTag(queries);
        getObjectRequest.AddCustomizedAccessLogTag("x-key3", "value3");

        // This shouldn't be in URI query string
        getObjectRequest.AddCustomizedAccessLogTag("y-whatever-you-set", "this-will-not-appear-in-uri");

        URI uri("http://test.com/");
        getObjectRequest.AddQueryStringParameters(uri);
        ASSERT_STREQ("?x-key1=value1&x-key2=value2&x-key3=value3", uri.GetQueryString().c_str());

        GetObjectOutcome getObjectOutcome = Client->GetObject(getObjectRequest);
        AWS_ASSERT_SUCCESS(getObjectOutcome);

        part1Stream->clear();
        part2Stream->clear();
        part3Stream->clear();
        Aws::StringStream expectedStreamValue;
        part1Stream->seekg(0, part1Stream->beg);
        part2Stream->seekg(0, part2Stream->beg);
        part3Stream->seekg(0, part3Stream->beg);
        expectedStreamValue << part1Stream->rdbuf() << part2Stream->rdbuf() << part3Stream->rdbuf();

        Aws::StringStream actualStreamValue;
        getObjectOutcome.GetResult().GetBody().clear();
        actualStreamValue << getObjectOutcome.GetResult().GetBody().rdbuf();
        ASSERT_STREQ(expectedStreamValue.str().c_str(), actualStreamValue.str().c_str());

        // repeat the get, but channel it directly to a file; tests the ability to override the output stream
#ifndef __ANDROID__
        Aws::String TestFileName{ Aws::Testing::GetDefaultWriteFolder() };
        TestFileName += "DownloadTestFile";
#else
    Aws::String TestFileName = Aws::Platform::GetCacheDirectory() + Aws::String("DownloadTestFile");
#endif

        std::remove(TestFileName.c_str());

        GetObjectRequest getObjectRequest2;
        getObjectRequest2.SetBucket(fullBucketName);
        getObjectRequest2.SetKey(multipartKeyName);
        getObjectRequest2.SetResponseStreamFactory(
            [=](){
                // NOTE: If using an FStream in order to download a file from S3 to a physical file, then we need to specify
                // the filemode "std::ios_base::out | std::ios_base::in | std::ios_base::trunc" --
                // If the file transfer fails, then the error stream from the httpRequest is written to the file instead of the
                    // actual file contents.
                // If this is the case, then the BuildAWSError function assumes it can 'read' the stream in order to read in the
                // error status and create an AWSError.  If the file is not marked as read/write (or write only), this will fail
                // and the error status will instead be an XML_PARSE_ERROR error because the BuildAWSError function failed
                // The 'truncate' is required to ensure that if the file download IS successful, then it can be written to the
                // FStream (if ::trunc is not specified, then the FStream.write fails for some unknown reason)

                return Aws::New<Aws::FStream>(ALLOCATION_TAG, TestFileName.c_str(), std::ios_base::out | std::ios_base::in | std::ios_base::trunc);
            }
        );

        {
            // Enclose scope just to make sure the download file is properly closed before we reread it
            GetObjectOutcome getObjectOutcome2 = Client->GetObject(getObjectRequest2);
            AWS_ASSERT_SUCCESS(getObjectOutcome2);
        }

        // Test the download of a non-existent file, to ensure that the error handling works correctly
        GetObjectRequest getObjectRequest3;
        getObjectRequest3.SetBucket("FAIL");
        getObjectRequest3.SetKey("FAIL");
        getObjectRequest3.SetResponseStreamFactory(
            [=](){
                return Aws::New<Aws::FStream>(ALLOCATION_TAG, TestFileName.c_str(), std::ios_base::out | std::ios_base::in | std::ios_base::trunc);
            }
        );

        {
            // Enclose scope just to make sure the download file is properly closed before we reread it
            GetObjectOutcome getObjectOutcome3 = Client->GetObject(getObjectRequest3);

            std::remove(TestFileName.c_str());

            ASSERT_FALSE(getObjectOutcome3.IsSuccess());
        }

        // Perform the same test again, except with an incorrectly set stream IO trait (this should still pass, but it
        // shouldn't crash anywhere in the log generation)

        GetObjectRequest getObjectRequest4;
        getObjectRequest4.SetBucket("FAIL");
        getObjectRequest4.SetKey("FAIL");
        getObjectRequest4.SetResponseStreamFactory(
            [=](){
                return Aws::New<Aws::FStream>(ALLOCATION_TAG, TestFileName.c_str(), std::ios_base::out);
            }
        );

        {
            // Enclose scope just to make sure the download file is properly closed before we reread it
            GetObjectOutcome getObjectOutcome4 = Client->GetObject(getObjectRequest4);

            std::remove(TestFileName.c_str());

            ASSERT_FALSE(getObjectOutcome4.IsSuccess());
        }

        {
            // Enclose scope just to make sure the download file is properly closed before we reread it
            GetObjectOutcome getObjectOutcome2 = Client->GetObject(getObjectRequest2);
            AWS_ASSERT_SUCCESS(getObjectOutcome2);
        }

        Aws::String fileContents;
        Aws::IFStream downloadedFile(TestFileName.c_str());
        ASSERT_TRUE(downloadedFile.good());

        if (downloadedFile.good())
        {
            downloadedFile.seekg(0, std::ios::end);
            fileContents.reserve(static_cast<uint32_t>(downloadedFile.tellg()));
            downloadedFile.seekg(0, std::ios::beg);
            fileContents.assign((std::istreambuf_iterator<char>(downloadedFile)), std::istreambuf_iterator<char>());
        }

        std::remove(TestFileName.c_str());

        ASSERT_STREQ(expectedStreamValue.str().c_str(), fileContents.c_str());

        // Remove the file
        DeleteObjectRequest deleteObjectRequest;
        deleteObjectRequest.SetBucket(fullBucketName);
        deleteObjectRequest.SetKey(multipartKeyName);

        DeleteObjectOutcome deleteObjectOutcome = Client->DeleteObject(deleteObjectRequest);
        AWS_ASSERT_SUCCESS(deleteObjectOutcome);
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
        ASSERT_EQ(S3Errors::NO_SUCH_BUCKET, listObjectsOutcome.GetError().GetErrorType());

        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);

        CreateBucketOutcome createBucketOutcome = CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName, Client));
        TagTestBucket(fullBucketName, Client);

        GetObjectRequest getObjectRequest;
        getObjectRequest.SetBucket(fullBucketName);
        getObjectRequest.SetKey("non-Existent");
        GetObjectOutcome getObjectOutcome = Client->GetObject(getObjectRequest);
        ASSERT_FALSE(getObjectOutcome.IsSuccess());
#if ENABLE_CURL_CLIENT
        ASSERT_FALSE(getObjectOutcome.GetError().GetRemoteHostIpAddress().empty());
#endif
        ASSERT_FALSE(getObjectOutcome.GetError().GetRequestId().empty());
        ASSERT_EQ(S3Errors::NO_SUCH_KEY, getObjectOutcome.GetError().GetErrorType());
    }

    TEST_F(BucketAndObjectOperationTest, TestNotModifiedIsSuccess)
    {
        const Aws::String fullBucketName = CalculateBucketName(BASE_PUT_OBJECTS_BUCKET_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);
        CreateBucketOutcome createBucketOutcome = CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName, Client));
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
        const Aws::String fullBucketName = CalculateBucketName(BASE_DNS_UNFRIENDLY_TEST_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);
        CreateBucketOutcome createBucketOutcome = CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName, Client));
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
        ASSERT_EQ(0ul, presignedUrlPut.find("https://s3.amazonaws.com/" + fullBucketName + "/" + TEST_DNS_UNFRIENDLY_OBJ_KEY));
    }

    TEST_F(BucketAndObjectOperationTest, TestCopyingFromKeysWithUnicodeCharacters)
    {
        const Aws::String fullBucketName = CalculateBucketName(BASE_CREATE_BUCKET_TEST_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);
        CreateBucketOutcome createBucketOutcome = CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName, Client));
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

    TEST_F(BucketAndObjectOperationTest, TestObjectLock)
    {
        const Aws::String fullBucketName = CalculateBucketName(BASE_OBJECT_LOCK_BUCKET_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);
        createBucketRequest.SetObjectLockEnabledForBucket(true);
        CreateBucketOutcome createBucketOutcome = CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName, Client));
        TagTestBucket(fullBucketName, Client);

        PutObjectRequest putObjectRequest;
        putObjectRequest.SetBucket(fullBucketName);
        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>("BucketAndObjectOperationTest");
        *objectStream << "Object Lock";
        objectStream->flush();
        putObjectRequest.SetBody(objectStream);
        putObjectRequest.SetContentLength(static_cast<long>(putObjectRequest.GetBody()->tellp()));
        putObjectRequest.SetContentType("text/plain");
        putObjectRequest.WithKey(TEST_OBJECT_LOCK_OBJ_KEY);
        putObjectRequest.SetContentMD5(HashingUtils::Base64Encode(HashingUtils::CalculateMD5(*putObjectRequest.GetBody())));
        putObjectRequest.SetObjectLockMode(ObjectLockMode::GOVERNANCE);
        putObjectRequest.SetObjectLockRetainUntilDate(Aws::Utils::DateTime::Now() + std::chrono::hours(1));

        PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
        AWS_ASSERT_SUCCESS(putObjectOutcome);
        Aws::String versionId = putObjectOutcome.GetResult().GetVersionId();

        GetObjectRequest getObjectRequest;
        getObjectRequest.SetBucket(fullBucketName);
        getObjectRequest.SetKey(TEST_OBJECT_LOCK_OBJ_KEY);
        getObjectRequest.SetVersionId(versionId);

        GetObjectOutcome getObjectOutcome = Client->GetObject(getObjectRequest);
        AWS_ASSERT_SUCCESS(getObjectOutcome);

        DeleteObjectRequest deleteObjectRequest;
        deleteObjectRequest.SetBucket(fullBucketName);
        deleteObjectRequest.SetKey(TEST_OBJECT_LOCK_OBJ_KEY);
        deleteObjectRequest.SetVersionId(versionId);
        deleteObjectRequest.SetBypassGovernanceRetention(true);
        DeleteObjectOutcome deleteObjectOutcome = Client->DeleteObject(deleteObjectRequest);
        AWS_ASSERT_SUCCESS(deleteObjectOutcome);
    }

    TEST_F(BucketAndObjectOperationTest, TestObjectOperationWithEventStream)
    {
        const Aws::String fullBucketName = CalculateBucketName(BASE_EVENT_STREAM_TEST_BUCKET_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);
        CreateBucketOutcome createBucketOutcome = CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName, Client));
        TagTestBucket(fullBucketName, Client);

        PutObjectRequest putObjectRequest;
        putObjectRequest.SetBucket(fullBucketName);

        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
        *objectStream << "Name,Number\nAlice,1\nBob,2";
        Aws::String firstColumn = "Name\nAlice\nBob\n";
        objectStream->flush();
        putObjectRequest.SetBody(objectStream);
        putObjectRequest.SetKey(TEST_EVENT_STREAM_OBJ_KEY);
        auto objectSize = putObjectRequest.GetBody()->tellp();
        putObjectRequest.SetContentLength(static_cast<long>(objectSize));
        putObjectRequest.SetContentMD5(HashingUtils::Base64Encode(HashingUtils::CalculateMD5(*putObjectRequest.GetBody())));
        putObjectRequest.SetContentType("text/csv");

        PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
        AWS_ASSERT_SUCCESS(putObjectOutcome);

        ASSERT_TRUE(WaitForObjectToPropagate(fullBucketName, TEST_EVENT_STREAM_OBJ_KEY));

        SelectObjectContentRequest selectObjectContentRequest;
        selectObjectContentRequest.SetBucket(fullBucketName);
        selectObjectContentRequest.SetKey(TEST_EVENT_STREAM_OBJ_KEY);

        selectObjectContentRequest.SetExpressionType(ExpressionType::SQL);

        selectObjectContentRequest.SetExpression("select s._1 from S3Object s");

        CSVInput csvInput;
        csvInput.SetFileHeaderInfo(FileHeaderInfo::NONE);
        InputSerialization inputSerialization;
        inputSerialization.SetCSV(csvInput);
        selectObjectContentRequest.SetInputSerialization(inputSerialization);

        CSVOutput csvOutput;
        OutputSerialization outputSerialization;
        outputSerialization.SetCSV(csvOutput);
        selectObjectContentRequest.SetOutputSerialization(outputSerialization);

        bool isRecordsEventReceived = false;
        bool isStatsEventReceived = false;

        SelectObjectContentHandler handler;
        handler.SetRecordsEventCallback([&](const RecordsEvent& recordsEvent)
        {
            isRecordsEventReceived = true;
            auto recordsVector = recordsEvent.GetPayload();
            Aws::String records(recordsVector.begin(), recordsVector.end());
            ASSERT_STREQ(firstColumn.c_str(), records.c_str());
        });
        handler.SetStatsEventCallback([&](const StatsEvent& statsEvent)
        {
            isStatsEventReceived = true;
            ASSERT_EQ(static_cast<long long>(objectSize), statsEvent.GetDetails().GetBytesScanned());
            ASSERT_EQ(static_cast<long long>(objectSize), statsEvent.GetDetails().GetBytesProcessed());
            ASSERT_EQ(static_cast<long long>(firstColumn.size()), statsEvent.GetDetails().GetBytesReturned());
        });

        selectObjectContentRequest.SetEventStreamHandler(handler);

        auto selectObjectContentOutcome = Client->SelectObjectContent(selectObjectContentRequest);
        AWS_ASSERT_SUCCESS(selectObjectContentOutcome);
        ASSERT_TRUE(isRecordsEventReceived);
        ASSERT_TRUE(isStatsEventReceived);
    }

    // This test is to test failed event stream request will not cause crash during retry.
    TEST_F(BucketAndObjectOperationTest, TestSelectObjectOperationWithEventStreamFailWithRetry)
    {
        const Aws::String fullBucketName = CalculateBucketName(BASE_EVENT_STREAM_TEST_BUCKET_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);
        CreateBucketOutcome createBucketOutcome = CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName, Client));
        TagTestBucket(fullBucketName, Client);

        PutObjectRequest putObjectRequest;
        putObjectRequest.SetBucket(fullBucketName);

        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
        *objectStream << "Name,Number\nAlice,1\nBob,2";
        Aws::String firstColumn = "Name\nAlice\nBob\n";
        objectStream->flush();
        putObjectRequest.SetBody(objectStream);
        putObjectRequest.SetKey(TEST_EVENT_STREAM_OBJ_KEY);
        auto objectSize = putObjectRequest.GetBody()->tellp();
        putObjectRequest.SetContentLength(static_cast<long>(objectSize));
        putObjectRequest.SetContentMD5(HashingUtils::Base64Encode(HashingUtils::CalculateMD5(*putObjectRequest.GetBody())));
        putObjectRequest.SetContentType("text/csv");

        PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
        AWS_ASSERT_SUCCESS(putObjectOutcome);

        ASSERT_TRUE(WaitForObjectToPropagate(fullBucketName, TEST_EVENT_STREAM_OBJ_KEY));

        SelectObjectContentRequest selectObjectContentRequest;
        selectObjectContentRequest.SetBucket(fullBucketName);
        selectObjectContentRequest.SetKey("ANonExistenceKey");

        selectObjectContentRequest.SetExpressionType(ExpressionType::SQL);

        selectObjectContentRequest.SetExpression("select s._1 from S3Object s");

        CSVInput csvInput;
        csvInput.SetFileHeaderInfo(FileHeaderInfo::NONE);
        InputSerialization inputSerialization;
        inputSerialization.SetCSV(csvInput);
        selectObjectContentRequest.SetInputSerialization(inputSerialization);

        CSVOutput csvOutput;
        OutputSerialization outputSerialization;
        outputSerialization.SetCSV(csvOutput);
        selectObjectContentRequest.SetOutputSerialization(outputSerialization);

        bool isRecordsEventReceived = false;
        bool isStatsEventReceived = false;

        SelectObjectContentHandler handler;
        handler.SetRecordsEventCallback([&](const RecordsEvent& recordsEvent)
        {
            isRecordsEventReceived = true;
            auto recordsVector = recordsEvent.GetPayload();
            Aws::String records(recordsVector.begin(), recordsVector.end());
            ASSERT_STREQ(firstColumn.c_str(), records.c_str());
        });
        handler.SetStatsEventCallback([&](const StatsEvent& statsEvent)
        {
            isStatsEventReceived = true;
            ASSERT_EQ(static_cast<long long>(objectSize), statsEvent.GetDetails().GetBytesScanned());
            ASSERT_EQ(static_cast<long long>(objectSize), statsEvent.GetDetails().GetBytesProcessed());
            ASSERT_EQ(static_cast<long long>(firstColumn.size()), statsEvent.GetDetails().GetBytesReturned());
        });

        selectObjectContentRequest.SetEventStreamHandler(handler);

        auto selectObjectContentOutcome = retryClient->SelectObjectContent(selectObjectContentRequest);
        ASSERT_FALSE(selectObjectContentOutcome.IsSuccess());
    }

    TEST_F(BucketAndObjectOperationTest, TestEventStreamWithLargeFile)
    {
        const Aws::String fullBucketName = CalculateBucketName(BASE_EVENT_STREAM_LARGE_FILE_TEST_BUCKET_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);
        CreateBucketOutcome createBucketOutcome = CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName, Client));
        TagTestBucket(fullBucketName, Client);

        PutObjectRequest putObjectRequest;
        putObjectRequest.SetBucket(fullBucketName);

        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
        *objectStream << "Name,Number\n";
        for (int i = 0; i < 1000000; i++)
        {
            *objectStream << "foo,0\n";
        }
        objectStream->flush();
        putObjectRequest.SetBody(objectStream);
        putObjectRequest.SetKey(TEST_EVENT_STREAM_OBJ_KEY);
        auto objectSize = putObjectRequest.GetBody()->tellp();
        putObjectRequest.SetContentLength(static_cast<long>(objectSize));
        putObjectRequest.SetContentMD5(HashingUtils::Base64Encode(HashingUtils::CalculateMD5(*putObjectRequest.GetBody())));
        putObjectRequest.SetContentType("text/csv");

        PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
        AWS_ASSERT_SUCCESS(putObjectOutcome);

        ASSERT_TRUE(WaitForObjectToPropagate(fullBucketName, TEST_EVENT_STREAM_OBJ_KEY));

        SelectObjectContentRequest selectObjectContentRequest;
        selectObjectContentRequest.SetBucket(fullBucketName);
        selectObjectContentRequest.SetKey(TEST_EVENT_STREAM_OBJ_KEY);

        selectObjectContentRequest.SetExpressionType(ExpressionType::SQL);

        selectObjectContentRequest.SetExpression("select * from S3Object where cast(number as int) < 1");

        CSVInput csvInput;
        csvInput.SetFileHeaderInfo(FileHeaderInfo::USE);
        InputSerialization inputSerialization;
        inputSerialization.SetCSV(csvInput);
        selectObjectContentRequest.SetInputSerialization(inputSerialization);

        CSVOutput csvOutput;
        OutputSerialization outputSerialization;
        outputSerialization.SetCSV(csvOutput);
        selectObjectContentRequest.SetOutputSerialization(outputSerialization);

        size_t recordsTotalLength = 0;
        bool isStatsEventReceived = false;

        SelectObjectContentHandler handler;
        handler.SetRecordsEventCallback([&](const RecordsEvent& recordsEvent)
        {
            recordsTotalLength += recordsEvent.GetPayload().size();
        });
        handler.SetStatsEventCallback([&](const StatsEvent& statsEvent)
        {
            isStatsEventReceived = true;
            ASSERT_EQ(12ll/*length of the 1st row*/ + 6/*length of all the other row*/ * 1000000ll, statsEvent.GetDetails().GetBytesScanned());
            ASSERT_EQ(6000012ll, statsEvent.GetDetails().GetBytesProcessed());
            ASSERT_EQ(6000000ll, statsEvent.GetDetails().GetBytesReturned());
        });

        selectObjectContentRequest.SetEventStreamHandler(handler);

        auto selectObjectContentOutcome = Client->SelectObjectContent(selectObjectContentRequest);
        ASSERT_EQ(6000000u, recordsTotalLength);
        ASSERT_TRUE(isStatsEventReceived);
    }

    TEST_F(BucketAndObjectOperationTest, TestErrorsInXml)
    {
        SelectObjectContentRequest selectObjectContentRequest;
        selectObjectContentRequest.SetBucket("adskflaklfakl");
        selectObjectContentRequest.SetKey(TEST_EVENT_STREAM_OBJ_KEY);

        selectObjectContentRequest.SetExpressionType(ExpressionType::SQL);

        selectObjectContentRequest.SetExpression("select s._1 from S3Object s");

        CSVInput csvInput;
        csvInput.SetFileHeaderInfo(FileHeaderInfo::USE);
        InputSerialization inputSerialization;
        inputSerialization.SetCSV(csvInput);
        selectObjectContentRequest.SetInputSerialization(inputSerialization);

        CSVOutput csvOutput;
        OutputSerialization outputSerialization;
        outputSerialization.SetCSV(csvOutput);
        selectObjectContentRequest.SetOutputSerialization(outputSerialization);

        auto selectObjectContentOutcome = Client->SelectObjectContent(selectObjectContentRequest);
        ASSERT_FALSE(selectObjectContentOutcome.IsSuccess());
#if ENABLE_CURL_CLIENT
        ASSERT_FALSE(selectObjectContentOutcome.GetError().GetRemoteHostIpAddress().empty());
#endif
        ASSERT_FALSE(selectObjectContentOutcome.GetError().GetRequestId().empty());
        ASSERT_EQ(S3Errors::NO_SUCH_BUCKET, selectObjectContentOutcome.GetError().GetErrorType());
    }

    TEST_F(BucketAndObjectOperationTest, TestErrorsInEventStream)
    {
        const Aws::String fullBucketName = CalculateBucketName(BASE_EVENT_STREAM_ERRORS_IN_EVENT_TEST_BUCKET_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);
        CreateBucketOutcome createBucketOutcome = CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName, Client));
        TagTestBucket(fullBucketName, Client);

        PutObjectRequest putObjectRequest;
        putObjectRequest.SetBucket(fullBucketName);

        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
        *objectStream << "Name,Number\n";
        for (int i = 0; i < 1000000; i++)
        {
            *objectStream << "foo,0\n";
        }
        *objectStream << "bar,NAN";
        objectStream->flush();
        putObjectRequest.SetBody(objectStream);
        putObjectRequest.SetKey(TEST_EVENT_STREAM_OBJ_KEY);
        auto objectSize = putObjectRequest.GetBody()->tellp();
        putObjectRequest.SetContentLength(static_cast<long>(objectSize));
        putObjectRequest.SetContentMD5(HashingUtils::Base64Encode(HashingUtils::CalculateMD5(*putObjectRequest.GetBody())));
        putObjectRequest.SetContentType("text/csv");

        PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
        AWS_ASSERT_SUCCESS(putObjectOutcome);

        ASSERT_TRUE(WaitForObjectToPropagate(fullBucketName, TEST_EVENT_STREAM_OBJ_KEY));

        SelectObjectContentRequest selectObjectContentRequest;
        selectObjectContentRequest.SetBucket(fullBucketName);
        selectObjectContentRequest.SetKey(TEST_EVENT_STREAM_OBJ_KEY);

        selectObjectContentRequest.SetExpressionType(ExpressionType::SQL);

        selectObjectContentRequest.SetExpression("select * from S3Object where cast(number as int) < 1");

        CSVInput csvInput;
        csvInput.SetFileHeaderInfo(FileHeaderInfo::USE);
        InputSerialization inputSerialization;
        inputSerialization.SetCSV(csvInput);
        selectObjectContentRequest.SetInputSerialization(inputSerialization);

        CSVOutput csvOutput;
        OutputSerialization outputSerialization;
        outputSerialization.SetCSV(csvOutput);
        selectObjectContentRequest.SetOutputSerialization(outputSerialization);

        bool isErrorEventReceived = false;

        SelectObjectContentHandler handler;
        handler.SetOnErrorCallback([&](const AWSError<S3Errors>& s3Error)
        {
            isErrorEventReceived = true;
            ASSERT_EQ(CoreErrors::UNKNOWN, static_cast<CoreErrors>(s3Error.GetErrorType()));
            ASSERT_STREQ("CastFailed", s3Error.GetExceptionName().c_str());
        });

        selectObjectContentRequest.SetEventStreamHandler(handler);

        Client->SelectObjectContent(selectObjectContentRequest);

        ASSERT_TRUE(isErrorEventReceived);
    }

    TEST_F(BucketAndObjectOperationTest, TestFlexibleChecksums)
    {
        const Aws::String fullBucketName = CalculateBucketName(BASE_CHECKSUMS_BUCKET_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);

        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);

        CreateBucketOutcome createBucketOutcome = CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        WaitForBucketToPropagate(fullBucketName, Client);
        TagTestBucket(fullBucketName, Client);

        // Checksums in request body using aws-chunked trailer
        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
        *objectStream << "Test Object";

        PutObjectRequest putObjectRequest;
        putObjectRequest.SetBucket(fullBucketName);
        putObjectRequest.SetKey(TEST_OBJ_KEY);
        putObjectRequest.SetBody(objectStream);
        putObjectRequest.SetChecksumAlgorithm(ChecksumAlgorithm::CRC32);
        auto putObjectOutcome = Client->PutObject(putObjectRequest);
        AWS_ASSERT_SUCCESS(putObjectOutcome);

        objectStream->clear();
        objectStream->seekg(0);
        putObjectRequest.SetChecksumAlgorithm(ChecksumAlgorithm::CRC32C);
        putObjectOutcome = Client->PutObject(putObjectRequest);
        AWS_ASSERT_SUCCESS(putObjectOutcome);

        objectStream->clear();
        objectStream->seekg(0);
        putObjectRequest.SetChecksumAlgorithm(ChecksumAlgorithm::SHA256);
        putObjectOutcome = Client->PutObject(putObjectRequest);
        AWS_ASSERT_SUCCESS(putObjectOutcome);

        objectStream->clear();
        objectStream->seekg(0);
        putObjectRequest.SetChecksumAlgorithm(ChecksumAlgorithm::SHA1);
        putObjectOutcome = Client->PutObject(putObjectRequest);
        AWS_ASSERT_SUCCESS(putObjectOutcome);

        // Checksums in request headers
        ClientConfiguration config;
        config.region = Aws::Region::US_EAST_1;
        S3Client s3ClientSigningBody(config, Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::Always, false);

        objectStream->clear();
        objectStream->seekg(0);
        putObjectRequest.SetChecksumAlgorithm(ChecksumAlgorithm::CRC32);
        putObjectOutcome = s3ClientSigningBody.PutObject(putObjectRequest);
        AWS_ASSERT_SUCCESS(putObjectOutcome);

        objectStream->clear();
        objectStream->seekg(0);
        putObjectRequest.SetChecksumAlgorithm(ChecksumAlgorithm::CRC32C);
        putObjectOutcome = s3ClientSigningBody.PutObject(putObjectRequest);
        AWS_ASSERT_SUCCESS(putObjectOutcome);

        objectStream->clear();
        objectStream->seekg(0);
        putObjectRequest.SetChecksumAlgorithm(ChecksumAlgorithm::SHA256);
        putObjectOutcome = s3ClientSigningBody.PutObject(putObjectRequest);
        AWS_ASSERT_SUCCESS(putObjectOutcome);

        objectStream->clear();
        objectStream->seekg(0);
        putObjectRequest.SetChecksumAlgorithm(ChecksumAlgorithm::SHA1);
        putObjectOutcome = s3ClientSigningBody.PutObject(putObjectRequest);
        AWS_ASSERT_SUCCESS(putObjectOutcome);

        // Response Checksums Validation
        GetObjectRequest getObjectRequest;
        getObjectRequest.SetBucket(fullBucketName);
        getObjectRequest.SetKey(TEST_OBJ_KEY);
        getObjectRequest.SetChecksumMode(ChecksumMode::ENABLED);

        auto getObjectOutcome = Client->GetObject(getObjectRequest);
        AWS_ASSERT_SUCCESS(getObjectOutcome);
    }

    TEST_F(BucketAndObjectOperationTest, TestMultipartFlexibleChecksums)
    {
        const char* multipartKeyName = "MultiPartKey";
        const Aws::String fullBucketName = CalculateBucketName(BASE_CHECKSUMS_BUCKET_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);

        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);

        CreateBucketOutcome createBucketOutcome = CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName, Client));
        TagTestBucket(fullBucketName, Client);

        CreateMultipartUploadRequest createMultipartUploadRequest;
        createMultipartUploadRequest.SetBucket(fullBucketName);
        createMultipartUploadRequest.SetKey(multipartKeyName);
        createMultipartUploadRequest.SetContentType("text/plain");

        CreateMultipartUploadOutcome createMultipartUploadOutcome = Client->CreateMultipartUpload(createMultipartUploadRequest);
        AWS_ASSERT_SUCCESS(createMultipartUploadOutcome);

        std::shared_ptr<Aws::IOStream> part1Stream = Create5MbStreamForUploadPart("1");
        std::shared_ptr<Aws::IOStream> part2Stream = Create5MbStreamForUploadPart("2");
        std::shared_ptr<Aws::IOStream> part3Stream = Create5MbStreamForUploadPart("3");

        UploadPartRequest uploadPartRequest;
        uploadPartRequest.SetBucket(fullBucketName);
        uploadPartRequest.SetKey(multipartKeyName);
        uploadPartRequest.SetUploadId(createMultipartUploadOutcome.GetResult().GetUploadId());

        uploadPartRequest.SetPartNumber(1);
        uploadPartRequest.SetBody(part1Stream);
        auto uploadPartOutcome1 = Client->UploadPart(uploadPartRequest);
        AWS_ASSERT_SUCCESS(uploadPartOutcome1);

        uploadPartRequest.SetPartNumber(2);
        uploadPartRequest.SetBody(part2Stream);
        auto uploadPartOutcome2 = Client->UploadPart(uploadPartRequest);
        AWS_ASSERT_SUCCESS(uploadPartOutcome2);

        uploadPartRequest.SetPartNumber(3);
        uploadPartRequest.SetBody(part3Stream);
        auto uploadPartOutcome3 = Client->UploadPart(uploadPartRequest);
        AWS_ASSERT_SUCCESS(uploadPartOutcome3);

        CompletedPart completedPart1;
        completedPart1.SetETag(uploadPartOutcome1.GetResult().GetETag());
        completedPart1.SetPartNumber(1);

        CompletedPart completedPart2;
        completedPart2.SetETag(uploadPartOutcome2.GetResult().GetETag());
        completedPart2.SetPartNumber(2);

        CompletedPart completedPart3;
        completedPart3.SetETag(uploadPartOutcome3.GetResult().GetETag());
        completedPart3.SetPartNumber(3);

        CompleteMultipartUploadRequest completeMultipartUploadRequest;
        completeMultipartUploadRequest.SetBucket(fullBucketName);
        completeMultipartUploadRequest.SetKey(multipartKeyName);
        completeMultipartUploadRequest.SetUploadId(createMultipartUploadOutcome.GetResult().GetUploadId());

        CompletedMultipartUpload completedMultipartUpload;
        completedMultipartUpload.AddParts(completedPart1);
        completedMultipartUpload.AddParts(completedPart2);
        completedMultipartUpload.AddParts(completedPart3);
        completeMultipartUploadRequest.SetMultipartUpload(completedMultipartUpload);

        CompleteMultipartUploadOutcome completeMultipartUploadOutcome = Client->CompleteMultipartUpload(completeMultipartUploadRequest);
        AWS_ASSERT_SUCCESS(completeMultipartUploadOutcome);

        ASSERT_TRUE(WaitForObjectToPropagate(fullBucketName, multipartKeyName));

        GetObjectRequest getObjectRequest;
        getObjectRequest.SetBucket(fullBucketName);
        getObjectRequest.SetKey(multipartKeyName);
        getObjectRequest.SetChecksumMode(ChecksumMode::ENABLED);

        GetObjectOutcome getObjectOutcome = Client->GetObject(getObjectRequest);
        AWS_ASSERT_SUCCESS(getObjectOutcome);
    }


    TEST_F(BucketAndObjectOperationTest, TestCrossRegionOperations)
    {
        const Aws::String fullBucketName = CalculateBucketName(BASE_CROSS_REGION_BUCKET_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);

        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        CreateBucketConfiguration bucketConfiguration;
        bucketConfiguration.SetLocationConstraint(BucketLocationConstraint::us_west_2);
        createBucketRequest.SetCreateBucketConfiguration(bucketConfiguration);

        CreateBucketOutcome createBucketOutcome = CreateBucket(createBucketRequest, oregonClient);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        const CreateBucketResult& createBucketResult = createBucketOutcome.GetResult();
        ASSERT_TRUE(!createBucketResult.GetLocation().empty());
        WaitForBucketToPropagate(fullBucketName, oregonClient);
        TagTestBucket(fullBucketName, oregonClient);

        ListObjectsRequest listObjectsRequest;
        listObjectsRequest.SetBucket(fullBucketName);
        // Client in us-east-1 will not make cross-region request.
        ListObjectsOutcome listObjectsOutcome = Client->ListObjects(listObjectsRequest);
        ASSERT_FALSE(listObjectsOutcome.IsSuccess());
        // Client in aws-global will make cross-region request.
        listObjectsOutcome = globalClient->ListObjects(listObjectsRequest);
        AWS_ASSERT_SUCCESS(listObjectsOutcome);

        DeleteBucketRequest deleteBucketRequest;
        deleteBucketRequest.SetBucket(fullBucketName);
        DeleteBucketOutcome deleteBucketOutcome = globalClient->DeleteBucket(deleteBucketRequest);
        AWS_ASSERT_SUCCESS(deleteBucketOutcome);
    }

    TEST_F(BucketAndObjectOperationTest, TestCustomEndpointOverride)
    {
        const Aws::String fullBucketName = CalculateBucketName(BASE_ENDPOINT_OVERRIDE_BUCKET_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
        Aws::StringStream ss;

        // Traditional bucket name with virtual addressing
        ClientConfiguration config;
        config.region = Aws::Region::US_WEST_2;
        config.endpointOverride = CUSTOM_ENDPOINT_OVERRIDE;
        config.retryStrategy = Aws::MakeShared<Aws::Client::DefaultRetryStrategy>(ALLOCATION_TAG, 0 /* don't retry */, 25);
        S3Client s3ClientWithVirtualAddressing(config, AWSAuthV4Signer::PayloadSigningPolicy::Never, true /*useVirtualAddressing*/);

        ListObjectsRequest listObjectsRequest;
        listObjectsRequest.SetBucket(fullBucketName);
        auto listObjectsOutcome = s3ClientWithVirtualAddressing.ListObjects(listObjectsRequest);
        ASSERT_FALSE(listObjectsOutcome.IsSuccess());
        ASSERT_EQ(HttpResponseCode::REQUEST_NOT_MADE, listObjectsOutcome.GetError().GetResponseCode());
        ss << "https://" << fullBucketName << "." << CUSTOM_ENDPOINT_OVERRIDE;
        ASSERT_STREQ(ss.str().c_str(), TestingMonitoringMetrics::s_lastUriString.c_str());
        ASSERT_STREQ("s3", TestingMonitoringMetrics::s_lastSigningServiceName.c_str());

        // Access Point Arn with virtual addressing
        listObjectsRequest.SetBucket("arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint");
        listObjectsOutcome = s3ClientWithVirtualAddressing.ListObjects(listObjectsRequest);
        ASSERT_FALSE(listObjectsOutcome.IsSuccess());
        ASSERT_EQ(HttpResponseCode::REQUEST_NOT_MADE, listObjectsOutcome.GetError().GetResponseCode());
        ss.str("");
        ss << "https://myendpoint-123456789012." << CUSTOM_ENDPOINT_OVERRIDE;
        ASSERT_STREQ(ss.str().c_str(), TestingMonitoringMetrics::s_lastUriString.c_str());
        ASSERT_STREQ("s3", TestingMonitoringMetrics::s_lastSigningServiceName.c_str());

        // Outposts Access Point Arn with virtual addressing
        listObjectsRequest.SetBucket("arn:aws:s3-outposts:us-west-2:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint");
        listObjectsOutcome = s3ClientWithVirtualAddressing.ListObjects(listObjectsRequest);
        ASSERT_FALSE(listObjectsOutcome.IsSuccess());
        ASSERT_EQ(HttpResponseCode::REQUEST_NOT_MADE, listObjectsOutcome.GetError().GetResponseCode());
        ss.str("");
        ss << "https://myaccesspoint-123456789012.op-01234567890123456." << CUSTOM_ENDPOINT_OVERRIDE;
        ASSERT_STREQ(ss.str().c_str(), TestingMonitoringMetrics::s_lastUriString.c_str());
        auto expEndpoint = s3ClientWithVirtualAddressing.accessEndpointProvider()->ResolveEndpoint(listObjectsRequest.GetEndpointContextParams());
        AWS_EXPECT_SUCCESS(expEndpoint);
        Aws::String expSigningName = *(expEndpoint.GetResult().GetAttributes()->authScheme.GetSigningName());
        ASSERT_EQ(expSigningName, TestingMonitoringMetrics::s_lastSigningServiceName.c_str());

        // ListBuckets
        auto listBucketsOutcome = s3ClientWithVirtualAddressing.ListBuckets();
        ASSERT_FALSE(listBucketsOutcome.IsSuccess());
        ASSERT_EQ(HttpResponseCode::REQUEST_NOT_MADE, listBucketsOutcome.GetError().GetResponseCode());
        ss.str("");
        ss << "https://" << CUSTOM_ENDPOINT_OVERRIDE;
        ASSERT_STREQ(ss.str().c_str(), TestingMonitoringMetrics::s_lastUriString.c_str());
        ASSERT_STREQ("s3", TestingMonitoringMetrics::s_lastSigningServiceName.c_str());

        // Tradition bucket name with path addressing
        S3Client s3ClientWithPathAddressing(config, AWSAuthV4Signer::PayloadSigningPolicy::Never, false /*useVirtualAddressing*/);
        listObjectsRequest.SetBucket(fullBucketName);
        listObjectsOutcome = s3ClientWithPathAddressing.ListObjects(listObjectsRequest);
        ASSERT_FALSE(listObjectsOutcome.IsSuccess());
        ASSERT_EQ(HttpResponseCode::REQUEST_NOT_MADE, listObjectsOutcome.GetError().GetResponseCode());
        ss.str("");
        ss << "https://" << CUSTOM_ENDPOINT_OVERRIDE << "/" << fullBucketName;
        ASSERT_STREQ(ss.str().c_str(), TestingMonitoringMetrics::s_lastUriString.c_str());
        ASSERT_STREQ("s3", TestingMonitoringMetrics::s_lastSigningServiceName.c_str());

        // Use arn region, Access Point Arn with virtual addressing
        Aws::String awsS3UseArnRegion = Aws::Environment::GetEnv("AWS_S3_USE_ARN_REGION");
        Aws::Environment::SetEnv("AWS_S3_USE_ARN_REGION", "true", 1);
        config.region = Aws::Region::EU_WEST_1;
        S3Client s3ClientInEuWest1(config, AWSAuthV4Signer::PayloadSigningPolicy::Never, true /*useVirtualAddressing*/);
        if (awsS3UseArnRegion.empty())
        {
            Aws::Environment::UnSetEnv("AWS_S3_USE_ARN_REGION");
        }
        else
        {
            Aws::Environment::SetEnv("AWS_S3_USE_ARN_REGION", awsS3UseArnRegion.c_str(), 1);
        }
        listObjectsRequest.SetBucket("arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint");
        listObjectsOutcome = s3ClientInEuWest1.ListObjects(listObjectsRequest);
        ASSERT_FALSE(listObjectsOutcome.IsSuccess());
        ASSERT_EQ(HttpResponseCode::REQUEST_NOT_MADE, listObjectsOutcome.GetError().GetResponseCode());
        ss.str("");
        ss << "https://myendpoint-123456789012." << CUSTOM_ENDPOINT_OVERRIDE;
        ASSERT_STREQ(ss.str().c_str(), TestingMonitoringMetrics::s_lastUriString.c_str());
        ASSERT_STREQ("s3", TestingMonitoringMetrics::s_lastSigningServiceName.c_str());
        ASSERT_STREQ("us-west-2", TestingMonitoringMetrics::s_lastSigningRegion.c_str());

        // Failure case, dualstack endpoint is not compatible with custom endpoint override.
        config.region = Aws::Region::US_WEST_2;
        config.useDualStack = true;
        S3Client s3ClientWithDualStack(config, AWSAuthV4Signer::PayloadSigningPolicy::Never, true /*useVirtualAddressing*/);
        listObjectsRequest.SetBucket(fullBucketName);
        listObjectsOutcome = s3ClientWithDualStack.ListObjects(listObjectsRequest);
        ASSERT_FALSE(listObjectsOutcome.IsSuccess());
        ASSERT_EQ(HttpResponseCode::REQUEST_NOT_MADE, listObjectsOutcome.GetError().GetResponseCode());

        listObjectsRequest.SetBucket("arn:aws:s3-outposts:us-west-2:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint");
        listObjectsOutcome = s3ClientWithDualStack.ListObjects(listObjectsRequest);
        ASSERT_FALSE(listObjectsOutcome.IsSuccess());
        ASSERT_EQ(HttpResponseCode::REQUEST_NOT_MADE, listObjectsOutcome.GetError().GetResponseCode());
    }

    TEST_F(BucketAndObjectOperationTest, TestS3AccessPointARN)
    {
        Aws::String awsS3UseArnRegionBackup = Aws::Environment::GetEnv("AWS_S3_USE_ARN_REGION");
        ClientConfiguration config;
        config.region = Aws::Region::US_WEST_2;
        config.retryStrategy = Aws::MakeShared<Aws::Client::DefaultRetryStrategy>(ALLOCATION_TAG, 0 /* don't retry */, 25);

        // Invalid ARNs
        DoTestGetObjectWithBucketARN(config, "arn:aws:sqs:us-west-2:123456789012:someresource", "", "", "", false);
        DoTestGetObjectWithBucketARN(config, "arn:aws:s3:us-west-2:123456789012:bucket_name:mybucket", "", "", "", false);
        DoTestGetObjectWithBucketARN(config, "arn:aws:s3:us-west-2::accesspoint:myendpoint", "", "", "", false);
        DoTestGetObjectWithBucketARN(config, "arn:aws:s3:us-west-2:123.45678.9012:accesspoint:mybucket", "", "", "", false);
        DoTestGetObjectWithBucketARN(config, "arn:aws:s3:us-west-2:123456789012:accesspoint", "", "", "", false);
        DoTestGetObjectWithBucketARN(config, "arn:aws:s3:us-west-2:123456789012:accesspoint:*", "", "", "", false);
        DoTestGetObjectWithBucketARN(config, "arn:aws:s3:us-west-2:123456789012:accesspoint:my.bucket", "", "", "", false);
        DoTestGetObjectWithBucketARN(config, "arn:aws:s3:us-west-2:123456789012:accesspoint:mybucket:object:foo", "", "", "", false);

        // US regions
        config.region = Aws::Region::US_EAST_1;
        DoTestGetObjectWithBucketARN(config, "arn:aws:s3:us-east-1:123456789012:accesspoint:myendpoint",
            "myendpoint-123456789012.s3-accesspoint.us-east-1.amazonaws.com", Aws::Region::US_EAST_1, "s3", true);
        config.region = Aws::Region::US_WEST_2;
        DoTestGetObjectWithBucketARN(config, "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint",
            "myendpoint-123456789012.s3-accesspoint.us-west-2.amazonaws.com", Aws::Region::US_WEST_2, "s3", true);

        // s3-external-1 and aws-global are not regional endpoints.
        config.region = "s3-external-1";
        DoTestGetObjectWithBucketARN(config, "arn:aws:s3:us-east-1:123456789012:accesspoint:myendpoint", "", "", "", false);
        config.region = Aws::Region::AWS_GLOBAL;
        DoTestGetObjectWithBucketARN(config, "arn:aws:s3:us-east-1:123456789012:accesspoint:myendpoint", "", "", "", false);

        // Cross region Access Point ARN
        config.region = Aws::Region::US_WEST_2;
        DoTestGetObjectWithBucketARN(config, "arn:aws:s3:us-east-1:123456789012:accesspoint:myendpoint", "", "", "", false);

        // China regions
        config.region = Aws::Region::CN_NORTH_1;
        DoTestGetObjectWithBucketARN(config, "arn:aws-cn:s3:cn-north-1:123456789012:accesspoint:myendpoint",
            "myendpoint-123456789012.s3-accesspoint.cn-north-1.amazonaws.com.cn", Aws::Region::CN_NORTH_1, "s3", true);

        // US Gov regions
        config.region = "fips-us-gov-east-1";
        DoTestGetObjectWithBucketARN(config, "arn:aws-us-gov:s3:us-gov-east-1:123456789012:accesspoint:myendpoint",
            "myendpoint-123456789012.s3-accesspoint-fips.us-gov-east-1.amazonaws.com", Aws::Region::US_GOV_EAST_1, "s3", true);

        // Cross US Gov region Access Point ARN
        config.region = "fips-us-gov-east-1";
        DoTestGetObjectWithBucketARN(config, "arn:aws-us-gov:s3:us-gov-west-1:123456789012:accesspoint:myendpoint", "", "", "", false);

        // FIPS region in ARN
        config.region = "fips-us-gov-west-1";
        DoTestGetObjectWithBucketARN(config, "arn:aws-us-gov:s3-object-lambda:fips-us-gov-west-1:123456789012:accesspoint/myendpoint", "", "", "", false);
        config.region = "us-gov-west-1-fips";
        DoTestGetObjectWithBucketARN(config, "arn:aws-us-gov:s3-object-lambda:us-gov-west-1-fips:123456789012:accesspoint/myendpoint", "", "", "", false);

        // Use ARN region
        Aws::Environment::SetEnv("AWS_S3_USE_ARN_REGION", "true", 1);

        // US regions
        config.region = Aws::Region::US_WEST_2;
        DoTestGetObjectWithBucketARN(config, "arn:aws:s3:us-east-1:123456789012:accesspoint:myendpoint",
            "myendpoint-123456789012.s3-accesspoint.us-east-1.amazonaws.com", Aws::Region::US_EAST_1, "s3", true);

        // s3-external-1 and aws-global in client configuration.
        config.region = "s3-external-1";
        DoTestGetObjectWithBucketARN(config, "arn:aws:s3:us-east-1:123456789012:accesspoint:myendpoint",
            "myendpoint-123456789012.s3-accesspoint.us-east-1.amazonaws.com", Aws::Region::US_EAST_1, "s3", true);
        config.region = Aws::Region::AWS_GLOBAL;
        DoTestGetObjectWithBucketARN(config, "arn:aws:s3:us-east-1:123456789012:accesspoint:myendpoint",
            "myendpoint-123456789012.s3-accesspoint.us-east-1.amazonaws.com", Aws::Region::US_EAST_1, "s3", true);

        // US regions with dual-stack
        config.region = Aws::Region::US_WEST_2;
        config.useDualStack = true;
        DoTestGetObjectWithBucketARN(config, "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint",
            "myendpoint-123456789012.s3-accesspoint.dualstack.us-west-2.amazonaws.com", Aws::Region::US_WEST_2, "s3", true);
        config.useDualStack = false;

        // TODO Cross partition Access Point ARN
        // config.region = Aws::Region::US_WEST_2;
        // DoTestGetObjectWithBucketARN(config, "arn:aws-cn:s3:cn-north-1:123456789012:accesspoint:myendpoint", "", "", "", false);

        // China regions
        config.region = Aws::Region::CN_NORTH_1;
        DoTestGetObjectWithBucketARN(config, "arn:aws-cn:s3:cn-north-1:123456789012:accesspoint:myendpoint",
            "myendpoint-123456789012.s3-accesspoint.cn-north-1.amazonaws.com.cn", Aws::Region::CN_NORTH_1, "s3", true);
        DoTestGetObjectWithBucketARN(config, "arn:aws-cn:s3:cn-northwest-1:123456789012:accesspoint:myendpoint",
            "myendpoint-123456789012.s3-accesspoint.cn-northwest-1.amazonaws.com.cn", Aws::Region::CN_NORTHWEST_1, "s3", true);

        // US Gov regions
        config.region = Aws::Region::US_GOV_EAST_1;
        DoTestGetObjectWithBucketARN(config, "arn:aws-us-gov:s3:us-gov-east-1:123456789012:accesspoint:myendpoint",
            "myendpoint-123456789012.s3-accesspoint.us-gov-east-1.amazonaws.com", Aws::Region::US_GOV_EAST_1, "s3", true);
        config.region = "fips-us-gov-east-1";
        DoTestGetObjectWithBucketARN(config, "arn:aws-us-gov:s3:us-gov-east-1:123456789012:accesspoint:myendpoint",
            "myendpoint-123456789012.s3-accesspoint-fips.us-gov-east-1.amazonaws.com", Aws::Region::US_GOV_EAST_1, "s3", true);

        // US Gov regions with dual-stack
        config.region = "fips-us-gov-east-1";
        config.useDualStack = true;
        DoTestGetObjectWithBucketARN(config, "arn:aws-us-gov:s3:us-gov-east-1:123456789012:accesspoint:myendpoint",
            "myendpoint-123456789012.s3-accesspoint-fips.dualstack.us-gov-east-1.amazonaws.com", Aws::Region::US_GOV_EAST_1, "s3", true);

        if (awsS3UseArnRegionBackup.empty())
        {
            Aws::Environment::UnSetEnv("AWS_S3_USE_ARN_REGION");
        }
        else
        {
            Aws::Environment::SetEnv("AWS_S3_USE_ARN_REGION", awsS3UseArnRegionBackup.c_str(), 1);
        }
    }

    TEST_F(BucketAndObjectOperationTest, TestS3MultiRegionAccessPointARN)
    {
        Aws::String awsS3DisableMultiregionAccessPointsBackup = Aws::Environment::GetEnv("AWS_S3_DISABLE_MULTIREGION_ACCESS_POINTS");
        ClientConfiguration config;
        config.region = Aws::Region::US_WEST_2;
        config.retryStrategy = Aws::MakeShared<Aws::Client::DefaultRetryStrategy>(ALLOCATION_TAG, 0 /* don't retry */, 25);

        // US regions
        config.region = Aws::Region::US_EAST_1;
        DoTestGetObjectWithBucketARN(config, "arn:aws:s3::123456789012:accesspoint:mfzwi23gnjvgw.mrap",
            "mfzwi23gnjvgw.mrap.accesspoint.s3-global.amazonaws.com", "*", "s3", true);
        ASSERT_NE(TestingMonitoringMetrics::s_lastRequestHeaders.end(), TestingMonitoringMetrics::s_lastRequestHeaders.find("x-amz-region-set"));
        ASSERT_STREQ("*", TestingMonitoringMetrics::s_lastRequestHeaders["x-amz-region-set"].c_str());

        config.region = Aws::Region::US_WEST_2;
        DoTestGetObjectWithBucketARN(config, "arn:aws:s3::123456789012:accesspoint:mfzwi23gnjvgw.mrap",
            "mfzwi23gnjvgw.mrap.accesspoint.s3-global.amazonaws.com", "*", "s3", true);
        ASSERT_NE(TestingMonitoringMetrics::s_lastRequestHeaders.end(), TestingMonitoringMetrics::s_lastRequestHeaders.find("x-amz-region-set"));
        ASSERT_STREQ("*", TestingMonitoringMetrics::s_lastRequestHeaders["x-amz-region-set"].c_str());

        DoTestGetObjectWithBucketARN(config, "arn:aws:s3::123456789012:accesspoint:myendpoint",
            "myendpoint.accesspoint.s3-global.amazonaws.com", "*", "s3", true);
        ASSERT_NE(TestingMonitoringMetrics::s_lastRequestHeaders.end(), TestingMonitoringMetrics::s_lastRequestHeaders.find("x-amz-region-set"));
        ASSERT_STREQ("*", TestingMonitoringMetrics::s_lastRequestHeaders["x-amz-region-set"].c_str());

        DoTestGetObjectWithBucketARN(config, "arn:aws:s3::123456789012:accesspoint:my.bucket",
            "my.bucket.accesspoint.s3-global.amazonaws.com", "*", "s3", true);
        ASSERT_NE(TestingMonitoringMetrics::s_lastRequestHeaders.end(), TestingMonitoringMetrics::s_lastRequestHeaders.find("x-amz-region-set"));
        ASSERT_STREQ("*", TestingMonitoringMetrics::s_lastRequestHeaders["x-amz-region-set"].c_str());

        // Global region
        config.region = Aws::Region::AWS_GLOBAL;
        DoTestGetObjectWithBucketARN(config, "arn:aws:s3::123456789012:accesspoint:mfzwi23gnjvgw.mrap",
            "mfzwi23gnjvgw.mrap.accesspoint.s3-global.amazonaws.com", "*", "s3", true);
        ASSERT_NE(TestingMonitoringMetrics::s_lastRequestHeaders.end(), TestingMonitoringMetrics::s_lastRequestHeaders.find("x-amz-region-set"));
        ASSERT_STREQ("*", TestingMonitoringMetrics::s_lastRequestHeaders["x-amz-region-set"].c_str());

        // China regions
        config.region = Aws::Region::CN_NORTH_1;
        DoTestGetObjectWithBucketARN(config, "arn:aws-cn:s3::123456789012:accesspoint:mfzwi23gnjvgw.mrap",
            "mfzwi23gnjvgw.mrap.accesspoint.s3-global.amazonaws.com.cn", "*", "s3", true);
        ASSERT_NE(TestingMonitoringMetrics::s_lastRequestHeaders.end(), TestingMonitoringMetrics::s_lastRequestHeaders.find("x-amz-region-set"));
        ASSERT_STREQ("*", TestingMonitoringMetrics::s_lastRequestHeaders["x-amz-region-set"].c_str());

        // dual-stack is not supported
        config.useDualStack = true;
        DoTestGetObjectWithBucketARN(config, "arn:aws:s3::123456789012:accesspoint:mfzwi23gnjvgw.mrap", "", "", "", false);
        config.useDualStack = false;

        // custom endpoint override is not supported
        config.endpointOverride = "my-endpoints.com";
        DoTestGetObjectWithBucketARN(config, "arn:aws:s3::123456789012:accesspoint:mfzwi23gnjvgw.mrap", "", "", "", false);
        config.endpointOverride = "";

        // Disable S3 Multi Region Access Points ARN
        Aws::Environment::SetEnv("AWS_S3_DISABLE_MULTIREGION_ACCESS_POINTS", "true", 1);

        config.region = Aws::Region::US_WEST_2;
        DoTestGetObjectWithBucketARN(config, "arn:aws:s3::123456789012:accesspoint:mfzwi23gnjvgw.mrap", "", "", "", false);
        DoTestGetObjectWithBucketARN(config, "arn:aws:s3::123456789012:accesspoint:myendpoint", "", "", "", false);
        config.region = Aws::Region::AWS_GLOBAL;
        DoTestGetObjectWithBucketARN(config, "arn:aws:s3::123456789012:accesspoint:mfzwi23gnjvgw.mrap", "", "", "", false);

        if (awsS3DisableMultiregionAccessPointsBackup.empty())
        {
            Aws::Environment::UnSetEnv("AWS_S3_DISABLE_MULTIREGION_ACCESS_POINTS");
        }
        else
        {
            Aws::Environment::SetEnv("AWS_S3_DISABLE_MULTIREGION_ACCESS_POINTS", awsS3DisableMultiregionAccessPointsBackup.c_str(), 1);
        }
    }

    TEST_F(BucketAndObjectOperationTest, TestEmptyBody) {
        const Aws::String fullBucketName = CalculateBucketName(BASE_PUT_OBJECTS_BUCKET_NAME.c_str());
        SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);

        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(fullBucketName);
        createBucketRequest.SetACL(BucketCannedACL::private_);

        CreateBucketOutcome createBucketOutcome = CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
        const CreateBucketResult& createBucketResult = createBucketOutcome.GetResult();
        ASSERT_TRUE(!createBucketResult.GetLocation().empty());
        ASSERT_TRUE(WaitForBucketToPropagate(fullBucketName, Client));
        TagTestBucket(fullBucketName, Client);

        PutObjectRequest putObjectRequest;
        putObjectRequest.SetBucket(fullBucketName);
        putObjectRequest.SetKey("sbiscigl_was_here");
        PutObjectOutcome putObjectOutcome = Client->PutObject(putObjectRequest);
        AWS_ASSERT_SUCCESS(putObjectOutcome);
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
        CreateBucketOutcome createBucketOutcome = CreateBucket(createBucketRequest);
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
}
