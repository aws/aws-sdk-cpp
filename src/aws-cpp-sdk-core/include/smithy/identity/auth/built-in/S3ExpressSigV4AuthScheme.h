/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/identity/auth/AuthScheme.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/auth/AuthSchemeResolverBase.h>
#include <smithy/identity/identity/AwsCredentialIdentityBase.h>
#include <smithy/identity/signer/built-in/S3ExpressSigner.h>



namespace smithy {
    constexpr char SIGV4_EXPRESS[] = "sigv4-s3express";

    class S3ExpressSigV4AuthScheme : public AuthScheme<AwsCredentialIdentityBase>
    {
    public:
        using AwsCredentialIdentityResolverT = IdentityResolverBase<IdentityT>;
        using AwsCredentialSignerT = AwsSignerBase<IdentityT>;
        using S3ExpressSigV4AuthSchemeParameters = DefaultAuthSchemeResolverParameters;

        //This allows to override the identity resolver
        explicit S3ExpressSigV4AuthScheme(std::shared_ptr<AwsCredentialIdentityResolverT> identityResolver, 
                                 const Aws::String& serviceName,
                                 const Aws::String& region)
            : AuthScheme(SIGV4_EXPRESS), 
            m_identityResolver{identityResolver}, 
            m_signer{Aws::MakeShared<S3ExpressSigner<AwsSigV4Signer>>("S3ExpressSigV4AuthScheme", serviceName, region)}
        {
            assert(m_identityResolver);
            assert(m_signer);
        }

        //delegate constructor
        explicit S3ExpressSigV4AuthScheme(std::shared_ptr<AwsCredentialIdentityResolverT> identityResolver, 
                                 const Aws::String& serviceName,
                                 const Aws::String& region,
                                 Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy policy,
                                 bool urlEscapePath)
            : AuthScheme(SIGV4_EXPRESS), 
            m_identityResolver{identityResolver}, 
            m_signer{Aws::MakeShared<S3ExpressSigner<AwsSigV4Signer>>("S3ExpressSigV4AuthScheme", serviceName, region, policy, urlEscapePath)}
        {
            assert(m_identityResolver);
            assert(m_signer);
        }

        //delegate constructor
        explicit S3ExpressSigV4AuthScheme(const Aws::String& serviceName,
                                 const Aws::String& region)
            : S3ExpressSigV4AuthScheme(Aws::MakeShared<DefaultAwsCredentialIdentityResolver>("S3ExpressSigV4AuthScheme"),  
                              serviceName,
                              region)
        {
        }

        //For legacy constructors, signing requires additonal input parameters
        explicit S3ExpressSigV4AuthScheme(const Aws::String& serviceName,
                                 const Aws::String& region,
                                 Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy policy,
                                 bool urlEscapePath)
            : S3ExpressSigV4AuthScheme(Aws::MakeShared<DefaultAwsCredentialIdentityResolver>("S3ExpressSigV4AuthScheme"),  
                              serviceName,
                              region,
                              policy,
                              urlEscapePath)
        {
        }

        virtual ~S3ExpressSigV4AuthScheme() = default;

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
