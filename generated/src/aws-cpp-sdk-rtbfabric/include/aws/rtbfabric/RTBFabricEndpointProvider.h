/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rtbfabric/RTBFabricClientConfiguration.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>

namespace Aws {
namespace RTBFabric {
namespace Endpoint {
using RTBFabricClientConfiguration = Aws::RTBFabric::RTBFabricClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using RTBFabricClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_RTBFABRIC_API RTBFabricBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~RTBFabricBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const RTBFabricClientConfiguration& config);
  virtual void SetFromClientConfiguration(const RTBFabricClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const RTBFabricClientConfiguration& config);
};

/**
 * The type for the RTBFabric Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using RTBFabricEndpointProviderBase =
    EndpointProviderBase<RTBFabricClientConfiguration, RTBFabricBuiltInParameters, RTBFabricClientContextParameters>;

using RTBFabricDefaultEpProviderBase =
    BDDEndpointProvider<RTBFabricClientConfiguration, RTBFabricBuiltInParameters, RTBFabricClientContextParameters>;

}  // namespace Endpoint
}  // namespace RTBFabric

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_RTBFABRIC_EXTERN template class AWS_RTBFABRIC_API
    Aws::Endpoint::EndpointProviderBase<RTBFabric::Endpoint::RTBFabricClientConfiguration, RTBFabric::Endpoint::RTBFabricBuiltInParameters,
                                        RTBFabric::Endpoint::RTBFabricClientContextParameters>;

AWS_RTBFABRIC_EXTERN template class AWS_RTBFABRIC_API
    Aws::Endpoint::BDDEndpointProvider<RTBFabric::Endpoint::RTBFabricClientConfiguration, RTBFabric::Endpoint::RTBFabricBuiltInParameters,
                                       RTBFabric::Endpoint::RTBFabricClientContextParameters>;
}  // namespace Endpoint

namespace RTBFabric {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_RTBFABRIC_API RTBFabricEndpointProvider : public RTBFabricDefaultEpProviderBase {
 public:
  using RTBFabricResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  RTBFabricEndpointProvider();

  ~RTBFabricEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace RTBFabric
}  // namespace Aws
