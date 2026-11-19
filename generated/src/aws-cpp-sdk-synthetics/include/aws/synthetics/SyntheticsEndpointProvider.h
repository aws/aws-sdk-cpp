/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/synthetics/SyntheticsClientConfiguration.h>
#include <aws/synthetics/Synthetics_EXPORTS.h>

namespace Aws {
namespace Synthetics {
namespace Endpoint {
using SyntheticsClientConfiguration = Aws::Synthetics::SyntheticsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SyntheticsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SYNTHETICS_API SyntheticsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SyntheticsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SyntheticsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SyntheticsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SyntheticsClientConfiguration& config);
};

/**
 * The type for the Synthetics Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SyntheticsEndpointProviderBase =
    EndpointProviderBase<SyntheticsClientConfiguration, SyntheticsBuiltInParameters, SyntheticsClientContextParameters>;

using SyntheticsDefaultEpProviderBase =
    BDDEndpointProvider<SyntheticsClientConfiguration, SyntheticsBuiltInParameters, SyntheticsClientContextParameters>;

}  // namespace Endpoint
}  // namespace Synthetics

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SYNTHETICS_EXTERN template class AWS_SYNTHETICS_API Aws::Endpoint::EndpointProviderBase<
    Synthetics::Endpoint::SyntheticsClientConfiguration, Synthetics::Endpoint::SyntheticsBuiltInParameters,
    Synthetics::Endpoint::SyntheticsClientContextParameters>;

AWS_SYNTHETICS_EXTERN template class AWS_SYNTHETICS_API Aws::Endpoint::BDDEndpointProvider<
    Synthetics::Endpoint::SyntheticsClientConfiguration, Synthetics::Endpoint::SyntheticsBuiltInParameters,
    Synthetics::Endpoint::SyntheticsClientContextParameters>;
}  // namespace Endpoint

namespace Synthetics {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SYNTHETICS_API SyntheticsEndpointProvider : public SyntheticsDefaultEpProviderBase {
 public:
  using SyntheticsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SyntheticsEndpointProvider();

  ~SyntheticsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Synthetics
}  // namespace Aws
