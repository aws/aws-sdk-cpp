/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/shield/ShieldClientConfiguration.h>
#include <aws/shield/Shield_EXPORTS.h>

namespace Aws {
namespace Shield {
namespace Endpoint {
using ShieldClientConfiguration = Aws::Shield::ShieldClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ShieldClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SHIELD_API ShieldBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ShieldBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ShieldClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ShieldClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ShieldClientConfiguration& config);
};

/**
 * The type for the Shield Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ShieldEndpointProviderBase = EndpointProviderBase<ShieldClientConfiguration, ShieldBuiltInParameters, ShieldClientContextParameters>;

using ShieldDefaultEpProviderBase = BDDEndpointProvider<ShieldClientConfiguration, ShieldBuiltInParameters, ShieldClientContextParameters>;

}  // namespace Endpoint
}  // namespace Shield

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SHIELD_EXTERN template class AWS_SHIELD_API
    Aws::Endpoint::EndpointProviderBase<Shield::Endpoint::ShieldClientConfiguration, Shield::Endpoint::ShieldBuiltInParameters,
                                        Shield::Endpoint::ShieldClientContextParameters>;

AWS_SHIELD_EXTERN template class AWS_SHIELD_API
    Aws::Endpoint::BDDEndpointProvider<Shield::Endpoint::ShieldClientConfiguration, Shield::Endpoint::ShieldBuiltInParameters,
                                       Shield::Endpoint::ShieldClientContextParameters>;
}  // namespace Endpoint

namespace Shield {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SHIELD_API ShieldEndpointProvider : public ShieldDefaultEpProviderBase {
 public:
  using ShieldResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ShieldEndpointProvider();

  ~ShieldEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Shield
}  // namespace Aws
