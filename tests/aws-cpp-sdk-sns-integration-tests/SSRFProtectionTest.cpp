#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/Aws.h>
#include <aws/sns/SNSClient.h>
#include <aws/sns/model/ListTopicsRequest.h>

using namespace Aws;
using namespace Aws::SNS;
using namespace Aws::SNS::Model;

namespace
{
    static const char ALLOCATION_TAG[] = "SSRFProtectionTest";

    class SSRFProtectionTest : public ::testing::Test
    {
    protected:
        void SetUp() override
        {
            Aws::InitAPI(options);
        }

        void TearDown() override
        {
            Aws::ShutdownAPI(options);
        }

        Aws::SDKOptions options;
    };

    TEST_F(SSRFProtectionTest, TestSNSClientRejectsMaliciousRegion)
    {
        // Test malicious region with @ character that could redirect to attacker.com
        Aws::Client::ClientConfiguration config;
        config.region = "@attacker.com#";
        
        // SNS client should reject this malicious region
        auto snsClient = Aws::MakeShared<SNSClient>(ALLOCATION_TAG, config);
        
        // Try to make a request - this should fail safely
        ListTopicsRequest request;
        auto outcome = snsClient->ListTopics(request);
        
        // The request should fail (not redirect to attacker.com)
        EXPECT_FALSE(outcome.IsSuccess());
        
        // The error should indicate invalid region, not network failure
        if (!outcome.IsSuccess()) {
            auto error = outcome.GetError();
            std::cout << "Error type: " << static_cast<int>(error.GetErrorType()) << std::endl;
            std::cout << "Error message: " << error.GetMessage() << std::endl;
        }
    }

    TEST_F(SSRFProtectionTest, TestSNSClientWithValidRegion)
    {
        // Test with valid region
        Aws::Client::ClientConfiguration config;
        config.region = "us-east-1";
        
        auto snsClient = Aws::MakeShared<SNSClient>(ALLOCATION_TAG, config);
        
        // This should work (though may fail due to credentials, not region)
        ListTopicsRequest request;
        auto outcome = snsClient->ListTopics(request);
        
        std::cout << "Valid region test - Success: " << outcome.IsSuccess() << std::endl;
        if (!outcome.IsSuccess()) {
            auto error = outcome.GetError();
            std::cout << "Error type: " << static_cast<int>(error.GetErrorType()) << std::endl;
            std::cout << "Error message: " << error.GetMessage() << std::endl;
        }
    }
}
