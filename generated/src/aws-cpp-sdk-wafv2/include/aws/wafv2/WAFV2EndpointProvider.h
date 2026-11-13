/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/WAFV2ClientConfiguration.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>

namespace Aws {
namespace WAFV2 {
namespace Endpoint {
using WAFV2ClientConfiguration = Aws::WAFV2::WAFV2ClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using WAFV2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_WAFV2_API WAFV2BuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~WAFV2BuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const WAFV2ClientConfiguration& config);
  virtual void SetFromClientConfiguration(const WAFV2ClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const WAFV2ClientConfiguration& config);
};

/**
 * The type for the WAFV2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using WAFV2EndpointProviderBase = EndpointProviderBase<WAFV2ClientConfiguration, WAFV2BuiltInParameters, WAFV2ClientContextParameters>;

using WAFV2DefaultEpProviderBase = BDDEndpointProvider<WAFV2ClientConfiguration, WAFV2BuiltInParameters, WAFV2ClientContextParameters>;

}  // namespace Endpoint
}  // namespace WAFV2

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_WAFV2_EXTERN template class AWS_WAFV2_API Aws::Endpoint::EndpointProviderBase<
    WAFV2::Endpoint::WAFV2ClientConfiguration, WAFV2::Endpoint::WAFV2BuiltInParameters, WAFV2::Endpoint::WAFV2ClientContextParameters>;

AWS_WAFV2_EXTERN template class AWS_WAFV2_API Aws::Endpoint::BDDEndpointProvider<
    WAFV2::Endpoint::WAFV2ClientConfiguration, WAFV2::Endpoint::WAFV2BuiltInParameters, WAFV2::Endpoint::WAFV2ClientContextParameters>;
}  // namespace Endpoint

namespace WAFV2 {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_WAFV2_API WAFV2EndpointProvider : public WAFV2DefaultEpProviderBase {
 public:
  using WAFV2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  WAFV2EndpointProvider();

  ~WAFV2EndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace WAFV2
}  // namespace Aws
