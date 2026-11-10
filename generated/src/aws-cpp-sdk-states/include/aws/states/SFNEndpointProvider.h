/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/states/SFNClientConfiguration.h>
#include <aws/states/SFN_EXPORTS.h>

namespace Aws {
namespace SFN {
namespace Endpoint {
using SFNClientConfiguration = Aws::SFN::SFNClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SFNClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SFN_API SFNBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SFNBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SFNClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SFNClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SFNClientConfiguration& config);
};

/**
 * The type for the SFN Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SFNEndpointProviderBase = EndpointProviderBase<SFNClientConfiguration, SFNBuiltInParameters, SFNClientContextParameters>;

using SFNDefaultEpProviderBase = BDDEndpointProvider<SFNClientConfiguration, SFNBuiltInParameters, SFNClientContextParameters>;

}  // namespace Endpoint
}  // namespace SFN

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SFN_EXTERN template class AWS_SFN_API Aws::Endpoint::EndpointProviderBase<
    SFN::Endpoint::SFNClientConfiguration, SFN::Endpoint::SFNBuiltInParameters, SFN::Endpoint::SFNClientContextParameters>;

AWS_SFN_EXTERN template class AWS_SFN_API Aws::Endpoint::BDDEndpointProvider<
    SFN::Endpoint::SFNClientConfiguration, SFN::Endpoint::SFNBuiltInParameters, SFN::Endpoint::SFNClientContextParameters>;
}  // namespace Endpoint

namespace SFN {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SFN_API SFNEndpointProvider : public SFNDefaultEpProviderBase {
 public:
  using SFNResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SFNEndpointProvider();

  ~SFNEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SFN
}  // namespace Aws
