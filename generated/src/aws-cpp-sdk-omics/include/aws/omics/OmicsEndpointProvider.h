/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/OmicsClientConfiguration.h>
#include <aws/omics/Omics_EXPORTS.h>

namespace Aws {
namespace Omics {
namespace Endpoint {
using OmicsClientConfiguration = Aws::Omics::OmicsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using OmicsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_OMICS_API OmicsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~OmicsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const OmicsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const OmicsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const OmicsClientConfiguration& config);
};

/**
 * The type for the Omics Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using OmicsEndpointProviderBase = EndpointProviderBase<OmicsClientConfiguration, OmicsBuiltInParameters, OmicsClientContextParameters>;

using OmicsDefaultEpProviderBase = BDDEndpointProvider<OmicsClientConfiguration, OmicsBuiltInParameters, OmicsClientContextParameters>;

}  // namespace Endpoint
}  // namespace Omics

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_OMICS_EXTERN template class AWS_OMICS_API Aws::Endpoint::EndpointProviderBase<
    Omics::Endpoint::OmicsClientConfiguration, Omics::Endpoint::OmicsBuiltInParameters, Omics::Endpoint::OmicsClientContextParameters>;

AWS_OMICS_EXTERN template class AWS_OMICS_API Aws::Endpoint::BDDEndpointProvider<
    Omics::Endpoint::OmicsClientConfiguration, Omics::Endpoint::OmicsBuiltInParameters, Omics::Endpoint::OmicsClientContextParameters>;
}  // namespace Endpoint

namespace Omics {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_OMICS_API OmicsEndpointProvider : public OmicsDefaultEpProviderBase {
 public:
  using OmicsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  OmicsEndpointProvider();

  ~OmicsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Omics
}  // namespace Aws
