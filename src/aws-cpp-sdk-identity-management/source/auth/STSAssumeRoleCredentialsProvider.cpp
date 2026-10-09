/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/identity-management/auth/STSAssumeRoleCredentialsProvider.h>
#include <aws/core/auth/CredentialsCachingProvider.h>
#include <aws/sts/model/AssumeRoleRequest.h>
#include <aws/sts/STSClient.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/client/UserAgent.h>

using namespace Aws::Utils;
using namespace Aws::STS;

namespace Aws
{
    namespace Auth
    {
        static const char* CLASS_TAG = "STSAssumeRoleCredentialsProvider";

        // Fetch-only: one blocking AssumeRole call, no cache of its own.
        class STSAssumeRoleCredentialsProvider::STSFetchOnlyProvider : public AWSCredentialsProvider
        {
        public:
            STSFetchOnlyProvider(std::shared_ptr<Aws::STS::STSClient> stsClient, Aws::String roleArn,
                                 Aws::String sessionName, Aws::String externalId, int loadFrequency)
                : m_stsClient(std::move(stsClient)), m_roleArn(std::move(roleArn)), m_sessionName(std::move(sessionName)),
                  m_externalId(std::move(externalId)), m_loadFrequency(loadFrequency)
            {
            }

            AWSCredentials GetAWSCredentials() override
            {
                Model::AssumeRoleRequest assumeRoleRequest;
                assumeRoleRequest.WithRoleArn(m_roleArn)
                    .WithRoleSessionName(m_sessionName)
                    .WithDurationSeconds(m_loadFrequency);

                if (!m_externalId.empty())
                {
                    assumeRoleRequest.SetExternalId(m_externalId);
                }

                auto assumeRoleOutcome = m_stsClient->AssumeRole(assumeRoleRequest);
                if (!assumeRoleOutcome.IsSuccess())
                {
                    AWS_LOGSTREAM_ERROR(CLASS_TAG, "Credentials refresh failed with error " << assumeRoleOutcome.GetError().GetExceptionName()
                            << " message: " << assumeRoleOutcome.GetError().GetMessage());
                    return AWSCredentials();
                }

                const auto& stsCredentials = assumeRoleOutcome.GetResult().GetCredentials();
                AWSCredentials credentials(stsCredentials.GetAccessKeyId(), stsCredentials.GetSecretAccessKey(), stsCredentials.GetSessionToken());
                credentials.SetExpiration(stsCredentials.GetExpiration());
                credentials.AddUserAgentFeature(Aws::Client::UserAgentFeature::CREDENTIALS_STS_ASSUME_ROLE);
                AWS_LOGSTREAM_DEBUG(CLASS_TAG, "Credentials refreshed with new expiry " <<
                    stsCredentials.GetExpiration().ToGmtString(DateFormat::ISO_8601));
                return credentials;
            }

        private:
            std::shared_ptr<Aws::STS::STSClient> m_stsClient;
            Aws::String m_roleArn;
            Aws::String m_sessionName;
            Aws::String m_externalId;
            int m_loadFrequency;
        };

        STSAssumeRoleCredentialsProvider::STSAssumeRoleCredentialsProvider(const Aws::String& roleArn, const Aws::String& sessionName,
            const Aws::String& externalId, int loadFrequency, const std::shared_ptr<Aws::STS::STSClient>& stsClient)
        {
            auto resolvedStsClient = stsClient == nullptr ? Aws::MakeShared<Aws::STS::STSClient>(CLASS_TAG) : stsClient;
            Aws::String resolvedSessionName = sessionName;
            if (resolvedSessionName.empty())
            {
                Aws::StringStream ss;
                ss << "aws-sdk-cpp-" << Aws::Utils::DateTime::CurrentTimeMillis();
                resolvedSessionName = ss.str();
            }
            AWS_LOGSTREAM_INFO(CLASS_TAG, "Role ARN set to: " << roleArn << ". Session Name set to: " << resolvedSessionName);

            auto fetchOnly = Aws::MakeShared<STSFetchOnlyProvider>(CLASS_TAG, resolvedStsClient, roleArn, resolvedSessionName, externalId, loadFrequency);
            m_cachingProvider = Aws::MakeShared<CredentialsCachingProvider>(CLASS_TAG, fetchOnly);
        }

        AWSCredentials STSAssumeRoleCredentialsProvider::GetAWSCredentials()
        {
            return m_cachingProvider->GetAWSCredentials();
        }

        void STSAssumeRoleCredentialsProvider::Invalidate(const Aws::String& accessKeyId)
        {
            m_cachingProvider->Invalidate(accessKeyId);
        }
    }
}