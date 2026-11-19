/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/proton/ProtonClientConfiguration.h>
#include <aws/proton/Proton_EXPORTS.h>

namespace Aws {
namespace Proton {
namespace Endpoint {
using ProtonClientConfiguration = Aws::Proton::ProtonClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ProtonClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_PROTON_API ProtonBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ProtonBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ProtonClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ProtonClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ProtonClientConfiguration& config);
};

/**
 * The type for the Proton Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ProtonEndpointProviderBase = EndpointProviderBase<ProtonClientConfiguration, ProtonBuiltInParameters, ProtonClientContextParameters>;

using ProtonDefaultEpProviderBase = BDDEndpointProvider<ProtonClientConfiguration, ProtonBuiltInParameters, ProtonClientContextParameters>;

}  // namespace Endpoint
}  // namespace Proton

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_PROTON_EXTERN template class AWS_PROTON_API
    Aws::Endpoint::EndpointProviderBase<Proton::Endpoint::ProtonClientConfiguration, Proton::Endpoint::ProtonBuiltInParameters,
                                        Proton::Endpoint::ProtonClientContextParameters>;

AWS_PROTON_EXTERN template class AWS_PROTON_API
    Aws::Endpoint::BDDEndpointProvider<Proton::Endpoint::ProtonClientConfiguration, Proton::Endpoint::ProtonBuiltInParameters,
                                       Proton::Endpoint::ProtonClientContextParameters>;
}  // namespace Endpoint

namespace Proton {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_PROTON_API ProtonEndpointProvider : public ProtonDefaultEpProviderBase {
 public:
  using ProtonResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ProtonEndpointProvider();

  ~ProtonEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Proton
}  // namespace Aws
