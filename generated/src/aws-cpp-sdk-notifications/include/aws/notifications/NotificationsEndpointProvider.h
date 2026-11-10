/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/notifications/NotificationsClientConfiguration.h>
#include <aws/notifications/Notifications_EXPORTS.h>

namespace Aws {
namespace Notifications {
namespace Endpoint {
using NotificationsClientConfiguration = Aws::Notifications::NotificationsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using NotificationsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_NOTIFICATIONS_API NotificationsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~NotificationsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const NotificationsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const NotificationsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const NotificationsClientConfiguration& config);
};

/**
 * The type for the Notifications Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using NotificationsEndpointProviderBase =
    EndpointProviderBase<NotificationsClientConfiguration, NotificationsBuiltInParameters, NotificationsClientContextParameters>;

using NotificationsDefaultEpProviderBase =
    BDDEndpointProvider<NotificationsClientConfiguration, NotificationsBuiltInParameters, NotificationsClientContextParameters>;

}  // namespace Endpoint
}  // namespace Notifications

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_NOTIFICATIONS_EXTERN template class AWS_NOTIFICATIONS_API Aws::Endpoint::EndpointProviderBase<
    Notifications::Endpoint::NotificationsClientConfiguration, Notifications::Endpoint::NotificationsBuiltInParameters,
    Notifications::Endpoint::NotificationsClientContextParameters>;

AWS_NOTIFICATIONS_EXTERN template class AWS_NOTIFICATIONS_API Aws::Endpoint::BDDEndpointProvider<
    Notifications::Endpoint::NotificationsClientConfiguration, Notifications::Endpoint::NotificationsBuiltInParameters,
    Notifications::Endpoint::NotificationsClientContextParameters>;
}  // namespace Endpoint

namespace Notifications {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_NOTIFICATIONS_API NotificationsEndpointProvider : public NotificationsDefaultEpProviderBase {
 public:
  using NotificationsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  NotificationsEndpointProvider();

  ~NotificationsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Notifications
}  // namespace Aws
