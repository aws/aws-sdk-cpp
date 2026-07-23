/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/VPCLatticeEndpointProvider.h>
#include <aws/vpc-lattice/internal/VPCLatticeEndpointRules.h>

namespace Aws {
namespace VPCLattice {
namespace Endpoint {
VPCLatticeEndpointProvider::VPCLatticeEndpointProvider()
    : VPCLatticeDefaultEpProviderBase(Aws::VPCLattice::VPCLatticeEndpointRules::GetRulesBlob(),
                                      Aws::VPCLattice::VPCLatticeEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace VPCLattice
}  // namespace Aws
