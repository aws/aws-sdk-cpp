/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/MemoryTesting.h>
#include <algorithm>
#include <thread>

#include <aws/cognito-idp/CognitoIdentityProviderClient.h>
#include <aws/cognito-idp/CognitoIdentityProviderErrors.h>
#include <aws/cognito-idp/model/AuthFlowType.h>
#include <aws/cognito-idp/model/ExplicitAuthFlowsType.h>
#include <aws/cognito-idp/model/InitiateAuthRequest.h>
#include <aws/cognito-idp/model/CreateUserPoolClientRequest.h>
#include <aws/cognito-idp/model/SignUpRequest.h>
#include <aws/cognito-idp/model/DeleteUserPoolClientRequest.h>

#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/Outcome.h>
#include <aws/testing/TestingEnvironment.h>
#include <aws/core/platform/Environment.h>
#include <openssl/srp.h>
using namespace Aws::CognitoIdentityProvider;
using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Client;
using namespace Aws::Region;

#define TEST_POOL_PREFIX  "IntegrationTest_"

namespace
{
static const char* ALLOCATION_TAG = "IdentityProviderOperationTest";


class IdentityProviderOperationTest : public ::testing::Test
{
public:
    IdentityProviderOperationTest() :
        client(nullptr)
    {}

    std::shared_ptr<Aws::CognitoIdentityProvider::CognitoIdentityProviderClient> client;
    Aws::String testTrace;

protected:

    const Aws::String m_clientName{"testClient"};

    void SetUp()
    {
        Aws::Client::ClientConfiguration config;
        config.region = AWS_TEST_REGION;

        //TODO: move this over to profile config file.
        client = Aws::MakeShared<Aws::CognitoIdentityProvider::CognitoIdentityProviderClient>(ALLOCATION_TAG, config);
    }

    void TearDown()
    {
        client = nullptr;
        if (::testing::Test::HasFailure())
        {
            std::cout << "Test traces: " << testTrace << "\n";
        }
        testTrace.erase();
    }


    void registerUser(const Aws::String& username, const Aws::String& password)
    {   
        // Set up the request for creating a new User Pool Client
        Aws::CognitoIdentityProvider::Model::SignUpRequest request;
        request.SetClientId(m_clientName);
        request.SetUsername(username);
        request.SetPassword(password);

        auto outcome = client->SignUp(request);
        ASSERT_TRUE(outcome.IsSuccess());
        if (outcome.IsSuccess())
        {
            std::cout << "User registered successfully." << std::endl;
            std::cout << "User confirmed: " << (outcome.GetResult().GetUserConfirmed() ? "Yes" : "No") << std::endl;
            std::cout << "User sub: " << outcome.GetResult().GetUserSub() << std::endl;


        }
    }

    CreateUserPoolClientOutcome createPoolClient()
    {
        // Set up the request for creating a new User Pool Client
        Aws::CognitoIdentityProvider::Model::CreateUserPoolClientRequest request;
        request.SetUserPoolId("test-pool-id"); 
        request.SetClientName("testClient");  

        request.SetGenerateSecret(true); // If you need a secret for your client
        Aws::Vector<Aws::CognitoIdentityProvider::Model::ExplicitAuthFlowsType> authFlows{Aws::CognitoIdentityProvider::Model::ExplicitAuthFlowsType::ALLOW_USER_SRP_AUTH};
        request.SetExplicitAuthFlows(authFlows);

        // Make the call to create the user pool client
        auto outcome = client->CreateUserPoolClient(request);
        ASSERT_TRUE(outcome.IsSuccess());
        if (outcome.IsSuccess())
        {
            std::cout << "User Pool Client created successfully." << std::endl;
            std::cout << "Client ID: " << outcome.GetResult().GetUserPoolClient().GetClientId() << std::endl;
            if (request.GetGenerateSecret())
            {
                std::cout << "Client Secret: " << outcome.GetResult().GetUserPoolClient().GetClientSecret() << std::endl;
            }
        }
        return outcome;
    }

    void deletePoolClient()
    {
        // Set up the request for deleting the User Pool Client
        Aws::CognitoIdentityProvider::Model::DeleteUserPoolClientRequest request;
        request.SetUserPoolId("test-pool-id");
        request.SetClientId("testClient");

        // Make the call to delete the user pool client
        auto outcome = client->DeleteUserPoolClient(request);
        ASSERT_TRUE(outcome.IsSuccess());
        if (outcome.IsSuccess())
        {
            std::cout << "User Pool Client deleted successfully." << std::endl;
        }
    }


};






TEST_F(IdentityProviderOperationTest, testSecret)
{
    auto outcome = createPoolClient();

    
    Aws::String ComputeSecretHash(const Aws::String &userPoolClientId, const Aws::String &userPoolClientSecret, const Aws::String &userName)
    {
        const auto secret = userPoolClientSecret;
        const auto message = userName + userPoolClientId;
        
        unsigned char * digest = HMAC(EVP_sha256(), 
                                    secret.c_str(), static_cast<int>(secret.length()), 
                                    reinterpret_cast<const unsigned char*>(message.c_str()), 
                                    static_cast<int>(message.length()), 
                                    NULL, NULL);
        
        char mdString[SHA256_DIGEST_LENGTH * 2 + 1];
        for (int i = 0; i < SHA256_DIGEST_LENGTH; ++i)
            sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);

        mdString[64] = '\0'; // null-terminate the string
        
        return Aws::String(mdString);
    }


    Aws::Map<Aws::String, Aws::String> authParameters;
    authParameters["USERNAME"] = "dummyuser"; // Replace with actual username

    // Compute SECRET_HASH if the client has a secret
    const Aws::String clientId = outcome.GetResult().GetUserPoolClient().GetClientId(); // Client ID from previous step
    const Aws::String clientSecret = outcome.GetResult().GetUserPoolClient().GetClientSecret(); // Client Secret if generated
    authParameters["SECRET_HASH"] = ComputeSecretHash(clientId, clientSecret, "dummyuser");

    // Note: SRP_A is part of the SRP protocol, you need to implement or use a library for SRP
    // This is a placeholder for a correct SRP implementation:
    authParameters["SRP_A"] = "dummy"; // Replace with actual SRP_A value

    Aws::CognitoIdentityProvider::Model::InitiateAuthRequest authRequest;
    authRequest.SetClientId(clientId); // Client ID from when you created the client
    authRequest.SetAuthFlow(Aws::CognitoIdentityProvider::Model::AuthFlowType::USER_SRP_AUTH);
    authRequest.SetAuthParameters(authParameters);

    Aws::CognitoIdentityProvider::Model::InitiateAuthOutcome authResult = client->InitiateAuth( authRequest );

    EXPECT_TRUE(authResult.IsSuccess());


    deletePoolClient();
}

}
