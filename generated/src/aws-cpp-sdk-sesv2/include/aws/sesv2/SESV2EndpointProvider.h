/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/SESV2ClientConfiguration.h>
#include <aws/sesv2/SESV2_EXPORTS.h>

namespace Aws {
namespace SESV2 {
namespace Endpoint {
using SESV2ClientConfiguration = Aws::SESV2::SESV2ClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SESV2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SESV2_API SESV2BuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SESV2BuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SESV2ClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SESV2ClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SESV2ClientConfiguration& config);
};

/**
 * The type for the SESV2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SESV2EndpointProviderBase = EndpointProviderBase<SESV2ClientConfiguration, SESV2BuiltInParameters, SESV2ClientContextParameters>;

using SESV2DefaultEpProviderBase = BDDEndpointProvider<SESV2ClientConfiguration, SESV2BuiltInParameters, SESV2ClientContextParameters>;

}  // namespace Endpoint
}  // namespace SESV2

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SESV2_EXTERN template class AWS_SESV2_API Aws::Endpoint::EndpointProviderBase<
    SESV2::Endpoint::SESV2ClientConfiguration, SESV2::Endpoint::SESV2BuiltInParameters, SESV2::Endpoint::SESV2ClientContextParameters>;

AWS_SESV2_EXTERN template class AWS_SESV2_API Aws::Endpoint::BDDEndpointProvider<
    SESV2::Endpoint::SESV2ClientConfiguration, SESV2::Endpoint::SESV2BuiltInParameters, SESV2::Endpoint::SESV2ClientContextParameters>;
}  // namespace Endpoint

namespace SESV2 {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SESV2_API SESV2EndpointProvider : public SESV2DefaultEpProviderBase {
 public:
  using SESV2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SESV2EndpointProvider();

  ~SESV2EndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SESV2
}  // namespace Aws
