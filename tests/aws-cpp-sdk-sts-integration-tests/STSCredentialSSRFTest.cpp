#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/Aws.h>
#include <aws/sts/STSClient.h>
#include <aws/sts/model/GetCallerIdentityRequest.h>

using namespace Aws;
using namespace Aws::STS;
using namespace Aws::STS::Model;

namespace
{
    static const char ALLOCATION_TAG[] = "STSCredentialSSRFTest";

    class STSCredentialSSRFTest : public ::testing::Test
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

    TEST_F(STSCredentialSSRFTest, TestSTSClientRejectsMaliciousRegion)
    {
        // Test malicious region with @ character that could redirect to attacker.com
        Aws::Client::ClientConfiguration config;
        config.region = "@attacker.com#";
        
        auto stsClient = Aws::MakeShared<STSClient>(ALLOCATION_TAG, config);
        
        // Try GetCallerIdentity - simple operation that works with any credentials
        GetCallerIdentityRequest request;
        auto outcome = stsClient->GetCallerIdentity(request);
        
        // The request should fail (not redirect to attacker.com)
        EXPECT_FALSE(outcome.IsSuccess());
        
        if (!outcome.IsSuccess()) {
            auto error = outcome.GetError();
            std::cout << "Error type: " << static_cast<int>(error.GetErrorType()) << std::endl;
            std::cout << "Error message: " << error.GetMessage() << std::endl;
        }
    }

    TEST_F(STSCredentialSSRFTest, TestSTSClientWithValidRegion)
    {
        // Test with valid region
        Aws::Client::ClientConfiguration config;
        config.region = "us-east-1";
        
        auto stsClient = Aws::MakeShared<STSClient>(ALLOCATION_TAG, config);
        
        GetCallerIdentityRequest request;
        auto outcome = stsClient->GetCallerIdentity(request);
        
        std::cout << "Valid region test - Success: " << outcome.IsSuccess() << std::endl;
        if (!outcome.IsSuccess()) {
            auto error = outcome.GetError();
            std::cout << "Error type: " << static_cast<int>(error.GetErrorType()) << std::endl;
            std::cout << "Error message: " << error.GetMessage() << std::endl;
        }
    }
}
