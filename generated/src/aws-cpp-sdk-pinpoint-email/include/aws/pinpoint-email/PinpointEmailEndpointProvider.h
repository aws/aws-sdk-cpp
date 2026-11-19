/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-email/PinpointEmailClientConfiguration.h>
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>

namespace Aws {
namespace PinpointEmail {
namespace Endpoint {
using PinpointEmailClientConfiguration = Aws::PinpointEmail::PinpointEmailClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using PinpointEmailClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_PINPOINTEMAIL_API PinpointEmailBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~PinpointEmailBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const PinpointEmailClientConfiguration& config);
  virtual void SetFromClientConfiguration(const PinpointEmailClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const PinpointEmailClientConfiguration& config);
};

/**
 * The type for the PinpointEmail Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PinpointEmailEndpointProviderBase =
    EndpointProviderBase<PinpointEmailClientConfiguration, PinpointEmailBuiltInParameters, PinpointEmailClientContextParameters>;

using PinpointEmailDefaultEpProviderBase =
    BDDEndpointProvider<PinpointEmailClientConfiguration, PinpointEmailBuiltInParameters, PinpointEmailClientContextParameters>;

}  // namespace Endpoint
}  // namespace PinpointEmail

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_PINPOINTEMAIL_EXTERN template class AWS_PINPOINTEMAIL_API Aws::Endpoint::EndpointProviderBase<
    PinpointEmail::Endpoint::PinpointEmailClientConfiguration, PinpointEmail::Endpoint::PinpointEmailBuiltInParameters,
    PinpointEmail::Endpoint::PinpointEmailClientContextParameters>;

AWS_PINPOINTEMAIL_EXTERN template class AWS_PINPOINTEMAIL_API Aws::Endpoint::BDDEndpointProvider<
    PinpointEmail::Endpoint::PinpointEmailClientConfiguration, PinpointEmail::Endpoint::PinpointEmailBuiltInParameters,
    PinpointEmail::Endpoint::PinpointEmailClientContextParameters>;
}  // namespace Endpoint

namespace PinpointEmail {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_PINPOINTEMAIL_API PinpointEmailEndpointProvider : public PinpointEmailDefaultEpProviderBase {
 public:
  using PinpointEmailResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  PinpointEmailEndpointProvider();

  ~PinpointEmailEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace PinpointEmail
}  // namespace Aws
