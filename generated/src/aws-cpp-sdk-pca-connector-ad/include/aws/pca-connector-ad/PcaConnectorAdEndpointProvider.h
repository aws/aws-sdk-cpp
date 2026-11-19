/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pca-connector-ad/PcaConnectorAdClientConfiguration.h>
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>

namespace Aws {
namespace PcaConnectorAd {
namespace Endpoint {
using PcaConnectorAdClientConfiguration = Aws::PcaConnectorAd::PcaConnectorAdClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using PcaConnectorAdClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_PCACONNECTORAD_API PcaConnectorAdBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~PcaConnectorAdBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const PcaConnectorAdClientConfiguration& config);
  virtual void SetFromClientConfiguration(const PcaConnectorAdClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const PcaConnectorAdClientConfiguration& config);
};

/**
 * The type for the PcaConnectorAd Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PcaConnectorAdEndpointProviderBase =
    EndpointProviderBase<PcaConnectorAdClientConfiguration, PcaConnectorAdBuiltInParameters, PcaConnectorAdClientContextParameters>;

using PcaConnectorAdDefaultEpProviderBase =
    BDDEndpointProvider<PcaConnectorAdClientConfiguration, PcaConnectorAdBuiltInParameters, PcaConnectorAdClientContextParameters>;

}  // namespace Endpoint
}  // namespace PcaConnectorAd

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_PCACONNECTORAD_EXTERN template class AWS_PCACONNECTORAD_API Aws::Endpoint::EndpointProviderBase<
    PcaConnectorAd::Endpoint::PcaConnectorAdClientConfiguration, PcaConnectorAd::Endpoint::PcaConnectorAdBuiltInParameters,
    PcaConnectorAd::Endpoint::PcaConnectorAdClientContextParameters>;

AWS_PCACONNECTORAD_EXTERN template class AWS_PCACONNECTORAD_API Aws::Endpoint::BDDEndpointProvider<
    PcaConnectorAd::Endpoint::PcaConnectorAdClientConfiguration, PcaConnectorAd::Endpoint::PcaConnectorAdBuiltInParameters,
    PcaConnectorAd::Endpoint::PcaConnectorAdClientContextParameters>;
}  // namespace Endpoint

namespace PcaConnectorAd {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_PCACONNECTORAD_API PcaConnectorAdEndpointProvider : public PcaConnectorAdDefaultEpProviderBase {
 public:
  using PcaConnectorAdResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  PcaConnectorAdEndpointProvider();

  ~PcaConnectorAdEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace PcaConnectorAd
}  // namespace Aws
