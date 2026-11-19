/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementClientConfiguration.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Endpoint {
using PartnerCentralRevenueMeasurementClientConfiguration =
    Aws::PartnerCentralRevenueMeasurement::PartnerCentralRevenueMeasurementClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using PartnerCentralRevenueMeasurementClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_PARTNERCENTRALREVENUEMEASUREMENT_API PartnerCentralRevenueMeasurementBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~PartnerCentralRevenueMeasurementBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const PartnerCentralRevenueMeasurementClientConfiguration& config);
  virtual void SetFromClientConfiguration(const PartnerCentralRevenueMeasurementClientConfiguration& config,
                                          const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const PartnerCentralRevenueMeasurementClientConfiguration& config);
};

/**
 * The type for the PartnerCentralRevenueMeasurement Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PartnerCentralRevenueMeasurementEndpointProviderBase =
    EndpointProviderBase<PartnerCentralRevenueMeasurementClientConfiguration, PartnerCentralRevenueMeasurementBuiltInParameters,
                         PartnerCentralRevenueMeasurementClientContextParameters>;

using PartnerCentralRevenueMeasurementDefaultEpProviderBase =
    BDDEndpointProvider<PartnerCentralRevenueMeasurementClientConfiguration, PartnerCentralRevenueMeasurementBuiltInParameters,
                        PartnerCentralRevenueMeasurementClientContextParameters>;

}  // namespace Endpoint
}  // namespace PartnerCentralRevenueMeasurement

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_PARTNERCENTRALREVENUEMEASUREMENT_EXTERN template class AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::Endpoint::EndpointProviderBase<
    PartnerCentralRevenueMeasurement::Endpoint::PartnerCentralRevenueMeasurementClientConfiguration,
    PartnerCentralRevenueMeasurement::Endpoint::PartnerCentralRevenueMeasurementBuiltInParameters,
    PartnerCentralRevenueMeasurement::Endpoint::PartnerCentralRevenueMeasurementClientContextParameters>;

AWS_PARTNERCENTRALREVENUEMEASUREMENT_EXTERN template class AWS_PARTNERCENTRALREVENUEMEASUREMENT_API
    Aws::Endpoint::BDDEndpointProvider<PartnerCentralRevenueMeasurement::Endpoint::PartnerCentralRevenueMeasurementClientConfiguration,
                                       PartnerCentralRevenueMeasurement::Endpoint::PartnerCentralRevenueMeasurementBuiltInParameters,
                                       PartnerCentralRevenueMeasurement::Endpoint::PartnerCentralRevenueMeasurementClientContextParameters>;
}  // namespace Endpoint

namespace PartnerCentralRevenueMeasurement {
namespace Endpoint {
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
