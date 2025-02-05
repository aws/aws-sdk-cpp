/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/utils/UUID.h>
#include <aws/s3/S3ExpressSigner.h>

#include <utility>

using namespace Aws::S3;
using namespace Aws::Client;
using namespace Aws::Config;
using namespace Aws::Environment;
using namespace Aws::Utils;

AWS_S3_API const char *Aws::S3::S3_EXPRESS_SIGNER_NAME = "S3ExpressSigner";
static const char *S3_EXPRESS_HEADER = "x-amz-s3session-token";
static const char *S3_EXPRESS_QUERY_PARAM = "X-Amz-S3session-Token";

const char *S3ExpressSigner::GetName() const {
    return S3_EXPRESS_SIGNER_NAME;
}

bool S3ExpressSigner::SignRequest(Aws::Http::HttpRequest &request,
    const char *region,
    const char *serviceName,
    bool signBody) const
{
    const auto requestId = Aws::GetWithDefault(request.GetServiceSpecificParameters()->parameterMap,
    Aws::String("dedupeId"),
    Aws::String(UUID::RandomUUID()));
    if(hasRequestId(requestId)) {
        // We were already processing this request and are attempting to sign
        // it again in infinite recursion
        AWS_LOG_ERROR(S3_EXPRESS_SIGNER_NAME, "Refusing to sign request more than once")
        return false;
    }
    putRequestId(requestId);
    auto identity = m_S3ExpressIdentityProvider->GetS3ExpressIdentity(request.GetServiceSpecificParameters());
    request.SetHeaderValue(S3_EXPRESS_HEADER, identity.getSessionToken());
    auto isSigned = getLegacySigner().SignRequest(request, region, serviceName, signBody);
    deleteRequestId(requestId);
    return isSigned;
}

bool S3ExpressSigner::PresignRequest(Aws::Http::HttpRequest& request,
        const char* region,
        const char* serviceName,
        long long expirationInSeconds
    ) const
{
    const auto requestId = Aws::GetWithDefault(request.GetServiceSpecificParameters()->parameterMap,
    Aws::String("dedupeId"),
    Aws::String(UUID::RandomUUID()));
    if(hasRequestId(requestId)) {
        // We were already processing this request and are attempting to sign
        // it again in infinite recursion
        AWS_LOG_ERROR(S3_EXPRESS_SIGNER_NAME, "Refusing to sign request more than once")
        return false;
    }
    putRequestId(requestId);
    auto identity = m_S3ExpressIdentityProvider->GetS3ExpressIdentity(request.GetServiceSpecificParameters());
    request.AddQueryStringParameter(S3_EXPRESS_QUERY_PARAM, identity.getSessionToken());
    auto isSigned = getLegacySigner().PresignRequest(request, region, serviceName, expirationInSeconds);
    deleteRequestId(requestId);
    return isSigned;
}

Aws::Auth::AWSCredentials S3ExpressSigner::GetCredentials(const std::shared_ptr<Aws::Http::ServiceSpecificParameters> &serviceSpecificParameters) const
{
    if(m_S3ExpressIdentityProvider)
    {
        auto identity = m_S3ExpressIdentityProvider->GetS3ExpressIdentity(serviceSpecificParameters);
        return {identity.getAccessKeyId(), identity.getSecretKeyId()};
    }
    return Aws::Auth::AWSCredentials();
}

//for backwards compatibility
bool S3ExpressSigner::SignRequest(Aws::Http::HttpRequest& ) const {
    return false;
}
bool S3ExpressSigner::PresignRequest(Aws::Http::HttpRequest& , long long ) const
{
    return false;
}

bool S3ExpressSigner::PresignRequest(Aws::Http::HttpRequest& , const char* , long long) const
{
    return false;
}

template <typename BASECLASS>
typename S3ExpressSignerBase<BASECLASS>::SigningFutureOutcome S3ExpressSignerBase<BASECLASS>::sign(std::shared_ptr<Aws::Http::HttpRequest> httpRequest, const smithy::AwsCredentialIdentityBase& identity, S3ExpressSignerBase<BASECLASS>::SigningProperties properties)
{
    const auto requestId = Aws::GetWithDefault(httpRequest->GetServiceSpecificParameters()->parameterMap,
    Aws::String("dedupeId"),
    Aws::String(Aws::Utils::UUID::RandomUUID()));
    if(hasRequestId(requestId)) {
        return SigningError(Aws::Client::CoreErrors::CLIENT_SIGNING_FAILURE, "", "Refusing to sign request more than once",
                                    false /*retryable*/);
    }

    if(!identity.sessionToken().has_value()) {
        return SigningError(Aws::Client::CoreErrors::CLIENT_SIGNING_FAILURE, "", "No session token present",
                                    false /*retryable*/);
    }
    putRequestId(requestId);
    httpRequest->SetHeaderValue(S3_EXPRESS_HEADER, identity.sessionToken().value());
    auto isSigned = BASECLASS::sign(httpRequest,  ExtractIdentity<BASECLASS>()(identity), properties);
    deleteRequestId(requestId);
    return SigningFutureOutcome(std::move(httpRequest));
}

template <typename BASECLASS>
typename S3ExpressSignerBase<BASECLASS>::SigningFutureOutcome S3ExpressSignerBase<BASECLASS>::presign(std::shared_ptr<Aws::Http::HttpRequest> httpRequest, const smithy::AwsCredentialIdentityBase& identity, S3ExpressSignerBase<BASECLASS>::SigningProperties properties, const Aws::String& region, const Aws::String& serviceName, long long expirationTimeInSeconds)
{
    const auto requestId = Aws::GetWithDefault(httpRequest->GetServiceSpecificParameters()->parameterMap,
    Aws::String("dedupeId"),
    Aws::String(Aws::Utils::UUID::RandomUUID()));
    if(hasRequestId(requestId)) {
        return SigningError(Aws::Client::CoreErrors::CLIENT_SIGNING_FAILURE, "", "Refusing to sign request more than once",
                                    false /*retryable*/);
    }
    if(!identity.sessionToken().has_value()) {
        return SigningError(Aws::Client::CoreErrors::CLIENT_SIGNING_FAILURE, "", "No session token present",
                                    false /*retryable*/);
    }
    putRequestId(requestId);
    httpRequest->AddQueryStringParameter(S3_EXPRESS_QUERY_PARAM, identity.sessionToken().value());
    auto isSigned = BASECLASS::presign(httpRequest, identity, properties, region, serviceName, expirationTimeInSeconds);
    deleteRequestId(requestId);
    return SigningFutureOutcome(std::move(httpRequest));

}


template class Aws::S3::S3ExpressSignerBase<smithy::AwsSigV4Signer>;