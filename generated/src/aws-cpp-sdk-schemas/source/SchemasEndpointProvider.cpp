/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/schemas/SchemasEndpointProvider.h>
#include <aws/schemas/internal/SchemasEndpointRules.h>

namespace Aws {
namespace Schemas {
namespace Endpoint {
SchemasEndpointProvider::SchemasEndpointProvider()
    : SchemasDefaultEpProviderBase(Aws::Schemas::SchemasEndpointRules::GetRulesBlob(), Aws::Schemas::SchemasEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Schemas
}  // namespace Aws
