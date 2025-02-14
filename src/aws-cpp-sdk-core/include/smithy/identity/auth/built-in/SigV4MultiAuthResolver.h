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

namespace smithy {
    template<typename EndPointProviderType, typename ClientConfigType,typename ServiceAuthSchemeParametersT = DefaultAuthSchemeResolverParameters>
    class SigV4MultiAuthSchemeResolver : public AuthSchemeResolverBase<ServiceAuthSchemeParametersT, ClientConfigType>
    {
    private:
    public:

        void Init(const ClientConfigType& config) override{
            m_endpointProviderForAuth = Aws::MakeShared<EndPointProviderType>("SigV4MultiAuthSchemeResolver");
            m_endpointProviderForAuth->InitBuiltInParameters(config);
        }

        using ServiceAuthSchemeParameters = ServiceAuthSchemeParametersT;
        virtual ~SigV4MultiAuthSchemeResolver() = default;

        Aws::Vector<AuthSchemeOption> resolveAuthScheme(const ServiceAuthSchemeParameters& identityProperties) override
        {
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
    protected:
        std::shared_ptr<EndPointProviderType> m_endpointProviderForAuth;
    };
}