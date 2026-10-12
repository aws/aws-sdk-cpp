/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/identity-management/auth/STSAssumeRoleCredentialsProvider.h>
#include <aws/core/internal/CredentialsCachingProvider.h>
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

        // STSRetrieveProvider retrieves credentials through the owner's RetrieveCredentials().
        class STSAssumeRoleCredentialsProvider::STSRetrieveProvider : public AWSCredentialsProvider
        {
        public:
            explicit STSRetrieveProvider(STSAssumeRoleCredentialsProvider& owner) : m_owner(owner) {}

            AWSCredentials GetAWSCredentials() override { return m_owner.RetrieveCredentials(); }

        private:
            STSAssumeRoleCredentialsProvider& m_owner;
        };

        STSAssumeRoleCredentialsProvider::STSAssumeRoleCredentialsProvider(const Aws::String& roleArn, const Aws::String& sessionName,
            const Aws::String& externalId, int loadFrequency, const std::shared_ptr<Aws::STS::STSClient>& stsClient) :
            m_stsClient(stsClient == nullptr ? Aws::MakeShared<Aws::STS::STSClient>(CLASS_TAG) : stsClient),
            m_roleArn(roleArn), m_sessionName(sessionName), m_externalId(externalId),
            m_loadFrequency(loadFrequency),
            m_cachingProvider(Aws::MakeShared<Aws::Internal::CredentialsCachingProvider>(CLASS_TAG, Aws::MakeShared<STSRetrieveProvider>(CLASS_TAG, *this)))
        {
            if (sessionName.empty())
            {   
                Aws::StringStream ss;
                ss << "aws-sdk-cpp-" << Aws::Utils::DateTime::CurrentTimeMillis();
                m_sessionName = ss.str();
            }
            AWS_LOGSTREAM_INFO(CLASS_TAG, "Role ARN set to: " << m_roleArn << ". Session Name set to: " << m_sessionName);
        }

        AWSCredentials STSAssumeRoleCredentialsProvider::GetAWSCredentials()
        {
            return m_cachingProvider->GetAWSCredentials();
        }

        void STSAssumeRoleCredentialsProvider::Invalidate(const Aws::String& accessKeyId)
        {
            m_cachingProvider->Invalidate(accessKeyId);
        }

        AWSCredentials STSAssumeRoleCredentialsProvider::RetrieveCredentials()
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
            if (assumeRoleOutcome.IsSuccess())
            {
                const auto& stsCredentials = assumeRoleOutcome.GetResult().GetCredentials();
                AWSCredentials credentials(stsCredentials.GetAccessKeyId(), stsCredentials.GetSecretAccessKey(), stsCredentials.GetSessionToken());
                credentials.SetExpiration(stsCredentials.GetExpiration());
                credentials.AddUserAgentFeature(Aws::Client::UserAgentFeature::CREDENTIALS_STS_ASSUME_ROLE);
                AWS_LOGSTREAM_DEBUG(CLASS_TAG, "Credentials refreshed with new expiry " << 
                    stsCredentials.GetExpiration().ToGmtString(DateFormat::ISO_8601));
                return credentials;
            }
            else
            {
                AWS_LOGSTREAM_ERROR(CLASS_TAG, "Credentials refresh failed with error " << assumeRoleOutcome.GetError().GetExceptionName()
                        << " message: " << assumeRoleOutcome.GetError().GetMessage());
            }
            return AWSCredentials();
        }
    }
}