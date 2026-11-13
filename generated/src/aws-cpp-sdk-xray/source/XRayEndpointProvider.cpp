/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/XRayEndpointProvider.h>
#include <aws/xray/internal/XRayEndpointRules.h>

namespace Aws {
#ifndef AWS_XRAY_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<XRay::Endpoint::XRayClientConfiguration, XRay::Endpoint::XRayBuiltInParameters,
                                                   XRay::Endpoint::XRayClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<XRay::Endpoint::XRayClientConfiguration, XRay::Endpoint::XRayBuiltInParameters,
                                                  XRay::Endpoint::XRayClientContextParameters>;
}  // namespace Endpoint
#endif

namespace XRay {
namespace Endpoint {
XRayEndpointProvider::XRayEndpointProvider()
    : XRayDefaultEpProviderBase(Aws::XRay::XRayEndpointRules::GetRulesBlob(), Aws::XRay::XRayEndpointRules::RulesBlobSize) {}

void XRayBuiltInParameters::SetFromClientConfiguration(const XRayClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const XRayClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void XRayBuiltInParameters::SetFromClientConfiguration(const XRayClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const XRayClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void XRayBuiltInParameters::SetServiceSpecificParameters(const XRayClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace XRay
}  // namespace Aws
