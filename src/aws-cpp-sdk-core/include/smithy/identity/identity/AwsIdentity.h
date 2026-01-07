/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/utils/DateTime.h>
#include <aws/crt/Optional.h>
#include <aws/core/utils/memory/stl/AWSSet.h>

namespace Aws {
    namespace Client {
        enum class UserAgentFeature;
    }

}
namespace smithy {
    class AwsIdentity {
    public:
        using DateTime = Aws::Utils::DateTime;

        virtual ~AwsIdentity(){};
        virtual Aws::Crt::Optional<DateTime> expiration() const {
            return Aws::Crt::Optional<DateTime>();
        };

        virtual Aws::Crt::Optional<Aws::String> accountId() const {
            return Aws::Crt::Optional<Aws::String>{};
        }

        virtual Aws::Set<Aws::Client::UserAgentFeature> GetUserAgentFeatures() const {
          return {};
        }
    };
}