/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resource-groups/ResourceGroupsClientConfiguration.h>
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>

namespace Aws {
namespace ResourceGroups {
namespace Endpoint {
using ResourceGroupsClientConfiguration = Aws::ResourceGroups::ResourceGroupsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ResourceGroupsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_RESOURCEGROUPS_API ResourceGroupsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ResourceGroupsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ResourceGroupsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ResourceGroupsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ResourceGroupsClientConfiguration& config);
};

/**
 * The type for the ResourceGroups Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ResourceGroupsEndpointProviderBase =
    EndpointProviderBase<ResourceGroupsClientConfiguration, ResourceGroupsBuiltInParameters, ResourceGroupsClientContextParameters>;

using ResourceGroupsDefaultEpProviderBase =
    BDDEndpointProvider<ResourceGroupsClientConfiguration, ResourceGroupsBuiltInParameters, ResourceGroupsClientContextParameters>;

}  // namespace Endpoint
}  // namespace ResourceGroups

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_RESOURCEGROUPS_EXTERN template class AWS_RESOURCEGROUPS_API Aws::Endpoint::EndpointProviderBase<
    ResourceGroups::Endpoint::ResourceGroupsClientConfiguration, ResourceGroups::Endpoint::ResourceGroupsBuiltInParameters,
    ResourceGroups::Endpoint::ResourceGroupsClientContextParameters>;

AWS_RESOURCEGROUPS_EXTERN template class AWS_RESOURCEGROUPS_API Aws::Endpoint::BDDEndpointProvider<
    ResourceGroups::Endpoint::ResourceGroupsClientConfiguration, ResourceGroups::Endpoint::ResourceGroupsBuiltInParameters,
    ResourceGroups::Endpoint::ResourceGroupsClientContextParameters>;
}  // namespace Endpoint

namespace ResourceGroups {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_RESOURCEGROUPS_API ResourceGroupsEndpointProvider : public ResourceGroupsDefaultEpProviderBase {
 public:
  using ResourceGroupsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ResourceGroupsEndpointProvider();

  ~ResourceGroupsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ResourceGroups
}  // namespace Aws
