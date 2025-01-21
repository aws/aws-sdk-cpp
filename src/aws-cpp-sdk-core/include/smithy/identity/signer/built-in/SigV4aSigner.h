/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <smithy/identity/signer/AwsSignerBase.h>
#include <smithy/identity/identity/AwsCredentialIdentityBase.h>
#include <aws/core/auth/AWSCredentials.h>
#include <aws/crt/auth/Credentials.h>

#include <aws/core/http/HttpRequest.h>
#include <aws/core/auth/signer/AWSAuthSignerHelper.h>
#include <aws/crt/http/HttpConnection.h>
#include <aws/crt/http/HttpRequestResponse.h>
#include <condition_variable>
#include <mutex>

namespace smithy {
    static const char* UNSIGNED_PAYLOAD = "UNSIGNED-PAYLOAD";
    static const char* EMPTY_STRING_SHA256 = "e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855";
    static const char v4AsymmetricLogTag[] = "AWSAuthSymmetricV4Signer";
    static const char* USER_AGENT = "user-agent";
    static const char* X_AMZN_TRACE_ID = "x-amzn-trace-id";

    /**
     * A smithy SigV4 signer wrapper on top of legacy SDK SigV4 signer
     * TODO: refactor into own signer using smithy design
     */
    class AwsSigV4aSigner : public AwsSignerBase<AwsCredentialIdentityBase> {
        
    public:
        using SigV4aAuthSchemeParameters = smithy::DefaultAuthSchemeResolverParameters;
        explicit AwsSigV4aSigner(const Aws::String& serviceName, const Aws::String& region)
            :  m_serviceName(serviceName), m_region(region)
        {
        }

        //for legacy constructors
        explicit AwsSigV4aSigner(const Aws::String& serviceName, const Aws::String& region, Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy policy)
            :  m_serviceName(serviceName), m_region(region), m_policy(Aws::MakeShared<Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy>("AwsSigV4aSigner", policy))
        {
        }

        SigningFutureOutcome sign(std::shared_ptr<HttpRequest> httpRequest, const AwsCredentialIdentityBase& identity, SigningProperties properties) override
        {
            return sign(httpRequest, identity, properties, m_region, m_serviceName, m_expirationTimeInSeconds);
        }

        SigningFutureOutcome presign(std::shared_ptr<HttpRequest> httpRequest, const AwsCredentialIdentityBase& identity, SigningProperties properties, const Aws::String& region, const Aws::String& serviceName, long long expirationTimeInSeconds) override
        {
            Aws::String signingRegion = !region.empty() ? region : m_region;
            Aws::String signingServiceName = !serviceName.empty() ? serviceName : m_serviceName;

            const auto credentials = [&identity]() -> Aws::Auth::AWSCredentials {
                if(identity.sessionToken().has_value() && identity.expiration().has_value())
                {
                    return {identity.accessKeyId(), identity.secretAccessKey(), *identity.sessionToken(), *identity.expiration()};
                }
                if(identity.sessionToken().has_value())
                {
                    return {identity.accessKeyId(), identity.secretAccessKey(), *identity.sessionToken()};
                }
                return {identity.accessKeyId(), identity.secretAccessKey()};
            }();

            //don't sign anonymous requests
            if (credentials.GetAWSAccessKeyId().empty() || credentials.GetAWSSecretKey().empty())
            {
                return  SigningFutureOutcome(std::move(httpRequest)) ;
            }
            return sign(httpRequest, identity, properties, signingRegion, signingServiceName, expirationTimeInSeconds);
        }

        virtual ~AwsSigV4aSigner() {};
    protected:

        bool createAwsSigningConfig(
            std::shared_ptr<Aws::Crt::Auth::Credentials>& crtCredentials,
            const Aws::Http::HttpRequest& request, 
            Aws::Crt::Auth::AwsSigningConfig& awsSigningConfig, 
            bool signBody) const
        {
            awsSigningConfig.SetSigningAlgorithm(static_cast<Aws::Crt::Auth::SigningAlgorithm>(Aws::Auth::AWSSigningAlgorithm::ASYMMETRIC_SIGV4));
            awsSigningConfig.SetSignatureType(m_signatureType);
            awsSigningConfig.SetRegion(m_region.c_str());
            awsSigningConfig.SetService(m_region.c_str());
            awsSigningConfig.SetSigningTimepoint(GetSigningTimestamp().UnderlyingTimestamp());
            awsSigningConfig.SetUseDoubleUriEncode(m_urlEscape);
            awsSigningConfig.SetShouldNormalizeUriPath(true);
            awsSigningConfig.SetOmitSessionToken(false);
            awsSigningConfig.SetShouldSignHeaderUserData(reinterpret_cast<void*>(const_cast<Aws::Set<Aws::String>*>(&m_unsignedHeaders)));
            awsSigningConfig.SetShouldSignHeaderCallback([](const Aws::Crt::ByteCursor *name, void *user_data) {
                Aws::Set<Aws::String>* unsignedHeaders = static_cast<Aws::Set<Aws::String>*>(user_data);
                Aws::String headerKey(reinterpret_cast<const char*>(name->ptr), name->len);
                return unsignedHeaders->find(Aws::Utils::StringUtils::ToLower(headerKey.c_str())) == unsignedHeaders->cend();
            });
            if (m_signatureType == Aws::Crt::Auth::SignatureType::HttpRequestViaHeaders)
            {
                Aws::String payloadHash(UNSIGNED_PAYLOAD);
                if(signBody || request.GetUri().GetScheme() != Aws::Http::Scheme::HTTPS)
                {
                    if (!request.GetContentBody())
                    {
                        AWS_LOGSTREAM_DEBUG(v4AsymmetricLogTag, "Using cached empty string sha256 " << EMPTY_STRING_SHA256 << " because payload is empty.");
                        payloadHash = EMPTY_STRING_SHA256;
                    }
                    else
                    {
                        // The hash will be calculated from the payload during signing.
                        payloadHash = {};
                    }
                }
                else
                {
                    AWS_LOGSTREAM_DEBUG(v4AsymmetricLogTag, "Note: Http payloads are not being signed. signPayloads=" << signBody
                            << " http scheme=" << Aws::Http::SchemeMapper::ToString(request.GetUri().GetScheme()));
                }
                awsSigningConfig.SetSignedBodyValue(payloadHash.c_str());
                awsSigningConfig.SetSignedBodyHeader(m_includeSha256HashHeader ? Aws::Crt::Auth::SignedBodyHeaderType::XAmzContentSha256 : Aws::Crt::Auth::SignedBodyHeaderType::None);
            }
            else if (m_signatureType == Aws::Crt::Auth::SignatureType::HttpRequestViaQueryParams)
            {
                if (ServiceRequireUnsignedPayload(m_serviceName))
                {
                    awsSigningConfig.SetSignedBodyValue(UNSIGNED_PAYLOAD);
                }
                else
                {
                    awsSigningConfig.SetSignedBodyValue(EMPTY_STRING_SHA256);
                }
            }
            else
            {
                AWS_LOGSTREAM_ERROR(v4AsymmetricLogTag, "The signature type should be either \"HttpRequestViaHeaders\" or \"HttpRequestViaQueryParams\"");
                return false;
            }
            awsSigningConfig.SetExpirationInSeconds(static_cast<uint64_t>(m_expirationTimeInSeconds));
            awsSigningConfig.SetCredentials(crtCredentials);
            return true;
        }


        bool ServiceRequireUnsignedPayload(const Aws::String& serviceName) const
        {
            // S3 uses a magic string (instead of the empty string) for its body hash for presigned URLs as outlined here:
            // https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html
            // this is true for PUT, POST, GET, DELETE and HEAD operations.
            // However, other services (for example RDS) implement the specification as outlined here:
            // https://docs.aws.amazon.com/general/latest/gr/sigv4-create-canonical-request.html
            // which states that body-less requests should use the empty-string SHA256 hash.
            return "s3" == serviceName || "s3-object-lambda" == serviceName;
        }

        Aws::String m_serviceName;
        Aws::String m_region;
        std::shared_ptr<Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy> m_policy;
        //params that can be exposed later
        long long m_expirationTimeInSeconds{0};
        const bool m_includeSha256HashHeader{true};
        const bool m_urlEscape{true};
        const Aws::Set<Aws::String> m_unsignedHeaders{USER_AGENT,X_AMZN_TRACE_ID};
        const Aws::Crt::Auth::SignatureType m_signatureType{Aws::Crt::Auth::SignatureType::HttpRequestViaQueryParams};
        std::condition_variable m_cv;
        std::mutex m_mutex;
    };
}