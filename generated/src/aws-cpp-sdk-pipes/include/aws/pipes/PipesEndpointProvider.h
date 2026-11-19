/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pipes/PipesClientConfiguration.h>
#include <aws/pipes/Pipes_EXPORTS.h>

namespace Aws {
namespace Pipes {
namespace Endpoint {
using PipesClientConfiguration = Aws::Pipes::PipesClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using PipesClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_PIPES_API PipesBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~PipesBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const PipesClientConfiguration& config);
  virtual void SetFromClientConfiguration(const PipesClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const PipesClientConfiguration& config);
};

/**
 * The type for the Pipes Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PipesEndpointProviderBase = EndpointProviderBase<PipesClientConfiguration, PipesBuiltInParameters, PipesClientContextParameters>;

using PipesDefaultEpProviderBase = BDDEndpointProvider<PipesClientConfiguration, PipesBuiltInParameters, PipesClientContextParameters>;

}  // namespace Endpoint
}  // namespace Pipes

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_PIPES_EXTERN template class AWS_PIPES_API Aws::Endpoint::EndpointProviderBase<
    Pipes::Endpoint::PipesClientConfiguration, Pipes::Endpoint::PipesBuiltInParameters, Pipes::Endpoint::PipesClientContextParameters>;

AWS_PIPES_EXTERN template class AWS_PIPES_API Aws::Endpoint::BDDEndpointProvider<
    Pipes::Endpoint::PipesClientConfiguration, Pipes::Endpoint::PipesBuiltInParameters, Pipes::Endpoint::PipesClientContextParameters>;
}  // namespace Endpoint

namespace Pipes {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_PIPES_API PipesEndpointProvider : public PipesDefaultEpProviderBase {
 public:
  using PipesResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  PipesEndpointProvider();

  ~PipesEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Pipes
}  // namespace Aws
