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

    class AWS_S3_API S3ExpressAuthSchemeResolver : public  smithy::SigV4MultiAuthSchemeResolver<>{

        public:        
        Aws::Vector<smithy::AuthSchemeOption> resolveAuthScheme(const ServiceAuthSchemeParameters& identityProperties) override
        {
            //use resolved endpoint params to return
            auto authSchemeNameIt = identityProperties.additionalProperties.find(smithy::AUTH_SCHEME_PROPERTY);
            if(authSchemeNameIt != identityProperties.additionalProperties.end())
            {
                auto authSchemeName = authSchemeNameIt->second.template get<Aws::String>().c_str();
                if(strcmp(authSchemeName, S3::S3_EXPRESS_SIGNER_NAME) == 0)
                {
                    return {S3ExpressSigV4AuthSchemeOption::s3ExpressSigV4AuthSchemeOption};
                }
            }
            return smithy::SigV4MultiAuthSchemeResolver<>::resolveAuthScheme(identityProperties);
        }
    };
}
}
