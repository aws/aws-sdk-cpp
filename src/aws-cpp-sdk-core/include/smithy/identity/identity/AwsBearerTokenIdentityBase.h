/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/identity/identity/AwsIdentity.h>

namespace smithy {
    class AwsBearerTokenIdentityBase : public AwsIdentity {
    public:
      virtual const Aws::String &token() const = 0;

      virtual Aws::Crt::Optional<AwsIdentity::DateTime>
      expiration() const override = 0;

      void AddUserAgentFeature(Aws::Client::UserAgentFeature feature)
      {
        m_features.insert(feature);
      }

      Aws::Set<Aws::Client::UserAgentFeature> GetUserAgentFeatures() const override
      {
        return m_features;
      }

    protected:
      Aws::Set<Aws::Client::UserAgentFeature> m_features;
    };
}