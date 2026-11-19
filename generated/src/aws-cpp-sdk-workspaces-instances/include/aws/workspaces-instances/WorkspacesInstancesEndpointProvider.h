/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces-instances/WorkspacesInstancesClientConfiguration.h>
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>

namespace Aws {
namespace WorkspacesInstances {
namespace Endpoint {
using WorkspacesInstancesClientConfiguration = Aws::WorkspacesInstances::WorkspacesInstancesClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using WorkspacesInstancesClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_WORKSPACESINSTANCES_API WorkspacesInstancesBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~WorkspacesInstancesBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const WorkspacesInstancesClientConfiguration& config);
  virtual void SetFromClientConfiguration(const WorkspacesInstancesClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const WorkspacesInstancesClientConfiguration& config);
};

/**
 * The type for the WorkspacesInstances Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using WorkspacesInstancesEndpointProviderBase =
    EndpointProviderBase<WorkspacesInstancesClientConfiguration, WorkspacesInstancesBuiltInParameters,
                         WorkspacesInstancesClientContextParameters>;

using WorkspacesInstancesDefaultEpProviderBase =
    BDDEndpointProvider<WorkspacesInstancesClientConfiguration, WorkspacesInstancesBuiltInParameters,
                        WorkspacesInstancesClientContextParameters>;

}  // namespace Endpoint
}  // namespace WorkspacesInstances

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_WORKSPACESINSTANCES_EXTERN template class AWS_WORKSPACESINSTANCES_API
    Aws::Endpoint::EndpointProviderBase<WorkspacesInstances::Endpoint::WorkspacesInstancesClientConfiguration,
                                        WorkspacesInstances::Endpoint::WorkspacesInstancesBuiltInParameters,
                                        WorkspacesInstances::Endpoint::WorkspacesInstancesClientContextParameters>;

AWS_WORKSPACESINSTANCES_EXTERN template class AWS_WORKSPACESINSTANCES_API
    Aws::Endpoint::BDDEndpointProvider<WorkspacesInstances::Endpoint::WorkspacesInstancesClientConfiguration,
                                       WorkspacesInstances::Endpoint::WorkspacesInstancesBuiltInParameters,
                                       WorkspacesInstances::Endpoint::WorkspacesInstancesClientContextParameters>;
}  // namespace Endpoint

namespace WorkspacesInstances {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_WORKSPACESINSTANCES_API WorkspacesInstancesEndpointProvider : public WorkspacesInstancesDefaultEpProviderBase {
 public:
  using WorkspacesInstancesResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  WorkspacesInstancesEndpointProvider();

  ~WorkspacesInstancesEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace WorkspacesInstances
}  // namespace Aws
