/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/VPCLatticeEndpointProvider.h>
#include <aws/vpc-lattice/internal/VPCLatticeEndpointRules.h>

namespace Aws {
#ifndef AWS_VPCLATTICE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<VPCLattice::Endpoint::VPCLatticeClientConfiguration,
                                                   VPCLattice::Endpoint::VPCLatticeBuiltInParameters,
                                                   VPCLattice::Endpoint::VPCLatticeClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<VPCLattice::Endpoint::VPCLatticeClientConfiguration,
                                                  VPCLattice::Endpoint::VPCLatticeBuiltInParameters,
                                                  VPCLattice::Endpoint::VPCLatticeClientContextParameters>;
}  // namespace Endpoint
#endif

namespace VPCLattice {
namespace Endpoint {
VPCLatticeEndpointProvider::VPCLatticeEndpointProvider()
    : VPCLatticeDefaultEpProviderBase(Aws::VPCLattice::VPCLatticeEndpointRules::GetRulesBlob(),
                                      Aws::VPCLattice::VPCLatticeEndpointRules::RulesBlobSize) {}

void VPCLatticeBuiltInParameters::SetFromClientConfiguration(const VPCLatticeClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const VPCLatticeClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void VPCLatticeBuiltInParameters::SetFromClientConfiguration(const VPCLatticeClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const VPCLatticeClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void VPCLatticeBuiltInParameters::SetServiceSpecificParameters(const VPCLatticeClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace VPCLattice
}  // namespace Aws
