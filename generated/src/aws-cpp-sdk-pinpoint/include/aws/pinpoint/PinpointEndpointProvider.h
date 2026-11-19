/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint/PinpointClientConfiguration.h>
#include <aws/pinpoint/Pinpoint_EXPORTS.h>

namespace Aws {
namespace Pinpoint {
namespace Endpoint {
using PinpointClientConfiguration = Aws::Pinpoint::PinpointClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using PinpointClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_PINPOINT_API PinpointBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~PinpointBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const PinpointClientConfiguration& config);
  virtual void SetFromClientConfiguration(const PinpointClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const PinpointClientConfiguration& config);
};

/**
 * The type for the Pinpoint Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PinpointEndpointProviderBase =
    EndpointProviderBase<PinpointClientConfiguration, PinpointBuiltInParameters, PinpointClientContextParameters>;

using PinpointDefaultEpProviderBase =
    BDDEndpointProvider<PinpointClientConfiguration, PinpointBuiltInParameters, PinpointClientContextParameters>;

}  // namespace Endpoint
}  // namespace Pinpoint

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_PINPOINT_EXTERN template class AWS_PINPOINT_API
    Aws::Endpoint::EndpointProviderBase<Pinpoint::Endpoint::PinpointClientConfiguration, Pinpoint::Endpoint::PinpointBuiltInParameters,
                                        Pinpoint::Endpoint::PinpointClientContextParameters>;

AWS_PINPOINT_EXTERN template class AWS_PINPOINT_API
    Aws::Endpoint::BDDEndpointProvider<Pinpoint::Endpoint::PinpointClientConfiguration, Pinpoint::Endpoint::PinpointBuiltInParameters,
                                       Pinpoint::Endpoint::PinpointClientContextParameters>;
}  // namespace Endpoint

namespace Pinpoint {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_PINPOINT_API PinpointEndpointProvider : public PinpointDefaultEpProviderBase {
 public:
  using PinpointResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  PinpointEndpointProvider();

  ~PinpointEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Pinpoint
}  // namespace Aws
