/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/ConnectWisdomServiceEndpointProvider.h>
#include <aws/wisdom/internal/ConnectWisdomServiceEndpointRules.h>

namespace Aws {
namespace ConnectWisdomService {
namespace Endpoint {
ConnectWisdomServiceEndpointProvider::ConnectWisdomServiceEndpointProvider()
    : ConnectWisdomServiceDefaultEpProviderBase(Aws::ConnectWisdomService::ConnectWisdomServiceEndpointRules::GetRulesBlob(),
                                                Aws::ConnectWisdomService::ConnectWisdomServiceEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ConnectWisdomService
}  // namespace Aws
