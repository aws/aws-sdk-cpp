/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pca-connector-scep/PcaConnectorScepClientConfiguration.h>
#include <aws/pca-connector-scep/PcaConnectorScep_EXPORTS.h>

namespace Aws {
namespace PcaConnectorScep {
namespace Endpoint {
using PcaConnectorScepClientConfiguration = Aws::PcaConnectorScep::PcaConnectorScepClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using PcaConnectorScepClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_PCACONNECTORSCEP_API PcaConnectorScepBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~PcaConnectorScepBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const PcaConnectorScepClientConfiguration& config);
  virtual void SetFromClientConfiguration(const PcaConnectorScepClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const PcaConnectorScepClientConfiguration& config);
};

/**
 * The type for the PcaConnectorScep Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PcaConnectorScepEndpointProviderBase =
    EndpointProviderBase<PcaConnectorScepClientConfiguration, PcaConnectorScepBuiltInParameters, PcaConnectorScepClientContextParameters>;

using PcaConnectorScepDefaultEpProviderBase =
    BDDEndpointProvider<PcaConnectorScepClientConfiguration, PcaConnectorScepBuiltInParameters, PcaConnectorScepClientContextParameters>;

}  // namespace Endpoint
}  // namespace PcaConnectorScep

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_PCACONNECTORSCEP_EXTERN template class AWS_PCACONNECTORSCEP_API Aws::Endpoint::EndpointProviderBase<
    PcaConnectorScep::Endpoint::PcaConnectorScepClientConfiguration, PcaConnectorScep::Endpoint::PcaConnectorScepBuiltInParameters,
    PcaConnectorScep::Endpoint::PcaConnectorScepClientContextParameters>;

AWS_PCACONNECTORSCEP_EXTERN template class AWS_PCACONNECTORSCEP_API Aws::Endpoint::BDDEndpointProvider<
    PcaConnectorScep::Endpoint::PcaConnectorScepClientConfiguration, PcaConnectorScep::Endpoint::PcaConnectorScepBuiltInParameters,
    PcaConnectorScep::Endpoint::PcaConnectorScepClientContextParameters>;
}  // namespace Endpoint

namespace PcaConnectorScep {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_PCACONNECTORSCEP_API PcaConnectorScepEndpointProvider : public PcaConnectorScepDefaultEpProviderBase {
 public:
  using PcaConnectorScepResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  PcaConnectorScepEndpointProvider();

  ~PcaConnectorScepEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace PcaConnectorScep
}  // namespace Aws
