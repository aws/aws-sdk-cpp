/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-scep/PcaConnectorScepEndpointProvider.h>
#include <aws/pca-connector-scep/internal/PcaConnectorScepEndpointRules.h>

namespace Aws {
namespace PcaConnectorScep {
namespace Endpoint {
PcaConnectorScepEndpointProvider::PcaConnectorScepEndpointProvider()
    : PcaConnectorScepDefaultEpProviderBase(Aws::PcaConnectorScep::PcaConnectorScepEndpointRules::GetRulesBlob(),
                                            Aws::PcaConnectorScep::PcaConnectorScepEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace PcaConnectorScep
}  // namespace Aws
