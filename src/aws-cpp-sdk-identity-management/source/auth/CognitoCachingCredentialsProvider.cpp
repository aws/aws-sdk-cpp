/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/identity-management/auth/CognitoCachingCredentialsProvider.h>
#include <aws/identity-management/auth/PersistentCognitoIdentityProvider.h>
#include <aws/core/auth/CredentialsCachingProvider.h>
#include <aws/cognito-identity/model/GetCredentialsForIdentityRequest.h>
#include <aws/cognito-identity/model/GetIdRequest.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/DateTime.h>

using namespace Aws::Auth;
using namespace Aws::CognitoIdentity;
using namespace Aws::CognitoIdentity::Model;
using namespace Aws::Utils;

static const char* LOG_TAG = "CognitoCachingCredentialsProvider";
static const char* MEM_TAG = "CognitoCachingCredentialsProvider";

// Fetch-only: one GetCredentialsFromCognito() call, no cache of its own. GetCredentialsFromCognito() is
// virtual, so this calls back into the owner rather than duplicating its dispatch.
class CognitoCachingCredentialsProvider::CognitoFetchOnlyProvider : public AWSCredentialsProvider
{
public:
    explicit CognitoFetchOnlyProvider(CognitoCachingCredentialsProvider& owner) : m_owner(owner) {}
    AWSCredentials GetAWSCredentials() override;

private:
    CognitoCachingCredentialsProvider& m_owner;
};

AWSCredentials CognitoCachingCredentialsProvider::CognitoFetchOnlyProvider::GetAWSCredentials()
{
    AWS_LOGSTREAM_INFO(LOG_TAG, "Attempting to pull new credentials from cognito.");
    auto getCredentialsForIdentityOutcome = m_owner.GetCredentialsFromCognito();
    if (!getCredentialsForIdentityOutcome.IsSuccess())
    {
        auto error = getCredentialsForIdentityOutcome.GetError();
        AWS_LOGSTREAM_ERROR(LOG_TAG, "Failed to pull credentials from cognito. Error: " <<
                                     error.GetExceptionName() << "  Message: " << error.GetMessage());
        return AWSCredentials();
    }

    AWS_LOGSTREAM_INFO(LOG_TAG, "Successfully obtained cognito credentials");
    const auto& cognitoCreds = getCredentialsForIdentityOutcome.GetResult().GetCredentials();

    //If we went from anonymous to authenticated on a different machine than the original
    //login, then we need to swap out the identity id to be the parent id.
    const auto& parentIdentityId = getCredentialsForIdentityOutcome.GetResult().GetIdentityId();

    if (m_owner.m_identityRepository->GetIdentityId() != parentIdentityId)
    {
        AWS_LOGSTREAM_INFO(LOG_TAG, "A parent identity was from cognito which is different from the anonymous identity. Swapping that out now.");
        m_owner.m_identityRepository->PersistIdentityId(parentIdentityId);
    }

    AWSCredentials credentials;
    credentials.SetAWSAccessKeyId(cognitoCreds.GetAccessKeyId());
    credentials.SetAWSSecretKey(cognitoCreds.GetSecretKey());
    credentials.SetSessionToken(cognitoCreds.GetSessionToken());
    credentials.SetExpiration(cognitoCreds.GetExpiration());
    AWS_LOGSTREAM_INFO(LOG_TAG, "Credentials will expire next at " << cognitoCreds.GetExpiration().ToGmtString(DateFormat::ISO_8601));
    return credentials;
}

CognitoCachingCredentialsProvider::CognitoCachingCredentialsProvider
        (const std::shared_ptr<PersistentCognitoIdentityProvider>& identityRepository, const std::shared_ptr<CognitoIdentityClient>& cognitoIdentityClient) :
        m_cognitoIdentityClient(cognitoIdentityClient != nullptr ? cognitoIdentityClient :
                                Aws::MakeShared<CognitoIdentityClient>(MEM_TAG, Aws::MakeShared<AnonymousAWSCredentialsProvider>(MEM_TAG))),
        m_identityRepository(identityRepository)
{
    m_identityRepository->SetLoginsUpdatedCallback(std::bind(&CognitoCachingCredentialsProvider::OnLoginsUpdated, this, std::placeholders::_1));
    auto fetchOnly = Aws::MakeShared<CognitoFetchOnlyProvider>(MEM_TAG, *this);
    m_cachingProvider = Aws::MakeShared<CredentialsCachingProvider>(MEM_TAG, fetchOnly);
}

AWSCredentials CognitoCachingCredentialsProvider::GetAWSCredentials()
{
    return m_cachingProvider->GetAWSCredentials();
}

void CognitoCachingCredentialsProvider::Invalidate(const Aws::String& accessKeyId)
{
    m_cachingProvider->Invalidate(accessKeyId);
}

void CognitoCachingCredentialsProvider::OnLoginsUpdated(const PersistentCognitoIdentityProvider&)
{
    AWS_LOGSTREAM_INFO(LOG_TAG, "Logins Updated in the identity repository, forcing a refresh on the next run.");
    m_cachingProvider->Invalidate(m_cachingProvider->GetAWSCredentials().GetAWSAccessKeyId());
}


GetCredentialsForIdentityOutcome FetchCredentialsFromCognito(const CognitoIdentityClient& cognitoIdentityClient,
                                                             PersistentCognitoIdentityProvider& identityRepository,
                                                             const char* logTag, bool includeLogins)
{
    auto logins = identityRepository.GetLogins();
    Aws::Map<Aws::String, Aws::String> cognitoLogins;
    for(auto& login : logins)
    {
        cognitoLogins[login.first] = login.second.accessToken;
    }

    if (!identityRepository.HasIdentityId())
    {
        auto accountId = identityRepository.GetAccountId();
        auto identityPoolId = identityRepository.GetIdentityPoolId();

        AWS_LOGSTREAM_INFO(logTag, "Identity not found, requesting an id for accountId " <<
                                         accountId << " identity pool id " << identityPoolId <<
                                         " with logins.");

        GetIdRequest getIdRequest;
        if(!accountId.empty())
        {
            getIdRequest.SetAccountId(accountId);
        }
        getIdRequest.SetIdentityPoolId(identityPoolId);
        if(includeLogins)
        {
            getIdRequest.SetLogins(cognitoLogins);
        }

        auto getIdOutcome = cognitoIdentityClient.GetId(getIdRequest);
        if(getIdOutcome.IsSuccess())
        {
            auto identityId = getIdOutcome.GetResult().GetIdentityId();
            AWS_LOGSTREAM_INFO(logTag, "Successfully retrieved identity: " << identityId);
            identityRepository.PersistIdentityId(identityId);            
        }
        else
        {
            AWS_LOGSTREAM_ERROR(logTag, "Failed to retrieve identity. Error: "
                                              << getIdOutcome.GetError().GetExceptionName() << " "
                                              << getIdOutcome.GetError().GetMessage());
            return GetCredentialsForIdentityOutcome(getIdOutcome.GetError());
        }
    }

    GetCredentialsForIdentityRequest getCredentialsForIdentityRequest;
    getCredentialsForIdentityRequest.SetIdentityId(identityRepository.GetIdentityId());
    if(includeLogins)
    {
        getCredentialsForIdentityRequest.SetLogins(cognitoLogins);
    }

    return cognitoIdentityClient.GetCredentialsForIdentity(getCredentialsForIdentityRequest);
}

static const char* ANON_LOG_TAG = "CognitoCachingAnonymousCredentialsProvider";

CognitoCachingAnonymousCredentialsProvider::CognitoCachingAnonymousCredentialsProvider(
        const std::shared_ptr<PersistentCognitoIdentityProvider>& identityRepository,
        const std::shared_ptr<CognitoIdentityClient>& cognitoIdentityClient) :
        CognitoCachingCredentialsProvider(identityRepository, cognitoIdentityClient)
{ }

CognitoCachingAnonymousCredentialsProvider::CognitoCachingAnonymousCredentialsProvider(const Aws::String& accountId, const Aws::String& identityPoolId,
                                                                                       const std::shared_ptr<CognitoIdentityClient>& cognitoIdentityClient) :
        CognitoCachingCredentialsProvider(Aws::MakeShared<DefaultPersistentCognitoIdentityProvider>(MEM_TAG, identityPoolId, accountId), cognitoIdentityClient)
{ }
CognitoCachingAnonymousCredentialsProvider::CognitoCachingAnonymousCredentialsProvider(const Aws::String& identityPoolId,
                                                                                       const std::shared_ptr<CognitoIdentityClient>& cognitoIdentityClient) :
        CognitoCachingCredentialsProvider(Aws::MakeShared<DefaultPersistentCognitoIdentityProvider>(MEM_TAG, identityPoolId), cognitoIdentityClient)
{ }


GetCredentialsForIdentityOutcome CognitoCachingAnonymousCredentialsProvider::GetCredentialsFromCognito() const
{
    return FetchCredentialsFromCognito(*m_cognitoIdentityClient, *m_identityRepository, ANON_LOG_TAG, false);
}

static const char* AUTH_LOG_TAG = "CognitoCachingAuthenticatedCredentialsProvider";

CognitoCachingAuthenticatedCredentialsProvider::CognitoCachingAuthenticatedCredentialsProvider(
        const std::shared_ptr<PersistentCognitoIdentityProvider>& identityRepository,
        const std::shared_ptr<CognitoIdentityClient>& cognitoIdentityClient) :
        CognitoCachingCredentialsProvider(identityRepository, cognitoIdentityClient)
{ }

GetCredentialsForIdentityOutcome CognitoCachingAuthenticatedCredentialsProvider::GetCredentialsFromCognito() const
{
    return FetchCredentialsFromCognito(*m_cognitoIdentityClient, *m_identityRepository, AUTH_LOG_TAG, true);
}
