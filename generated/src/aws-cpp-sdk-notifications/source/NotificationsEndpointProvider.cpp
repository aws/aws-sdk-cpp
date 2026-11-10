/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/NotificationsEndpointProvider.h>
#include <aws/notifications/internal/NotificationsEndpointRules.h>

namespace Aws {
#ifndef AWS_NOTIFICATIONS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Notifications::Endpoint::NotificationsClientConfiguration,
                                                   Notifications::Endpoint::NotificationsBuiltInParameters,
                                                   Notifications::Endpoint::NotificationsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Notifications::Endpoint::NotificationsClientConfiguration,
                                                  Notifications::Endpoint::NotificationsBuiltInParameters,
                                                  Notifications::Endpoint::NotificationsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Notifications {
namespace Endpoint {
NotificationsEndpointProvider::NotificationsEndpointProvider()
    : NotificationsDefaultEpProviderBase(Aws::Notifications::NotificationsEndpointRules::GetRulesBlob(),
                                         Aws::Notifications::NotificationsEndpointRules::RulesBlobSize) {}

void NotificationsBuiltInParameters::SetFromClientConfiguration(const NotificationsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const NotificationsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void NotificationsBuiltInParameters::SetFromClientConfiguration(const NotificationsClientConfiguration& config,
                                                                const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const NotificationsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void NotificationsBuiltInParameters::SetServiceSpecificParameters(const NotificationsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace Notifications
}  // namespace Aws
