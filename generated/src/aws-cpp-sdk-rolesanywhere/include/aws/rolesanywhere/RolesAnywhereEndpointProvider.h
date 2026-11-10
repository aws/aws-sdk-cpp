/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rolesanywhere/RolesAnywhereClientConfiguration.h>
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>

namespace Aws {
namespace RolesAnywhere {
namespace Endpoint {
using RolesAnywhereClientConfiguration = Aws::RolesAnywhere::RolesAnywhereClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using RolesAnywhereClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_ROLESANYWHERE_API RolesAnywhereBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~RolesAnywhereBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const RolesAnywhereClientConfiguration& config);
  virtual void SetFromClientConfiguration(const RolesAnywhereClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const RolesAnywhereClientConfiguration& config);
};

/**
 * The type for the RolesAnywhere Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using RolesAnywhereEndpointProviderBase =
    EndpointProviderBase<RolesAnywhereClientConfiguration, RolesAnywhereBuiltInParameters, RolesAnywhereClientContextParameters>;

using RolesAnywhereDefaultEpProviderBase =
    BDDEndpointProvider<RolesAnywhereClientConfiguration, RolesAnywhereBuiltInParameters, RolesAnywhereClientContextParameters>;

}  // namespace Endpoint
}  // namespace RolesAnywhere

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_ROLESANYWHERE_EXTERN template class AWS_ROLESANYWHERE_API Aws::Endpoint::EndpointProviderBase<
    RolesAnywhere::Endpoint::RolesAnywhereClientConfiguration, RolesAnywhere::Endpoint::RolesAnywhereBuiltInParameters,
    RolesAnywhere::Endpoint::RolesAnywhereClientContextParameters>;

AWS_ROLESANYWHERE_EXTERN template class AWS_ROLESANYWHERE_API Aws::Endpoint::BDDEndpointProvider<
    RolesAnywhere::Endpoint::RolesAnywhereClientConfiguration, RolesAnywhere::Endpoint::RolesAnywhereBuiltInParameters,
    RolesAnywhere::Endpoint::RolesAnywhereClientContextParameters>;
}  // namespace Endpoint

namespace RolesAnywhere {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_ROLESANYWHERE_API RolesAnywhereEndpointProvider : public RolesAnywhereDefaultEpProviderBase {
 public:
  using RolesAnywhereResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  RolesAnywhereEndpointProvider();

  ~RolesAnywhereEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace RolesAnywhere
}  // namespace Aws
