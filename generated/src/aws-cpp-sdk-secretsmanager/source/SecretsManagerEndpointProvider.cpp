/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/secretsmanager/SecretsManagerEndpointProvider.h>
#include <aws/secretsmanager/internal/SecretsManagerEndpointRules.h>

namespace Aws {
namespace SecretsManager {
namespace Endpoint {
SecretsManagerEndpointProvider::SecretsManagerEndpointProvider()
    : SecretsManagerDefaultEpProviderBase(Aws::SecretsManager::SecretsManagerEndpointRules::GetRulesBlob(),
                                          Aws::SecretsManager::SecretsManagerEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SecretsManager
}  // namespace Aws
