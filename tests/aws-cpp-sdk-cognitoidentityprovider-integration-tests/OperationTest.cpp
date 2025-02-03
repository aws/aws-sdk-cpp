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
#include <aws/cognito-idp/model/SignUpRequest.h>
#include <aws/cognito-idp/model/CreateUserPoolClientRequest.h>
#include <aws/cognito-idp/model/DeleteUserPoolClientRequest.h>
#include <aws/cognito-idp/model/CreateUserPoolRequest.h>
#include <aws/cognito-idp/model/DeleteUserPoolRequest.h>
#include <aws/cognito-idp/model/AdminCreateUserRequest.h>
#include <aws/cognito-idp/model/AdminDeleteUserRequest.h>
#include <aws/cognito-idp/model/MessageActionType.h>
#include <aws/cognito-idp/CognitoIdentityProviderServiceClientModel.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/Outcome.h>
#include <aws/testing/TestingEnvironment.h>
#include <aws/core/platform/Environment.h>
#include <openssl/sha.h>
#include <openssl/evp.h>
#include <openssl/hmac.h>
#include <openssl/bn.h>
#include <aws/core/utils/logging/LogMacros.h>


using namespace Aws::CognitoIdentityProvider;
using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Client;
using namespace Aws::Region;

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
    Aws::String m_userPoolId;
    Aws::String m_clientId;
    const Aws::String m_username{"testUser"};
    Aws::String m_clientSecret;

    void SetUp()
    {
        Aws::Client::ClientConfiguration config;
        config.region = AWS_TEST_REGION;

        client = Aws::MakeShared<Aws::CognitoIdentityProvider::CognitoIdentityProviderClient>(ALLOCATION_TAG, config);

        //make user pool
        m_userPoolId = createUserPool("TestPool");

        ASSERT_TRUE(!m_userPoolId.empty());

        //make client
        if(!m_userPoolId.empty())
        {
            auto ret = createPoolClient(m_userPoolId, m_clientName);
            m_clientId = ret.first;
            m_clientSecret = ret.second;
        }

        ASSERT_TRUE(!m_clientId.empty());
        ASSERT_TRUE(!m_clientSecret.empty());

        //create user
        if(!m_userPoolId.empty() && !m_clientId.empty())
        {
            ASSERT_TRUE(createUser(m_username, "Password123!", m_userPoolId));
        }

    }

    void TearDown()
    {

        //delete user
        if(!m_userPoolId.empty())
        {
            ASSERT_TRUE(deleteUser(m_username, m_userPoolId));
        }

        // delete client
        if(!m_userPoolId.empty() && !m_clientId.empty())
        {
            ASSERT_TRUE(deletePoolClient(m_userPoolId, m_clientId));
        }

        // delete user pool
        if(!m_userPoolId.empty())
        {
            ASSERT_TRUE(deleteUserPool(m_userPoolId));
        }


        if (::testing::Test::HasFailure())
        {
            AWS_LOGSTREAM_DEBUG(ALLOCATION_TAG,  "Test traces: " << testTrace);
        }
        testTrace.erase();
    }

    private:
    Aws::String createUserPool(Aws::String poolName)
    {
        if(poolName.empty())
        {
            return {};
        }
        Aws::CognitoIdentityProvider::Model::CreateUserPoolRequest userPoolRequest;
        userPoolRequest.SetPoolName(poolName);

        CreateUserPoolOutcome userPoolOutcome = client->CreateUserPool(userPoolRequest);
        if (!userPoolOutcome.IsSuccess()) {
            return {};
        }

        auto poolId = userPoolOutcome.GetResult().GetUserPool().GetId();
        AWS_LOGSTREAM_DEBUG(ALLOCATION_TAG, "Created User Pool with ID: " << poolId << " for pool name="<< poolName );
        return poolId;
    }

    bool deleteUserPool(const Aws::String& poolId)
    {
        if (poolId.empty())
        {
            return false;
        }
        Aws::CognitoIdentityProvider::Model::DeleteUserPoolRequest deletePoolRequest;
        deletePoolRequest.SetUserPoolId(poolId);

        auto deletePoolOutcome = client->DeleteUserPool(deletePoolRequest);
        if (!deletePoolOutcome.IsSuccess()) {
            AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Failed to delete User Pool: " << deletePoolOutcome.GetError().GetMessage());
        }
        else
        {
            AWS_LOGSTREAM_DEBUG(ALLOCATION_TAG, "Deleted User Pool with ID: " << poolId);
        }
        return deletePoolOutcome.IsSuccess();
    }

    bool createUser(const Aws::String& username, const Aws::String& password, const Aws::String& userPoolId)
    {
        if (userPoolId.empty() || username.empty() || password.empty())
        {
            return false;
        }
        
        Aws::CognitoIdentityProvider::Model::AdminCreateUserRequest createUserRequest;
        createUserRequest.SetUserPoolId(userPoolId);
        createUserRequest.SetUsername(username);

        Aws::CognitoIdentityProvider::Model::AttributeType emailAttribute;
        emailAttribute.SetName("email");
        emailAttribute.SetValue("testuser@example.com");
        createUserRequest.AddUserAttributes(emailAttribute);

        // Set a temporary password
        createUserRequest.SetTemporaryPassword(password);

        // Suppress sending an email to the user
        createUserRequest.SetMessageAction(Aws::CognitoIdentityProvider::Model::MessageActionType::SUPPRESS);

        auto outcome = client->AdminCreateUser(createUserRequest);
        if (outcome.IsSuccess()) {
            AWS_LOGSTREAM_DEBUG(ALLOCATION_TAG, "User created successfully: " << outcome.GetResult().GetUser().GetUsername());
        } else {
            AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Failed to create user: " << outcome.GetError().GetMessage());
        }

        return outcome.IsSuccess();
    }

    bool deleteUser(const Aws::String& username, const Aws::String& userPoolId)
    {
        if (username.empty() || userPoolId.empty())
        {
            return false;
        }
        
        Aws::CognitoIdentityProvider::Model::AdminDeleteUserRequest deleteUserRequest;
        deleteUserRequest.SetUserPoolId(userPoolId);
        deleteUserRequest.SetUsername(username);
        auto deleteUserOutcome = client->AdminDeleteUser(deleteUserRequest);
        if (!deleteUserOutcome.IsSuccess()) {
            AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Failed to delete user: " << deleteUserOutcome.GetError().GetMessage());
        }
        else
        {
            AWS_LOGSTREAM_DEBUG(ALLOCATION_TAG, "Deleted test user: " << username);
        }
        return deleteUserOutcome.IsSuccess();
    }


    std::pair<Aws::String, Aws::String> createPoolClient(const Aws::String& userPoolId, const Aws::String& clientName)
    {
        if(userPoolId.empty() || clientName.empty())
        {
            return {};
        }

        Aws::CognitoIdentityProvider::Model::CreateUserPoolClientRequest request;
        request.SetUserPoolId(userPoolId); 
        request.SetClientName(clientName);  

        request.SetGenerateSecret(true);
        Aws::Vector<Aws::CognitoIdentityProvider::Model::ExplicitAuthFlowsType> authFlows{Aws::CognitoIdentityProvider::Model::ExplicitAuthFlowsType::ALLOW_USER_SRP_AUTH, Aws::CognitoIdentityProvider::Model::ExplicitAuthFlowsType::ALLOW_REFRESH_TOKEN_AUTH};
        request.SetExplicitAuthFlows(authFlows);

        Aws::CognitoIdentityProvider::Model::CreateUserPoolClientOutcome outcome = client->CreateUserPoolClient(request);
        Aws::String clientId, clientSecret;
        if (outcome.IsSuccess())
        {
            clientId = outcome.GetResult().GetUserPoolClient().GetClientId();
            clientSecret = outcome.GetResult().GetUserPoolClient().GetClientSecret();
            AWS_LOGSTREAM_DEBUG(ALLOCATION_TAG, "User Pool Client created successfully. Client ID: " << clientId );
        }
        return {clientId,clientSecret};
    }

    bool deletePoolClient(const Aws::String& userPoolId, const Aws::String& clientId)
    {
        // Set up the request for deleting the User Pool Client
        Aws::CognitoIdentityProvider::Model::DeleteUserPoolClientRequest request;
        request.SetUserPoolId(userPoolId);
        request.SetClientId(clientId);

        // Make the call to delete the user pool client
        auto outcome = client->DeleteUserPoolClient(request);
        if (outcome.IsSuccess())
        {
            AWS_LOGSTREAM_DEBUG(ALLOCATION_TAG, "User Pool Client deleted successfully.");
        }
        return outcome.IsSuccess();
    }

};


Aws::String ComputeSecretHash(const Aws::String &userPoolClientId, const Aws::String &clientSecret, const Aws::String &userName)
{
    const auto message = userName + userPoolClientId;
    unsigned char hash[EVP_MAX_MD_SIZE];
    unsigned int len = 0;

    HMAC(EVP_sha256(),
    clientSecret.c_str(), clientSecret.length(),
    (unsigned char*)message.c_str(), message.length(),
    hash, &len);
    
    // Base64 encode the hash
    char encoded[128];
    EVP_EncodeBlock((unsigned char*)encoded, hash, len);

    return std::string(encoded);
}
// https://github.com/aws/amazon-cognito-identity-js/blob/master/src/AuthenticationHelper.js#L22
const char* initN = 
    "FFFFFFFFFFFFFFFFC90FDAA22168C234C4C6628B80DC1CD1"
    "29024E088A67CC74020BBEA63B139B22514A08798E3404DD"
    "EF9519B3CD3A431B302B0A6DF25F14374FE1356D6D51C245"
    "E485B576625E7EC6F44C42E9A637ED6B0BFF5CB6F406B7ED"
    "EE386BFB5A899FA5AE9F24117C4B1FE649286651ECE45B3D"
    "C2007CB8A163BF0598DA48361C55D39A69163FA8FD24CF5F"
    "83655D23DCA3AD961C62F356208552BB9ED529077096966D"
    "670C354E4ABC9804F1746C08CA18217C32905E462E36CE3B"
    "E39E772C180E86039B2783A2EC07A28FB5C55DF06F4C52C9"
    "DE2BCBF6955817183995497CEA956AE515D2261898FA0510"
    "15728E5A8AAAC42DAD33170D04507A33A85521ABDF1CBA64"
    "ECFB850458DBEF0A8AEA71575D060C7DB3970F85A6E1E4C7"
    "ABF5AE8CDB0933D71E8C94E04A25619DCEE3D2261AD2EE6B"
    "F12FFA06D98A0864D87602733EC86A64521F2B18177B200C"
    "BBE117577A615D6C770988C0BAD946E208E24FA074E5AB31"
    "43DB5BFCE0FD108E4B82D120A93AD2CAFFFFFFFFFFFFFFFF";
// https://github.com/aws/amazon-cognito-identity-js/blob/master/src/AuthenticationHelper.js#
const char* generator = "2";


class SRPClient {
    public:
    SRPClient(const std::string& N_hex, const std::string& g):N(BN_new()), g(BN_new()), a(nullptr), A(BN_new()), ctx(BN_CTX_new())
    {
        //convert the hex string N_hex into a BIGNUM (OpenSSL's representation of large integers)
        AWS_FATAL_ASSERT(BN_hex2bn(&N, N_hex.c_str()));
        //convert the decimal string g into a BIGNUM
        AWS_FATAL_ASSERT(BN_dec2bn(&this->g, g.c_str()));
    
        generatePrivateKey(256);
    }
    ~SRPClient()
    {
        BN_free(N);
        BN_free(g);
        BN_free(a);
        BN_free(A);
        BN_CTX_free(ctx);
    }

    
    private:
    /*
    N: A large prime number, a part of the SRP protocol. We use the N used 
    g: A generator used in the SRP protocol.
    a: The client's private key.
    A: The client's public key derived from the private key.
    ctx: A context structure for OpenSSL's cryptographic operations.
    
    */
    BIGNUM* N{nullptr};
    BIGNUM* g{nullptr};
    BIGNUM* a{nullptr};
    BIGNUM* A{nullptr};
    BN_CTX* ctx{nullptr};

    void generatePrivateKey(int bits)
    {
        a = BN_new();
        AWS_FATAL_ASSERT(BN_rand(a, bits, -1, 0));
    }

    public:
    //Calculate the client’s public key A using the formula A = g^a (mod N) where a is the client’s private key and g is the generator
    //We use OpenSSL function here
    Aws::String calculateA() const
    {
        AWS_FATAL_ASSERT(BN_mod_exp(A, g, a, N, ctx));
        char* A_hex = BN_bn2hex(A);
        Aws::String A_str(A_hex);
        OPENSSL_free(A_hex);
        return A_str;
    }
};



TEST_F(IdentityProviderOperationTest, testSecret)
{
    SRPClient srpclient(initN, generator);
    Aws::Map<Aws::String, Aws::String> authParameters;
    authParameters["USERNAME"] = m_username;
    authParameters["SECRET_HASH"] = ComputeSecretHash(m_clientId, m_clientSecret, m_username);
    auto srpa = srpclient.calculateA();
    ASSERT_TRUE(!srpa.empty());
    authParameters["SRP_A"] = srpa;  

    Aws::CognitoIdentityProvider::Model::InitiateAuthRequest authRequest;
    authRequest.SetClientId(m_clientId);
    authRequest.SetAuthFlow(Aws::CognitoIdentityProvider::Model::AuthFlowType::USER_SRP_AUTH);
    authRequest.SetAuthParameters(authParameters);
    Aws::CognitoIdentityProvider::Model::InitiateAuthOutcome authResult = client->InitiateAuth( authRequest );
    EXPECT_TRUE(authResult.IsSuccess());
}

}
