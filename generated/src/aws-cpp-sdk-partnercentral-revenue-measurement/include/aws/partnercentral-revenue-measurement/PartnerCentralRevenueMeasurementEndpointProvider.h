/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using PartnerCentralRevenueMeasurementClientContextParameters = Aws::Endpoint::ClientContextParameters;

using PartnerCentralRevenueMeasurementClientConfiguration = Aws::Client::GenericClientConfiguration;
using PartnerCentralRevenueMeasurementBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the PartnerCentralRevenueMeasurement Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PartnerCentralRevenueMeasurementEndpointProviderBase =
    EndpointProviderBase<PartnerCentralRevenueMeasurementClientConfiguration, PartnerCentralRevenueMeasurementBuiltInParameters,
                         PartnerCentralRevenueMeasurementClientContextParameters>;

using PartnerCentralRevenueMeasurementDefaultEpProviderBase =
    DefaultEndpointProvider<PartnerCentralRevenueMeasurementClientConfiguration, PartnerCentralRevenueMeasurementBuiltInParameters,
                            PartnerCentralRevenueMeasurementClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_PARTNERCENTRALREVENUEMEASUREMENT_API PartnerCentralRevenueMeasurementEndpointProvider
    : public PartnerCentralRevenueMeasurementDefaultEpProviderBase {
 public:
  using PartnerCentralRevenueMeasurementResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  PartnerCentralRevenueMeasurementEndpointProvider();

  ~PartnerCentralRevenueMeasurementEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
