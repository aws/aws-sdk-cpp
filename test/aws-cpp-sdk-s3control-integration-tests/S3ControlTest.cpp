/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */


#include <aws/external/gtest.h>
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
#include <aws/s3control/S3ControlClient.h>
#include <aws/s3control/model/PutPublicAccessBlockRequest.h>
#include <aws/s3control/model/CreateBucketRequest.h>
#include <aws/s3control/model/GetBucketRequest.h>
#include <aws/s3control/model/DeleteBucketRequest.h>
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
    static const char CUSTOM_ENDPOINT_OVERRIDE[] = "beta.example.com";
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
            auto accountId = Aws::Environment::GetEnv("TEST_ACCOUNT_ID");
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
            Aws::String testRoleArn(Aws::Environment::GetEnv("TEST_ASSUME_ROLE_ARN"));
            if (!testRoleArn.empty()) {
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
                return {awsCredentials, configuration};
            }
            return {configuration};
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
            ASSERT_TRUE(createBucketOutcome.IsSuccess());
            ASSERT_TRUE(WaitForBucketToPropagate(bucketName, m_s3Client));

            CreateAccessPointRequest createAccessPointRequest;
            createAccessPointRequest.SetName(accessPointName);
            createAccessPointRequest.SetAccountId(m_accountId);
            createAccessPointRequest.SetBucket(bucketName);
            auto createAccessPointOutcome = m_client.CreateAccessPoint(createAccessPointRequest);
            ASSERT_TRUE(createAccessPointOutcome.IsSuccess());
        }

        void CleanUpAccessPointTest(const Aws::String& bucketName, const Aws::String& accessPointName)
        {
            DeleteAccessPointRequest deleteAccessPointRequest;
            deleteAccessPointRequest.SetName(accessPointName);
            deleteAccessPointRequest.SetAccountId(m_accountId);
            auto deleteAccessPointOutcome = m_client.DeleteAccessPoint(deleteAccessPointRequest);
            ASSERT_TRUE(deleteAccessPointOutcome.IsSuccess());

            S3::Model::DeleteBucketRequest deleteBucketRequest;
            deleteBucketRequest.SetBucket(bucketName);
            auto deleteBucketOutcome = m_s3Client.DeleteBucket(deleteBucketRequest);
            ASSERT_TRUE(deleteBucketOutcome.IsSuccess());

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
                ASSERT_TRUE(createBucketOutcome.IsSuccess());
                ASSERT_TRUE(WaitForBucketToPropagate(regionalBucketName, s3Client));

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
            ASSERT_TRUE(createMRAPOutcome.IsSuccess());


            unsigned timeoutCount = 0;
            while (timeoutCount++ < TIMEOUT_MAX * 2)
            {
                GetMultiRegionAccessPointRequest getMRAPRequest;
                getMRAPRequest.SetAccountId(m_accountId);
                getMRAPRequest.SetName(accessPointName);
                auto getMRAPOutcome = m_client.GetMultiRegionAccessPoint(getMRAPRequest);
                if (getMRAPOutcome.IsSuccess() && getMRAPOutcome.GetResult().GetAccessPoint().GetStatus() == MultiRegionAccessPointStatus::READY)
                {
                    return;
                }
                std::this_thread::sleep_for(std::chrono::seconds(10));
            }
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
            ASSERT_TRUE(deleteMRAPOutcome.IsSuccess());

            unsigned timeoutCount = 0;
            while (timeoutCount++ < TIMEOUT_MAX * 2)
            {
                GetMultiRegionAccessPointRequest getMRAPRequest;
                getMRAPRequest.SetAccountId(m_accountId);
                getMRAPRequest.SetName(accessPointName);
                auto getMRAPOutcome = m_client.GetMultiRegionAccessPoint(getMRAPRequest);
                if (!getMRAPOutcome.IsSuccess())
                {
                    break;
                }
                std::this_thread::sleep_for(std::chrono::seconds(10));
            }

            for (const Aws::String& region : multiRegions)
            {
                Aws::Client::ClientConfiguration config;
                config.region = region;
                Aws::S3::S3Client s3Client = createS3Client(config);

                Aws::String regionalBucket = bucketName + "-" + region;
                S3::Model::DeleteBucketRequest deleteBucketRequest;
                deleteBucketRequest.SetBucket(regionalBucket);
                auto deleteBucketOutcome = s3Client.DeleteBucket(deleteBucketRequest);
                ASSERT_TRUE(deleteBucketOutcome.IsSuccess());
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
        ASSERT_TRUE(headBucketOutcome.IsSuccess());

        GetAccessPointRequest getAccessPointRequest;
        getAccessPointRequest.SetAccountId(m_accountId);
        getAccessPointRequest.SetName(accessPointName);
        auto getAccessPointOutcome = m_client.GetAccessPoint(getAccessPointRequest);
        ASSERT_TRUE(getAccessPointOutcome.IsSuccess());
        ASSERT_EQ(accessPointName, getAccessPointOutcome.GetResult().GetName());

        // Invalid service name
        ss.str("");
        ss << "arn:aws:sqs:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":accesspoint:" << accessPointName;
        headBucketRequest.SetBucket(ss.str());
        headBucketOutcome = m_s3Client.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        ASSERT_EQ(S3::S3Errors::VALIDATION, headBucketOutcome.GetError().GetErrorType());

        // Invalid resource type
        ss.str("");
        ss << "arn:aws:s3:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":bucket_name:" << accessPointName;
        headBucketRequest.SetBucket(ss.str());
        headBucketOutcome = m_s3Client.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        ASSERT_EQ(S3::S3Errors::VALIDATION, headBucketOutcome.GetError().GetErrorType());

        // Empty account ID
        ss.str("");
        ss << "arn:aws:s3:" << Aws::Region::US_WEST_2 << ":" << "" << ":accesspoint:" << accessPointName;
        headBucketRequest.SetBucket(ss.str());
        headBucketOutcome = m_s3Client.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        ASSERT_EQ(S3::S3Errors::VALIDATION, headBucketOutcome.GetError().GetErrorType());

        // Invalid account ID
        ss.str("");
        ss << "arn:aws:s3:" << Aws::Region::US_WEST_2 << ":." << m_accountId << ".:accesspoint:" << accessPointName;
        headBucketRequest.SetBucket(ss.str());
        headBucketOutcome = m_s3Client.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        ASSERT_EQ(S3::S3Errors::VALIDATION, headBucketOutcome.GetError().GetErrorType());

        // Missing Access Point name
        ss.str("");
        ss << "arn:aws:s3:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":accesspoint:";
        headBucketRequest.SetBucket(ss.str());
        headBucketOutcome = m_s3Client.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        ASSERT_EQ(S3::S3Errors::VALIDATION, headBucketOutcome.GetError().GetErrorType());

        // Missing Access Point name
        ss.str("");
        ss << "arn:aws:s3:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":accesspoint";
        headBucketRequest.SetBucket(ss.str());
        headBucketOutcome = m_s3Client.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        ASSERT_EQ(S3::S3Errors::VALIDATION, headBucketOutcome.GetError().GetErrorType());

        // Invalid Access Point Name
        ss.str("");
        ss << "arn:aws:s3:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":accesspoint:*";
        headBucketRequest.SetBucket(ss.str());
        headBucketOutcome = m_s3Client.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        ASSERT_EQ(S3::S3Errors::VALIDATION, headBucketOutcome.GetError().GetErrorType());

        // Invalid Access Point Name
        ss.str("");
        ss << "arn:aws:s3:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":accesspoint:my.bucket";
        headBucketRequest.SetBucket(ss.str());
        headBucketOutcome = m_s3Client.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        ASSERT_EQ(S3::S3Errors::VALIDATION, headBucketOutcome.GetError().GetErrorType());

        // Invalid Access Point Name, containing sub resources
        ss.str("");
        ss << "arn:aws:s3:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":accesspoint:my-bucket:object:foo";
        headBucketRequest.SetBucket(ss.str());
        headBucketOutcome = m_s3Client.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        ASSERT_EQ(S3::S3Errors::VALIDATION, headBucketOutcome.GetError().GetErrorType());

        // Using dualstack
        ClientConfiguration config;
        config.region = Aws::Region::US_WEST_2;
        config.useDualStack = true;
        S3::S3Client s3ClientInUsWest2UsingDualStack(config);
        S3ControlClient clientInUsWest2UsingDualStack(config);
        headBucketRequest.SetBucket(accessPointArn);
        headBucketOutcome = s3ClientInUsWest2UsingDualStack.HeadBucket(headBucketRequest);
        ASSERT_TRUE(headBucketOutcome.IsSuccess());

        getAccessPointOutcome = clientInUsWest2UsingDualStack.GetAccessPoint(getAccessPointRequest);
        ASSERT_TRUE(getAccessPointOutcome.IsSuccess());
        ASSERT_EQ(accessPointName, getAccessPointOutcome.GetResult().GetName());

        config.region = Aws::Region::US_EAST_1;
        config.useDualStack = false;
        S3::S3Client s3ClientInUsEast1(config);
        headBucketOutcome = s3ClientInUsEast1.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        ASSERT_EQ(S3::S3Errors::VALIDATION, headBucketOutcome.GetError().GetErrorType());

        // The following tests are using region in ARN when making requests.
        Aws::Environment::SetEnv("AWS_S3_USE_ARN_REGION", "true", 1);

        config.region = Aws::Region::US_EAST_1;
        S3::S3Client s3ClientInUsEast1usingArnRegion(config);
        headBucketOutcome = s3ClientInUsEast1usingArnRegion.HeadBucket(headBucketRequest);
        ASSERT_TRUE(headBucketOutcome.IsSuccess());

        // Using custom endpoint
        config.region = Aws::Region::US_WEST_2;
        config.endpointOverride = "s3-accesspoint.us-west-2.amazonaws.com";
        S3::S3Client s3ClientInUsWest2UsingCustomEndpoint(config);
        headBucketOutcome = s3ClientInUsWest2UsingCustomEndpoint.HeadBucket(headBucketRequest);
        ASSERT_TRUE(headBucketOutcome.IsSuccess());

        // Using path style addressing
        config.endpointOverride = "";
        S3::S3Client s3ClientInUsWest2UsingPathStyleAddressing(config, AWSAuthV4Signer::PayloadSigningPolicy::Never /*signPayloads*/, false /*useVirtualAddressing*/);
        headBucketOutcome = s3ClientInUsWest2UsingPathStyleAddressing.HeadBucket(headBucketRequest);
        ASSERT_FALSE(headBucketOutcome.IsSuccess());
        ASSERT_EQ(S3::S3Errors::VALIDATION, headBucketOutcome.GetError().GetErrorType());

        CleanUpAccessPointTest(bucketName, accessPointName);
    }

    TEST_F(S3ControlTest, TestS3OutpostsOperations)
    {
        Aws::String bucketName = BuildResourceName(BASE_BUCKET_NAME);
        Aws::String outpostId = BuildResourceName(BASE_OUTPOST_ID);
        Aws::String accessPointName = BuildResourceName(BASE_ACCESS_POINT);

        Aws::StringStream ss;
        ss << "arn:aws:s3-outposts:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":outpost:" << outpostId << ":bucket:" << bucketName;
        Aws::String outpostBucketArn = ss.str();
        ss.str("");
        ss << "arn:aws:s3-outposts:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":outpost:" << outpostId << ":accesspoint:" << accessPointName;
        Aws::String outpostAccessPointArn = ss.str();

        ListAccessPointsRequest listAccessPointsRequest;
        listAccessPointsRequest.SetBucket(outpostBucketArn);
        ASSERT_LT(0u, listAccessPointsRequest.GetRequestSpecificHeaders().count("x-amz-account-id"));
        ASSERT_LT(0u, listAccessPointsRequest.GetRequestSpecificHeaders().count("x-amz-outpost-id"));

        GetAccessPointRequest getAccessPointRequest;
        getAccessPointRequest.SetName(outpostAccessPointArn);
        ASSERT_LT(0u, getAccessPointRequest.GetRequestSpecificHeaders().count("x-amz-account-id"));
        ASSERT_LT(0u, getAccessPointRequest.GetRequestSpecificHeaders().count("x-amz-outpost-id"));

        // Invalid service name
        ss.str("");
        ss << "arn:aws:sqs:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":outpost:" << outpostId << ":accesspoint:" << accessPointName;
        getAccessPointRequest.SetName(ss.str());
        auto getAccessPointOutcome = m_client.GetAccessPoint(getAccessPointRequest);
        ASSERT_FALSE(getAccessPointOutcome.IsSuccess());
        ASSERT_EQ(S3ControlErrors::VALIDATION, getAccessPointOutcome.GetError().GetErrorType());

        // Invalid resource type
        ss.str("");
        ss << "arn:aws:s3-outposts:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":outpost-id:" << outpostId << ":accesspoint:" << accessPointName;
        getAccessPointRequest.SetName(ss.str());
        getAccessPointOutcome = m_client.GetAccessPoint(getAccessPointRequest);
        ASSERT_FALSE(getAccessPointOutcome.IsSuccess());
        ASSERT_EQ(S3ControlErrors::VALIDATION, getAccessPointOutcome.GetError().GetErrorType());

        // Empty region
        ss.str("");
        ss << "arn:aws:s3-outposts:" << "" << ":" << m_accountId << ":outpost:" << outpostId << ":accesspoint:" << accessPointName;
        getAccessPointRequest.SetName(ss.str());
        getAccessPointOutcome = m_client.GetAccessPoint(getAccessPointRequest);
        ASSERT_FALSE(getAccessPointOutcome.IsSuccess());
        ASSERT_EQ(S3ControlErrors::VALIDATION, getAccessPointOutcome.GetError().GetErrorType());

        // Empty account ID
        ss.str("");
        ss << "arn:aws:s3-outposts:" << Aws::Region::US_WEST_2 << ":" << "" << ":outpost:" << outpostId << ":accesspoint:" << accessPointName;
        getAccessPointRequest.SetName(ss.str());
        getAccessPointOutcome = m_client.GetAccessPoint(getAccessPointRequest);
        ASSERT_FALSE(getAccessPointOutcome.IsSuccess());
        ASSERT_EQ(S3ControlErrors::VALIDATION, getAccessPointOutcome.GetError().GetErrorType());

        // Invalid account ID
        ss.str("");
        ss << "arn:aws:s3-outposts:" << Aws::Region::US_WEST_2 << ":." << m_accountId << ":outpost:" << outpostId << ":accesspoint:" << accessPointName;
        getAccessPointRequest.SetName(ss.str());
        getAccessPointOutcome = m_client.GetAccessPoint(getAccessPointRequest);
        ASSERT_FALSE(getAccessPointOutcome.IsSuccess());
        ASSERT_EQ(S3ControlErrors::VALIDATION, getAccessPointOutcome.GetError().GetErrorType());

        // Account ID mismatch
        ss.str("");
        ss << "arn:aws:s3-outposts:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":outpost:" << outpostId << ":accesspoint:" << accessPointName;
        getAccessPointRequest.SetName(ss.str());
        getAccessPointRequest.SetAccountId("123456789012");
        getAccessPointOutcome = m_client.GetAccessPoint(getAccessPointRequest);
        ASSERT_FALSE(getAccessPointOutcome.IsSuccess());
        ASSERT_EQ(S3ControlErrors::VALIDATION, getAccessPointOutcome.GetError().GetErrorType());

        // Missing account ID
        getAccessPointRequest.SetName(accessPointName);
        getAccessPointRequest.SetAccountId("");
        getAccessPointOutcome = m_client.GetAccessPoint(getAccessPointRequest);
        ASSERT_FALSE(getAccessPointOutcome.IsSuccess());
        ASSERT_EQ(S3ControlErrors::MISSING_PARAMETER, getAccessPointOutcome.GetError().GetErrorType());

        // Missing outpost ID
        ss.str("");
        ss << "arn:aws:s3-outposts:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":outpost:" << "" << ":accesspoint:" << accessPointName;
        getAccessPointRequest.SetName(ss.str());
        getAccessPointOutcome = m_client.GetAccessPoint(getAccessPointRequest);
        ASSERT_FALSE(getAccessPointOutcome.IsSuccess());
        ASSERT_EQ(S3ControlErrors::VALIDATION, getAccessPointOutcome.GetError().GetErrorType());

        // Invalid outpost ID
        ss.str("");
        ss << "arn:aws:s3-outposts:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":outpost:" << "*" << ":accesspoint:" << m_accountId;
        getAccessPointRequest.SetName(ss.str());
        getAccessPointOutcome = m_client.GetAccessPoint(getAccessPointRequest);
        ASSERT_FALSE(getAccessPointOutcome.IsSuccess());
        ASSERT_EQ(S3ControlErrors::VALIDATION, getAccessPointOutcome.GetError().GetErrorType());

        // Missing Access Point
        ss.str("");
        ss << "arn:aws:s3-outposts:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":outpost:" << outpostId << ":accesspoint:" << "";
        getAccessPointRequest.SetName(ss.str());
        getAccessPointOutcome = m_client.GetAccessPoint(getAccessPointRequest);
        ASSERT_FALSE(getAccessPointOutcome.IsSuccess());
        ASSERT_EQ(S3ControlErrors::VALIDATION, getAccessPointOutcome.GetError().GetErrorType());

        // Missing Access Point
        ss.str("");
        ss << "arn:aws:s3-outposts:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":outpost:" << outpostId;
        getAccessPointRequest.SetName(ss.str());
        getAccessPointOutcome = m_client.GetAccessPoint(getAccessPointRequest);
        ASSERT_FALSE(getAccessPointOutcome.IsSuccess());
        ASSERT_EQ(S3ControlErrors::VALIDATION, getAccessPointOutcome.GetError().GetErrorType());

        // Invalid Access Point
        ss.str("");
        ss << "arn:aws:s3-outposts:" << Aws::Region::US_WEST_2 << ":" << m_accountId << ":outpost:" << outpostId << ":accesspoint:" << "*";
        getAccessPointRequest.SetName(ss.str());
        getAccessPointOutcome = m_client.GetAccessPoint(getAccessPointRequest);
        ASSERT_FALSE(getAccessPointOutcome.IsSuccess());
        ASSERT_EQ(S3ControlErrors::VALIDATION, getAccessPointOutcome.GetError().GetErrorType());

        // Dualstack is not campitable with Outpost ARN
        ClientConfiguration config;
        config.region = Aws::Region::US_WEST_2;
        config.useDualStack = true;
        S3ControlClient clientInUsWest2UsingDualStack(config);
        getAccessPointRequest.SetName(outpostAccessPointArn);
        getAccessPointOutcome = clientInUsWest2UsingDualStack.GetAccessPoint(getAccessPointRequest);
        ASSERT_FALSE(getAccessPointOutcome.IsSuccess());
        ASSERT_EQ(S3ControlErrors::VALIDATION, getAccessPointOutcome.GetError().GetErrorType());

        // Custom endpoint is not campitable with Outpost ARN
        config.region = Aws::Region::US_WEST_2;
        config.endpointOverride = "s3.amazonaws.com";
        S3ControlClient clientInUsWest2UsingCustomEndpoint(config);
        getAccessPointOutcome = clientInUsWest2UsingCustomEndpoint.GetAccessPoint(getAccessPointRequest);
        ASSERT_FALSE(getAccessPointOutcome.IsSuccess());
        ASSERT_EQ(S3ControlErrors::VALIDATION, getAccessPointOutcome.GetError().GetErrorType());

        // Cross region Outpost ARN
        config.region = Aws::Region::US_EAST_1;
        config.useDualStack = false;
        config.endpointOverride = "";
        S3ControlClient clientInUsEast1(config);
        getAccessPointOutcome = clientInUsEast1.GetAccessPoint(getAccessPointRequest);
        ASSERT_FALSE(getAccessPointOutcome.IsSuccess());
        ASSERT_EQ(S3ControlErrors::VALIDATION, getAccessPointOutcome.GetError().GetErrorType());
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
        Aws::String accessPointName = BuildResourceName(BASE_MRAP);

        Aws::Vector<Aws::String> multiRegions;
        multiRegions.push_back(Aws::Region::US_EAST_2);
        multiRegions.push_back(Aws::Region::US_WEST_2);
        PrepareMRAPTest(bucketName, multiRegions, accessPointName);

        GetMultiRegionAccessPointRequest getMRAPRequest;
        getMRAPRequest.SetAccountId(m_accountId);
        getMRAPRequest.SetName(accessPointName);
        auto getMRAPOutcome = m_client.GetMultiRegionAccessPoint(getMRAPRequest);
        ASSERT_TRUE(getMRAPOutcome.IsSuccess());
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
            ASSERT_TRUE(putObjectOutcome.IsSuccess());

            S3::Model::HeadObjectRequest headObjectRequest;
            headObjectRequest.SetBucket(arn.str());
            headObjectRequest.SetKey(objectKey);
            auto headObjectOutcome = s3Client.HeadObject(headObjectRequest);
            ASSERT_TRUE(headObjectOutcome.IsSuccess());

            S3::Model::GetObjectRequest getObjectRequest;
            getObjectRequest.SetBucket(arn.str());
            getObjectRequest.SetKey(objectKey);
            auto getObjectOutcome = s3Client.GetObject(getObjectRequest);
            ASSERT_TRUE(getObjectOutcome.IsSuccess());
            Aws::StringStream ss;
            ss << getObjectOutcome.GetResult().GetBody().rdbuf();
            ASSERT_STREQ("Test Multi Region Access Point", ss.str().c_str());
            S3::Model::DeleteObjectRequest deleteObjectRequest;
            deleteObjectRequest.SetBucket(arn.str());
            deleteObjectRequest.SetKey(objectKey);
            auto deleteObjectOutcome = s3Client.DeleteObject(deleteObjectRequest);
            ASSERT_TRUE(deleteObjectOutcome.IsSuccess());
        }

        CleanUpMRAPTest(bucketName, multiRegions, accessPointName);
    }

    TEST_F(S3ControlTest, TestCustomEndpointOverride)
    {
        // Outpost Access Point ARN without dualstack
        ASSERT_STREQ("beta.example.com",
            S3ControlEndpoint::ForOutpostsArn(S3ControlARN("arn:aws:s3-outposts:us-west-2:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
                "", false, "beta.example.com").c_str());
        // Outpost Bucket ARN without dualstack
        ASSERT_STREQ("beta.example.com",
            S3ControlEndpoint::ForOutpostsArn(S3ControlARN("arn:aws:s3-outposts:us-west-2:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
                "", false, "beta.example.com").c_str());

        Aws::String bucketName = BuildResourceName(BASE_BUCKET_NAME);
        Aws::String outpostId = BuildResourceName(BASE_OUTPOST_ID);
        Aws::String accessPointName = BuildResourceName(BASE_ACCESS_POINT);
        Aws::StringStream ss;

        ClientConfiguration config;
        config.region = Aws::Region::US_WEST_2;
        config.endpointOverride = CUSTOM_ENDPOINT_OVERRIDE;
        config.retryStrategy = Aws::MakeShared<Aws::Client::DefaultRetryStrategy>(ALLOCATION_TAG, 0 /* don't retry */, 25);
        S3ControlClient s3ControlClient(config);
        config.useDualStack = true;
        S3ControlClient s3ControlClientWithDualStack(config);

        // Traditional Access Point name
        GetAccessPointRequest getAccessPointRequest;
        getAccessPointRequest.SetAccountId(m_accountId);
        getAccessPointRequest.SetName(accessPointName);
        auto getAccessPointOutcome = s3ControlClient.GetAccessPoint(getAccessPointRequest);
        ASSERT_FALSE(getAccessPointOutcome.IsSuccess());
        ASSERT_EQ(HttpResponseCode::REQUEST_NOT_MADE, getAccessPointOutcome.GetError().GetResponseCode());
        ss << "https://" << m_accountId << "." << CUSTOM_ENDPOINT_OVERRIDE << "/v20180820/accesspoint/" << accessPointName;
        ASSERT_STREQ(ss.str().c_str(), TestingMonitoringMetrics::s_lastUriString.c_str());
        ASSERT_STREQ("s3", TestingMonitoringMetrics::s_lastSigningServiceName.c_str());

        getAccessPointOutcome = s3ControlClientWithDualStack.GetAccessPoint(getAccessPointRequest);
        ASSERT_FALSE(getAccessPointOutcome.IsSuccess());
        ASSERT_EQ(HttpResponseCode::REQUEST_NOT_MADE, getAccessPointOutcome.GetError().GetResponseCode());
        ASSERT_EQ(S3ControlErrors::VALIDATION, getAccessPointOutcome.GetError().GetErrorType());

        // Outposts Access Point Arn
        getAccessPointRequest.SetAccountId("");
        getAccessPointRequest.SetName("arn:aws:s3-outposts:us-west-2:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint");
        getAccessPointOutcome = s3ControlClient.GetAccessPoint(getAccessPointRequest);
        ASSERT_FALSE(getAccessPointOutcome.IsSuccess());
        ASSERT_EQ(HttpResponseCode::REQUEST_NOT_MADE, getAccessPointOutcome.GetError().GetResponseCode());
        ss.str("");
        ss << "https://" << CUSTOM_ENDPOINT_OVERRIDE << "/v20180820/accesspoint/myaccesspoint";
        ASSERT_STREQ(ss.str().c_str(), TestingMonitoringMetrics::s_lastUriString.c_str());
        ASSERT_STREQ("s3-outposts", TestingMonitoringMetrics::s_lastSigningServiceName.c_str());

        getAccessPointOutcome = s3ControlClientWithDualStack.GetAccessPoint(getAccessPointRequest);
        ASSERT_FALSE(getAccessPointOutcome.IsSuccess());
        ASSERT_EQ(HttpResponseCode::REQUEST_NOT_MADE, getAccessPointOutcome.GetError().GetResponseCode());
        ASSERT_EQ(S3ControlErrors::VALIDATION, getAccessPointOutcome.GetError().GetErrorType());

        // Traditional bucket name with Outposts
        CreateBucketRequest createBucketRequest;
        createBucketRequest.SetBucket(bucketName);
        createBucketRequest.SetOutpostId(outpostId);
        auto createBucketOutcome = s3ControlClient.CreateBucket(createBucketRequest);
        ASSERT_FALSE(createBucketOutcome.IsSuccess());
        ASSERT_EQ(HttpResponseCode::REQUEST_NOT_MADE, createBucketOutcome.GetError().GetResponseCode());
        ss.str("");
        ss << "https://" << CUSTOM_ENDPOINT_OVERRIDE << "/v20180820/bucket/" << bucketName;
        ASSERT_STREQ(ss.str().c_str(), TestingMonitoringMetrics::s_lastUriString.c_str());
        ASSERT_STREQ("s3-outposts", TestingMonitoringMetrics::s_lastSigningServiceName.c_str());

        createBucketOutcome = s3ControlClientWithDualStack.CreateBucket(createBucketRequest);
        ASSERT_FALSE(createBucketOutcome.IsSuccess());
        ASSERT_EQ(HttpResponseCode::REQUEST_NOT_MADE, createBucketOutcome.GetError().GetResponseCode());
        ASSERT_EQ(S3ControlErrors::VALIDATION, createBucketOutcome.GetError().GetErrorType());

        // Outposts Bucket Arn
        GetBucketRequest getBucketRequest;
        getBucketRequest.SetBucket("arn:aws:s3-outposts:us-west-2:123456789012:outpost:op-01234567890123456:bucket:mybucket");
        auto getBucketOutcome = s3ControlClient.GetBucket(getBucketRequest);
        ASSERT_FALSE(getBucketOutcome.IsSuccess());
        ASSERT_EQ(HttpResponseCode::REQUEST_NOT_MADE, getBucketOutcome.GetError().GetResponseCode());
        ss.str("");
        ss << "https://" << CUSTOM_ENDPOINT_OVERRIDE << "/v20180820/bucket/mybucket";
        ASSERT_STREQ(ss.str().c_str(), TestingMonitoringMetrics::s_lastUriString.c_str());
        ASSERT_STREQ("s3-outposts", TestingMonitoringMetrics::s_lastSigningServiceName.c_str());

        getBucketOutcome = s3ControlClientWithDualStack.GetBucket(getBucketRequest);
        ASSERT_FALSE(getBucketOutcome.IsSuccess());
        ASSERT_EQ(HttpResponseCode::REQUEST_NOT_MADE, getBucketOutcome.GetError().GetResponseCode());
        ASSERT_EQ(S3ControlErrors::VALIDATION, getBucketOutcome.GetError().GetErrorType());
    }

    TEST_F(S3ControlTest, TestS3ControlARNValidation)
    {
        // 1. The followings are examples for valid S3 ARN:
        // 1.1 S3 Outposts ARN:
        // 1.1.1 S3 Outposts ARN with Access Point:
        ASSERT_TRUE(S3ControlARN("arn:aws:s3-outposts:us-east-1:123456789012:outpost:op-01234567890123456:accesspoint:my-accesspoint").Validate().IsSuccess());
        ASSERT_TRUE(S3ControlARN("arn:aws:s3-outposts:us-west-2:123456789012:outpost/op-01234567890123456/accesspoint/my-accesspoint").Validate().IsSuccess());

        // 1.1.2 S3 Outposts ARN with Bucket:
        ASSERT_TRUE(S3ControlARN("arn:aws:s3-outposts:us-east-1:123456789012:outpost:op-01234567890123456:bucket:my-bucket").Validate().IsSuccess());
        ASSERT_TRUE(S3ControlARN("arn:aws:s3-outposts:us-west-2:123456789012:outpost/op-01234567890123456/bucket/my-bucket").Validate().IsSuccess());

        // 2. The followings are examples for invalid S3 Control ARN:
        // 2.1 Common errors for all types of ARNs:
        // 2.1.1 S3ControlARN partition
        // Invalid partition: cn-aws
        ASSERT_FALSE(S3ControlARN("arn:cn-aws:s3:us-east-1:123456789012:outpost:op-01234567890123456:accesspoint:my-accesspoint").Validate().IsSuccess());
        // Empty partition name
        ASSERT_FALSE(S3ControlARN("arn::s3:us-east-1:123456789012:outpost:op-01234567890123456:accesspoint:my-accesspoint").Validate().IsSuccess());

        // 2.1.2 S3ControlARN service
        // Invalid service: s3-control
        ASSERT_FALSE(S3ControlARN("arn:aws:s3-control:us-east-1:123456789012:outpost:op-01234567890123456:accesspoint:my-accesspoint").Validate().IsSuccess());
        // Empty service name
        ASSERT_FALSE(S3ControlARN("arn:aws::us-east-1:123456789012:outpost:op-01234567890123456:accesspoint:my-accesspoint").Validate().IsSuccess());
        // Invalid service name with upper case
        ASSERT_FALSE(S3ControlARN("arn:aws:S3:us-east-1:123456789012:outpost:op-01234567890123456:accesspoint:my-accesspoint").Validate().IsSuccess());

        // 2.1.3 S3ControlARN region
        // Cross region ARN when useArnRegion = false
        ASSERT_FALSE(S3ControlARN("arn:aws:s3:us-west-1:123456789012:outpost:op-01234567890123456:accesspoint:my-accesspoint").Validate("us-east-1").IsSuccess());
        // Empty region name
        ASSERT_FALSE(S3ControlARN("arn:aws:s3::123456789012:outpost:op-01234567890123456:accesspoint:my-accesspoint").Validate().IsSuccess());

        // S3ControlARN account id
        // Invalid account ID with non RFC 3986 Host label
        ASSERT_FALSE(S3ControlARN("arn:aws:s3:us-east-1:12345.678912:outpost:op-01234567890123456:accesspoint:my-accesspoint").Validate().IsSuccess());
        // Empty account ID
        ASSERT_FALSE(S3ControlARN("arn:aws:s3:us-east-1::outpost:op-01234567890123456:accesspoint:my-accesspoint").Validate().IsSuccess());

        // 2.1.4 S3ControlARN resource type
        // Invalid resource type: accesspoint, bucket
        ASSERT_FALSE(S3ControlARN("arn:aws:s3:us-east-1:123456789012:accesspoint:my-accesspoint").Validate().IsSuccess());
        ASSERT_FALSE(S3ControlARN("arn:aws:s3:us-west-2:123456789012:bucket:my-bucket").Validate().IsSuccess());

        // 2.2 S3 Outposts ARN:
        // Fips regions are not supported.
        ASSERT_FALSE(S3ControlARN("arn:aws:s3:fips-us-gov-west-1:123456789012:outpost:op-01234567890123456:accesspoint:my-accesspoint").Validate().IsSuccess());
        ASSERT_FALSE(S3ControlARN("arn:aws:s3:us-east-1:123456789012:outpost:op-01234567890123456:bucket:my-bucket").Validate("us-east-1-fips").IsSuccess());
        // Empty resource ID
        ASSERT_FALSE(S3ControlARN("arn:aws:s3:us-east-1:123456789012:outpost").Validate().IsSuccess());
        ASSERT_FALSE(S3ControlARN("arn:aws:s3:us-east-1:123456789012:outpost:").Validate().IsSuccess());
        // Empty sub resource
        ASSERT_FALSE(S3ControlARN("arn:aws:s3:us-east-1:123456789012:outpost:op-01234567890123456").Validate().IsSuccess());
        ASSERT_FALSE(S3ControlARN("arn:aws:s3:us-east-1:123456789012:outpost:op-01234567890123456:accesspoint").Validate().IsSuccess());
        ASSERT_FALSE(S3ControlARN("arn:aws:s3:us-east-1:123456789012:outpost:op-01234567890123456:bucket").Validate().IsSuccess());
        // Invalid sub resource
        ASSERT_FALSE(S3ControlARN("arn:aws:s3:us-east-1:123456789012:outpost:accesspoint").Validate().IsSuccess());
        ASSERT_FALSE(S3ControlARN("arn:aws:s3:us-east-1:123456789012:outpost:bucket").Validate().IsSuccess());
        ASSERT_FALSE(S3ControlARN("arn:aws:s3:us-east-1:123456789012:outpost:op-01234567890123456").Validate().IsSuccess());
        ASSERT_FALSE(S3ControlARN("arn:aws:s3:us-east-1:123456789012:outpost:op-01234567890123456:accesspoint").Validate().IsSuccess());
        ASSERT_FALSE(S3ControlARN("arn:aws:s3:us-east-1:123456789012:outpost:op-01234567890123456:bucket").Validate().IsSuccess());
        ASSERT_FALSE(S3ControlARN("arn:aws:s3:us-east-1:123456789012:outpost:op-01234567890123456:object:my-object").Validate().IsSuccess());
        ASSERT_FALSE(S3ControlARN("arn:aws:s3:us-east-1:123456789012:outpost:op-01234567890123456::my-object").Validate().IsSuccess());
    }

    TEST_F(S3ControlTest, TestS3ControlEndpointForOutpostsARN)
    {
        // With Access Point
        ASSERT_STREQ("s3-outposts.us-west-2.amazonaws.com",
            S3ControlEndpoint::ForOutpostsArn(S3ControlARN("arn:aws:s3-outposts:us-west-2:123456789012:outpost:op-01234567890123456:accesspoint:my-accesspoint"), "us-west-2").c_str());
        ASSERT_STREQ("s3-outposts.us-east-1.amazonaws.com",
            S3ControlEndpoint::ForOutpostsArn(S3ControlARN("arn:aws:s3-outposts:us-east-1:123456789012:outpost:op-01234567890123456:accesspoint:my-accesspoint"), "").c_str());
        ASSERT_STREQ("s3-outposts.us-gov-east-1.amazonaws.com",
            S3ControlEndpoint::ForOutpostsArn(S3ControlARN("arn:aws-us-gov:s3-outposts:us-gov-east-1:123456789012:outpost:op-01234567890123456:accesspoint:my-accesspoint"), "").c_str());

        // With Bucket
        ASSERT_STREQ("s3-outposts.us-west-2.amazonaws.com",
            S3ControlEndpoint::ForOutpostsArn(S3ControlARN("arn:aws:s3-outposts:us-west-2:123456789012:outpost:op-01234567890123456:bucket:my-bucket"), "us-west-2").c_str());
        ASSERT_STREQ("s3-outposts.us-east-1.amazonaws.com",
            S3ControlEndpoint::ForOutpostsArn(S3ControlARN("arn:aws:s3-outposts:us-east-1:123456789012:outpost:op-01234567890123456:bucket:my-bucket"), "").c_str());
        ASSERT_STREQ("s3-outposts.us-gov-east-1.amazonaws.com",
            S3ControlEndpoint::ForOutpostsArn(S3ControlARN("arn:aws-us-gov:s3-outposts:us-gov-east-1:123456789012:outpost:op-01234567890123456:bucket:my-bucket"), "").c_str());
    }
}
