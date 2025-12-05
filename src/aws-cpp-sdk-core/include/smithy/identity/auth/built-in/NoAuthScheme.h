/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/identity/auth/AuthScheme.h>
#include <smithy/identity/auth/built-in/NoAuthSchemeOption.h>

#include <smithy/identity/identity/AwsCredentialIdentityBase.h>
#include <smithy/identity/signer/built-in/NoAuthSigner.h>
#include <smithy/identity/resolver/built-in/NoAuthIdentityResolver.h>

namespace smithy {
    constexpr char NOAUTH[] = "smithy.api#noAuth";

    class NoAuthScheme : public AuthScheme<AwsCredentialIdentityBase>
    {
    public:
        using AwsCredentialIdentityResolverT = IdentityResolverBase<IdentityT>;
        using AwsCredentialSignerT = AwsSignerBase<IdentityT>;

        explicit NoAuthScheme()
            : AuthScheme(NOAUTH),
            m_signer{Aws::MakeShared<AwsNoAuthSigner>("NoAuthScheme")},
            m_identityResolver{Aws::MakeShared<NoAuthIdentityResolver>("NoAuthScheme")}
        {
            assert(m_signer);
            assert(m_identityResolver);
        }

        explicit NoAuthScheme(std::shared_ptr<AwsCredentialIdentityResolverT> identityResolver,
                                    const Aws::String& serviceName,
                                    const Aws::String& region)
              : AuthScheme(NOAUTH),
              m_signer{Aws::MakeShared<AwsNoAuthSigner>("NoAuthScheme")},
              m_identityResolver{Aws::MakeShared<NoAuthIdentityResolver>("NoAuthScheme")}
          {
            AWS_UNREFERENCED_PARAM(identityResolver);
            AWS_UNREFERENCED_PARAM(serviceName);
            AWS_UNREFERENCED_PARAM(region);
            assert(m_signer);
            assert(m_identityResolver);
          }

        explicit NoAuthScheme(const Aws::String& serviceName,
                                  const Aws::String& region)
            : NoAuthScheme(nullptr, serviceName, region)
        {
          assert(m_signer);
          assert(m_identityResolver);
        }

        //legacy constructors
        explicit NoAuthScheme(std::shared_ptr<AwsCredentialIdentityResolverT> identityResolver, const Aws::String& serviceName, const Aws::String& region, Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy policy, bool urlEscape)
            :  AuthScheme(NOAUTH),
            m_signer{Aws::MakeShared<AwsNoAuthSigner>("NoAuthScheme")},
            m_identityResolver{Aws::MakeShared<NoAuthIdentityResolver>("NoAuthScheme")}
        {
          AWS_UNREFERENCED_PARAM(identityResolver);
          AWS_UNREFERENCED_PARAM(serviceName);
          AWS_UNREFERENCED_PARAM(region);
          AWS_UNREFERENCED_PARAM(policy);
          AWS_UNREFERENCED_PARAM(urlEscape);
          assert(m_signer);
          assert(m_identityResolver);
        }

        virtual ~NoAuthScheme() = default;

        std::shared_ptr<AwsCredentialIdentityResolverT> identityResolver() override
        {
            return m_identityResolver;
        }

        std::shared_ptr<AwsCredentialSignerT> signer() override
        {
            return m_signer;
        }

    protected:
        std::shared_ptr<AwsCredentialSignerT> m_signer;
        std::shared_ptr<AwsCredentialIdentityResolverT> m_identityResolver;
    };
}