/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/SecurityLakeEndpointProvider.h>
#include <aws/securitylake/internal/SecurityLakeEndpointRules.h>

namespace Aws {
namespace SecurityLake {
namespace Endpoint {
SecurityLakeEndpointProvider::SecurityLakeEndpointProvider()
    : SecurityLakeDefaultEpProviderBase(Aws::SecurityLake::SecurityLakeEndpointRules::GetRulesBlob(),
                                        Aws::SecurityLake::SecurityLakeEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SecurityLake
}  // namespace Aws
