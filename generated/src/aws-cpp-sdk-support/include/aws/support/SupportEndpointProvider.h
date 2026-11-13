/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/support/SupportClientConfiguration.h>
#include <aws/support/Support_EXPORTS.h>

namespace Aws {
namespace Support {
namespace Endpoint {
using SupportClientConfiguration = Aws::Support::SupportClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SupportClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SUPPORT_API SupportBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SupportBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SupportClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SupportClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SupportClientConfiguration& config);
};

/**
 * The type for the Support Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SupportEndpointProviderBase =
    EndpointProviderBase<SupportClientConfiguration, SupportBuiltInParameters, SupportClientContextParameters>;

using SupportDefaultEpProviderBase =
    BDDEndpointProvider<SupportClientConfiguration, SupportBuiltInParameters, SupportClientContextParameters>;

}  // namespace Endpoint
}  // namespace Support

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SUPPORT_EXTERN template class AWS_SUPPORT_API
    Aws::Endpoint::EndpointProviderBase<Support::Endpoint::SupportClientConfiguration, Support::Endpoint::SupportBuiltInParameters,
                                        Support::Endpoint::SupportClientContextParameters>;

AWS_SUPPORT_EXTERN template class AWS_SUPPORT_API
    Aws::Endpoint::BDDEndpointProvider<Support::Endpoint::SupportClientConfiguration, Support::Endpoint::SupportBuiltInParameters,
                                       Support::Endpoint::SupportClientContextParameters>;
}  // namespace Endpoint

namespace Support {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SUPPORT_API SupportEndpointProvider : public SupportDefaultEpProviderBase {
 public:
  using SupportResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SupportEndpointProvider();

  ~SupportEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Support
}  // namespace Aws
