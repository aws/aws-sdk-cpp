/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/uxc/UxcClientConfiguration.h>
#include <aws/uxc/Uxc_EXPORTS.h>

namespace Aws {
namespace uxc {
namespace Endpoint {
using UxcClientConfiguration = Aws::uxc::UxcClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using UxcClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_UXC_API UxcBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~UxcBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const UxcClientConfiguration& config);
  virtual void SetFromClientConfiguration(const UxcClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const UxcClientConfiguration& config);
};

/**
 * The type for the uxc Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using UxcEndpointProviderBase = EndpointProviderBase<UxcClientConfiguration, UxcBuiltInParameters, UxcClientContextParameters>;

using UxcDefaultEpProviderBase = BDDEndpointProvider<UxcClientConfiguration, UxcBuiltInParameters, UxcClientContextParameters>;

}  // namespace Endpoint
}  // namespace uxc

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_UXC_EXTERN template class AWS_UXC_API Aws::Endpoint::EndpointProviderBase<
    uxc::Endpoint::UxcClientConfiguration, uxc::Endpoint::UxcBuiltInParameters, uxc::Endpoint::UxcClientContextParameters>;

AWS_UXC_EXTERN template class AWS_UXC_API Aws::Endpoint::BDDEndpointProvider<
    uxc::Endpoint::UxcClientConfiguration, uxc::Endpoint::UxcBuiltInParameters, uxc::Endpoint::UxcClientContextParameters>;
}  // namespace Endpoint

namespace uxc {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_UXC_API UxcEndpointProvider : public UxcDefaultEpProviderBase {
 public:
  using UxcResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  UxcEndpointProvider();

  ~UxcEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace uxc
}  // namespace Aws
