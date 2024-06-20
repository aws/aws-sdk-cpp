/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/client/common/AwsSmithyClientUtils.h>
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
    static const char AWS_SMITHY_CLIENT_SIGNING_TAG[] = "AwsClientRequestSigning";
    //4 Minutes
    static const std::chrono::milliseconds TIME_DIFF_MAX = std::chrono::minutes(4);
    //-4 Minutes
    static const std::chrono::milliseconds TIME_DIFF_MIN = std::chrono::minutes(-4);

    template <typename AuthSchemesVariantT>
    class AwsClientRequestSigning
    {
    public:
        using HttpRequest = Aws::Http::HttpRequest;
        using SigningError = Aws::Client::AWSError<Aws::Client::CoreErrors>;
        using SigningOutcome = Aws::Utils::FutureOutcome<Aws::Http::HttpRequest, SigningError>;
        using HttpResponseOutcome = Aws::Utils::Outcome<std::shared_ptr<Aws::Http::HttpResponse>, Aws::Client::AWSError<Aws::Client::CoreErrors>>;

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

        static bool AdjustClockSkew(HttpResponseOutcome& outcome, const AuthOption& authOption,
                                    const Aws::UnorderedMap<Aws::String, AuthSchemesVariantT>& authSchemes)
        {
            assert(!outcome.IsSuccess());
            AWS_LOGSTREAM_WARN(AWS_SMITHY_CLIENT_SIGNING_TAG, "If the signature check failed. This could be because of a time skew. Attempting to adjust the signer.");

            using DateTime = Aws::Utils::DateTime;
            DateTime serverTime = smithy::client::Utils::GetServerTimeFromError(outcome.GetError());

            auto authSchemeIt = authSchemes.find(authOption.schemeId);
            if (authSchemeIt == authSchemes.end())
            {
                assert(!"Auth scheme has not been found for a given auth option!");
                return false;
            }
            AuthSchemesVariantT authScheme = *authSchemeIt;

            ClockSkewVisitor visitor(outcome, serverTime, authOption);
            visitor.Visit(authScheme);

            return visitor.m_resultShouldWait;
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

        struct ClockSkewVisitor
        {
            using DateTime = Aws::Utils::DateTime;
            using Aws::Utils::DateFormat;
            using ClientError = Aws::Client::AWSError<Aws::Client::CoreErrors>;

            ClockSkewVisitor(HttpResponseOutcome& outcome, const DateTime& serverTime, const AuthOption& targetAuthOption)
                : m_outcome(outcome), m_serverTime(serverTime), m_targetAuthOption(targetAuthOption)
            {
            }

            bool m_resultShouldWait = false;
            HttpResponseOutcome& m_outcome;
            const Aws::Utils::DateTime& m_serverTime;
            const AuthOption& m_targetAuthOption;

            template <typename AuthSchemeAlternativeT>
            void operator()(AuthSchemeAlternativeT& authScheme)
            {
                // Auth Scheme Variant alternative contains the requested auth option
                assert(strcmp(authScheme.schemeId, m_targetAuthOption.schemeId) == 0);

                using IdentityT = typename decltype(authScheme)::IdentityT;
                using Signer = AwsSignerBase<IdentityT>;

                std::shared_ptr<Signer> signer = authScheme.signer();
                if (!signer)
                {
                    AWS_LOGSTREAM_ERROR(AWS_SMITHY_CLIENT_SIGNING_TAG, "Failed to adjust signing clock skew. Signer is null.");
                    return;
                }

                const auto signingTimestamp = signer->GetSigningTimestamp();
                if (!m_serverTime.WasParseSuccessful() || m_serverTime == DateTime())
                {
                    AWS_LOGSTREAM_DEBUG(AWS_SMITHY_CLIENT_SIGNING_TAG, "Date header was not found in the response, can't attempt to detect clock skew");
                    return;
                }

                AWS_LOGSTREAM_DEBUG(AWS_SMITHY_CLIENT_SIGNING_TAG, "Server time is " << m_serverTime.ToGmtString(DateFormat::RFC822) << ", while client time is " << DateTime::Now().ToGmtString(DateFormat::RFC822));
                auto diff = DateTime::Diff(m_serverTime, signingTimestamp);
                //only try again if clock skew was the cause of the error.
                if (diff >= TIME_DIFF_MAX || diff <= TIME_DIFF_MIN)
                {
                    diff = DateTime::Diff(m_serverTime, DateTime::Now());
                    AWS_LOGSTREAM_INFO(AWS_SMITHY_CLIENT_SIGNING_TAG, "Computed time difference as " << diff.count() << " milliseconds. Adjusting signer with the skew.");
                    signer->SetClockSkew(diff);
                    ClientError newError(m_outcome.GetError());
                    newError.SetRetryableType(Aws::Client::RetryableType::RETRYABLE);

                    m_outcome = std::move(newError);
                    m_resultShouldWait = true;
                }
            }
        };

    };
}
