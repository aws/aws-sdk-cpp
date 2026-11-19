/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/xray/XRayClientConfiguration.h>
#include <aws/xray/XRay_EXPORTS.h>

namespace Aws {
namespace XRay {
namespace Endpoint {
using XRayClientConfiguration = Aws::XRay::XRayClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using XRayClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_XRAY_API XRayBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~XRayBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const XRayClientConfiguration& config);
  virtual void SetFromClientConfiguration(const XRayClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const XRayClientConfiguration& config);
};

/**
 * The type for the XRay Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using XRayEndpointProviderBase = EndpointProviderBase<XRayClientConfiguration, XRayBuiltInParameters, XRayClientContextParameters>;

using XRayDefaultEpProviderBase = BDDEndpointProvider<XRayClientConfiguration, XRayBuiltInParameters, XRayClientContextParameters>;

}  // namespace Endpoint
}  // namespace XRay

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_XRAY_EXTERN template class AWS_XRAY_API Aws::Endpoint::EndpointProviderBase<
    XRay::Endpoint::XRayClientConfiguration, XRay::Endpoint::XRayBuiltInParameters, XRay::Endpoint::XRayClientContextParameters>;

AWS_XRAY_EXTERN template class AWS_XRAY_API Aws::Endpoint::BDDEndpointProvider<
    XRay::Endpoint::XRayClientConfiguration, XRay::Endpoint::XRayBuiltInParameters, XRay::Endpoint::XRayClientContextParameters>;
}  // namespace Endpoint

namespace XRay {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_XRAY_API XRayEndpointProvider : public XRayDefaultEpProviderBase {
 public:
  using XRayResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  XRayEndpointProvider();

  ~XRayEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace XRay
}  // namespace Aws
