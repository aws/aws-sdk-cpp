#include <aws/cognito-identity/CognitoIdentityClient.h>
#include <aws/cognito-identity/model/CreateIdentityPoolRequest.h>
#include <aws/cognito-identity/model/DeleteIdentityPoolRequest.h>
#include <aws/cognito-identity/model/GetIdRequest.h>
#include <aws/cognito-identity/model/GetOpenIdTokenRequest.h>
#include <aws/cognito-identity/model/SetIdentityPoolRolesRequest.h>
#include <aws/core/Aws.h>
#include <aws/core/auth/STSCredentialsProvider.h>
#include <aws/core/utils/FileSystemUtils.h>
#include <aws/core/platform/Environment.h>
#include <aws/iam/IAMClient.h>
#include <aws/iam/model/CreateRoleRequest.h>
#include <aws/iam/model/DeleteRolePolicyRequest.h>
#include <aws/iam/model/DeleteRoleRequest.h>
#include <aws/iam/model/PutRolePolicyRequest.h>
#include <aws/sts/STSClient.h>
#include <aws/sts/model/AssumeRoleRequest.h>
#include <aws/testing/AwsTestHelpers.h>
#include <gtest/gtest.h>

using namespace Aws;
using namespace Aws::Client;
using namespace Aws::Auth;
using namespace Aws::Utils;
using namespace Aws::IAM;
using namespace Aws::IAM::Model;
using namespace Aws::STS;
using namespace Aws::STS::Model;
using namespace Aws::CognitoIdentity;
using namespace Aws::CognitoIdentity::Model;

namespace {
const char* TRUST_POLICY = R"({"Version":"2012-10-17","Statement":[{"Effect":"Allow","Principal":{"Federated":"cognito-identity.amazonaws.com"},"Action":"sts:AssumeRoleWithWebIdentity","Condition":{"StringEquals":{"cognito-identity.amazonaws.com:aud":"IDENTITY_POOL_ID_PLACEHOLDER"},"ForAnyValue:StringLike":{"cognito-identity.amazonaws.com:amr":"unauthenticated"}}},{"Effect":"Allow","Principal":{"AWS":"arn:aws:iam::TEST_ACCOUNT_ID:root"},"Action":"sts:AssumeRole"}]})";
const char* ALLOW_S3_POLICY = R"({"Version":"2012-10-17","Statement":[{"Effect":"Allow","Action":["s3:GetObject","s3:ListBucket"],"Resource":["arn:aws:s3:::example-bucket/*","arn:aws:s3:::example-bucket"]}]})";
// If it takes longer than 60s for a IAM role to be consistent -- thats a problem
// and we likely want to move on and fail the test
const std::chrono::milliseconds IAM_CONSISTENCY_SLEEP = std::chrono::seconds(1);
const size_t MAX_IAM_CONSISTENCY_RETRIES = 60;
}

class CognitoIdentitySetup {
 public:
  CognitoIdentitySetup(const Aws::String& testIdentifier)
      : m_tokenFile{std::ios_base::out | std::ios_base::trunc},
        m_roleName{"WebIdentityTestRole" + testIdentifier},
        m_policyName{"WebIdentityTestPolicy" + testIdentifier},
        m_poolName{"WebIdentityTestPool" + testIdentifier} {
    const auto identityPoolResponse = m_cognitoIdentityClient.CreateIdentityPool(CreateIdentityPoolRequest{}
      .WithIdentityPoolName(m_poolName)
      .WithAllowUnauthenticatedIdentities(true));
    AWS_EXPECT_SUCCESS(identityPoolResponse);
    m_identityPoolId = identityPoolResponse.GetResult().GetIdentityPoolId();
    Aws::String trustPolicyWithID{TRUST_POLICY};
    Aws::Utils::StringUtils::Replace(trustPolicyWithID, "IDENTITY_POOL_ID_PLACEHOLDER", m_identityPoolId.c_str());
    Aws::Utils::StringUtils::Replace(trustPolicyWithID, "TEST_ACCOUNT_ID", Aws::Environment::GetEnv("CATAPULT_TEST_ACCOUNT").c_str());

    const auto createRoleResponse = m_iamClient.CreateRole(CreateRoleRequest{}
      .WithRoleName(m_roleName)
      .WithAssumeRolePolicyDocument(trustPolicyWithID));
    AWS_EXPECT_SUCCESS(createRoleResponse);
    m_roleArn = createRoleResponse.GetResult().GetRole().GetArn();

    const auto updateRoleResponse = m_iamClient.PutRolePolicy(PutRolePolicyRequest{}
      .WithRoleName(m_roleName)
      .WithPolicyName(m_policyName)
      .WithPolicyDocument(ALLOW_S3_POLICY));
    AWS_EXPECT_SUCCESS(updateRoleResponse);

    // Force read after write consistency
    AssumeRoleOutcome assumeRoleResponse;
    size_t attempts = 0;
    bool shouldSleep = false;
    do {
      if (shouldSleep) {
        std::this_thread::sleep_for(IAM_CONSISTENCY_SLEEP);
      }
      assumeRoleResponse = m_stsClient.AssumeRole(AssumeRoleRequest{}
        .WithRoleArn(m_roleArn)
        .WithRoleSessionName("test"));
      shouldSleep = true;
    } while (!assumeRoleResponse.IsSuccess() && attempts++ < MAX_IAM_CONSISTENCY_RETRIES);
    AWS_EXPECT_SUCCESS(assumeRoleResponse);

    const auto setIdentityPoolRulesResponse = m_cognitoIdentityClient.SetIdentityPoolRoles(SetIdentityPoolRolesRequest{}
      .WithIdentityPoolId(m_identityPoolId)
      .WithRoles({
        {"unauthenticated", m_roleArn}
      }));
    AWS_EXPECT_SUCCESS(setIdentityPoolRulesResponse);

    const auto getPoolIdResponse = m_cognitoIdentityClient.GetId(GetIdRequest{}.WithIdentityPoolId(m_identityPoolId));
    AWS_EXPECT_SUCCESS(getPoolIdResponse);

    const auto identityId = getPoolIdResponse.GetResult().GetIdentityId();

    const auto getTokenResponse = m_cognitoIdentityClient.GetOpenIdToken(GetOpenIdTokenRequest{}.WithIdentityId(identityId));
    AWS_EXPECT_SUCCESS(getTokenResponse);

    const auto token = getTokenResponse.GetResult().GetToken();
    EXPECT_TRUE(m_tokenFile.good());
    m_tokenFile << token << std::endl;
    m_tokenFile.close();
  }

  ~CognitoIdentitySetup() {
    const auto deletePoolResponse = m_cognitoIdentityClient.DeleteIdentityPool(DeleteIdentityPoolRequest{}
      .WithIdentityPoolId(m_identityPoolId));
    AWS_EXPECT_SUCCESS(deletePoolResponse);

    const auto deleteRolePolicyResponse = m_iamClient.DeleteRolePolicy(DeleteRolePolicyRequest{}
      .WithRoleName(m_roleName)
      .WithPolicyName(m_policyName));
    AWS_EXPECT_SUCCESS(deleteRolePolicyResponse);

    const auto deleteRoleResponse = m_iamClient.DeleteRole(DeleteRoleRequest{}.WithRoleName(m_roleName));
    AWS_EXPECT_SUCCESS(deleteRoleResponse);
  }

  Aws::String GetRoleArn() {
    return m_roleArn;
  }

  Aws::String GetTokenFileName() {
    return m_tokenFile.GetFileName();
  }

 private:
  IAMClient m_iamClient;
  STSClient m_stsClient;
  CognitoIdentityClient m_cognitoIdentityClient;
  TempFile m_tokenFile;
  Aws::String m_roleName;
  Aws::String m_policyName;
  Aws::String m_poolName;
  Aws::String m_roleArn;
  Aws::String m_identityPoolId;
};

class STSWebIdentityProviderIntegrationTest : public testing::Test {
 protected:
  STSWebIdentityProviderIntegrationTest() {
    m_options.loggingOptions.logLevel = Aws::Utils::Logging::LogLevel::Debug;
    InitAPI(m_options);
  }

  ~STSWebIdentityProviderIntegrationTest() {
    ShutdownAPI(m_options);
  }

  SDKOptions m_options;
};

TEST_F(STSWebIdentityProviderIntegrationTest, ShouldWork) {
  CognitoIdentitySetup testResourcesRAII{UUID::RandomUUID()};
  ClientConfiguration config;
  config.credentialProviderConfig.region = config.region;
  config.credentialProviderConfig.stsCredentialsProviderConfig.roleArn = testResourcesRAII.GetRoleArn();
  config.credentialProviderConfig.stsCredentialsProviderConfig.tokenFilePath = testResourcesRAII.GetTokenFileName();
  STSAssumeRoleWebIdentityCredentialsProvider provider{config.credentialProviderConfig};
  AWSCredentials credentials{};
  size_t attempts = 0;
  bool shouldSleep = false;
  do {
    if (shouldSleep) {
      std::this_thread::sleep_for(IAM_CONSISTENCY_SLEEP);
    }
    credentials = provider.GetAWSCredentials();
    shouldSleep = true;
    attempts++;
  } while (credentials.IsEmpty() && attempts < MAX_IAM_CONSISTENCY_RETRIES);
  EXPECT_FALSE(credentials.IsEmpty());
}
