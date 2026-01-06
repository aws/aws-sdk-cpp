/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/auth/bearer-token-provider/AWSBearerTokenProviderBase.h>
#include <aws/core/auth/bearer-token-provider/DefaultBearerTokenProviderChain.h>
#include <aws/core/auth/bearer-token-provider/SSOBearerTokenProvider.h>
#include <aws/core/auth/signer-provider/BearerTokenAuthSignerProvider.h>
#include <aws/core/auth/signer/AWSAuthBearerSigner.h>
#include <smithy/identity/identity/AwsBearerTokenIdentity.h>
#include <smithy/identity/resolver/AwsIdentityResolverBase.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/auth/bearer-token-provider/StaticBearerTokenProvider.h>

namespace smithy
{
static const char AWS_BEARER_TOKEN_BEDROCK[] = "AWS_BEARER_TOKEN_BEDROCK";

class AwsBearerTokenIdentityResolver
    : public IdentityResolverBase<AwsBearerTokenIdentityBase>
{
  public:
    using IdentityT = AwsBearerTokenIdentity;
    virtual ~AwsBearerTokenIdentityResolver() = default;

    AwsBearerTokenIdentityResolver() = default;

    AwsBearerTokenIdentityResolver(
        const Aws::Vector<
            std::shared_ptr<Aws::Auth::AWSBearerTokenProviderBase>>
            &providerChain)
        : m_providerChainLegacy{providerChain}
    {
    }

    AwsBearerTokenIdentityResolver(
        const std::shared_ptr<Aws::Auth::AWSBearerTokenProviderBase>
            &provider)
        : m_providerChainLegacy{provider}
    {
    }

    AwsBearerTokenIdentityResolver(const Aws::Auth::BearerTokenAuthSignerProvider &bearerTokenProvider):
    m_providerChainLegacy{[&](){
        auto signer = bearerTokenProvider.GetSigner(Aws::Auth::BEARER_SIGNER);
        Aws::Vector<std::shared_ptr<Aws::Auth::AWSBearerTokenProviderBase>> providerChain;
        if (signer) {
            //since signer enum is mapped to legacy AWSAuthBearerSigner, static cast is safe here and is needed
            providerChain.emplace_back((static_cast<Aws::Client::AWSAuthBearerSigner*>(signer.get()))->BearerTokenProvider());
        }
        return providerChain;
    }()}
    {

    }

    ResolveIdentityFutureOutcome
    getIdentity(const IdentityProperties &identityProperties,
                const AdditionalParameters &additionalParameters) override
    {
        AWS_UNREFERENCED_PARAM(identityProperties);
        AWS_UNREFERENCED_PARAM(additionalParameters);
        for (auto &bearerTokenProvider : m_providerChainLegacy)
        {
            if (!bearerTokenProvider)
            {
                AWS_LOGSTREAM_FATAL(
                    "BearerTokenProvider",
                    "Unexpected nullptr in "
                    "DefaultBearerTokenProviderChain::m_providerChain");
                return Aws::Client::AWSError<Aws::Client::CoreErrors>(
                    Aws::Client::CoreErrors::INVALID_PARAMETER_VALUE, "",
                    "Unexpected nullptr in "
                    "BearerTokenProviderChain::m_providerChain",
                    false);
            }
            auto bearerToken = bearerTokenProvider->GetAWSBearerToken();
            if (!bearerToken.IsExpiredOrEmpty())
            {
                auto outcomePtr = Aws::MakeUnique<AwsBearerTokenIdentity>(
                    "BearerTokenProvider");
                outcomePtr->token() = bearerToken.GetToken();
                outcomePtr->expiration() = bearerToken.GetExpiration();
                return ResolveIdentityFutureOutcome(std::move(outcomePtr));
            }
        }

        return Aws::Client::AWSError<Aws::Client::CoreErrors>(
            Aws::Client::CoreErrors::NOT_INITIALIZED, "",
            "No bearer token provider in chain found", false);
    }

    void AddBearerTokenProvider(
        std::shared_ptr<Aws::Auth::AWSBearerTokenProviderBase> provider)
    {
        m_providerChainLegacy.emplace_back(std::move(provider));
    }

  protected:
    Aws::Vector<std::shared_ptr<Aws::Auth::AWSBearerTokenProviderBase>>
        m_providerChainLegacy;
};

class DefaultAwsBearerTokenIdentityResolver
    : public AwsBearerTokenIdentityResolver
{
  public:
    using IdentityT = AwsBearerTokenIdentity;
    virtual ~DefaultAwsBearerTokenIdentityResolver() = default;

    DefaultAwsBearerTokenIdentityResolver()
        : AwsBearerTokenIdentityResolver(Aws::Vector<std::shared_ptr<Aws::Auth::AWSBearerTokenProviderBase>>{
            Aws::MakeShared<Aws::Auth::SSOBearerTokenProvider>("SSOBearerTokenProvider")}){};

    DefaultAwsBearerTokenIdentityResolver(const Aws::Client::ClientConfiguration::CredentialProviderConfiguration& config)
        : AwsBearerTokenIdentityResolver(Aws::Vector<std::shared_ptr<Aws::Auth::AWSBearerTokenProviderBase>>{
            Aws::MakeShared<Aws::Auth::SSOBearerTokenProvider>("SSOBearerTokenProvider", config.profile)}){};
};

class BedrockAwsBearerTokenIdentityResolver
    : public AwsBearerTokenIdentityResolver
{
public:
  using IdentityT = AwsBearerTokenIdentity;
  virtual ~BedrockAwsBearerTokenIdentityResolver() = default;

  BedrockAwsBearerTokenIdentityResolver()
  {
      m_providerChainLegacy.emplace_back(Aws::MakeShared<Aws::Auth::SSOBearerTokenProvider>("SSOBearerTokenProvider"));
      const Aws::String bedrockToken = Aws::Environment::GetEnv(AWS_BEARER_TOKEN_BEDROCK);
      if (!bedrockToken.empty())
      {
          m_providerChainLegacy.emplace_back(Aws::MakeShared<Aws::Auth::StaticAWSBearerTokenProvider>("StaticAWSBearerTokenProvider", bedrockToken));
      }
  };

  BedrockAwsBearerTokenIdentityResolver(const Aws::Client::ClientConfiguration::CredentialProviderConfiguration& config)
  {
      m_providerChainLegacy.emplace_back(Aws::MakeShared<Aws::Auth::SSOBearerTokenProvider>("SSOBearerTokenProvider", config.profile));
      const Aws::String bedrockToken = Aws::Environment::GetEnv(AWS_BEARER_TOKEN_BEDROCK);
      if (!bedrockToken.empty())
      {
        m_providerChainLegacy.emplace_back(Aws::MakeShared<Aws::Auth::StaticAWSBearerTokenProvider>("StaticAWSBearerTokenProvider", bedrockToken));
      }
  }
};

} // namespace smithy