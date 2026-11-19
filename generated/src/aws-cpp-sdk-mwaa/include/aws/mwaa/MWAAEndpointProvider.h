/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mwaa/MWAAClientConfiguration.h>
#include <aws/mwaa/MWAA_EXPORTS.h>

namespace Aws {
namespace MWAA {
namespace Endpoint {
using MWAAClientConfiguration = Aws::MWAA::MWAAClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MWAAClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MWAA_API MWAABuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~MWAABuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const MWAAClientConfiguration& config);
  virtual void SetFromClientConfiguration(const MWAAClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const MWAAClientConfiguration& config);
};

/**
 * The type for the MWAA Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MWAAEndpointProviderBase = EndpointProviderBase<MWAAClientConfiguration, MWAABuiltInParameters, MWAAClientContextParameters>;

using MWAADefaultEpProviderBase = BDDEndpointProvider<MWAAClientConfiguration, MWAABuiltInParameters, MWAAClientContextParameters>;

}  // namespace Endpoint
}  // namespace MWAA

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MWAA_EXTERN template class AWS_MWAA_API Aws::Endpoint::EndpointProviderBase<
    MWAA::Endpoint::MWAAClientConfiguration, MWAA::Endpoint::MWAABuiltInParameters, MWAA::Endpoint::MWAAClientContextParameters>;

AWS_MWAA_EXTERN template class AWS_MWAA_API Aws::Endpoint::BDDEndpointProvider<
    MWAA::Endpoint::MWAAClientConfiguration, MWAA::Endpoint::MWAABuiltInParameters, MWAA::Endpoint::MWAAClientContextParameters>;
}  // namespace Endpoint

namespace MWAA {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MWAA_API MWAAEndpointProvider : public MWAADefaultEpProviderBase {
 public:
  using MWAAResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MWAAEndpointProvider();

  ~MWAAEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace MWAA
}  // namespace Aws
