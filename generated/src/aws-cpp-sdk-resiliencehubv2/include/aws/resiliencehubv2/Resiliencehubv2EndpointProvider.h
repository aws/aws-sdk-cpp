/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2ClientConfiguration.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

namespace Aws {
namespace resiliencehubv2 {
namespace Endpoint {
using Resiliencehubv2ClientConfiguration = Aws::resiliencehubv2::Resiliencehubv2ClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using Resiliencehubv2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_RESILIENCEHUBV2_API Resiliencehubv2BuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~Resiliencehubv2BuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const Resiliencehubv2ClientConfiguration& config);
  virtual void SetFromClientConfiguration(const Resiliencehubv2ClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const Resiliencehubv2ClientConfiguration& config);
};

/**
 * The type for the resiliencehubv2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using Resiliencehubv2EndpointProviderBase =
    EndpointProviderBase<Resiliencehubv2ClientConfiguration, Resiliencehubv2BuiltInParameters, Resiliencehubv2ClientContextParameters>;

using Resiliencehubv2DefaultEpProviderBase =
    BDDEndpointProvider<Resiliencehubv2ClientConfiguration, Resiliencehubv2BuiltInParameters, Resiliencehubv2ClientContextParameters>;

}  // namespace Endpoint
}  // namespace resiliencehubv2

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_RESILIENCEHUBV2_EXTERN template class AWS_RESILIENCEHUBV2_API Aws::Endpoint::EndpointProviderBase<
    resiliencehubv2::Endpoint::Resiliencehubv2ClientConfiguration, resiliencehubv2::Endpoint::Resiliencehubv2BuiltInParameters,
    resiliencehubv2::Endpoint::Resiliencehubv2ClientContextParameters>;

AWS_RESILIENCEHUBV2_EXTERN template class AWS_RESILIENCEHUBV2_API Aws::Endpoint::BDDEndpointProvider<
    resiliencehubv2::Endpoint::Resiliencehubv2ClientConfiguration, resiliencehubv2::Endpoint::Resiliencehubv2BuiltInParameters,
    resiliencehubv2::Endpoint::Resiliencehubv2ClientContextParameters>;
}  // namespace Endpoint

namespace resiliencehubv2 {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_RESILIENCEHUBV2_API Resiliencehubv2EndpointProvider : public Resiliencehubv2DefaultEpProviderBase {
 public:
  using Resiliencehubv2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  Resiliencehubv2EndpointProvider();

  ~Resiliencehubv2EndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace resiliencehubv2
}  // namespace Aws
