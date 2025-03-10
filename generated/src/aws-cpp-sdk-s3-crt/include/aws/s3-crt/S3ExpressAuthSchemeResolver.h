/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/s3-crt/S3ExpressSigner.h>
#include <smithy/identity/auth/built-in/SigV4MultiAuthResolver.h>
#include <aws/s3-crt/S3ExpressSigV4AuthSchemeOption.h>
#include <aws/s3-crt/S3ExpressSigV4AuthScheme.h>

namespace Aws {
namespace S3Crt {
    class AWS_S3CRT_API S3ExpressAuthSchemeResolver : public  smithy::SigV4MultiAuthSchemeResolver<S3CrtEndpointProvider, S3Crt::S3CrtClientConfiguration>{

        public:
        Aws::Vector<smithy::AuthSchemeOption> resolveAuthScheme(const ServiceAuthSchemeParameters& identityProperties) override
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
            if(m_endpointProviderForAuth)
            {
                Aws::Vector<smithy::AuthSchemeOption> authSchemes{};
                Aws::UnorderedMap<Aws::String, smithy::AuthSchemeOption> authSchemeMap = 
                {   
                    {Aws::Auth::ASYMMETRIC_SIGV4_SIGNER, smithy::SigV4aAuthSchemeOption::sigV4aAuthSchemeOption},
                    {Aws::Auth::SIGV4_SIGNER, smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption},
                    {S3Crt::S3_EXPRESS_SIGNER_NAME, S3ExpressSigV4AuthSchemeOption::s3ExpressSigV4AuthSchemeOption}
                };
                authSchemes.reserve(authSchemeMap.size());
                auto authschemeMapper = [&](const Aws::String& schemeId){
                    auto it = authSchemeMap.find(schemeId);
                    if (it != authSchemeMap.end())
                    {
                        authSchemes.emplace_back(it->second);
                        authSchemeMap.erase(it);
                    }
                };
                auto epResolutionOutcome = m_endpointProviderForAuth->ResolveEndpoint(epParams);

                if (epResolutionOutcome.IsSuccess())
                {
                    auto endpoint = std::move(epResolutionOutcome.GetResultWithOwnership());
                    if (endpoint.GetAttributes())
                    {
                        auto authSchemeName = endpoint.GetAttributes()->authScheme.GetName();
                        authschemeMapper(authSchemeName);
                    }
                }
                std::transform(authSchemeMap.begin(), 
                  authSchemeMap.end(), 
                  std::back_inserter(authSchemes), 
                  [&](const std::pair<Aws::String, smithy::AuthSchemeOption>& elem){return elem.second;} );
                return authSchemes;
            }

            return {};
        }
    };
}
}
