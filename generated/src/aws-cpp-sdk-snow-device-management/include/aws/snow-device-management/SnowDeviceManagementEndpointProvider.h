/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/snow-device-management/SnowDeviceManagementClientConfiguration.h>
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>

namespace Aws {
namespace SnowDeviceManagement {
namespace Endpoint {
using SnowDeviceManagementClientConfiguration = Aws::SnowDeviceManagement::SnowDeviceManagementClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SnowDeviceManagementClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SNOWDEVICEMANAGEMENT_API SnowDeviceManagementBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SnowDeviceManagementBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SnowDeviceManagementClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SnowDeviceManagementClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SnowDeviceManagementClientConfiguration& config);
};

/**
 * The type for the SnowDeviceManagement Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SnowDeviceManagementEndpointProviderBase =
    EndpointProviderBase<SnowDeviceManagementClientConfiguration, SnowDeviceManagementBuiltInParameters,
                         SnowDeviceManagementClientContextParameters>;

using SnowDeviceManagementDefaultEpProviderBase =
    BDDEndpointProvider<SnowDeviceManagementClientConfiguration, SnowDeviceManagementBuiltInParameters,
                        SnowDeviceManagementClientContextParameters>;

}  // namespace Endpoint
}  // namespace SnowDeviceManagement

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SNOWDEVICEMANAGEMENT_EXTERN template class AWS_SNOWDEVICEMANAGEMENT_API
    Aws::Endpoint::EndpointProviderBase<SnowDeviceManagement::Endpoint::SnowDeviceManagementClientConfiguration,
                                        SnowDeviceManagement::Endpoint::SnowDeviceManagementBuiltInParameters,
                                        SnowDeviceManagement::Endpoint::SnowDeviceManagementClientContextParameters>;

AWS_SNOWDEVICEMANAGEMENT_EXTERN template class AWS_SNOWDEVICEMANAGEMENT_API
    Aws::Endpoint::BDDEndpointProvider<SnowDeviceManagement::Endpoint::SnowDeviceManagementClientConfiguration,
                                       SnowDeviceManagement::Endpoint::SnowDeviceManagementBuiltInParameters,
                                       SnowDeviceManagement::Endpoint::SnowDeviceManagementClientContextParameters>;
}  // namespace Endpoint

namespace SnowDeviceManagement {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SNOWDEVICEMANAGEMENT_API SnowDeviceManagementEndpointProvider : public SnowDeviceManagementDefaultEpProviderBase {
 public:
  using SnowDeviceManagementResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SnowDeviceManagementEndpointProvider();

  ~SnowDeviceManagementEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SnowDeviceManagement
}  // namespace Aws
