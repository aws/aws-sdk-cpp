/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/vpc-lattice/VPCLatticeClientConfiguration.h>
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>

namespace Aws {
namespace VPCLattice {
namespace Endpoint {
using VPCLatticeClientConfiguration = Aws::VPCLattice::VPCLatticeClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using VPCLatticeClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_VPCLATTICE_API VPCLatticeBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~VPCLatticeBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const VPCLatticeClientConfiguration& config);
  virtual void SetFromClientConfiguration(const VPCLatticeClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const VPCLatticeClientConfiguration& config);
};

/**
 * The type for the VPCLattice Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using VPCLatticeEndpointProviderBase =
    EndpointProviderBase<VPCLatticeClientConfiguration, VPCLatticeBuiltInParameters, VPCLatticeClientContextParameters>;

using VPCLatticeDefaultEpProviderBase =
    BDDEndpointProvider<VPCLatticeClientConfiguration, VPCLatticeBuiltInParameters, VPCLatticeClientContextParameters>;

}  // namespace Endpoint
}  // namespace VPCLattice

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_VPCLATTICE_EXTERN template class AWS_VPCLATTICE_API Aws::Endpoint::EndpointProviderBase<
    VPCLattice::Endpoint::VPCLatticeClientConfiguration, VPCLattice::Endpoint::VPCLatticeBuiltInParameters,
    VPCLattice::Endpoint::VPCLatticeClientContextParameters>;

AWS_VPCLATTICE_EXTERN template class AWS_VPCLATTICE_API Aws::Endpoint::BDDEndpointProvider<
    VPCLattice::Endpoint::VPCLatticeClientConfiguration, VPCLattice::Endpoint::VPCLatticeBuiltInParameters,
    VPCLattice::Endpoint::VPCLatticeClientContextParameters>;
}  // namespace Endpoint

namespace VPCLattice {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_VPCLATTICE_API VPCLatticeEndpointProvider : public VPCLatticeDefaultEpProviderBase {
 public:
  using VPCLatticeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  VPCLatticeEndpointProvider();

  ~VPCLatticeEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace VPCLattice
}  // namespace Aws
