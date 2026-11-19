/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pi/PIClientConfiguration.h>
#include <aws/pi/PI_EXPORTS.h>

namespace Aws {
namespace PI {
namespace Endpoint {
using PIClientConfiguration = Aws::PI::PIClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using PIClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_PI_API PIBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~PIBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const PIClientConfiguration& config);
  virtual void SetFromClientConfiguration(const PIClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const PIClientConfiguration& config);
};

/**
 * The type for the PI Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PIEndpointProviderBase = EndpointProviderBase<PIClientConfiguration, PIBuiltInParameters, PIClientContextParameters>;

using PIDefaultEpProviderBase = BDDEndpointProvider<PIClientConfiguration, PIBuiltInParameters, PIClientContextParameters>;

}  // namespace Endpoint
}  // namespace PI

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_PI_EXTERN template class AWS_PI_API Aws::Endpoint::EndpointProviderBase<
    PI::Endpoint::PIClientConfiguration, PI::Endpoint::PIBuiltInParameters, PI::Endpoint::PIClientContextParameters>;

AWS_PI_EXTERN template class AWS_PI_API Aws::Endpoint::BDDEndpointProvider<
    PI::Endpoint::PIClientConfiguration, PI::Endpoint::PIBuiltInParameters, PI::Endpoint::PIClientContextParameters>;
}  // namespace Endpoint

namespace PI {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_PI_API PIEndpointProvider : public PIDefaultEpProviderBase {
 public:
  using PIResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  PIEndpointProvider();

  ~PIEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace PI
}  // namespace Aws
