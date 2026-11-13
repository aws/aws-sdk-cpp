/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resource-explorer-2/ResourceExplorer2ClientConfiguration.h>
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>

namespace Aws {
namespace ResourceExplorer2 {
namespace Endpoint {
using ResourceExplorer2ClientConfiguration = Aws::ResourceExplorer2::ResourceExplorer2ClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ResourceExplorer2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_RESOURCEEXPLORER2_API ResourceExplorer2BuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ResourceExplorer2BuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ResourceExplorer2ClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ResourceExplorer2ClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ResourceExplorer2ClientConfiguration& config);
};

/**
 * The type for the ResourceExplorer2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ResourceExplorer2EndpointProviderBase = EndpointProviderBase<ResourceExplorer2ClientConfiguration, ResourceExplorer2BuiltInParameters,
                                                                   ResourceExplorer2ClientContextParameters>;

using ResourceExplorer2DefaultEpProviderBase =
    BDDEndpointProvider<ResourceExplorer2ClientConfiguration, ResourceExplorer2BuiltInParameters, ResourceExplorer2ClientContextParameters>;

}  // namespace Endpoint
}  // namespace ResourceExplorer2

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_RESOURCEEXPLORER2_EXTERN template class AWS_RESOURCEEXPLORER2_API Aws::Endpoint::EndpointProviderBase<
    ResourceExplorer2::Endpoint::ResourceExplorer2ClientConfiguration, ResourceExplorer2::Endpoint::ResourceExplorer2BuiltInParameters,
    ResourceExplorer2::Endpoint::ResourceExplorer2ClientContextParameters>;

AWS_RESOURCEEXPLORER2_EXTERN template class AWS_RESOURCEEXPLORER2_API Aws::Endpoint::BDDEndpointProvider<
    ResourceExplorer2::Endpoint::ResourceExplorer2ClientConfiguration, ResourceExplorer2::Endpoint::ResourceExplorer2BuiltInParameters,
    ResourceExplorer2::Endpoint::ResourceExplorer2ClientContextParameters>;
}  // namespace Endpoint

namespace ResourceExplorer2 {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_RESOURCEEXPLORER2_API ResourceExplorer2EndpointProvider : public ResourceExplorer2DefaultEpProviderBase {
 public:
  using ResourceExplorer2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ResourceExplorer2EndpointProvider();

  ~ResourceExplorer2EndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ResourceExplorer2
}  // namespace Aws
