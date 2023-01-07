/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/ProxyConfig.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/Outcome.h>
#include <aws/cloudfront/CloudFrontClient.h>
#include <aws/cloudfront/model/CreateDistribution2015_04_17Request.h>
#include <aws/cloudfront/model/Origin.h>
#include <aws/cloudfront/model/Origins.h>
#include <aws/cloudfront/model/DeleteDistribution2015_04_17Request.h>
#include <aws/cloudfront/model/GetDistributionConfig2015_04_17Request.h>
#include <aws/cloudfront/model/UpdateDistribution2015_04_17Request.h>
#include <aws/cloudfront/model/GetDistribution2015_04_17Request.h>
#include <aws/cloudfront/model/GetDistributionConfig2015_04_17Result.h>
#include <aws/cloudfront/model/UpdateDistribution2015_04_17Result.h>
#include <aws/cloudfront/model/GetDistribution2015_04_17Result.h>


using namespace Aws::CloudFront::Model;
using namespace Aws::CloudFront;
using namespace Aws::Client;
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace Aws;

#define TEST_PREFIX "IntegrationTest_"

//we need a way to pull this at runtime.
static const char* ACCOUNT_ID = "554229317296";
static const char* ALLOCATION_TAG = "CloudfrontTest";
static const char* DEFAULT_ROOT_OBJECT = "index.html";
static const char* DOMAIN_NAME = "www.amazon.com";
static const char* TEST_CREATE_AND_DELETE_DISTRIBUTION_ORIGIN_ID = TEST_PREFIX "TestCreateAndDeleteDistribution";

namespace
{

    class CloudfrontOperationTest : public ::testing::Test
    {

    public:
        std::shared_ptr<CloudFrontClient> cloudFrontClient;
        String m_accountId;

    protected:
        virtual void SetUp() override
        {
            m_accountId = ProfileConfigFileAWSCredentialsProvider::GetAccountIdForProfile("default");
            if (m_accountId.size() == 0)
            {
                m_accountId = ACCOUNT_ID;
            }

            ClientConfiguration config;
            config.scheme = Scheme::HTTPS;
            //config.httpLibOverride = Http::TransferLibType::WIN_INET_CLIENT;

#if USE_PROXY_FOR_TESTS
            config.scheme = Scheme::HTTP;
            config.proxyHost = PROXY_HOST;
            config.proxyPort = PROXY_PORT;
#endif
            cloudFrontClient = Aws::MakeShared<CloudFrontClient>(ALLOCATION_TAG, config);

        }

        virtual void TearDown() override
        {
            cloudFrontClient = nullptr;
        }

        void WaitForDistributionDeployment(const Aws::String& distributionId)
        {
            GetDistribution2015_04_17Request getDistributionRequest;
            getDistributionRequest.SetId(distributionId);

            auto getDistributionOutcome = cloudFrontClient->GetDistribution2015_04_17(getDistributionRequest);
            while (!(getDistributionOutcome.GetResult().GetDistribution().GetStatus().compare("Deployed") == 0))
            {
                std::this_thread::sleep_for(std::chrono::seconds(20));
                getDistributionOutcome = cloudFrontClient->GetDistribution2015_04_17(getDistributionRequest);
            }
        }
    };
} // anonymous namespace

TEST_F(CloudfrontOperationTest, TestCreateAndDeleteDistribution)
{

    CustomOriginConfig customOriginConfig;
    customOriginConfig
        .WithOriginProtocolPolicy(OriginProtocolPolicy::http_only)
        .WithHTTPPort(8082)
        .WithHTTPSPort(8082);

    Origin origin;
    origin
        .WithCustomOriginConfig(customOriginConfig)
        .WithDomainName(DOMAIN_NAME)
        .WithId(TEST_CREATE_AND_DELETE_DISTRIBUTION_ORIGIN_ID)
        .WithOriginPath("");

    Origins origins;
    origins
        .WithQuantity(1)
        .AddItems(origin);

    CookiePreference cookiePreference;
    cookiePreference
        .WithForward(ItemSelection::all);

    Headers headers;
    headers
        .WithQuantity(1)
        .AddItems("*");

    ForwardedValues forwardedValues;
    forwardedValues
        .WithQueryString(true)
        .WithCookies(cookiePreference)
        .WithHeaders(headers);

    TrustedSigners trustedSigners;
    trustedSigners
        .WithQuantity(0)
        .WithEnabled(false);

    CachedMethods cachedMethods;
    cachedMethods
        .WithQuantity(2)
        .AddItems(Method::GET_)
        .AddItems(Method::HEAD);

    AllowedMethods allowedMethods;
    allowedMethods
        .WithQuantity(2)
        .AddItems(Method::GET_)
        .AddItems(Method::HEAD)
        .WithCachedMethods(cachedMethods);


    DefaultCacheBehavior defaultCacheBehavior;
    defaultCacheBehavior
        .WithTargetOriginId(TEST_CREATE_AND_DELETE_DISTRIBUTION_ORIGIN_ID)
        .WithForwardedValues(forwardedValues)
        .WithTrustedSigners(trustedSigners)
        .WithViewerProtocolPolicy(ViewerProtocolPolicy::allow_all)
        .WithAllowedMethods(allowedMethods)
        .WithSmoothStreaming(true)
        .WithDefaultTTL(100)
        .WithMaxTTL(150)
        .WithMinTTL(0);

    CacheBehaviors cacheBehaviors;
    cacheBehaviors
        .WithQuantity(0);

    CustomErrorResponses customErrorResponses;
    customErrorResponses
        .WithQuantity(0);

    GeoRestriction geoRestriction;
    geoRestriction
        .WithRestrictionType(GeoRestrictionType::none)
        .WithQuantity(0);

    Restrictions restrictions;
    restrictions
        .WithGeoRestriction(geoRestriction);

    LoggingConfig loggingConfig;
    loggingConfig
        .WithEnabled(false)
        .WithBucket("fakeBucket")
        .WithIncludeCookies(false)
        .WithPrefix("");

    ViewerCertificate viewerCertificate;
    viewerCertificate
        .WithCloudFrontDefaultCertificate(true)
        .WithMinimumProtocolVersion(MinimumProtocolVersion::SSLv3)
        .WithSSLSupportMethod(SSLSupportMethod::vip);

    Aliases aliases;
    aliases
        .WithQuantity(0);

#ifdef _WIN32
#pragma warning( push )
#pragma warning( disable : 4996 )
#endif

    auto time = std::time(nullptr);
    DistributionConfig distributionConfig;
    distributionConfig
        .WithCallerReference(std::ctime(&time))
        .WithOrigins(origins)
        .WithDefaultRootObject(DEFAULT_ROOT_OBJECT)
        .WithDefaultCacheBehavior(defaultCacheBehavior)
        .WithCacheBehaviors(cacheBehaviors)
        .WithCustomErrorResponses(customErrorResponses)
        .WithRestrictions(restrictions)
        .WithLogging(loggingConfig)
        .WithViewerCertificate(viewerCertificate)
        .WithPriceClass(PriceClass::PriceClass_All)
        .WithEnabled(true)
        .WithAliases(aliases)
        .WithComment("Test Distribution");

#ifdef _WIN32
#pragma warning( pop )
#endif
    CreateDistribution2015_04_17Request createDistributionRequest;

    createDistributionRequest
        .WithDistributionConfig(distributionConfig);

    auto createDistributionOutcome = cloudFrontClient->CreateDistribution2015_04_17(createDistributionRequest);
    AWS_ASSERT_SUCCESS(createDistributionOutcome);


    //createDistributionOutcome = // some function call
    auto distribution = createDistributionOutcome.GetResult().GetDistribution();

    GetDistributionConfig2015_04_17Request getDistributionConfigRequest;
    getDistributionConfigRequest.SetId(distribution.GetId());

    auto getDistributionConfigOutcome = cloudFrontClient->GetDistributionConfig2015_04_17(getDistributionConfigRequest);
    AWS_ASSERT_SUCCESS(getDistributionConfigOutcome);

    DistributionConfig returnedDistributionConfigRequest;
    returnedDistributionConfigRequest = distributionConfig;
    returnedDistributionConfigRequest.SetEnabled(false);

    UpdateDistribution2015_04_17Request updateDistributionRequest;
    updateDistributionRequest.SetDistributionConfig(returnedDistributionConfigRequest);
    updateDistributionRequest.SetId(distribution.GetId());
    updateDistributionRequest.SetIfMatch(getDistributionConfigOutcome.GetResult().GetETag());

    auto updateDistributionOutcome = cloudFrontClient->UpdateDistribution2015_04_17(updateDistributionRequest);
    AWS_ASSERT_SUCCESS(updateDistributionOutcome);
    ASSERT_FALSE(updateDistributionOutcome.GetResult().GetDistribution().GetDistributionConfig().GetEnabled());
    WaitForDistributionDeployment(distribution.GetId());

    getDistributionConfigOutcome = cloudFrontClient->GetDistributionConfig2015_04_17(getDistributionConfigRequest);

    DeleteDistribution2015_04_17Request deleteDistributionRequest;
    deleteDistributionRequest.SetId(distribution.GetId());
    deleteDistributionRequest.SetIfMatch(getDistributionConfigOutcome.GetResult().GetETag());

    auto deleteDistributionOutcome = cloudFrontClient->DeleteDistribution2015_04_17(deleteDistributionRequest);
    AWS_ASSERT_SUCCESS(deleteDistributionOutcome);
}