/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/identity/resolver/AwsIdentityResolverBase.h>
#include <smithy/identity/identity/AwsBearerTokenIdentity.h>
#include <aws/core/auth/bearer-token-provider/SSOBearerTokenProvider.h>
#include <aws/core/auth/bearer-token-provider/AWSBearerTokenProviderBase.h>


namespace smithy {

    static const char SSO_DEFAULT_BEARER_TOKEN_PROVIDER_CHAIN_LOG_TAG[] = "SSOBearerTokenProvider";
    static const char BEARER_TOKEN_PROVIDER_CHAIN_LOG_TAG[] = "BearerTokenProvider";

    class AwsBearerTokenIdentityResolver : public IdentityResolverBase<AwsBearerTokenIdentity> {
    public:
        using IdentityT = AwsBearerTokenIdentity;
        virtual ~AwsBearerTokenIdentityResolver() = default;

        explicit AwsBearerTokenIdentityResolver(const Aws::Vector<std::shared_ptr<Aws::Auth::AWSBearerTokenProviderBase> >& providerChain) : m_providerChainLegacy{providerChain}
        {

        }

        ResolveIdentityFutureOutcome getIdentity(const IdentityProperties& identityProperties, const AdditionalParameters& additionalParameters) override
        {
            for (auto&& bearerTokenProvider : m_providerChainLegacy)
            {
                if(!bearerTokenProvider) {
                    AWS_LOGSTREAM_FATAL(BEARER_TOKEN_PROVIDER_CHAIN_LOG_TAG,
                                        "Unexpected nullptr in DefaultBearerTokenProviderChain::m_providerChain");
                    return Aws::Client::AWSError(Aws::Client::CoreErrors::INVALID_PARAMETER_VALUE, "", "Unexpected nullptr in BearerTokenProviderChain::m_providerChain", false);
                }
                auto bearerToken = bearerTokenProvider->GetAWSBearerToken();
                if(!bearerToken.IsExpiredOrEmpty())
                {
                    return ResolveIdentityFutureOutcome(std::move( Aws::MakeUnique<AwsBearerTokenIdentity>( BEARER_TOKEN_PROVIDER_CHAIN_LOG_TAG, bearerToken.GetToken(), bearerToken.GetExpiration())));
                }
            }
        }
    protected:
        Aws::Vector<std::shared_ptr<Aws::Auth::AWSBearerTokenProviderBase> > m_providerChainLegacy;
    };

    class DefaultAwsBearerTokenIdentityResolver : public AwsBearerTokenIdentityResolver {
    public:
        using IdentityT = AwsBearerTokenIdentity;
        virtual ~DefaultAwsBearerTokenIdentityResolver() = default;

        DefaultAwsBearerTokenIdentityResolver() : AwsBearerTokenIdentityResolver({Aws::MakeShared<Aws::Auth::SSOBearerTokenProvider>(SSO_DEFAULT_BEARER_TOKEN_PROVIDER_CHAIN_LOG_TAG)}){};

    };
}