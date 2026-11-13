/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pcs/PCSClientConfiguration.h>
#include <aws/pcs/PCS_EXPORTS.h>

namespace Aws {
namespace PCS {
namespace Endpoint {
using PCSClientConfiguration = Aws::PCS::PCSClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using PCSClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_PCS_API PCSBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~PCSBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const PCSClientConfiguration& config);
  virtual void SetFromClientConfiguration(const PCSClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const PCSClientConfiguration& config);
};

/**
 * The type for the PCS Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PCSEndpointProviderBase = EndpointProviderBase<PCSClientConfiguration, PCSBuiltInParameters, PCSClientContextParameters>;

using PCSDefaultEpProviderBase = BDDEndpointProvider<PCSClientConfiguration, PCSBuiltInParameters, PCSClientContextParameters>;

}  // namespace Endpoint
}  // namespace PCS

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_PCS_EXTERN template class AWS_PCS_API Aws::Endpoint::EndpointProviderBase<
    PCS::Endpoint::PCSClientConfiguration, PCS::Endpoint::PCSBuiltInParameters, PCS::Endpoint::PCSClientContextParameters>;

AWS_PCS_EXTERN template class AWS_PCS_API Aws::Endpoint::BDDEndpointProvider<
    PCS::Endpoint::PCSClientConfiguration, PCS::Endpoint::PCSBuiltInParameters, PCS::Endpoint::PCSClientContextParameters>;
}  // namespace Endpoint

namespace PCS {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_PCS_API PCSEndpointProvider : public PCSDefaultEpProviderBase {
 public:
  using PCSResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  PCSEndpointProvider();

  ~PCSEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace PCS
}  // namespace Aws
