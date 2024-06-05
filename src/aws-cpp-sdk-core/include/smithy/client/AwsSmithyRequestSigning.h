/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/identity/auth/AuthOption.h>
#include <smithy/identity/identity/AwsIdentity.h>
#include <smithy/identity/resolver/AwsIdentityResolverBase.h>
#include <smithy/identity/signer/AwsSignerBase.h>

#include <aws/core/utils/FutureOutcome.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/http/HttpRequest.h>

#include <aws/crt/Variant.h>
#include <aws/crt/Optional.h>
#include <aws/core/utils/memory/stl/AWSMap.h>

#include <cassert>


namespace smithy
{
    template <typename AuthSchemesVariantT>
    class AwsClientRequestSigning
    {
    public:
        using HttpRequest = Aws::Http::HttpRequest;
        using SigningError = Aws::Client::AWSError<Aws::Client::CoreErrors>;
        using SigningOutcome = Aws::Utils::FutureOutcome<Aws::Http::HttpRequest, SigningError>;

        static SigningOutcome SignRequest(const HttpRequest& HTTPRequest, const AuthOption& authOption,
                                          const Aws::UnorderedMap<Aws::String, AuthSchemesVariantT>& authSchemes)
        {
            auto authSchemeIt = authSchemes.find(authOption.schemeId);
            if (authSchemeIt == authSchemes.end())
            {
                assert(!"Auth scheme has not been found for a given auth option!");
                return (SigningError(Aws::Client::CoreErrors::CLIENT_SIGNING_FAILURE,
                                     "",
                                     "Requested AuthOption was not found within client Auth Schemes",
                                     false/*retryable*/));
            }

            AuthSchemesVariantT authScheme = *authSchemeIt;

            return SignWithAuthScheme(HTTPRequest, authScheme, authOption);
        }

    protected:
        struct SignerVisitor
        {
            SignerVisitor(const HttpRequest& httpRequest, const AuthOption& targetAuthOption)
                : m_httpRequest(httpRequest), m_targetAuthOption(targetAuthOption)
            {
            }

            const HttpRequest& m_httpRequest;
            const AuthOption& m_targetAuthOption;

            Aws::Crt::Optional<SigningOutcome> result;

            template <typename AuthSchemeAlternativeT>
            void operator()(AuthSchemeAlternativeT& authScheme)
            {
                // Auth Scheme Variant alternative contains the requested auth option
                assert(strcmp(authScheme.schemeId, m_targetAuthOption.schemeId) == 0);

                using IdentityT = typename decltype(authScheme)::IdentityT;
                using IdentityResolver = IdentityResolverBase<IdentityT>;
                using Signer = AwsSignerBase<IdentityT>;

                std::shared_ptr<IdentityResolver> identityResolver = authScheme.identityResolver();
                if (!identityResolver)
                {
                    result.emplace(SigningError(Aws::Client::CoreErrors::CLIENT_SIGNING_FAILURE,
                                                "",
                                                "Auth scheme provided a nullptr identityResolver",
                                                false/*retryable*/));
                    return;
                }

                static_assert(
                    std::is_same<IdentityResolverBase<IdentityT>, typename decltype(identityResolver
                                 )::IdentityT>::value);
                static_assert(std::is_base_of<IdentityResolverBase<IdentityT>, decltype(identityResolver)>::value);

                IdentityT identity = identityResolver->getIdentity(m_targetAuthOption.identityProperties);

                std::shared_ptr<Signer> signer = authScheme.signer();
                if (!signer)
                {
                    result.emplace(SigningError(Aws::Client::CoreErrors::CLIENT_SIGNING_FAILURE,
                                                "",
                                                "Auth scheme provided a nullptr signer",
                                                false/*retryable*/));
                    return;
                }


                static_assert(std::is_same<AwsSignerBase<IdentityT>, typename decltype(signer)::IdentityT>::value);
                static_assert(std::is_base_of<AwsSignerBase<IdentityT>, decltype(signer)>::value);

                result.emplace(signer->sign(m_httpRequest, identity, m_targetAuthOption.signerProperties));
            }
        };

        static
        SigningOutcome SignWithAuthScheme(const HttpRequest& HTTPRequest, const AuthSchemesVariantT& authSchemesVariant,
                                          const AuthOption& targetAuthOption)
        {
            SignerVisitor visitor(HTTPRequest, targetAuthOption);
            visitor.Visit(authSchemesVariant);

            if (!visitor.result)
            {
                return (SigningError(Aws::Client::CoreErrors::CLIENT_SIGNING_FAILURE,
                                     "",
                                     "Failed to sign with an unknown error",
                                     false/*retryable*/));
            }
            return std::move(*visitor.result);
        }
    };
}
