/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ram/RAMClientConfiguration.h>
#include <aws/ram/RAM_EXPORTS.h>

namespace Aws {
namespace RAM {
namespace Endpoint {
using RAMClientConfiguration = Aws::RAM::RAMClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using RAMClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_RAM_API RAMBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~RAMBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const RAMClientConfiguration& config);
  virtual void SetFromClientConfiguration(const RAMClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const RAMClientConfiguration& config);
};

/**
 * The type for the RAM Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using RAMEndpointProviderBase = EndpointProviderBase<RAMClientConfiguration, RAMBuiltInParameters, RAMClientContextParameters>;

using RAMDefaultEpProviderBase = BDDEndpointProvider<RAMClientConfiguration, RAMBuiltInParameters, RAMClientContextParameters>;

}  // namespace Endpoint
}  // namespace RAM

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_RAM_EXTERN template class AWS_RAM_API Aws::Endpoint::EndpointProviderBase<
    RAM::Endpoint::RAMClientConfiguration, RAM::Endpoint::RAMBuiltInParameters, RAM::Endpoint::RAMClientContextParameters>;

AWS_RAM_EXTERN template class AWS_RAM_API Aws::Endpoint::BDDEndpointProvider<
    RAM::Endpoint::RAMClientConfiguration, RAM::Endpoint::RAMBuiltInParameters, RAM::Endpoint::RAMClientContextParameters>;
}  // namespace Endpoint

namespace RAM {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_RAM_API RAMEndpointProvider : public RAMDefaultEpProviderBase {
 public:
  using RAMResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  RAMEndpointProvider();

  ~RAMEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace RAM
}  // namespace Aws
