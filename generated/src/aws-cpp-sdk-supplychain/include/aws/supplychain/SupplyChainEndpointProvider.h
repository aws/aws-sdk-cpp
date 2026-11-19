/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/supplychain/SupplyChainClientConfiguration.h>
#include <aws/supplychain/SupplyChain_EXPORTS.h>

namespace Aws {
namespace SupplyChain {
namespace Endpoint {
using SupplyChainClientConfiguration = Aws::SupplyChain::SupplyChainClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SupplyChainClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SUPPLYCHAIN_API SupplyChainBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SupplyChainBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SupplyChainClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SupplyChainClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SupplyChainClientConfiguration& config);
};

/**
 * The type for the SupplyChain Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SupplyChainEndpointProviderBase =
    EndpointProviderBase<SupplyChainClientConfiguration, SupplyChainBuiltInParameters, SupplyChainClientContextParameters>;

using SupplyChainDefaultEpProviderBase =
    BDDEndpointProvider<SupplyChainClientConfiguration, SupplyChainBuiltInParameters, SupplyChainClientContextParameters>;

}  // namespace Endpoint
}  // namespace SupplyChain

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SUPPLYCHAIN_EXTERN template class AWS_SUPPLYCHAIN_API Aws::Endpoint::EndpointProviderBase<
    SupplyChain::Endpoint::SupplyChainClientConfiguration, SupplyChain::Endpoint::SupplyChainBuiltInParameters,
    SupplyChain::Endpoint::SupplyChainClientContextParameters>;

AWS_SUPPLYCHAIN_EXTERN template class AWS_SUPPLYCHAIN_API Aws::Endpoint::BDDEndpointProvider<
    SupplyChain::Endpoint::SupplyChainClientConfiguration, SupplyChain::Endpoint::SupplyChainBuiltInParameters,
    SupplyChain::Endpoint::SupplyChainClientContextParameters>;
}  // namespace Endpoint

namespace SupplyChain {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SUPPLYCHAIN_API SupplyChainEndpointProvider : public SupplyChainDefaultEpProviderBase {
 public:
  using SupplyChainResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SupplyChainEndpointProvider();

  ~SupplyChainEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SupplyChain
}  // namespace Aws
