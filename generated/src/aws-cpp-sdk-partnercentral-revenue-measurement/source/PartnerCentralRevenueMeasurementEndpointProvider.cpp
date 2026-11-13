/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementEndpointProvider.h>
#include <aws/partnercentral-revenue-measurement/internal/PartnerCentralRevenueMeasurementEndpointRules.h>

namespace Aws {
#ifndef AWS_PARTNERCENTRALREVENUEMEASUREMENT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<
    PartnerCentralRevenueMeasurement::Endpoint::PartnerCentralRevenueMeasurementClientConfiguration,
    PartnerCentralRevenueMeasurement::Endpoint::PartnerCentralRevenueMeasurementBuiltInParameters,
    PartnerCentralRevenueMeasurement::Endpoint::PartnerCentralRevenueMeasurementClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<
    PartnerCentralRevenueMeasurement::Endpoint::PartnerCentralRevenueMeasurementClientConfiguration,
    PartnerCentralRevenueMeasurement::Endpoint::PartnerCentralRevenueMeasurementBuiltInParameters,
    PartnerCentralRevenueMeasurement::Endpoint::PartnerCentralRevenueMeasurementClientContextParameters>;
}  // namespace Endpoint
#endif

namespace PartnerCentralRevenueMeasurement {
namespace Endpoint {
PartnerCentralRevenueMeasurementEndpointProvider::PartnerCentralRevenueMeasurementEndpointProvider()
    : PartnerCentralRevenueMeasurementDefaultEpProviderBase(
          Aws::PartnerCentralRevenueMeasurement::PartnerCentralRevenueMeasurementEndpointRules::GetRulesBlob(),
          Aws::PartnerCentralRevenueMeasurement::PartnerCentralRevenueMeasurementEndpointRules::RulesBlobSize) {}

void PartnerCentralRevenueMeasurementBuiltInParameters::SetFromClientConfiguration(
    const PartnerCentralRevenueMeasurementClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const PartnerCentralRevenueMeasurementClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void PartnerCentralRevenueMeasurementBuiltInParameters::SetFromClientConfiguration(
    const PartnerCentralRevenueMeasurementClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const PartnerCentralRevenueMeasurementClientConfiguration::BaseClientConfigClass&>(config),
                             serviceName);
  SetServiceSpecificParameters(config);
}

void PartnerCentralRevenueMeasurementBuiltInParameters::SetServiceSpecificParameters(
    const PartnerCentralRevenueMeasurementClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
