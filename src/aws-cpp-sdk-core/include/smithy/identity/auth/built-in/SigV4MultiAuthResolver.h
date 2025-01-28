/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/identity/auth/AuthSchemeResolverBase.h>
#include <smithy/identity/auth/built-in/SigV4AuthSchemeOption.h>
#include <smithy/identity/auth/built-in/SigV4aAuthSchemeOption.h>
#include <smithy/identity/auth/built-in/S3ExpressSigV4AuthSchemeOption.h>
#include <aws/core/auth/signer/AWSAuthV4Signer.h>
#include <smithy/identity/signer/built-in/S3ExpressSigner.h>

namespace smithy {
    template<typename ServiceAuthSchemeParametersT = DefaultAuthSchemeResolverParameters>
    class SigV4MultiAuthSchemeResolver : public AuthSchemeResolverBase<ServiceAuthSchemeParametersT>
    {
    public:
        using ServiceAuthSchemeParameters = ServiceAuthSchemeParametersT;
        virtual ~SigV4MultiAuthSchemeResolver() = default;

        Aws::Vector<AuthSchemeOption> resolveAuthScheme(const ServiceAuthSchemeParameters& identityProperties) override
        {
            //use resolved endpoint params to return 
            auto authSchemeNameIt = identityProperties.additionalProperties.find(smithy::AUTH_SCHEME_PROPERTY);
            if(authSchemeNameIt != identityProperties.additionalProperties.end())
            {
                auto authSchemeName = authSchemeNameIt->second.template get<Aws::String>().c_str();
                if(strcmp(authSchemeName,Aws::Auth::ASYMMETRIC_SIGV4_SIGNER) == 0)
                {
                    return {SigV4aAuthSchemeOption::sigV4aAuthSchemeOption};
                }
                else if(strcmp(authSchemeName,Aws::Auth::SIGV4_SIGNER) == 0)
                {
                    return {SigV4AuthSchemeOption::sigV4AuthSchemeOption};
                }
                else if(strcmp(authSchemeName,smithy::S3_EXPRESS_SIGNER_NAME) == 0)
                {
                    return {S3ExpressSigV4AuthSchemeOption::s3ExpressSigV4AuthSchemeOption};
                }
            }
            return {SigV4AuthSchemeOption::sigV4AuthSchemeOption};
        }
    };
}