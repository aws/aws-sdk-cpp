/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/identity/identity/AwsCredentialIdentityBase.h>

namespace smithy {
class AwsCredentialIdentity : public AwsCredentialIdentityBase {
public:
  AwsCredentialIdentity(const Aws::String& accessKeyId,
                        const Aws::String& secretAccessKey,
                        const Aws::Crt::Optional<Aws::String>& sessionToken,
                        const Aws::Crt::Optional<AwsIdentity::DateTime>& expiration,
                        const Aws::Crt::Optional<Aws::String>& accountId)
      : m_accessKeyId(accessKeyId),
        m_secretAccessKey(secretAccessKey),
        m_sessionToken(sessionToken),
        m_expiration(expiration),
        m_accountId(accountId) {}

  Aws::String accessKeyId() const override;
  Aws::String secretAccessKey() const override;
  Aws::Crt::Optional<Aws::String> sessionToken() const override;
  Aws::Crt::Optional<AwsIdentity::DateTime> expiration() const override;
  Aws::Crt::Optional<Aws::String> accountId() const override;

  AwsCredentialIdentity() = default;

protected:
  Aws::String m_accessKeyId;
  Aws::String m_secretAccessKey;
  Aws::Crt::Optional<Aws::String> m_sessionToken;
  Aws::Crt::Optional<AwsIdentity::DateTime> m_expiration;
  Aws::Crt::Optional<Aws::String> m_accountId;
};
}

#include <smithy/identity/identity/impl/AwsCredentialIdentityImpl.h>
