/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/StorageGatewayEndpointProvider.h>
#include <aws/storagegateway/internal/StorageGatewayEndpointRules.h>

namespace Aws {
namespace StorageGateway {
namespace Endpoint {
StorageGatewayEndpointProvider::StorageGatewayEndpointProvider()
    : StorageGatewayDefaultEpProviderBase(Aws::StorageGateway::StorageGatewayEndpointRules::GetRulesBlob(),
                                          Aws::StorageGateway::StorageGatewayEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace StorageGateway
}  // namespace Aws
