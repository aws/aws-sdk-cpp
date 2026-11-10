/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIClientConfiguration.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>

namespace Aws {
namespace ResourceGroupsTaggingAPI {
namespace Endpoint {
using ResourceGroupsTaggingAPIClientConfiguration = Aws::ResourceGroupsTaggingAPI::ResourceGroupsTaggingAPIClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ResourceGroupsTaggingAPIClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_RESOURCEGROUPSTAGGINGAPI_API ResourceGroupsTaggingAPIBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ResourceGroupsTaggingAPIBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ResourceGroupsTaggingAPIClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ResourceGroupsTaggingAPIClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ResourceGroupsTaggingAPIClientConfiguration& config);
};

/**
 * The type for the ResourceGroupsTaggingAPI Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ResourceGroupsTaggingAPIEndpointProviderBase =
    EndpointProviderBase<ResourceGroupsTaggingAPIClientConfiguration, ResourceGroupsTaggingAPIBuiltInParameters,
                         ResourceGroupsTaggingAPIClientContextParameters>;

using ResourceGroupsTaggingAPIDefaultEpProviderBase =
    BDDEndpointProvider<ResourceGroupsTaggingAPIClientConfiguration, ResourceGroupsTaggingAPIBuiltInParameters,
                        ResourceGroupsTaggingAPIClientContextParameters>;

}  // namespace Endpoint
}  // namespace ResourceGroupsTaggingAPI

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_RESOURCEGROUPSTAGGINGAPI_EXTERN template class AWS_RESOURCEGROUPSTAGGINGAPI_API
    Aws::Endpoint::EndpointProviderBase<ResourceGroupsTaggingAPI::Endpoint::ResourceGroupsTaggingAPIClientConfiguration,
                                        ResourceGroupsTaggingAPI::Endpoint::ResourceGroupsTaggingAPIBuiltInParameters,
                                        ResourceGroupsTaggingAPI::Endpoint::ResourceGroupsTaggingAPIClientContextParameters>;

AWS_RESOURCEGROUPSTAGGINGAPI_EXTERN template class AWS_RESOURCEGROUPSTAGGINGAPI_API
    Aws::Endpoint::BDDEndpointProvider<ResourceGroupsTaggingAPI::Endpoint::ResourceGroupsTaggingAPIClientConfiguration,
                                       ResourceGroupsTaggingAPI::Endpoint::ResourceGroupsTaggingAPIBuiltInParameters,
                                       ResourceGroupsTaggingAPI::Endpoint::ResourceGroupsTaggingAPIClientContextParameters>;
}  // namespace Endpoint

namespace ResourceGroupsTaggingAPI {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_RESOURCEGROUPSTAGGINGAPI_API ResourceGroupsTaggingAPIEndpointProvider : public ResourceGroupsTaggingAPIDefaultEpProviderBase {
 public:
  using ResourceGroupsTaggingAPIResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ResourceGroupsTaggingAPIEndpointProvider();

  ~ResourceGroupsTaggingAPIEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ResourceGroupsTaggingAPI
}  // namespace Aws
