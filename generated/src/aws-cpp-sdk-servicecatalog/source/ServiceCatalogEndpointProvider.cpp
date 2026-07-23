/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/ServiceCatalogEndpointProvider.h>
#include <aws/servicecatalog/internal/ServiceCatalogEndpointRules.h>

namespace Aws {
namespace ServiceCatalog {
namespace Endpoint {
ServiceCatalogEndpointProvider::ServiceCatalogEndpointProvider()
    : ServiceCatalogDefaultEpProviderBase(Aws::ServiceCatalog::ServiceCatalogEndpointRules::GetRulesBlob(),
                                          Aws::ServiceCatalog::ServiceCatalogEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ServiceCatalog
}  // namespace Aws
