/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <smithy/identity/signer/AwsSignerBase.h>
#include <smithy/identity/identity/AwsBearerTokenIdentityBase.h>
#include <aws/core/auth/AWSCredentials.h>
#include <aws/crt/auth/Credentials.h>

#include <aws/core/http/HttpRequest.h>
#include <aws/core/auth/signer/AWSAuthSignerHelper.h>
#include <aws/crt/http/HttpConnection.h>
#include <aws/crt/http/HttpRequestResponse.h>
#include <condition_variable>
#include <mutex>

namespace smithy {
    static const char AUTHORIZATION_HEADER[] = "authorization";


    /**
     * A smithy SigV4 signer wrapper on top of legacy SDK SigV4 signer
     * TODO: refactor into own signer using smithy design
     */
    class BearerTokenSigner : public AwsSignerBase<AwsBearerTokenIdentityBase> {
        
    public:
        //using SigV4aAuthSchemeParameters = smithy::DefaultAuthSchemeResolverParameters;
        explicit BearerTokenSigner()
        {
        }

        SigningFutureOutcome sign(std::shared_ptr<HttpRequest> httpRequest, const smithy::AwsBearerTokenIdentityBase& identity, SigningProperties properties) override
        {
            if(Aws::Http::Scheme::HTTPS != httpRequest->GetUri().GetScheme())
            {
                // Clients MUST always use TLS (https) or equivalent transport security
                // when making requests with bearer tokens.
                // https://datatracker.ietf.org/doc/html/rfc6750
                AWS_LOGSTREAM_ERROR(LOGGING_TAG, "HTTPS scheme must be used with a bearer token authorization");
                return SigningError(Aws::Client::CoreErrors::INVALID_PARAMETER_VALUE, "", "Failed to sign the request with bearer", false);
            }

            httpRequest->SetHeaderValue(AUTHORIZATION_HEADER, "Bearer " + identity.token());
            
            
            return SigningFutureOutcome(std::move(httpRequest));
        }

        virtual ~BearerTokenSigner() {};
    protected:
    };
}
