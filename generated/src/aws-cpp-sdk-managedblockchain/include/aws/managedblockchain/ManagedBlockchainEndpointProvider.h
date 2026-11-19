/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/managedblockchain/ManagedBlockchainClientConfiguration.h>
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>

namespace Aws {
namespace ManagedBlockchain {
namespace Endpoint {
using ManagedBlockchainClientConfiguration = Aws::ManagedBlockchain::ManagedBlockchainClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ManagedBlockchainClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MANAGEDBLOCKCHAIN_API ManagedBlockchainBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ManagedBlockchainBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ManagedBlockchainClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ManagedBlockchainClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ManagedBlockchainClientConfiguration& config);
};

/**
 * The type for the ManagedBlockchain Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ManagedBlockchainEndpointProviderBase = EndpointProviderBase<ManagedBlockchainClientConfiguration, ManagedBlockchainBuiltInParameters,
                                                                   ManagedBlockchainClientContextParameters>;

using ManagedBlockchainDefaultEpProviderBase =
    BDDEndpointProvider<ManagedBlockchainClientConfiguration, ManagedBlockchainBuiltInParameters, ManagedBlockchainClientContextParameters>;

}  // namespace Endpoint
}  // namespace ManagedBlockchain

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MANAGEDBLOCKCHAIN_EXTERN template class AWS_MANAGEDBLOCKCHAIN_API Aws::Endpoint::EndpointProviderBase<
    ManagedBlockchain::Endpoint::ManagedBlockchainClientConfiguration, ManagedBlockchain::Endpoint::ManagedBlockchainBuiltInParameters,
    ManagedBlockchain::Endpoint::ManagedBlockchainClientContextParameters>;

AWS_MANAGEDBLOCKCHAIN_EXTERN template class AWS_MANAGEDBLOCKCHAIN_API Aws::Endpoint::BDDEndpointProvider<
    ManagedBlockchain::Endpoint::ManagedBlockchainClientConfiguration, ManagedBlockchain::Endpoint::ManagedBlockchainBuiltInParameters,
    ManagedBlockchain::Endpoint::ManagedBlockchainClientContextParameters>;
}  // namespace Endpoint

namespace ManagedBlockchain {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MANAGEDBLOCKCHAIN_API ManagedBlockchainEndpointProvider : public ManagedBlockchainDefaultEpProviderBase {
 public:
  using ManagedBlockchainResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ManagedBlockchainEndpointProvider();

  ~ManagedBlockchainEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ManagedBlockchain
}  // namespace Aws
