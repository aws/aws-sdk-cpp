/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/client/common/AwsSmithyClientUtils.h>
#include <smithy/identity/auth/AuthSchemeOption.h>
#include <smithy/identity/identity/AwsIdentity.h>
#include <smithy/identity/resolver/AwsIdentityResolverBase.h>
#include <smithy/identity/signer/AwsSignerBase.h>

#include <aws/core/utils/FutureOutcome.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/http/HttpRequest.h>

#include <aws/crt/Variant.h>
#include <aws/crt/Optional.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <smithy/identity/signer/built-in/SignerProperties.h>

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
        using SigningOutcome = Aws::Utils::FutureOutcome<std::shared_ptr<HttpRequest>, SigningError>;
        using HttpResponseOutcome = Aws::Utils::Outcome<std::shared_ptr<Aws::Http::HttpResponse>, Aws::Client::AWSError<Aws::Client::CoreErrors>>;
        using IdentityOutcome = Aws::Utils::Outcome<std::shared_ptr<smithy::AwsIdentity>, Aws::Client::AWSError<Aws::Client::CoreErrors>>;

        static IdentityOutcome ResolveIdentity(const client::AwsSmithyClientAsyncRequestContext& ctx,
          const Aws::UnorderedMap<Aws::String, AuthSchemesVariantT>& authSchemes)
        {
          auto authSchemeIt = authSchemes.find(ctx.m_authSchemeOption.schemeId);
          if (authSchemeIt == authSchemes.end())
          {
            assert(!"Auth scheme has not been found for a given auth option!");
            return (SigningError(Aws::Client::CoreErrors::CLIENT_SIGNING_FAILURE,
                                 "",
                                 "Requested AuthSchemeOption was not found within client Auth Schemes",
                                 false/*retryable*/));
          }

          const AuthSchemesVariantT& authScheme = authSchemeIt->second;
          IdentityVisitor visitor(ctx);
          AuthSchemesVariantT authSchemesVariantCopy(authScheme); // TODO: allow const visiting
          authSchemesVariantCopy.Visit(visitor);

          if (!visitor.result)
          {
            return (SigningError(Aws::Client::CoreErrors::CLIENT_SIGNING_FAILURE,
                                 "",
                                 "Failed to sign with an unknown error",
                                 false/*retryable*/));
          }

          return std::move(*visitor.result);
        }

        static SigningOutcome SignRequest(std::shared_ptr<HttpRequest> HTTPRequest,
          const client::AwsSmithyClientAsyncRequestContext& ctx,
          const Aws::UnorderedMap<Aws::String, AuthSchemesVariantT>& authSchemes)
        {
            auto authSchemeIt = authSchemes.find(ctx.m_authSchemeOption.schemeId);
            if (authSchemeIt == authSchemes.end())
            {
                assert(!"Auth scheme has not been found for a given auth option!");
                return (SigningError(Aws::Client::CoreErrors::CLIENT_SIGNING_FAILURE,
                                     "",
                                     "Requested AuthSchemeOption was not found within client Auth Schemes",
                                     false/*retryable*/));
            }

            const AuthSchemesVariantT& authScheme = authSchemeIt->second;

            return SignWithAuthScheme(std::move(HTTPRequest), authScheme, ctx);
        }

        static SigningOutcome PreSignRequest(std::shared_ptr<HttpRequest> httpRequest,
                                  const AuthSchemeOption& authSchemeOption,
                                  const Aws::UnorderedMap<Aws::String, AuthSchemesVariantT>& authSchemes,
                                  const Aws::String& region,
                                  const Aws::String& serviceName,
                                  long long expirationTimeInSeconds)
        {

            auto authSchemeIt = authSchemes.find(authSchemeOption.schemeId);
            if (authSchemeIt == authSchemes.end())
            {
                assert(!"Auth scheme has not been found for a given auth option!");
                return (SigningError(Aws::Client::CoreErrors::CLIENT_SIGNING_FAILURE,
                                     "",
                                     "Requested AuthSchemeOption was not found within client Auth Schemes",
                                     false/*retryable*/));
            }

            const AuthSchemesVariantT& authScheme = authSchemeIt->second;

            PreSignerVisitor visitor(httpRequest, authSchemeOption, region, serviceName, expirationTimeInSeconds);
            AuthSchemesVariantT authSchemesVariantCopy(authScheme);
            authSchemesVariantCopy.Visit(visitor);

            if (!visitor.result) {
              return (SigningError(Aws::Client::CoreErrors::CLIENT_SIGNING_FAILURE, "", "Failed to sign with an unknown error",
                                  false /*retryable*/));
            }
            return std::move(*visitor.result);
        }

        static bool AdjustClockSkew(HttpResponseOutcome& outcome, const AuthSchemeOption& authSchemeOption,
                                    const Aws::UnorderedMap<Aws::String, AuthSchemesVariantT>& authSchemes)
        {
            assert(!outcome.IsSuccess());
            AWS_LOGSTREAM_WARN(AWS_SMITHY_CLIENT_SIGNING_TAG, "If the signature check failed. This could be because of a time skew. Attempting to adjust the signer.");

            using DateTime = Aws::Utils::DateTime;
            DateTime serverTime = smithy::client::Utils::GetServerTimeFromError(outcome.GetError());

            auto authSchemeIt = authSchemes.find(authSchemeOption.schemeId);
            if (authSchemeIt == authSchemes.end())
            {
                assert(!"Auth scheme has not been found for a given auth option!");
                return false;
            }
            AuthSchemesVariantT authScheme = authSchemeIt->second;

            ClockSkewVisitor visitor(outcome, serverTime, authSchemeOption);
            authScheme.Visit(visitor);

            return visitor.m_resultShouldWait;
        }


    protected:
        struct IdentityVisitor
        {
            IdentityVisitor(const client::AwsSmithyClientAsyncRequestContext& ctx): m_requestContext(ctx)
            {
            }

            const client::AwsSmithyClientAsyncRequestContext& m_requestContext;
            Aws::Crt::Optional<IdentityOutcome> result;

            template <typename AuthSchemeAlternativeT>
            void operator()(AuthSchemeAlternativeT& authScheme)
            {
              using IdentityT = typename std::remove_reference<decltype(authScheme)>::type::IdentityT;
              using IdentityResolver = IdentityResolverBase<IdentityT>;

              std::shared_ptr<IdentityResolver> identityResolver = authScheme.identityResolver();
              if (!identityResolver)
              {
                result.emplace(SigningError(Aws::Client::CoreErrors::CLIENT_SIGNING_FAILURE,
                                            "",
                                            "Auth scheme provided a nullptr identityResolver",
                                            false/*retryable*/));
                return;
              }

              //relay service params in additional properties which will be relevant in credential resolution
              // example: bucket Name
              Aws::UnorderedMap<Aws::String, Aws::Crt::Variant<Aws::String, bool>> additionalIdentityProperties;
              const auto& serviceSpecificParameters = m_requestContext.m_pRequest->GetServiceSpecificParameters();
              if(serviceSpecificParameters)
              {
                for(const auto& propPair : serviceSpecificParameters->parameterMap)
                {
                  additionalIdentityProperties.emplace(propPair.first,Aws::Crt::Variant<Aws::String, bool>{propPair.second} );
                }
              }

              auto identityResult = identityResolver->getIdentity(m_requestContext.m_authSchemeOption.identityProperties(), additionalIdentityProperties);
              if (!identityResult.IsSuccess())
              {
                result.emplace(identityResult.GetError());
                return;
              }
              result.emplace(std::move(identityResult.GetResultWithOwnership()));
            }
        };

        struct SignerVisitor
        {
            SignerVisitor(std::shared_ptr<HttpRequest> httpRequest, const client::AwsSmithyClientAsyncRequestContext& ctx)
                : m_httpRequest(std::move(httpRequest)), m_requestContext(ctx)
            {
            }

            const std::shared_ptr<HttpRequest> m_httpRequest;
            const client::AwsSmithyClientAsyncRequestContext& m_requestContext;

            Aws::Crt::Optional<SigningOutcome> result;

            template <typename AuthSchemeAlternativeT>
            void operator()(AuthSchemeAlternativeT& authScheme)
            {
                // Auth Scheme Variant alternative contains the requested auth option
                assert(strcmp(authScheme.schemeId, m_requestContext.m_authSchemeOption.schemeId) == 0);

                using IdentityT = typename std::remove_reference<decltype(authScheme)>::type::IdentityT;
                using Signer = AwsSignerBase<IdentityT>;

                std::shared_ptr<Signer> signer = authScheme.signer();
                if (!signer)
                {
                    result.emplace(SigningError(Aws::Client::CoreErrors::CLIENT_SIGNING_FAILURE,
                                                "",
                                                "Auth scheme provided a nullptr signer",
                                                false/*retryable*/));
                    return;
                }

                result.emplace(signer->sign(m_httpRequest,
                  *static_cast<IdentityT*>(m_requestContext.m_awsIdentity.get()),
                  m_requestContext.m_authSchemeOption.signerProperties()));
            }
        };

        //for presigning, region and expiration can be passed in runtime
        struct PreSignerVisitor {
          explicit PreSignerVisitor(std::shared_ptr<HttpRequest> httpRequest,
                          const AuthSchemeOption& targetAuthSchemeOption,
                          const Aws::String& region,
                          const Aws::String& serviceName,
                          long long expirationTimeInSeconds)
              : m_httpRequest(std::move(httpRequest)),
              m_targetAuthSchemeOption(targetAuthSchemeOption) ,
              m_region(region),
              m_serviceName(serviceName),
              m_expirationTimeInSeconds(expirationTimeInSeconds)
              {}

          const std::shared_ptr<HttpRequest> m_httpRequest;
          const AuthSchemeOption& m_targetAuthSchemeOption;
          const Aws::String& m_region;
          const Aws::String& m_serviceName;
          const long long m_expirationTimeInSeconds;

          Aws::Crt::Optional<SigningOutcome> result;

          template <typename AuthSchemeAlternativeT>
          void operator()(AuthSchemeAlternativeT& authScheme) {
            // Auth Scheme Variant alternative contains the requested auth option
            assert(strcmp(authScheme.schemeId, m_targetAuthSchemeOption.schemeId) == 0);

            using IdentityT = typename std::remove_reference<decltype(authScheme)>::type::IdentityT;
            using IdentityResolver = IdentityResolverBase<IdentityT>;
            using Signer = AwsSignerBase<IdentityT>;

            std::shared_ptr<IdentityResolver> identityResolver = authScheme.identityResolver();
            if (!identityResolver) {
              result.emplace(SigningError(Aws::Client::CoreErrors::CLIENT_SIGNING_FAILURE, "",
                                          "Auth scheme provided a nullptr identityResolver", false /*retryable*/));
              return;
            }
            auto identityResult =
                identityResolver->getIdentity(m_targetAuthSchemeOption.identityProperties(), m_targetAuthSchemeOption.identityProperties());

            if (!identityResult.IsSuccess()) {
              result.emplace(identityResult.GetError());
              return;
            }
            auto identity = std::move(identityResult.GetResultWithOwnership());

            std::shared_ptr<Signer> signer = authScheme.signer();
            if (!signer) {
              result.emplace(SigningError(Aws::Client::CoreErrors::CLIENT_SIGNING_FAILURE, "", "Auth scheme provided a nullptr signer",
                                          false /*retryable*/));
              return;
            }
            result.emplace(signer->presign(m_httpRequest, *identity, m_targetAuthSchemeOption.signerProperties(), m_region, m_serviceName, m_expirationTimeInSeconds));
          }
        };

        static SigningOutcome SignWithAuthScheme(std::shared_ptr<HttpRequest> httpRequest,
          const AuthSchemesVariantT& authSchemesVariant,
          const client::AwsSmithyClientAsyncRequestContext& ctx)
        {
            SignerVisitor visitor(httpRequest, ctx);
            AuthSchemesVariantT authSchemesVariantCopy(authSchemesVariant); // TODO: allow const visiting
            authSchemesVariantCopy.Visit(visitor);

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
            using DateFormat = Aws::Utils::DateFormat;
            using ClientError = Aws::Client::AWSError<Aws::Client::CoreErrors>;

            ClockSkewVisitor(HttpResponseOutcome& outcome, const DateTime& serverTime, const AuthSchemeOption& targetAuthSchemeOption)
                : m_outcome(outcome), m_serverTime(serverTime), m_targetAuthSchemeOption(targetAuthSchemeOption)
            {
            }

            bool m_resultShouldWait = false;
            HttpResponseOutcome& m_outcome;
            const Aws::Utils::DateTime& m_serverTime;
            const AuthSchemeOption& m_targetAuthSchemeOption;

            template <typename AuthSchemeAlternativeT>
            void operator()(AuthSchemeAlternativeT& authScheme)
            {
                // Auth Scheme Variant alternative contains the requested auth option
                assert(strcmp(authScheme.schemeId, m_targetAuthSchemeOption.schemeId) == 0);

                using IdentityT = typename std::remove_reference<decltype(authScheme)>::type::IdentityT;
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