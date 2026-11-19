/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sustainability/SustainabilityClientConfiguration.h>
#include <aws/sustainability/Sustainability_EXPORTS.h>

namespace Aws {
namespace Sustainability {
namespace Endpoint {
using SustainabilityClientConfiguration = Aws::Sustainability::SustainabilityClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SustainabilityClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SUSTAINABILITY_API SustainabilityBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SustainabilityBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SustainabilityClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SustainabilityClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SustainabilityClientConfiguration& config);
};

/**
 * The type for the Sustainability Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SustainabilityEndpointProviderBase =
    EndpointProviderBase<SustainabilityClientConfiguration, SustainabilityBuiltInParameters, SustainabilityClientContextParameters>;

using SustainabilityDefaultEpProviderBase =
    BDDEndpointProvider<SustainabilityClientConfiguration, SustainabilityBuiltInParameters, SustainabilityClientContextParameters>;

}  // namespace Endpoint
}  // namespace Sustainability

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SUSTAINABILITY_EXTERN template class AWS_SUSTAINABILITY_API Aws::Endpoint::EndpointProviderBase<
    Sustainability::Endpoint::SustainabilityClientConfiguration, Sustainability::Endpoint::SustainabilityBuiltInParameters,
    Sustainability::Endpoint::SustainabilityClientContextParameters>;

AWS_SUSTAINABILITY_EXTERN template class AWS_SUSTAINABILITY_API Aws::Endpoint::BDDEndpointProvider<
    Sustainability::Endpoint::SustainabilityClientConfiguration, Sustainability::Endpoint::SustainabilityBuiltInParameters,
    Sustainability::Endpoint::SustainabilityClientContextParameters>;
}  // namespace Endpoint

namespace Sustainability {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SUSTAINABILITY_API SustainabilityEndpointProvider : public SustainabilityDefaultEpProviderBase {
 public:
  using SustainabilityResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SustainabilityEndpointProvider();

  ~SustainabilityEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Sustainability
}  // namespace Aws
