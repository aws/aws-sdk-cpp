/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sts/STSEndpointProvider.h>
#include <aws/sts/internal/STSEndpointRules.h>

namespace Aws {
namespace STS {
namespace Endpoint {
STSEndpointProvider::STSEndpointProvider()
    : STSDefaultEpProviderBase(Aws::STS::STSEndpointRules::GetRulesBlob(), Aws::STS::STSEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace STS
}  // namespace Aws
