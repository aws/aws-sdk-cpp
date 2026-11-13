/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/support-app/SupportAppClientConfiguration.h>
#include <aws/support-app/SupportApp_EXPORTS.h>

namespace Aws {
namespace SupportApp {
namespace Endpoint {
using SupportAppClientConfiguration = Aws::SupportApp::SupportAppClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SupportAppClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SUPPORTAPP_API SupportAppBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SupportAppBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SupportAppClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SupportAppClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SupportAppClientConfiguration& config);
};

/**
 * The type for the SupportApp Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SupportAppEndpointProviderBase =
    EndpointProviderBase<SupportAppClientConfiguration, SupportAppBuiltInParameters, SupportAppClientContextParameters>;

using SupportAppDefaultEpProviderBase =
    BDDEndpointProvider<SupportAppClientConfiguration, SupportAppBuiltInParameters, SupportAppClientContextParameters>;

}  // namespace Endpoint
}  // namespace SupportApp

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SUPPORTAPP_EXTERN template class AWS_SUPPORTAPP_API Aws::Endpoint::EndpointProviderBase<
    SupportApp::Endpoint::SupportAppClientConfiguration, SupportApp::Endpoint::SupportAppBuiltInParameters,
    SupportApp::Endpoint::SupportAppClientContextParameters>;

AWS_SUPPORTAPP_EXTERN template class AWS_SUPPORTAPP_API Aws::Endpoint::BDDEndpointProvider<
    SupportApp::Endpoint::SupportAppClientConfiguration, SupportApp::Endpoint::SupportAppBuiltInParameters,
    SupportApp::Endpoint::SupportAppClientContextParameters>;
}  // namespace Endpoint

namespace SupportApp {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SUPPORTAPP_API SupportAppEndpointProvider : public SupportAppDefaultEpProviderBase {
 public:
  using SupportAppResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SupportAppEndpointProvider();

  ~SupportAppEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SupportApp
}  // namespace Aws
