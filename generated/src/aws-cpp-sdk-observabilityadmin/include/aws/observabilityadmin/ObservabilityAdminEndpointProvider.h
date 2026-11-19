/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/observabilityadmin/ObservabilityAdminClientConfiguration.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

namespace Aws {
namespace ObservabilityAdmin {
namespace Endpoint {
using ObservabilityAdminClientConfiguration = Aws::ObservabilityAdmin::ObservabilityAdminClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ObservabilityAdminClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_OBSERVABILITYADMIN_API ObservabilityAdminBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ObservabilityAdminBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ObservabilityAdminClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ObservabilityAdminClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ObservabilityAdminClientConfiguration& config);
};

/**
 * The type for the ObservabilityAdmin Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ObservabilityAdminEndpointProviderBase =
    EndpointProviderBase<ObservabilityAdminClientConfiguration, ObservabilityAdminBuiltInParameters,
                         ObservabilityAdminClientContextParameters>;

using ObservabilityAdminDefaultEpProviderBase =
    BDDEndpointProvider<ObservabilityAdminClientConfiguration, ObservabilityAdminBuiltInParameters,
                        ObservabilityAdminClientContextParameters>;

}  // namespace Endpoint
}  // namespace ObservabilityAdmin

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_OBSERVABILITYADMIN_EXTERN template class AWS_OBSERVABILITYADMIN_API Aws::Endpoint::EndpointProviderBase<
    ObservabilityAdmin::Endpoint::ObservabilityAdminClientConfiguration, ObservabilityAdmin::Endpoint::ObservabilityAdminBuiltInParameters,
    ObservabilityAdmin::Endpoint::ObservabilityAdminClientContextParameters>;

AWS_OBSERVABILITYADMIN_EXTERN template class AWS_OBSERVABILITYADMIN_API Aws::Endpoint::BDDEndpointProvider<
    ObservabilityAdmin::Endpoint::ObservabilityAdminClientConfiguration, ObservabilityAdmin::Endpoint::ObservabilityAdminBuiltInParameters,
    ObservabilityAdmin::Endpoint::ObservabilityAdminClientContextParameters>;
}  // namespace Endpoint

namespace ObservabilityAdmin {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_OBSERVABILITYADMIN_API ObservabilityAdminEndpointProvider : public ObservabilityAdminDefaultEpProviderBase {
 public:
  using ObservabilityAdminResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ObservabilityAdminEndpointProvider();

  ~ObservabilityAdminEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ObservabilityAdmin
}  // namespace Aws
