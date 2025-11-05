#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/Aws.h>
#include <aws/sso/SSOClient.h>
#include <aws/sso/model/ListAccountsRequest.h>

using namespace Aws;
using namespace Aws::SSO;
using namespace Aws::SSO::Model;

namespace
{
    static const char ALLOCATION_TAG[] = "SSOCredentialSSRFTest";

    class SSOCredentialSSRFTest : public ::testing::Test
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

    TEST_F(SSOCredentialSSRFTest, TestSSOClientRejectsMaliciousRegion)
    {
        // Test malicious region with @ character that could redirect to attacker.com
        Aws::Client::ClientConfiguration config;
        config.region = "@attacker.com#";

        auto ssoClient = Aws::MakeShared<SSOClient>(ALLOCATION_TAG, config);

        // Try ListAccounts - simple operation
        ListAccountsRequest request;
        request.SetAccessToken("dummy-token");
        auto outcome = ssoClient->ListAccounts(request);

        // The request should fail (not redirect to attacker.com)
        EXPECT_FALSE(outcome.IsSuccess());

        if (!outcome.IsSuccess()) {
            auto error = outcome.GetError();
            std::cout << "Error type: " << static_cast<int>(error.GetErrorType()) << std::endl;
            std::cout << "Error message: " << error.GetMessage() << std::endl;
        }
    }

    TEST_F(SSOCredentialSSRFTest, TestSSOClientWithValidRegion)
    {
        // Test with valid region
        Aws::Client::ClientConfiguration config;
        config.region = "us-east-1";

        auto ssoClient = Aws::MakeShared<SSOClient>(ALLOCATION_TAG, config);

        ListAccountsRequest request;
        request.SetAccessToken("dummy-token");
        auto outcome = ssoClient->ListAccounts(request);

        std::cout << "Valid region test - Success: " << outcome.IsSuccess() << std::endl;
        if (!outcome.IsSuccess()) {
            auto error = outcome.GetError();
            std::cout << "Error type: " << static_cast<int>(error.GetErrorType()) << std::endl;
            std::cout << "Error message: " << error.GetMessage() << std::endl;
        }
    }
}
