#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/core/auth/SSOCredentialsProvider.h>
#include <aws/core/internal/AWSHttpResourceClient.h>
#include <aws/core/client/ClientConfiguration.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;

class SSRFValidationTest : public Aws::Testing::AwsCppSdkGTestSuite {
protected:
    void SetUp() override {
        AwsCppSdkGTestSuite::SetUp();
    }

    void TearDown() override {
        AwsCppSdkGTestSuite::TearDown();
    }

    Aws::Internal::SSOCredentialsClient::SSOGetRoleCredentialsRequest CreateSSORequest() {
        Aws::Internal::SSOCredentialsClient::SSOGetRoleCredentialsRequest request;
        request.m_ssoAccountId = "123456789012";
        request.m_ssoRoleName = "TestRole";
        request.m_accessToken = "test-token";
        return request;
    }
};

TEST_F(SSRFValidationTest, TestSSOCredentialsClientMaliciousRegion) {
    std::vector<Aws::String> maliciousRegions = {
        "@attacker.com#",
        "attacker.com@aws",
        "@evil.com#.amazonaws.com",
        "us-east-1@attacker.com",
        "internal-service.local"
    };

    for (const auto& region : maliciousRegions) {
        EXPECT_DEATH({
            ClientConfiguration config;
            config.region = region;
            Aws::Internal::SSOCredentialsClient ssoClient(config);
            auto request = CreateSSORequest();
            auto result = ssoClient.GetSSOCredentials(request);
        }, ".*") << "SSO should reject malicious region: " << region;
    }
}

TEST_F(SSRFValidationTest, TestValidRegionWithSSOClient) {
    ClientConfiguration config;
    config.region = "us-east-1";

    Aws::Internal::SSOCredentialsClient ssoClient(config);
    auto request = CreateSSORequest();

    AWS_LOGSTREAM_INFO("SSRFValidationTest",
        "Testing SSO with valid region: us-east-1");
    auto result = ssoClient.GetSSOCredentials(request);

    // The request will fail due to invalid credentials, but it shouldn't be due to region validation
    AWS_LOGSTREAM_INFO("SSRFValidationTest",
        "Credentials request completed for valid region");
}