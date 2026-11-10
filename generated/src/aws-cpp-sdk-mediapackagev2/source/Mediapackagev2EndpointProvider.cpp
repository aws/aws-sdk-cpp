/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/Mediapackagev2EndpointProvider.h>
#include <aws/mediapackagev2/internal/Mediapackagev2EndpointRules.h>

namespace Aws {
#ifndef AWS_MEDIAPACKAGEV2_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<mediapackagev2::Endpoint::Mediapackagev2ClientConfiguration,
                                                   mediapackagev2::Endpoint::Mediapackagev2BuiltInParameters,
                                                   mediapackagev2::Endpoint::Mediapackagev2ClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<mediapackagev2::Endpoint::Mediapackagev2ClientConfiguration,
                                                  mediapackagev2::Endpoint::Mediapackagev2BuiltInParameters,
                                                  mediapackagev2::Endpoint::Mediapackagev2ClientContextParameters>;
}  // namespace Endpoint
#endif

namespace mediapackagev2 {
namespace Endpoint {
Mediapackagev2EndpointProvider::Mediapackagev2EndpointProvider()
    : Mediapackagev2DefaultEpProviderBase(Aws::mediapackagev2::Mediapackagev2EndpointRules::GetRulesBlob(),
                                          Aws::mediapackagev2::Mediapackagev2EndpointRules::RulesBlobSize) {}

void Mediapackagev2BuiltInParameters::SetFromClientConfiguration(const Mediapackagev2ClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const Mediapackagev2ClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void Mediapackagev2BuiltInParameters::SetFromClientConfiguration(const Mediapackagev2ClientConfiguration& config,
                                                                 const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const Mediapackagev2ClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void Mediapackagev2BuiltInParameters::SetServiceSpecificParameters(const Mediapackagev2ClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace mediapackagev2
}  // namespace Aws
