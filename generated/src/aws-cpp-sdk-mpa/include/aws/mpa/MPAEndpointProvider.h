/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mpa/MPAClientConfiguration.h>
#include <aws/mpa/MPA_EXPORTS.h>

namespace Aws {
namespace MPA {
namespace Endpoint {
using MPAClientConfiguration = Aws::MPA::MPAClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MPAClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MPA_API MPABuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~MPABuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const MPAClientConfiguration& config);
  virtual void SetFromClientConfiguration(const MPAClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const MPAClientConfiguration& config);
};

/**
 * The type for the MPA Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MPAEndpointProviderBase = EndpointProviderBase<MPAClientConfiguration, MPABuiltInParameters, MPAClientContextParameters>;

using MPADefaultEpProviderBase = BDDEndpointProvider<MPAClientConfiguration, MPABuiltInParameters, MPAClientContextParameters>;

}  // namespace Endpoint
}  // namespace MPA

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MPA_EXTERN template class AWS_MPA_API Aws::Endpoint::EndpointProviderBase<
    MPA::Endpoint::MPAClientConfiguration, MPA::Endpoint::MPABuiltInParameters, MPA::Endpoint::MPAClientContextParameters>;

AWS_MPA_EXTERN template class AWS_MPA_API Aws::Endpoint::BDDEndpointProvider<
    MPA::Endpoint::MPAClientConfiguration, MPA::Endpoint::MPABuiltInParameters, MPA::Endpoint::MPAClientContextParameters>;
}  // namespace Endpoint

namespace MPA {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MPA_API MPAEndpointProvider : public MPADefaultEpProviderBase {
 public:
  using MPAResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MPAEndpointProvider();

  ~MPAEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace MPA
}  // namespace Aws
