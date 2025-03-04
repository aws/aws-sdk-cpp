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
            m_signer{Aws::MakeShared<AwsSigV4Signer>("SigV4AuthScheme", serviceName, region)},
            m_serviceName{serviceName},m_region{region}
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
            m_signer{Aws::MakeShared<AwsSigV4Signer>("SigV4AuthScheme", serviceName, region, policy, urlEscapePath)},
            m_serviceName{serviceName},m_region{region}
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

        //For legacy constructors, signing requires additional input parameters
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

        virtual ~SigV4AuthScheme() = default;

        std::shared_ptr<AwsCredentialIdentityResolverT> identityResolver() override
        {
            return m_identityResolver;
        }

        std::shared_ptr<AwsCredentialSignerT> signer() override
        {
            return m_signer;
        }
        SigV4AuthScheme(SigV4AuthScheme&& ) = default;

        SigV4AuthScheme(const SigV4AuthScheme& other) :AuthScheme(SIGV4),
          m_identityResolver{other.m_identityResolver},
          m_signer{Aws::MakeShared<AwsSigV4Signer>("SigV4AuthScheme", other.m_serviceName, other.m_region)},
          m_serviceName{other.m_serviceName},
          m_region{other.m_region}
        {
        }

        SigV4AuthScheme& operator=(const SigV4AuthScheme& other) {
          if (this != &other) {
            m_identityResolver = other.m_identityResolver;
            m_signer = Aws::MakeShared<AwsSigV4Signer>("SigV4AuthScheme", other.m_serviceName, other.m_region);
            m_serviceName = other.m_serviceName;
            m_region = other.m_region;
          }
          return *this;
        }

        SigV4AuthScheme& operator=( SigV4AuthScheme&&) = default;

    protected:
        std::shared_ptr<AwsCredentialIdentityResolverT> m_identityResolver;
        std::shared_ptr<AwsCredentialSignerT> m_signer;
        Aws::String m_serviceName;
        Aws::String m_region;
    };
}
