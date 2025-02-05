/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/S3Request.h>
#include <aws/s3/S3Errors.h>
#include <aws/s3/S3ExpressIdentityProvider.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/ConcurrentCache.h>
#include <aws/core/http/HttpRequest.h>
#include <smithy/identity/signer/built-in/SigV4Signer.h>
#include <smithy/identity/signer/built-in/SigV4aSigner.h>
#include <smithy/identity/identity/AwsCredentialIdentity.h>

namespace Aws {
namespace S3 {
    extern AWS_S3_API const char *S3_EXPRESS_SIGNER_NAME;

namespace {
    template <typename T>
    struct IsValidS3ExpressSigner : std::false_type {};

    template <>
    struct IsValidS3ExpressSigner<smithy::AwsSigV4Signer> : std::true_type {};

    template <>
    struct IsValidS3ExpressSigner<smithy::AwsSigV4aSigner> : std::true_type {};

    template <typename BASECLASS>
    struct ExtractIdentity : public std::enable_if<IsValidS3ExpressSigner<BASECLASS>::value, BASECLASS>::type
    {
      smithy::AwsCredentialIdentity operator()(const smithy::AwsCredentialIdentityBase& identity) const {
        return smithy::AwsCredentialIdentity{identity.accessKeyId(), identity.secretAccessKey(), identity.sessionToken(),identity.expiration()};
      }
    };

    template <>
    struct ExtractIdentity<smithy::AwsSigV4Signer> {
      auto operator()(const smithy::AwsCredentialIdentityBase& identity) const -> smithy::AwsCredentialIdentity {
        return smithy::AwsCredentialIdentity{identity.accessKeyId(), identity.secretAccessKey(), {},{}};
      }
    };
}

    //Ensuring S3 Express Signer can use Sigv4 or Sigv4a signing algorithm
    template <typename BASECLASS>
    class S3ExpressSignerBase : public std::enable_if<IsValidS3ExpressSigner<BASECLASS>::value, BASECLASS>::type
    {
        public:
        using SigningFutureOutcome = typename BASECLASS::SigningFutureOutcome;
        using SigningProperties = typename BASECLASS::SigningProperties;
        using SigningError = typename BASECLASS::SigningError;
        explicit S3ExpressSignerBase(const Aws::String& serviceName, const Aws::String& region)
            : BASECLASS(serviceName, region)
        {
        }

        explicit S3ExpressSignerBase(const Aws::String& serviceName, const Aws::String& region, Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy policy, bool escapeUrl)
            : BASECLASS(serviceName, region, policy, escapeUrl)
        {
        }


        SigningFutureOutcome sign(std::shared_ptr<Aws::Http::HttpRequest> httpRequest, const smithy::AwsCredentialIdentityBase& identity, SigningProperties properties) override;

        SigningFutureOutcome presign(std::shared_ptr<Aws::Http::HttpRequest> httpRequest, const smithy::AwsCredentialIdentityBase& identity, SigningProperties properties, const Aws::String& region, const Aws::String& serviceName, long long expirationTimeInSeconds) override;

        protected:
        
        // Forwarding constructor
        template <typename... Args>
        explicit S3ExpressSignerBase(Args&&... args)
            : BASECLASS(std::forward<Args>(args)...)
        {
        }

        inline bool hasRequestId(const Aws::String &requestId) const {
            std::lock_guard<std::mutex> lock(m_requestProcessing);
            return m_requestsProcessing.find(requestId) != m_requestsProcessing.end();
        }

        inline void putRequestId(const Aws::String &requestId) const {
            std::lock_guard<std::mutex> lock(m_requestProcessing);
            m_requestsProcessing.insert(requestId);
        }

        inline void deleteRequestId(const Aws::String &requestId) const {
            std::lock_guard<std::mutex> lock(m_requestProcessing);
            m_requestsProcessing.erase(requestId);
        }

        mutable std::set<Aws::String> m_requestsProcessing;
        mutable std::mutex m_requestProcessing;
    };


    class AWS_S3_API S3ExpressSigner : public Aws::Client::AWSAuthSigner, public S3ExpressSignerBase<smithy::AwsSigV4Signer>{
    public:
        //legacy constructor sets legacy way
        S3ExpressSigner(std::shared_ptr<S3ExpressIdentityProvider> S3ExpressIdentityProvider,
            const std::shared_ptr<Auth::AWSCredentialsProvider> &credentialsProvider,
            const Aws::String &serviceName,
            const Aws::String &region,
            Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy signingPolicy = Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent,
            bool urlEscapePath = true,
            Aws::Auth::AWSSigningAlgorithm signingAlgorithm = Aws::Auth::AWSSigningAlgorithm::SIGV4):
            Aws::Client::AWSAuthSigner(),
            S3ExpressSignerBase<smithy::AwsSigV4Signer>(
                credentialsProvider, serviceName, region, signingPolicy,  urlEscapePath, signingAlgorithm
            ),m_S3ExpressIdentityProvider(S3ExpressIdentityProvider)
        {
        }

        virtual ~S3ExpressSigner() {};

        const char *GetName() const override;

        //Legacy APIs
        bool SignRequest(Aws::Http::HttpRequest &request,
            const char *region,
            const char *serviceName,
            bool signBody) const override;

        bool PresignRequest(Aws::Http::HttpRequest& request,
                const char* region,
                const char* serviceName,
                long long expirationInSeconds
            ) const override;

        Aws::Auth::AWSCredentials GetCredentials(const std::shared_ptr<Aws::Http::ServiceSpecificParameters> &serviceSpecificParameters) const;

    private:
        bool SignRequest(Aws::Http::HttpRequest& ) const override;
        bool PresignRequest(Aws::Http::HttpRequest& , long long ) const override;
        bool PresignRequest(Aws::Http::HttpRequest& , const char* , long long) const override;
        std::shared_ptr<S3ExpressIdentityProvider> m_S3ExpressIdentityProvider;
        std::shared_ptr<smithy::AwsSignerBase<smithy::AwsCredentialIdentityBase> > m_smithySigner_sp;
    };
}
}
