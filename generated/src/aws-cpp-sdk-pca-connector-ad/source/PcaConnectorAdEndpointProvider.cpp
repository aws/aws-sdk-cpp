/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/PcaConnectorAdEndpointProvider.h>
#include <aws/pca-connector-ad/internal/PcaConnectorAdEndpointRules.h>

namespace Aws {
namespace PcaConnectorAd {
namespace Endpoint {
PcaConnectorAdEndpointProvider::PcaConnectorAdEndpointProvider()
    : PcaConnectorAdDefaultEpProviderBase(Aws::PcaConnectorAd::PcaConnectorAdEndpointRules::GetRulesBlob(),
                                          Aws::PcaConnectorAd::PcaConnectorAdEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace PcaConnectorAd
}  // namespace Aws
