/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */


#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/DefaultRetryStrategy.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/UUID.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/testing/TestingEnvironment.h>
#include <aws/testing/mocks/monitoring/TestingMonitoring.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/CreateBucketRequest.h>
#include <aws/s3/model/HeadBucketRequest.h>
#include <aws/s3/model/ListObjectsRequest.h>
#include <aws/s3/model/DeleteBucketRequest.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/s3/model/HeadObjectRequest.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/DeleteObjectRequest.h>
#include <aws/s3/model/PutBucketTaggingRequest.h>
#include <aws/s3control/S3ControlClient.h>
#include <aws/s3control/model/PutPublicAccessBlockRequest.h>
#include <aws/s3control/model/CreateBucketRequest.h>
#include <aws/s3control/model/GetBucketRequest.h>
#include <aws/s3control/model/DeleteBucketRequest.h>
#include <aws/s3control/model/DescribeMultiRegionAccessPointOperationRequest.h>
#include <aws/s3control/model/CreateAccessPointRequest.h>
#include <aws/s3control/model/GetAccessPointRequest.h>
#include <aws/s3control/model/ListAccessPointsRequest.h>
#include <aws/s3control/model/DeleteAccessPointRequest.h>
#include <aws/s3control/model/CreateMultiRegionAccessPointRequest.h>
#include <aws/s3control/model/DeleteMultiRegionAccessPointRequest.h>
#include <aws/s3control/model/GetMultiRegionAccessPointRequest.h>
#include <aws/access-management/AccessManagementClient.h>
#include <aws/iam/IAMClient.h>
#include <aws/cognito-identity/CognitoIdentityClient.h>
#include <aws/sts/STSClient.h>
#include <aws/sts/model/AssumeRoleRequest.h>
#include <thread>

using namespace Aws;
using namespace Aws::Http;
using namespace Aws::Client;
using namespace Aws::S3Control;
using namespace Aws::S3Control::Model;

namespace
{
    static const char ALLOCATION_TAG[] = "S3ControlTest";
    static const char BASE_BUCKET_NAME[] = "accesspointbucket";
    static const char BASE_MRAP_BUCKET_NAME[] = "mrapbucket";
    static const char BASE_ACCESS_POINT[] = "accesspoint";
    static const char BASE_MRAP[] = "mrap";
    static const char BASE_OUTPOST_ID[] = "op-0123456789abcdef0";
    static const char PRESIGNED_URLS_BUCKET_NAME[] = "presignedaccesspointbucket";
    static const char PRESIGNED_URLS_ACCESS_POINT[] = "presignedaccesspoint";
    static const char TEST_OBJECT_KEY[] = "TestObjectKey";
    static const char TEST_BUCKET_TAG[] = "IntegrationTestResource";
    static const int TIMEOUT_MAX = 20;

    class S3ControlTest : public ::testing::Test
    {
    public:
        S3ControlClient m_client;
        S3::S3Client m_s3Client;
        Aws::String m_accountId;
        std::shared_ptr<HttpClient> m_httpClient;

        Aws::Vector<std::pair<const char*, Aws::String>> m_environments;

        S3ControlTest()
        {
            // Create a client
            ClientConfiguration config;
            config.region = Aws::Region::US_WEST_2;
            config.scheme = Scheme::HTTPS;
            config.connectTimeoutMs = 30000;
            config.requestTimeoutMs = 30000;
            m_client = S3ControlClient(config);
            m_s3Client = createS3Client(config);
            m_httpClient = Aws::Http::CreateHttpClient(config);

            // IAM client has to use us-east-1 in its signer.
            auto accountId = Aws::Environment::GetEnv("CATAPULT_TEST_ACCOUNT");
            if(accountId.empty()) {
                config.region = Aws::Region::US_EAST_1;
                auto iamClient = Aws::MakeShared<Aws::IAM::IAMClient>(ALLOCATION_TAG, config);
                auto cognitoClient = Aws::MakeShared<Aws::CognitoIdentity::CognitoIdentityClient>(ALLOCATION_TAG, config);
                Aws::AccessManagement::AccessManagementClient accessManagementClient(iamClient, cognitoClient);
                accountId = accessManagementClient.GetAccountId();
            }
            m_accountId = accountId;
        }

    protected:

        static void SetUpTestCase()
        {
            TestingMonitoringManager::InitTestingMonitoring();
        }

        static void TearDownTestCase()
        {
            TestingMonitoringManager::CleanupTestingMonitoring();
        }

        Aws::String BuildResourceName(const char* baseAccessPoint)
        {
            // In case the length exceeds the limits.
            return Aws::Testing::GetAwsResourcePrefix() + baseAccessPoint + Aws::Utils::StringUtils::ToLower(GetRandomUUID().substr(0, 8).c_str());
        }

        static Aws::String GetRandomUUID()
        {
            static const Aws::Utils::UUID resourceUUID = Aws::Utils::UUID::RandomUUID();
            return resourceUUID;
        }

        static S3::S3Client createS3Client(const ClientConfiguration &configuration) {
            Aws::String testAccount(Aws::Environment::GetEnv("CATAPULT_TEST_ACCOUNT"));
            if (!testAccount.empty()) {
                Aws::String testRoleArn("arn:aws:iam::" + testAccount + ":role/IntegrationTest");
                STS::STSClient stsClient(configuration);
                STS::Model::AssumeRoleRequest assumeRoleRequest;
                assumeRoleRequest.SetRoleArn(testRoleArn);
                assumeRoleRequest.SetRoleSessionName("s3-control-cpp-integ-test");
                STS::Model::AssumeRoleOutcome outcome = stsClient.AssumeRole(assumeRoleRequest);
                STS::Model::Credentials creds = outcome.GetResult().GetCredentials();
                Auth::AWSCredentials awsCredentials(creds.GetAccessKeyId(),
                                                    creds.GetSecretAccessKey(),
                                                    creds.GetSessionToken(),
                                                    creds.GetExpiration());
                return {awsCredentials, Aws::MakeShared<S3::Endpoint::S3EndpointProvider>(ALLOCATION_TAG), configuration};
            }
            return {configuration};
        }

        static void TagTestBucket(const Aws::String& bucketName, const S3::S3Client& client) {
            ASSERT_TRUE(!bucketName.empty());

            Aws::S3::Model::PutBucketTaggingRequest taggingRequest;
            taggingRequest.SetBucket(bucketName);
            Aws::S3::Model::Tag tag;
            tag.SetKey(TEST_BUCKET_TAG);
            tag.SetValue(TEST_BUCKET_TAG);
            Aws::S3::Model::Tagging tagging;
            tagging.AddTagSet(tag);
            taggingRequest.SetTagging(tagging);

            auto taggingOutcome = CallOperationWithUnconditionalRetry(&client, &Aws::S3::S3Client::PutBucketTagging, taggingRequest);
            AWS_ASSERT_SUCCESS(taggingOutcome);
        }

        static bool WaitForBucketToPropagate(const Aws::String& bucketName, const S3::S3Client& client)
        {
            unsigned timeoutCount = 0;
            while (timeoutCount++ < TIMEOUT_MAX)
            {
                S3::Model::ListObjectsRequest ListObjectsRequest;
                ListObjectsRequest.SetBucket(bucketName);
                auto listObjectsOutcome = client.ListObjects(ListObjectsRequest);
                if (listObjectsOutcome.IsSuccess())
                {
                    return true;
                }

                std::this_thread::sleep_for(std::chrono::seconds(10));
            }

            return false;
        }

        static bool WaitForObjectToPropagate(const Aws::String& accessPointArn, const char* objectKey, const S3::S3Client& client)
        {
            unsigned timeoutCount = 0;
            while (timeoutCount++ < TIMEOUT_MAX)
            {
                S3::Model::GetObjectRequest getObjectRequest;
                getObjectRequest.SetBucket(accessPointArn);
                getObjectRequest.SetKey(objectKey);
                auto getObjectOutcome = client.GetObject(getObjectRequest);
                if (getObjectOutcome.IsSuccess())
                {
                    return true;
                }

                std::this_thread::sleep_for(std::chrono::seconds(5));
            }

            return false;
        }

        /**
         * Wait for S3-MRAP server-side asynchronous Operation completion
         *
         * @param requestToken
         * @param accountId
         * @param client
         * @return
         */
        static bool WaitForMultiRegionAccessPointOperationCompletion(const Aws::String& requestToken,
                                                                     const Aws::String& accountId,
                                                                     const S3Control::S3ControlClient& client)
        {
            /*
             * These (CreateMultiRegionAccessPoint,DeleteMultiRegionAccessPoint, etc.) requests are asynchronous,
             * meaning that you might receive a response before the command has completed.
             */
            unsigned timeoutCount = 0;
            while (timeoutCount++ < TIMEOUT_MAX)
            {
                S3Control::Model::DescribeMultiRegionAccessPointOperationRequest request;
                request.SetRequestTokenARN(requestToken);
                request.SetAccountId(accountId);
                auto outcome =
                        CallOperationWithUnconditionalRetry(&client, &Aws::S3Control::S3ControlClient::DescribeMultiRegionAccessPointOperation, request);
                AWS_EXPECT_SUCCESS(outcome);
                if(!outcome.IsSuccess())
                {
                    return false;
                }

                const Aws::String& operation = S3Control::Model::AsyncOperationNameMapper::GetNameForAsyncOperationName(
                        outcome.GetResult().GetAsyncOperation().GetOperation());
                const auto& status = outcome.GetResult().GetAsyncOperation().GetRequestStatus();
                std::cout << "S3Control::DescribeMultiRegionAccessPointOperation request status for " << operation << " is " <<
                             status << " after poll #" << timeoutCount << "\n";
                EXPECT_NE(status, "FAILED") << outcome.GetResult().GetAsyncOperation().GetResponseDetails().GetErrorDetails().GetMessage();
                if(status == "FAILED")
                {
                    for(const auto& item : outcome.GetResult().GetAsyncOperation().GetResponseDetails().GetMultiRegionAccessPointDetails().GetRegions()) {
                        std::cout << "MRAP Detail: " << item.GetName() << " " << item.GetRequestStatus() << "\n";
                    }
                    return false;
                }
                if(status == "SUCCEEDED")
                {
                    return true;
                }
                std::this_thread::sleep_for(std::chrono::seconds(20));
            }

            return false;
        }

        void PrepareAccessPointTest(const Aws::String& bucketName, const Aws::String& accessPointName)
        {
            m_environments.emplace_back("AWS_S3_USE_ARN_REGION", Aws::Environment::GetEnv("AWS_S3_USE_ARN_REGION"));
            Aws::Environment::UnSetEnv("AWS_S3_USE_ARN_REGION");

            S3::Model::CreateBucketRequest createBucketRequest;
            S3::Model::CreateBucketConfiguration bucketConfiguration;
            bucketConfiguration.SetLocationConstraint(S3::Model::BucketLocationConstraint::us_west_2);
            createBucketRequest.SetBucket(bucketName);
            createBucketRequest.SetCreateBucketConfiguration(bucketConfiguration);
            auto createBucketOutcome = m_s3Client.CreateBucket(createBucketRequest);
            AWS_ASSERT_SUCCESS(createBucketOutcome);
            ASSERT_TRUE(WaitForBucketToPropagate(bucketName, m_s3Client));
            TagTestBucket(bucketName, m_s3Client);

            CreateAccessPointRequest createAccessPointRequest;
            createAccessPointRequest.SetName(accessPointName);
            createAccessPointRequest.SetAccountId(m_accountId);
            createAccessPointRequest.SetBucket(bucketName);
            auto createAccessPointOutcome = m_client.CreateAccessPoint(createAccessPointRequest);
            AWS_ASSERT_SUCCESS(createAccessPointOutcome);
        }

        void CleanUpAccessPointTest(const Aws::String& bucketName, const Aws::String& accessPointName)
        {
            DeleteAccessPointRequest deleteAccessPointRequest;
            deleteAccessPointRequest.SetName(accessPointName);
            deleteAccessPointRequest.SetAccountId(m_accountId);
            auto deleteAccessPointOutcome = m_client.DeleteAccessPoint(deleteAccessPointRequest);
            AWS_ASSERT_SUCCESS(deleteAccessPointOutcome);

            S3::Model::DeleteBucketRequest deleteBucketRequest;
            deleteBucketRequest.SetBucket(bucketName);
            auto deleteBucketOutcome = m_s3Client.DeleteBucket(deleteBucketRequest);
            AWS_ASSERT_SUCCESS(deleteBucketOutcome);

            for(const auto& iter : m_environments)
            {
                if(iter.second.empty())
                {
                    Aws::Environment::UnSetEnv(iter.first);
                }
                else
                {
                    Aws::Environment::SetEnv(iter.first, iter.second.c_str(), 1);
                }
            }
        }

        void PrepareMRAPTest(const Aws::String& bucketName, const Aws::Vector<Aws::String>& multiRegions, Aws::String& accessPointName)
        {
            using namespace S3::Model::BucketLocationConstraintMapper;

            Aws::Vector<Aws::S3Control::Model::Region> bucketsInMultiRegions;
            for (const Aws::String& region : multiRegions)
            {
                Aws::String regionalBucketName = bucketName + "-" + region;

                Aws::Client::ClientConfiguration config;
                config.region = region;
                Aws::S3::S3Client s3Client = createS3Client(config);

                S3::Model::CreateBucketRequest createBucketRequest;
                S3::Model::CreateBucketConfiguration bucketConfiguration;
                bucketConfiguration.SetLocationConstraint(GetBucketLocationConstraintForName(region));
                createBucketRequest.SetBucket(regionalBucketName);
                createBucketRequest.SetCreateBucketConfiguration(bucketConfiguration);
                auto createBucketOutcome = s3Client.CreateBucket(createBucketRequest);
                AWS_ASSERT_SUCCESS(createBucketOutcome);
                ASSERT_TRUE(WaitForBucketToPropagate(regionalBucketName, s3Client));
                TagTestBucket(regionalBucketName, s3Client);

                S3Control::Model::Region regionalBucket;
                regionalBucket.SetBucket(regionalBucketName);
                bucketsInMultiRegions.push_back(regionalBucket);
            }

            CreateMultiRegionAccessPointRequest createMRAPRequest;
            CreateMultiRegionAccessPointInput createMRAPInput;
            createMRAPInput.SetName(accessPointName);
            createMRAPInput.SetRegions(bucketsInMultiRegions);
            createMRAPRequest.SetAccountId(m_accountId);
            createMRAPRequest.SetDetails(createMRAPInput);

            auto createMRAPOutcome = m_client.CreateMultiRegionAccessPoint(createMRAPRequest);
            AWS_ASSERT_SUCCESS(createMRAPOutcome);
            ASSERT_TRUE(WaitForMultiRegionAccessPointOperationCompletion(createMRAPOutcome.GetResult().GetRequestTokenARN(), m_accountId, m_client));

            GetMultiRegionAccessPointRequest getMRAPRequest;
            getMRAPRequest.SetAccountId(m_accountId);
            getMRAPRequest.SetName(accessPointName);
            auto getMRAPOutcome = m_client.GetMultiRegionAccessPoint(getMRAPRequest);
            AWS_ASSERT_SUCCESS(createMRAPOutcome);
            ASSERT_EQ(getMRAPOutcome.GetResult().GetAccessPoint().GetStatus(), MultiRegionAccessPointStatus::READY);
        }

        void CleanUpMRAPTest(const Aws::String& bucketName, const Aws::Vector<Aws::String>& multiRegions, const Aws::String& accessPointName)
        {
            AWS_UNREFERENCED_PARAM(accessPointName);
            DeleteMultiRegionAccessPointRequest deleteMRAPRequest;
            DeleteMultiRegionAccessPointInput deleteMRAPInput;
            deleteMRAPInput.SetName(accessPointName);
            deleteMRAPRequest.SetDetails(deleteMRAPInput);
            deleteMRAPRequest.SetAccountId(m_accountId);
            auto deleteMRAPOutcome = m_client.DeleteMultiRegionAccessPoint(deleteMRAPRequest);
            AWS_ASSERT_SUCCESS(deleteMRAPOutcome);
            ASSERT_TRUE(WaitForMultiRegionAccessPointOperationCompletion(deleteMRAPOutcome.GetResult().GetRequestTokenARN(), m_accountId, m_client));

            GetMultiRegionAccessPointRequest getMRAPRequest;
            getMRAPRequest.SetAccountId(m_accountId);
            getMRAPRequest.SetName(accessPointName);
            auto getMRAPOutcome = m_client.GetMultiRegionAccessPoint(getMRAPRequest);
            ASSERT_FALSE(getMRAPOutcome.IsSuccess());

            for (const Aws::String& region : multiRegions)
            {
                Aws::Client::ClientConfiguration config;
                config.region = region;
                Aws::S3::S3Client s3Client = createS3Client(config);

                Aws::String regionalBucket = bucketName + "-" + region;
                S3::Model::DeleteBucketRequest deleteBucketRequest;
                deleteBucketRequest.SetBucket(regionalBucket);
                auto deleteBucketOutcome = s3Client.DeleteBucket(deleteBucketRequest);
                AWS_ASSERT_SUCCESS(deleteBucketOutcome);
            }
        }

        void DoPresignedUrlTest(const Aws::String& accessPointArn, std::shared_ptr<HttpRequest>& putRequest)
        {
            std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>("BucketAndObjectOperationTest");
            *objectStream << "Test Object";
            objectStream->flush();

            putRequest->AddContentBody(objectStream);
            Aws::StringStream intConverter;
            intConverter << objectStream->tellp();
            putRequest->SetContentLength(intConverter.str());
            putRequest->SetContentType("text/plain");
            std::shared_ptr<HttpResponse> putResponse = m_httpClient->MakeRequest(putRequest);

            ASSERT_EQ(HttpResponseCode::OK, putResponse->GetResponseCode());

            ASSERT_TRUE(WaitForObjectToPropagate(accessPointArn, TEST_OBJECT_KEY, m_s3Client));

            // GetObject with presigned url
            Aws::String presignedUrlGet = m_s3Client.GeneratePresignedUrl(accessPointArn, TEST_OBJECT_KEY, HttpMethod::HTTP_GET);
            std::shared_ptr<HttpRequest> getRequest = CreateHttpRequest(presignedUrlGet, HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
            std::shared_ptr<HttpResponse> getResponse = m_httpClient->MakeRequest(getRequest);

            ASSERT_EQ(HttpResponseCode::OK, getResponse->GetResponseCode());
            Aws::StringStream ss;
            ss << getResponse->GetResponseBody().rdbuf();
            ASSERT_STREQ("Test Object", ss.str().c_str());

            // DeleteObject with presigned url
            Aws::String presignedUrlDelete = m_s3Client.GeneratePresignedUrl(accessPointArn, TEST_OBJECT_KEY, HttpMethod::HTTP_DELETE);
            std::shared_ptr<HttpRequest> deleteRequest = CreateHttpRequest(presignedUrlDelete, HttpMethod::HTTP_DELETE, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
            std::shared_ptr<HttpResponse> deleteResponse = m_httpClient->MakeRequest(deleteRequest);
            ASSERT_EQ(HttpResponseCode::NO_CONTENT, deleteResponse->GetResponseCode());
        }
    };

    TEST_F(S3ControlTest, TestInvalidAccountId)
    {
        PutPublicAccessBlockRequest putPublicAccessBlockRequest;
        PublicAccessBlockConfiguration publicAccessBlockConfiguration;
        publicAccessBlockConfiguration.SetBlockPublicPolicy(true);
        putPublicAccessBlockRequest.SetPublicAccessBlockConfiguration(publicAccessBlockConfiguration);
        putPublicAccessBlockRequest.SetAccountId("fakeaccountid");

        auto putPublicAccessBlockOutcome = m_client.PutPublicAccessBlock(putPublicAccessBlockRequest);
        ASSERT_FALSE(putPublicAccessBlockOutcome.IsSuccess());

        // The account id should be a valid DNS label. Otherwise we will not make the request.
        putPublicAccessBlockRequest.SetAccountId("invalid_account_id");

        putPublicAccessBlockOutcome = m_client.PutPublicAccessBlock(putPublicAccessBlockRequest);
        ASSERT_FALSE(putPublicAccessBlockOutcome.IsSuccess());
        ASSERT_EQ(CoreErrors::INVALID_PARAMETER_VALUE, static_cast<CoreErrors>(putPublicAccessBlockOutcome.GetError().GetErrorType()));
    }

    TEST_F(S3ControlTest, TestS3AccessPointEndpoint)
    {
        Aws::String bucketName = BuildResourceName(BASE_BUCKET_NAME);
        Aws::String accessPointName = BuildResourceName(BASE_ACCESS_POINT);

        PrepareAccessPointTest(bucketName, accessPointName);

        S3::Model::HeadBucketRequest headBucketRequest;
        Aws::StringStream ss;
        ss << "arn:aws:s3:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":accesspoint:" << accessPointName;
        Aws::String accessPointArn = ss.str();
        headBucketRequest.SetBucket(accessPointArn);
        auto headBucketOutcome = m_s3Client.HeadBucket(headBucketRequest);
        AWS_ASSERT_SUCCESS(headBucketOutcome);

        GetAccessPointRequest getAccessPointRequest;
        getAccessPointRequest.SetAccountId(m_accountId);
        getAccessPointRequest.SetName(accessPointName);
        auto getAccessPointOutcome = m_client.GetAccessPoint(getAccessPointRequest);
        AWS_ASSERT_SUCCESS(getAccessPointOutcome);
        ASSERT_EQ(accessPointName, getAccessPointOutcome.GetResult().GetName());

        // Invalid service name
        ss.str("");
        ss << "arn:aws:sqs:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":accesspoint:" << accessPointName;
        headBucketRequest.SetBucket(ss.str());
        headBucketOutcome = m_s3Client.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        ASSERT_EQ(CoreErrors::ENDPOINT_RESOLUTION_FAILURE, (CoreErrors) headBucketOutcome.GetError().GetErrorType());

        // Invalid resource type
        ss.str("");
        ss << "arn:aws:s3:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":bucket_name:" << accessPointName;
        headBucketRequest.SetBucket(ss.str());
        headBucketOutcome = m_s3Client.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        ASSERT_EQ(CoreErrors::ENDPOINT_RESOLUTION_FAILURE, (CoreErrors) headBucketOutcome.GetError().GetErrorType());

        // Empty account ID
        ss.str("");
        ss << "arn:aws:s3:" << Aws::Region::US_WEST_2 << ":" << "" << ":accesspoint:" << accessPointName;
        headBucketRequest.SetBucket(ss.str());
        headBucketOutcome = m_s3Client.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        EXPECT_EQ(CoreErrors::ENDPOINT_RESOLUTION_FAILURE, (CoreErrors) headBucketOutcome.GetError().GetErrorType());

        // Invalid account ID
        ss.str("");
        ss << "arn:aws:s3:" << Aws::Region::US_WEST_2 << ":." << m_accountId << ".:accesspoint:" << accessPointName;
        headBucketRequest.SetBucket(ss.str());
        headBucketOutcome = m_s3Client.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        EXPECT_EQ(CoreErrors::ENDPOINT_RESOLUTION_FAILURE, (CoreErrors) headBucketOutcome.GetError().GetErrorType());

        // Missing Access Point name
        ss.str("");
        ss << "arn:aws:s3:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":accesspoint:";
        headBucketRequest.SetBucket(ss.str());
        headBucketOutcome = m_s3Client.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        EXPECT_EQ(CoreErrors::ENDPOINT_RESOLUTION_FAILURE, (CoreErrors) headBucketOutcome.GetError().GetErrorType());

        // Missing Access Point name
        ss.str("");
        ss << "arn:aws:s3:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":accesspoint";
        headBucketRequest.SetBucket(ss.str());
        headBucketOutcome = m_s3Client.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        EXPECT_EQ(CoreErrors::ENDPOINT_RESOLUTION_FAILURE, (CoreErrors) headBucketOutcome.GetError().GetErrorType());

        // Invalid Access Point Name
        ss.str("");
        ss << "arn:aws:s3:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":accesspoint:*";
        headBucketRequest.SetBucket(ss.str());
        headBucketOutcome = m_s3Client.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        EXPECT_EQ(CoreErrors::ENDPOINT_RESOLUTION_FAILURE, (CoreErrors) headBucketOutcome.GetError().GetErrorType());

        // Invalid Access Point Name
        ss.str("");
        ss << "arn:aws:s3:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":accesspoint:my.bucket";
        headBucketRequest.SetBucket(ss.str());
        headBucketOutcome = m_s3Client.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        EXPECT_EQ(CoreErrors::ENDPOINT_RESOLUTION_FAILURE, (CoreErrors) headBucketOutcome.GetError().GetErrorType());

        // Invalid Access Point Name, containing sub resources
        ss.str("");
        ss << "arn:aws:s3:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":accesspoint:my-bucket:object:foo";
        headBucketRequest.SetBucket(ss.str());
        headBucketOutcome = m_s3Client.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        EXPECT_EQ(CoreErrors::ENDPOINT_RESOLUTION_FAILURE, (CoreErrors) headBucketOutcome.GetError().GetErrorType());

        // Using dualstack
        ClientConfiguration config;
        config.region = Aws::Region::US_WEST_2;
        config.useDualStack = true;
        S3::S3Client s3ClientInUsWest2UsingDualStack(config);
        S3ControlClient clientInUsWest2UsingDualStack(config);
        headBucketRequest.SetBucket(accessPointArn);
        headBucketOutcome = s3ClientInUsWest2UsingDualStack.HeadBucket(headBucketRequest);
        AWS_ASSERT_SUCCESS(headBucketOutcome);

        getAccessPointOutcome = clientInUsWest2UsingDualStack.GetAccessPoint(getAccessPointRequest);
        AWS_ASSERT_SUCCESS(getAccessPointOutcome);
        ASSERT_EQ(accessPointName, getAccessPointOutcome.GetResult().GetName());

        config.region = Aws::Region::US_EAST_1;
        config.useDualStack = false;
        S3::S3Client s3ClientInUsEast1(config);
        headBucketOutcome = s3ClientInUsEast1.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        EXPECT_EQ(CoreErrors::ENDPOINT_RESOLUTION_FAILURE, (CoreErrors) headBucketOutcome.GetError().GetErrorType());

        // The following tests are using region in ARN when making requests.
        Aws::Environment::SetEnv("AWS_S3_USE_ARN_REGION", "true", 1);

        config.region = Aws::Region::US_EAST_1;
        S3::S3Client s3ClientInUsEast1usingArnRegion(config);
        headBucketOutcome = s3ClientInUsEast1usingArnRegion.HeadBucket(headBucketRequest);
        AWS_ASSERT_SUCCESS(headBucketOutcome);

        // Using custom endpoint
        config.region = Aws::Region::US_WEST_2;
        config.endpointOverride = "s3-accesspoint.us-west-2.amazonaws.com";
        S3::S3Client s3ClientInUsWest2UsingCustomEndpoint(config);
        headBucketOutcome = s3ClientInUsWest2UsingCustomEndpoint.HeadBucket(headBucketRequest);
        AWS_ASSERT_SUCCESS(headBucketOutcome);

        // Using path style addressing
        config.endpointOverride = "";
        S3::S3Client s3ClientInUsWest2UsingPathStyleAddressing(config, AWSAuthV4Signer::PayloadSigningPolicy::Never /*signPayloads*/, false /*useVirtualAddressing*/);
        headBucketOutcome = s3ClientInUsWest2UsingPathStyleAddressing.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        EXPECT_EQ(CoreErrors::ENDPOINT_RESOLUTION_FAILURE, (CoreErrors) headBucketOutcome.GetError().GetErrorType());

        CleanUpAccessPointTest(bucketName, accessPointName);
    }

    TEST_F(S3ControlTest, TestS3OutpostsOperations)
    {
        Aws::String bucketName = BuildResourceName(BASE_BUCKET_NAME);
        Aws::String outpostId = BuildResourceName(BASE_OUTPOST_ID);
        Aws::String accessPointName = BuildResourceName(BASE_ACCESS_POINT);

        Aws::StringStream ss;
        GetAccessPointRequest getAccessPointRequest;
        getAccessPointRequest.SetAccountId(m_accountId);
        // Invalid service name
        ss.str("");
        ss << "arn:aws:sqs:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":outpost:" << outpostId << ":accesspoint:" << accessPointName;
        getAccessPointRequest.SetName(ss.str());
        auto getAccessPointOutcome = m_client.GetAccessPoint(getAccessPointRequest);
        ASSERT_FALSE(getAccessPointOutcome.IsSuccess());
        EXPECT_EQ(CoreErrors::ENDPOINT_RESOLUTION_FAILURE, (CoreErrors) getAccessPointOutcome.GetError().GetErrorType());

        // Empty region
        ss.str("");
        ss << "arn:aws:s3-outposts:" << "" << ":" << m_accountId << ":outpost:" << outpostId << ":accesspoint:" << accessPointName;
        getAccessPointRequest.SetName(ss.str());
        getAccessPointOutcome = m_client.GetAccessPoint(getAccessPointRequest);
        ASSERT_FALSE(getAccessPointOutcome.IsSuccess());
        EXPECT_EQ(CoreErrors::ENDPOINT_RESOLUTION_FAILURE, (CoreErrors) getAccessPointOutcome.GetError().GetErrorType());

        // Empty account ID
        ss.str("");
        ss << "arn:aws:s3-outposts:" << Aws::Region::US_WEST_2 << ":" << "" << ":outpost:" << outpostId << ":accesspoint:" << accessPointName;
        getAccessPointRequest.SetName(ss.str());
        getAccessPointOutcome = m_client.GetAccessPoint(getAccessPointRequest);
        ASSERT_FALSE(getAccessPointOutcome.IsSuccess());
        EXPECT_EQ(CoreErrors::ENDPOINT_RESOLUTION_FAILURE, (CoreErrors) getAccessPointOutcome.GetError().GetErrorType());

        // Invalid account ID
        ss.str("");
        ss << "arn:aws:s3-outposts:" << Aws::Region::US_WEST_2 << ":." << m_accountId << ":outpost:" << outpostId << ":accesspoint:" << accessPointName;
        getAccessPointRequest.SetName(ss.str());
        getAccessPointOutcome = m_client.GetAccessPoint(getAccessPointRequest);
        ASSERT_FALSE(getAccessPointOutcome.IsSuccess());
        EXPECT_EQ(CoreErrors::ENDPOINT_RESOLUTION_FAILURE, (CoreErrors) getAccessPointOutcome.GetError().GetErrorType());

        // Account ID mismatch
        ss.str("");
        ss << "arn:aws:s3-outposts:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":outpost:" << outpostId << ":accesspoint:" << accessPointName;
        getAccessPointRequest.SetName(ss.str());
        getAccessPointRequest.SetAccountId("123456789012");
        getAccessPointOutcome = m_client.GetAccessPoint(getAccessPointRequest);
        ASSERT_FALSE(getAccessPointOutcome.IsSuccess());
        EXPECT_EQ(CoreErrors::ENDPOINT_RESOLUTION_FAILURE, (CoreErrors) getAccessPointOutcome.GetError().GetErrorType());

        // Missing account ID
        getAccessPointRequest.SetName(accessPointName);
        getAccessPointRequest.SetAccountId("");
        getAccessPointOutcome = m_client.GetAccessPoint(getAccessPointRequest);
        ASSERT_FALSE(getAccessPointOutcome.IsSuccess());
        EXPECT_EQ(S3ControlErrors::INVALID_PARAMETER_VALUE, getAccessPointOutcome.GetError().GetErrorType());
    }

    TEST_F(S3ControlTest, TestS3AccessPointWithPresignedUrls)
    {
        Aws::String bucketName = BuildResourceName(PRESIGNED_URLS_BUCKET_NAME);
        Aws::String accessPoint = BuildResourceName(PRESIGNED_URLS_ACCESS_POINT);

        PrepareAccessPointTest(bucketName, accessPoint);

        Aws::StringStream ss;
        ss << "arn:aws:s3:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":accesspoint:" << accessPoint;
        Aws::String accessPointArn = ss.str();

        Aws::String presignedUrlPut = m_s3Client.GeneratePresignedUrl(accessPointArn, TEST_OBJECT_KEY, HttpMethod::HTTP_PUT);
        std::shared_ptr<HttpRequest> putRequest = CreateHttpRequest(presignedUrlPut, HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        DoPresignedUrlTest(accessPointArn, putRequest);

        ClientConfiguration config;
        config.region = Aws::Region::US_EAST_1;
        S3::S3Client s3ClientInUsEast1(config);
        presignedUrlPut = s3ClientInUsEast1.GeneratePresignedUrl(accessPointArn, TEST_OBJECT_KEY, HttpMethod::HTTP_PUT);
        ASSERT_STREQ("", presignedUrlPut.c_str());

        // The following tests are using region in ARN when making requests.
        Aws::Environment::SetEnv("AWS_S3_USE_ARN_REGION", "true", 1);

        S3::S3Client s3ClientInUsEast1UsingArnRegion(config);
        presignedUrlPut = s3ClientInUsEast1UsingArnRegion.GeneratePresignedUrl(accessPointArn, TEST_OBJECT_KEY, HttpMethod::HTTP_PUT);
        putRequest = CreateHttpRequest(presignedUrlPut, HttpMethod::HTTP_PUT, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        DoPresignedUrlTest(accessPointArn, putRequest);

        CleanUpAccessPointTest(bucketName, accessPoint);
    }

    TEST_F(S3ControlTest, TestMultiRegionAccessPoint)
    {
        Aws::String bucketName = BuildResourceName(BASE_MRAP_BUCKET_NAME);
        Aws::String accessPointName = BuildResourceName(BASE_MRAP) + "integrationtest";

        Aws::Vector<Aws::String> multiRegions;
        multiRegions.push_back(Aws::Region::US_EAST_2);
        multiRegions.push_back(Aws::Region::US_WEST_2);
        PrepareMRAPTest(bucketName, multiRegions, accessPointName);

        GetMultiRegionAccessPointRequest getMRAPRequest;
        getMRAPRequest.SetAccountId(m_accountId);
        getMRAPRequest.SetName(accessPointName);
        auto getMRAPOutcome = m_client.GetMultiRegionAccessPoint(getMRAPRequest);
        AWS_ASSERT_SUCCESS(getMRAPOutcome);
        Aws::Vector<S3Control::Model::RegionReport> returnedRegions = getMRAPOutcome.GetResult().GetAccessPoint().GetRegions();
        ASSERT_EQ(2u, returnedRegions.size());

        Aws::Client::ClientConfiguration config;
        config.region = Aws::Region::US_WEST_2;
        Aws::S3::S3Client s3Client = createS3Client(config);

        Aws::Vector<Aws::String> objectKeys;
        objectKeys.push_back(TEST_OBJECT_KEY);
        objectKeys.push_back(Aws::String(TEST_OBJECT_KEY) + "With!and?\\+/plus:In=Key&Name");
        for (const auto& objectKey : objectKeys)
        {
            S3::Model::PutObjectRequest putObjectRequest;
            Aws::StringStream arn;
            arn << "arn:aws:s3::" << m_accountId << ":accesspoint:" << getMRAPOutcome.GetResult().GetAccessPoint().GetAlias();
            putObjectRequest.SetBucket(arn.str());
            putObjectRequest.SetKey(objectKey);
            std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
            *objectStream << "Test Multi Region Access Point";
            putObjectRequest.SetBody(objectStream);
            auto putObjectOutcome = s3Client.PutObject(putObjectRequest);
            AWS_ASSERT_SUCCESS(putObjectOutcome);

            S3::Model::HeadObjectRequest headObjectRequest;
            headObjectRequest.SetBucket(arn.str());
            headObjectRequest.SetKey(objectKey);
            auto headObjectOutcome = s3Client.HeadObject(headObjectRequest);
            AWS_ASSERT_SUCCESS(headObjectOutcome);

            S3::Model::GetObjectRequest getObjectRequest;
            getObjectRequest.SetBucket(arn.str());
            getObjectRequest.SetKey(objectKey);
            auto getObjectOutcome = s3Client.GetObject(getObjectRequest);
            AWS_ASSERT_SUCCESS(getObjectOutcome);
            Aws::StringStream ss;
            ss << getObjectOutcome.GetResult().GetBody().rdbuf();
            ASSERT_STREQ("Test Multi Region Access Point", ss.str().c_str());
            S3::Model::DeleteObjectRequest deleteObjectRequest;
            deleteObjectRequest.SetBucket(arn.str());
            deleteObjectRequest.SetKey(objectKey);
            auto deleteObjectOutcome = s3Client.DeleteObject(deleteObjectRequest);
            AWS_ASSERT_SUCCESS(deleteObjectOutcome);
        }

        CleanUpMRAPTest(bucketName, multiRegions, accessPointName);
    }
}
