/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementEndpointProvider.h>
#include <aws/partnercentral-revenue-measurement/internal/PartnerCentralRevenueMeasurementEndpointRules.h>

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Endpoint {
PartnerCentralRevenueMeasurementEndpointProvider::PartnerCentralRevenueMeasurementEndpointProvider()
    : PartnerCentralRevenueMeasurementDefaultEpProviderBase(
          Aws::PartnerCentralRevenueMeasurement::PartnerCentralRevenueMeasurementEndpointRules::GetRulesBlob(),
          Aws::PartnerCentralRevenueMeasurement::PartnerCentralRevenueMeasurementEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
