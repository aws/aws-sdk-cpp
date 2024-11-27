
/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/auth/AWSCredentials.h>
#include <aws/core/auth/signer/AWSAuthV4Signer.h>
#include <smithy/identity/auth/AuthSchemeResolverBase.h>
#include <smithy/identity/identity/AwsCredentialIdentityBase.h>
#include <smithy/identity/signer/AwsSignerBase.h>

namespace smithy {

class SigV4EventStreamSigner : public AwsSignerBase<AwsCredentialIdentityBase> {
 public:
  using SigV4AuthSchemeParameters = DefaultAuthSchemeResolverParameters;
  explicit SigV4EventStreamSigner(const Aws::String& serviceName, const Aws::String& region)
      : m_serviceName(serviceName), m_region(region), legacySigner(nullptr, serviceName.c_str(), region) {}
  SigningFutureOutcome sign(std::shared_ptr<HttpRequest> httpRequest, const AwsCredentialIdentityBase& identity,
                            SigningProperties properties) override {
    const auto credentials = [&identity]() -> Aws::Auth::AWSCredentials {
      if (identity.sessionToken().has_value() && identity.expiration().has_value()) {
        return {identity.accessKeyId(), identity.secretAccessKey(), *identity.sessionToken(), *identity.expiration()};
      }
      if (identity.sessionToken().has_value()) {
        return {identity.accessKeyId(), identity.secretAccessKey(), *identity.sessionToken()};
      }
      return {identity.accessKeyId(), identity.secretAccessKey()};
    }();

    auto signPayloadIt = properties.find("SignPayload");
    bool signPayload = signPayloadIt != properties.end() ? signPayloadIt->second.get<Aws::String>() == "true" : false;
    assert(httpRequest);
    bool success = legacySigner.SignRequest(*httpRequest, m_region.c_str(), m_serviceName.c_str(), signPayload, credentials);
    if (success) {
      return SigningFutureOutcome(std::move(httpRequest));
    }
    return SigningError(Aws::Client::CoreErrors::MEMORY_ALLOCATION, "", "Failed to sign the request with sigv4 stream", false);
  }
  bool SignEventMessage(Aws::Utils::Event::Message& em, Aws::String& sig, const AwsCredentialIdentityBase& identity) const override {
    auto getCreds = [&]() -> Aws::Auth::AWSCredentials {
      if (identity.sessionToken().has_value() && identity.expiration().has_value()) {
        return Aws::Auth::AWSCredentials(identity.accessKeyId(), identity.secretAccessKey(), identity.sessionToken().value(),
                                         identity.expiration().value());
      } else if (identity.sessionToken().has_value()) {
        return Aws::Auth::AWSCredentials(identity.accessKeyId(), identity.secretAccessKey(), identity.sessionToken().value());
      }
      return Aws::Auth::AWSCredentials(identity.accessKeyId(), identity.secretAccessKey());
    };

    return legacySigner.SignEventMessage(em, sig, getCreds());
  }

  virtual ~SigV4EventStreamSigner(){};

 protected:
  Aws::String m_serviceName;
  Aws::String m_region;
  Aws::Client::AWSAuthEventStreamV4Signer legacySigner;
};
}  // namespace smithy