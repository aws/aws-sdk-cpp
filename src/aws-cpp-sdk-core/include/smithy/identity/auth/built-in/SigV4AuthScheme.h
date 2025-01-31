/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/identity/auth/AuthScheme.h>
#include <smithy/identity/auth/built-in/SigV4AuthSchemeOption.h>

#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>

#include <smithy/identity/identity/AwsCredentialIdentityBase.h>
#include <smithy/identity/signer/built-in/SigV4Signer.h>



namespace smithy {
    constexpr char SIGV4[] = "aws.auth#sigv4";

    class SigV4AuthScheme : public AuthScheme<AwsCredentialIdentityBase>
    {
    public:
        using AwsCredentialIdentityResolverT = IdentityResolverBase<IdentityT>;
        using AwsCredentialSignerT = AwsSignerBase<IdentityT>;
        using SigV4AuthSchemeParameters = DefaultAuthSchemeResolverParameters;

        //This allows to override the identity resolver
        explicit SigV4AuthScheme(std::shared_ptr<AwsCredentialIdentityResolverT> identityResolver, 
                                 const Aws::String& serviceName,
                                 const Aws::String& region)
            : AuthScheme(SIGV4), 
            m_identityResolver{identityResolver}, 
            m_signer{Aws::MakeShared<AwsSigV4Signer>("SigV4AuthScheme", serviceName, region)}
        {
            assert(m_identityResolver);
            assert(m_signer);
        }

        //delegate constructor
        explicit SigV4AuthScheme(std::shared_ptr<AwsCredentialIdentityResolverT> identityResolver, 
                                 const Aws::String& serviceName,
                                 const Aws::String& region,
                                 Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy policy,
                                 bool urlEscapePath)
            : AuthScheme(SIGV4), 
            m_identityResolver{identityResolver}, 
            m_signer{Aws::MakeShared<AwsSigV4Signer>("SigV4AuthScheme", serviceName, region, policy, urlEscapePath)}
        {
            assert(m_identityResolver);
            assert(m_signer);
        }

        //delegate constructor
        explicit SigV4AuthScheme(const Aws::String& serviceName,
                                 const Aws::String& region)
            : SigV4AuthScheme(Aws::MakeShared<DefaultAwsCredentialIdentityResolver>("SigV4AuthScheme"),  
                              serviceName,
                              region)
        {
        }

        //For legacy constructors, signing requires additonal input parameters
        explicit SigV4AuthScheme(const Aws::String& serviceName,
                                 const Aws::String& region,
                                 Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy policy,
                                 bool urlEscapePath)
            : SigV4AuthScheme(Aws::MakeShared<DefaultAwsCredentialIdentityResolver>("SigV4AuthScheme"),  
                              serviceName,
                              region,
                              policy,
                              urlEscapePath)
        {
        }

        /*
            for some services, there can be a different variant of v4 signer. Example: s3 express
            This constructor allows to specify the signer type abiding by the constraints of the authscheme
        */
        explicit SigV4AuthScheme(std::shared_ptr<AwsCredentialIdentityResolverT> identityResolver,
                                 std::shared_ptr<AwsCredentialSignerT>&& signer)
            : AuthScheme(SIGV4), 
            m_identityResolver{identityResolver}, 
            m_signer{std::move(signer)}
        {
            assert(m_identityResolver);
            assert(m_signer);
        }

        virtual ~SigV4AuthScheme() = default;

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
