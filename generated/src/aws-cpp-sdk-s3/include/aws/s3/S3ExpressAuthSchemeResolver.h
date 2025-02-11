/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/s3/S3ExpressSigner.h>
#include <smithy/identity/auth/built-in/SigV4MultiAuthResolver.h>
#include <aws/s3/S3ExpressSigV4AuthSchemeOption.h>
#include <aws/s3/S3ExpressSigV4AuthScheme.h>

namespace Aws {
namespace S3 {
    class AWS_S3_API S3ExpressAuthSchemeResolver : public  smithy::SigV4MultiAuthSchemeResolver<S3EndpointProvider, S3::S3ClientConfiguration>{

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
                auto epResolutionOutcome = m_endpointProviderForAuth->ResolveEndpoint(epParams);
                if (epResolutionOutcome.IsSuccess())
                {
                    auto endpoint = std::move(epResolutionOutcome.GetResultWithOwnership());
                    if (endpoint.GetAttributes())
                    {
                        auto authSchemeName = endpoint.GetAttributes()->authScheme.GetName();
                        if(strcmp(authSchemeName.c_str(),Aws::Auth::ASYMMETRIC_SIGV4_SIGNER) == 0)
                        {
                        return {smithy::SigV4aAuthSchemeOption::sigV4aAuthSchemeOption};
                        }
                        else if(strcmp(authSchemeName.c_str(),Aws::Auth::SIGV4_SIGNER) == 0)
                        {
                        return {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption};
                        }
                        else if(strcmp(authSchemeName.c_str(), S3::S3_EXPRESS_SIGNER_NAME) == 0)
                        {
                            return {S3ExpressSigV4AuthSchemeOption::s3ExpressSigV4AuthSchemeOption};
                        }
                    }
                }
            }

            return {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption};
        }
    };
}
}
