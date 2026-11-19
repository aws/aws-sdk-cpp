/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sso-admin/SSOAdminClientConfiguration.h>
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>

namespace Aws {
namespace SSOAdmin {
namespace Endpoint {
using SSOAdminClientConfiguration = Aws::SSOAdmin::SSOAdminClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SSOAdminClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SSOADMIN_API SSOAdminBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SSOAdminBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SSOAdminClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SSOAdminClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SSOAdminClientConfiguration& config);
};

/**
 * The type for the SSOAdmin Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SSOAdminEndpointProviderBase =
    EndpointProviderBase<SSOAdminClientConfiguration, SSOAdminBuiltInParameters, SSOAdminClientContextParameters>;

using SSOAdminDefaultEpProviderBase =
    BDDEndpointProvider<SSOAdminClientConfiguration, SSOAdminBuiltInParameters, SSOAdminClientContextParameters>;

}  // namespace Endpoint
}  // namespace SSOAdmin

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SSOADMIN_EXTERN template class AWS_SSOADMIN_API
    Aws::Endpoint::EndpointProviderBase<SSOAdmin::Endpoint::SSOAdminClientConfiguration, SSOAdmin::Endpoint::SSOAdminBuiltInParameters,
                                        SSOAdmin::Endpoint::SSOAdminClientContextParameters>;

AWS_SSOADMIN_EXTERN template class AWS_SSOADMIN_API
    Aws::Endpoint::BDDEndpointProvider<SSOAdmin::Endpoint::SSOAdminClientConfiguration, SSOAdmin::Endpoint::SSOAdminBuiltInParameters,
                                       SSOAdmin::Endpoint::SSOAdminClientContextParameters>;
}  // namespace Endpoint

namespace SSOAdmin {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SSOADMIN_API SSOAdminEndpointProvider : public SSOAdminDefaultEpProviderBase {
 public:
  using SSOAdminResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SSOAdminEndpointProvider();

  ~SSOAdminEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SSOAdmin
}  // namespace Aws
