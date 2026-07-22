/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhub-config/MigrationHubConfigEndpointProvider.h>
#include <aws/migrationhub-config/internal/MigrationHubConfigEndpointRules.h>

namespace Aws {
namespace MigrationHubConfig {
namespace Endpoint {
MigrationHubConfigEndpointProvider::MigrationHubConfigEndpointProvider()
    : MigrationHubConfigDefaultEpProviderBase(Aws::MigrationHubConfig::MigrationHubConfigEndpointRules::GetRulesBlob(),
                                              Aws::MigrationHubConfig::MigrationHubConfigEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace MigrationHubConfig
}  // namespace Aws
