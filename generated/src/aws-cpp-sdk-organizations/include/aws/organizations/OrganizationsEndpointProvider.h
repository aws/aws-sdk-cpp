/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/organizations/OrganizationsClientConfiguration.h>
#include <aws/organizations/Organizations_EXPORTS.h>

namespace Aws {
namespace Organizations {
namespace Endpoint {
using OrganizationsClientConfiguration = Aws::Organizations::OrganizationsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using OrganizationsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_ORGANIZATIONS_API OrganizationsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~OrganizationsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const OrganizationsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const OrganizationsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const OrganizationsClientConfiguration& config);
};

/**
 * The type for the Organizations Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using OrganizationsEndpointProviderBase =
    EndpointProviderBase<OrganizationsClientConfiguration, OrganizationsBuiltInParameters, OrganizationsClientContextParameters>;

using OrganizationsDefaultEpProviderBase =
    BDDEndpointProvider<OrganizationsClientConfiguration, OrganizationsBuiltInParameters, OrganizationsClientContextParameters>;

}  // namespace Endpoint
}  // namespace Organizations

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_ORGANIZATIONS_EXTERN template class AWS_ORGANIZATIONS_API Aws::Endpoint::EndpointProviderBase<
    Organizations::Endpoint::OrganizationsClientConfiguration, Organizations::Endpoint::OrganizationsBuiltInParameters,
    Organizations::Endpoint::OrganizationsClientContextParameters>;

AWS_ORGANIZATIONS_EXTERN template class AWS_ORGANIZATIONS_API Aws::Endpoint::BDDEndpointProvider<
    Organizations::Endpoint::OrganizationsClientConfiguration, Organizations::Endpoint::OrganizationsBuiltInParameters,
    Organizations::Endpoint::OrganizationsClientContextParameters>;
}  // namespace Endpoint

namespace Organizations {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_ORGANIZATIONS_API OrganizationsEndpointProvider : public OrganizationsDefaultEpProviderBase {
 public:
  using OrganizationsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  OrganizationsEndpointProvider();

  ~OrganizationsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Organizations
}  // namespace Aws
