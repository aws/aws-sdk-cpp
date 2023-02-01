/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/identity-management/auth/STSProfileCredentialsProvider.h>
#include <aws/sts/model/AssumeRoleRequest.h>
#include <aws/sts/STSClient.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/UUID.h>

#include <utility>

using namespace Aws;
using namespace Aws::Auth;

constexpr char CLASS_TAG[] = "STSProfileCredentialsProvider";

STSProfileCredentialsProvider::STSProfileCredentialsProvider()
    : STSProfileCredentialsProvider(GetConfigProfileName(), std::chrono::minutes(60)/*duration*/, nullptr/*stsClientFactory*/)
{
}

STSProfileCredentialsProvider::STSProfileCredentialsProvider(const Aws::String& profileName, std::chrono::minutes duration)
    : STSProfileCredentialsProvider(profileName, duration, nullptr/*stsClientFactory*/)
{
}

STSProfileCredentialsProvider::STSProfileCredentialsProvider(const Aws::String& profileName, std::chrono::minutes duration, const std::function<Aws::STS::STSClient*(const AWSCredentials&)> &stsClientFactory)
      : m_profileName(profileName),
        m_duration(duration),
        m_reloadFrequency(std::chrono::minutes(std::max(int64_t(5), static_cast<int64_t>(duration.count()))) - std::chrono::minutes(5)),
        m_stsClientFactory(stsClientFactory)
{
}

AWSCredentials STSProfileCredentialsProvider::GetAWSCredentials()
{
    RefreshIfExpired();
    Utils::Threading::ReaderLockGuard guard(m_reloadLock);
    return m_credentials;
}

void STSProfileCredentialsProvider::RefreshIfExpired()
{
    Utils::Threading::ReaderLockGuard guard(m_reloadLock);
    if (!IsTimeToRefresh(static_cast<long>(m_reloadFrequency.count())) || !m_credentials.IsExpiredOrEmpty())
    {
       return;
    }

    guard.UpgradeToWriterLock();
    if (!IsTimeToRefresh(static_cast<long>(m_reloadFrequency.count())) || !m_credentials.IsExpiredOrEmpty()) // double-checked lock to avoid refreshing twice
    {
        return;
    }

    Reload();
}

enum class ProfileState
{
    Invalid,
    Static,
    Process,
    SourceProfile,
    SelfReferencing, // special case of SourceProfile.
};

/*
 * A valid profile can be in one of the following states. Any other state is considered invalid.
 +---------+-----------+-----------+--------------+
|         |           |           |              |
| Role    | Source    |  Process  | Static       |
| ARN     | Profile   |           | Credentials  |
+------------------------------------------------+
|         |           |           |              |
|  false  |  false    |  false    |  TRUE        |
|         |           |           |              |
|  false  |  false    |  TRUE     |  false       |
|         |           |           |              |
|  TRUE   |  TRUE     |  false    |  false       |
|         |           |           |              |
|  TRUE   |  TRUE     |  false    |  TRUE        |
|         |           |           |              |
+---------+-----------+-----------+--------------+

*/
static ProfileState CheckProfile(const Aws::Config::Profile& profile, bool topLevelProfile)
{
    constexpr int STATIC_CREDENTIALS = 1;
    constexpr int PROCESS_CREDENTIALS = 2;
    constexpr int SOURCE_PROFILE = 4;
    constexpr int ROLE_ARN = 8;

    int state = 0;

    if (!profile.GetCredentials().IsExpiredOrEmpty())
    {
        state += STATIC_CREDENTIALS;
    }

    if (!profile.GetCredentialProcess().empty())
    {
        state += PROCESS_CREDENTIALS;
    }

    if (!profile.GetSourceProfile().empty())
    {
        state += SOURCE_PROFILE;
    }

    if (!profile.GetRoleArn().empty())
    {
        state += ROLE_ARN;
    }

    if (topLevelProfile)
    {
        switch(state)
        {
            case 1:
                return ProfileState::Static;
            case 2:
                return ProfileState::Process;
            case 12: // just source profile && role arn available
                return ProfileState::SourceProfile;
            case 13: // static creds && source profile && role arn
                if (profile.GetName() == profile.GetSourceProfile())
                {
                    return ProfileState::SelfReferencing;
                }
                // source-profile over-rule static credentials in top-level profiles (except when self-referencing)
                return ProfileState::SourceProfile;
            default:
                // All other cases are considered malformed configuration.
                return ProfileState::Invalid;
        }
    }
    else
    {
        switch(state)
        {
            case 1:
                return ProfileState::Static;
            case 2:
                return ProfileState::Process;
            case 12: // just source profile && role arn available
                return ProfileState::SourceProfile;
            case 13: // static creds && source profile && role arn
                if (profile.GetName() == profile.GetSourceProfile())
                {
                    return ProfileState::SelfReferencing;
                }
                return ProfileState::Static; // static credentials over-rule source-profile (except when self-referencing)
            default:
                // All other cases are considered malformed configuration.
                return ProfileState::Invalid;
        }
    }

}

void STSProfileCredentialsProvider::Reload()
{
    // make a copy of the profiles map to be able to set credentials on the individual profiles when assuming role
    auto loadedProfiles = Aws::Config::GetCachedConfigProfiles();
    auto profileIt = loadedProfiles.find(m_profileName);

    if(profileIt == loadedProfiles.end())
    {
        AWS_LOGSTREAM_ERROR(CLASS_TAG, "Profile " << m_profileName <<" was not found in the shared configuration file.");
        m_credentials = {};
        return;
    }

    ProfileState profileState = CheckProfile(profileIt->second, true/*topLevelProfile*/);

    if (profileState == ProfileState::Static)
    {
        m_credentials = profileIt->second.GetCredentials();
        AWSCredentialsProvider::Reload();
        return;
    }

    if (profileState == ProfileState::Process)
    {
        const auto& creds = GetCredentialsFromProcess(profileIt->second.GetCredentialProcess());
        if (!creds.IsExpiredOrEmpty())
        {
            m_credentials = creds;
            AWSCredentialsProvider::Reload();
        }
        return;
    }

    if (profileState == ProfileState::Invalid)
    {
        AWS_LOGSTREAM_ERROR(CLASS_TAG, "Profile " << profileIt->second.GetName() << " is invalid. Check its configuration.");
        m_credentials = {};
        return;
    }

    if (profileState == ProfileState::SourceProfile)
    {
        // A top level profile with a 'SourceProfile' state (determined by CheckProfile rules) means that its static
        // credentials will be ignored. So, it's ok to clear them out here to simplify the logic in the chaining loop
        // below.
        profileIt->second.SetCredentials({});
    }

    AWS_LOGSTREAM_INFO(CLASS_TAG, "Profile " << profileIt->second.GetName()
            << " has a role ARN. Attempting to load its source credentials from profile "
            << profileIt->second.GetSourceProfile());

    Aws::Vector<Config::AWSProfileConfigLoader::ProfilesContainer::iterator> sourceProfiles;
    Aws::Set<Aws::String> visitedProfiles;

    auto currentProfile = profileIt;
    sourceProfiles.push_back(currentProfile);

    // build the chain (DAG)
    while(!currentProfile->second.GetSourceProfile().empty())
    {
        ProfileState currentProfileState = CheckProfile(currentProfile->second, false /*topLevelProfile*/);
        auto currentProfileName = currentProfile->second.GetName();
        if (currentProfileState == ProfileState::Invalid)
        {
            AWS_LOGSTREAM_ERROR(CLASS_TAG, "Profile " << profileIt->second.GetName() << " is invalid. Check its configuration.");
            m_credentials = {};
            return;
        }

        // terminate the chain as soon as we hit a profile with either static credentials or credential process
        if (currentProfileState == ProfileState::Static || currentProfileState == ProfileState::Process)
        {
            break;
        }

        if (currentProfileState == ProfileState::SelfReferencing)
        {
            sourceProfiles.push_back(currentProfile);
            break;
        }

        // check if we have a circular reference in the graph.
        if (visitedProfiles.find(currentProfileName) != visitedProfiles.end())
        {
            // TODO: print the whole DAG for better debugging
            AWS_LOGSTREAM_ERROR(CLASS_TAG, "Profile " << currentProfileName << " has a circular reference. Aborting.");
            m_credentials = {};
            return;
        }

        visitedProfiles.emplace(currentProfileName);

        const auto it = loadedProfiles.find(currentProfile->second.GetSourceProfile());
        if(it == loadedProfiles.end())
        {
            // TODO: print the whole DAG for better debugging
            AWS_LOGSTREAM_ERROR(CLASS_TAG, "Profile " << currentProfileName << " has an invalid source profile " << currentProfile->second.GetSourceProfile());
            m_credentials = {};
            return;
        }
        currentProfile = it;
        sourceProfiles.push_back(currentProfile);
    }

    // The last profile added to the stack is not checked. Check it now.
    if (!sourceProfiles.empty())
    {
        if (CheckProfile(sourceProfiles.back()->second, false /*topLevelProfile*/) == ProfileState::Invalid)
        {
            AWS_LOGSTREAM_ERROR(CLASS_TAG, "Profile " << sourceProfiles.back()->second.GetName() << " is invalid. Check its configuration.");
            m_credentials = {};
            return;
        }
    }

    while (sourceProfiles.size() > 1)
    {
        const auto profile = sourceProfiles.back()->second;
        sourceProfiles.pop_back();
        AWSCredentials stsCreds;
        if (profile.GetCredentialProcess().empty())
        {
            assert(!profile.GetCredentials().IsEmpty());
            stsCreds = profile.GetCredentials();
        }
        else
        {
            stsCreds = GetCredentialsFromProcess(profile.GetCredentialProcess());
        }

        // get the role arn from the profile at the top of the stack (which hasn't been popped out yet)
        const auto arn = sourceProfiles.back()->second.GetRoleArn();
        const auto& assumedCreds = GetCredentialsFromSTS(stsCreds, arn);
        sourceProfiles.back()->second.SetCredentials(assumedCreds);
    }

    if (!sourceProfiles.empty())
    {
        assert(profileIt == sourceProfiles.back());
        assert(!profileIt->second.GetCredentials().IsEmpty());
    }

    m_credentials = profileIt->second.GetCredentials();
    AWSCredentialsProvider::Reload();
}

AWSCredentials STSProfileCredentialsProvider::GetCredentialsFromSTSInternal(const Aws::String& roleArn, Aws::STS::STSClient* client)
{
    using namespace Aws::STS::Model;
    AssumeRoleRequest assumeRoleRequest;
    assumeRoleRequest
        .WithRoleArn(roleArn)
        .WithRoleSessionName(Aws::Utils::UUID::RandomUUID())
        .WithDurationSeconds(static_cast<int>(std::chrono::seconds(m_duration).count()));
    auto outcome = client->AssumeRole(assumeRoleRequest);
    if (outcome.IsSuccess())
    {
        const auto& modelCredentials = outcome.GetResult().GetCredentials();
        return {modelCredentials.GetAccessKeyId(),
                modelCredentials.GetSecretAccessKey(),
                modelCredentials.GetSessionToken(),
                modelCredentials.GetExpiration()};
    }
    else
    {
        AWS_LOGSTREAM_ERROR(CLASS_TAG, "Failed to assume role " << roleArn);
    }
    return {};
}

AWSCredentials STSProfileCredentialsProvider::GetCredentialsFromSTS(const AWSCredentials& credentials, const Aws::String& roleArn)
{
    using namespace Aws::STS::Model;
    if (m_stsClientFactory) {
        return GetCredentialsFromSTSInternal(roleArn, m_stsClientFactory(credentials));
    }

    Aws::STS::STSClient stsClient {credentials};
    return GetCredentialsFromSTSInternal(roleArn, &stsClient);
}
