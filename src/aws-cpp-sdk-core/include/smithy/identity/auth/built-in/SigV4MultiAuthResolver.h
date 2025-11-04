/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/auth/signer/AWSAuthV4Signer.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <smithy/client/AwsSmithyClientBase.h>
#include <smithy/identity/auth/AuthSchemeResolverBase.h>
#include <smithy/identity/auth/built-in/SigV4AuthSchemeOption.h>
#include <smithy/identity/auth/built-in/SigV4aAuthSchemeOption.h>
#include <smithy/identity/auth/built-in/SigV4AuthScheme.h>

/**
 * This is an auth scheme resolver prioritizing endpoints2.0 auth resolution
 * used for s3 which supersedes the model based auth resolution we do in GenericAuthResolver.
 */

namespace smithy {
    template<typename EndPointProviderType, typename ClientConfigType,typename ServiceAuthSchemeParametersT = DefaultAuthSchemeResolverParameters>
    class SigV4MultiAuthSchemeResolver : public AuthSchemeResolverBase<ServiceAuthSchemeParametersT, ClientConfigType>
    {
    public:
        SigV4MultiAuthSchemeResolver(const Aws::Vector<AuthSchemeOption>& allowedAuth) : m_allowedAuth(allowedAuth) {}
        SigV4MultiAuthSchemeResolver() = default;

        void Init(const ClientConfigType& config) override{
            m_endpointProviderForAuth = Aws::MakeShared<EndPointProviderType>("SigV4MultiAuthSchemeResolver");
            m_endpointProviderForAuth->InitBuiltInParameters(config);
        }

        using ServiceAuthSchemeParameters = ServiceAuthSchemeParametersT;
        virtual ~SigV4MultiAuthSchemeResolver() = default;

        Aws::Vector<AuthSchemeOption> resolveAuthSchemeImpl(const ServiceAuthSchemeParameters& identityProperties) override
        {
            if (!m_allowedAuth.empty()) {
              // This code path will not currently be taken, but we should enable a way for the user to disable preference for endpoints2.0 resolution and use the preference list
              return m_allowedAuth;
            }
            //pack endpoint params from identityProperties
            Aws::Endpoint::EndpointParameters epParams;

            for (auto& identParam : identityProperties.additionalProperties) {
              if (identParam.second.template holds_alternative<bool>())
              {
                epParams.emplace_back(Aws::Endpoint::EndpointParameter(identParam.first, identParam.second.template get<bool>()));
              }
              if (identParam.second.template holds_alternative<Aws::String>())
              {
                epParams.emplace_back(Aws::Endpoint::EndpointParameter(identParam.first ,identParam.second.template get<Aws::String>()));
              }
            }

            //resolve endpoint first time to fetch auth schemes
            if (m_endpointProviderForAuth) {
              auto epResolutionOutcome = m_endpointProviderForAuth->ResolveEndpoint(epParams);
              if (epResolutionOutcome.IsSuccess())
              {
                auto endpoint = std::move(epResolutionOutcome.GetResultWithOwnership());
                if (endpoint.GetAttributes())
                {
                  auto authSchemeName = endpoint.GetAttributes()->authScheme.GetName();
                  if(strcmp(authSchemeName.c_str(),Aws::Auth::ASYMMETRIC_SIGV4_SIGNER) == 0)
                  {
                    return {SigV4aAuthSchemeOption::sigV4aAuthSchemeOption};
                  }
                  else if(strcmp(authSchemeName.c_str(),Aws::Auth::SIGV4_SIGNER) == 0)
                  {
                    return {SigV4AuthSchemeOption::sigV4AuthSchemeOption};
                  }
                }
              }
            }

            return {SigV4AuthSchemeOption::sigV4AuthSchemeOption};
        }

    private:
      Aws::Vector<AuthSchemeOption> m_allowedAuth;

    protected:
        std::shared_ptr<EndPointProviderType> m_endpointProviderForAuth;
    };
}