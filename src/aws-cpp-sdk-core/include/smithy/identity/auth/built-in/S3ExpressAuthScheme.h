/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/identity/auth/AuthScheme.h>
#include <smithy/identity/auth/built-in/SigV4AuthSchemeOption.h>

#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>

#include <aws/s3/S3ExpressIdentity.h>

#include <smithy/identity/signer/built-in/S3ExpressSigner.h>
#include <aws/s3/S3ExpressSigner.h>
#include <smithy/identity/auth/built-in/SigV4AuthScheme.h>


namespace smithy {
    constexpr char SIGV4[] = "aws.auth#sigv4";

    class S3ExpressAuthScheme : public AuthScheme<Aws::S3::S3ExpressIdentity>
    {
    public:
        using AwsCredentialIdentityResolverT = IdentityResolverBase<IdentityT>;
        using AwsCredentialSignerT = AwsSignerBase<IdentityT>;
        using SigV4AuthSchemeParameters = DefaultAuthSchemeResolverParameters;

        //This allows to override the identity resolver
        explicit S3ExpressAuthScheme(std::shared_ptr<AwsCredentialIdentityResolverT> identityResolver, 
                                 const Aws::String& serviceName,
                                 const Aws::String& region)
            : AuthScheme(SIGV4), 
            m_identityResolver{identityResolver}, 
            m_signer{Aws::MakeShared<S3ExpressSigner>("SigV4AuthScheme", serviceName, region)}
        {
            assert(m_identityResolver);
            assert(m_signer);
        }

        //delegate constructor
        explicit S3ExpressAuthScheme(const Aws::String& serviceName,
                                 const Aws::String& region)
            : S3ExpressAuthScheme(Aws::MakeShared<DefaultAwsCredentialIdentityResolver>("SigV4AuthScheme"),  
                              serviceName,
                              region)
        {
        }

        virtual ~S3ExpressAuthScheme() = default;

        std::shared_ptr<AwsCredentialIdentityResolverT> identityResolver() override
        {
            return m_identityResolver;
        }

        std::shared_ptr<AwsCredentialSignerT> signer() override
        {
            return m_signer;
        }
    protected:
        std::shared_ptr<AwsCredentialIdentityResolverT> m_identityResolver;
        std::shared_ptr<AwsCredentialSignerT> m_signer;
    };
}
