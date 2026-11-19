/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/WorkSpacesClientConfiguration.h>
#include <aws/workspaces/WorkSpaces_EXPORTS.h>

namespace Aws {
namespace WorkSpaces {
namespace Endpoint {
using WorkSpacesClientConfiguration = Aws::WorkSpaces::WorkSpacesClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using WorkSpacesClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_WORKSPACES_API WorkSpacesBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~WorkSpacesBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const WorkSpacesClientConfiguration& config);
  virtual void SetFromClientConfiguration(const WorkSpacesClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const WorkSpacesClientConfiguration& config);
};

/**
 * The type for the WorkSpaces Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using WorkSpacesEndpointProviderBase =
    EndpointProviderBase<WorkSpacesClientConfiguration, WorkSpacesBuiltInParameters, WorkSpacesClientContextParameters>;

using WorkSpacesDefaultEpProviderBase =
    BDDEndpointProvider<WorkSpacesClientConfiguration, WorkSpacesBuiltInParameters, WorkSpacesClientContextParameters>;

}  // namespace Endpoint
}  // namespace WorkSpaces

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_WORKSPACES_EXTERN template class AWS_WORKSPACES_API Aws::Endpoint::EndpointProviderBase<
    WorkSpaces::Endpoint::WorkSpacesClientConfiguration, WorkSpaces::Endpoint::WorkSpacesBuiltInParameters,
    WorkSpaces::Endpoint::WorkSpacesClientContextParameters>;

AWS_WORKSPACES_EXTERN template class AWS_WORKSPACES_API Aws::Endpoint::BDDEndpointProvider<
    WorkSpaces::Endpoint::WorkSpacesClientConfiguration, WorkSpaces::Endpoint::WorkSpacesBuiltInParameters,
    WorkSpaces::Endpoint::WorkSpacesClientContextParameters>;
}  // namespace Endpoint

namespace WorkSpaces {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_WORKSPACES_API WorkSpacesEndpointProvider : public WorkSpacesDefaultEpProviderBase {
 public:
  using WorkSpacesResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  WorkSpacesEndpointProvider();

  ~WorkSpacesEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace WorkSpaces
}  // namespace Aws
