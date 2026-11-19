/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/socialmessaging/SocialMessagingClientConfiguration.h>
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>

namespace Aws {
namespace SocialMessaging {
namespace Endpoint {
using SocialMessagingClientConfiguration = Aws::SocialMessaging::SocialMessagingClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SocialMessagingClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SOCIALMESSAGING_API SocialMessagingBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SocialMessagingBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SocialMessagingClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SocialMessagingClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SocialMessagingClientConfiguration& config);
};

/**
 * The type for the SocialMessaging Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SocialMessagingEndpointProviderBase =
    EndpointProviderBase<SocialMessagingClientConfiguration, SocialMessagingBuiltInParameters, SocialMessagingClientContextParameters>;

using SocialMessagingDefaultEpProviderBase =
    BDDEndpointProvider<SocialMessagingClientConfiguration, SocialMessagingBuiltInParameters, SocialMessagingClientContextParameters>;

}  // namespace Endpoint
}  // namespace SocialMessaging

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SOCIALMESSAGING_EXTERN template class AWS_SOCIALMESSAGING_API Aws::Endpoint::EndpointProviderBase<
    SocialMessaging::Endpoint::SocialMessagingClientConfiguration, SocialMessaging::Endpoint::SocialMessagingBuiltInParameters,
    SocialMessaging::Endpoint::SocialMessagingClientContextParameters>;

AWS_SOCIALMESSAGING_EXTERN template class AWS_SOCIALMESSAGING_API Aws::Endpoint::BDDEndpointProvider<
    SocialMessaging::Endpoint::SocialMessagingClientConfiguration, SocialMessaging::Endpoint::SocialMessagingBuiltInParameters,
    SocialMessaging::Endpoint::SocialMessagingClientContextParameters>;
}  // namespace Endpoint

namespace SocialMessaging {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SOCIALMESSAGING_API SocialMessagingEndpointProvider : public SocialMessagingDefaultEpProviderBase {
 public:
  using SocialMessagingResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SocialMessagingEndpointProvider();

  ~SocialMessagingEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SocialMessaging
}  // namespace Aws
