/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces-thin-client/WorkSpacesThinClientClientConfiguration.h>
#include <aws/workspaces-thin-client/WorkSpacesThinClient_EXPORTS.h>

namespace Aws {
namespace WorkSpacesThinClient {
namespace Endpoint {
using WorkSpacesThinClientClientConfiguration = Aws::WorkSpacesThinClient::WorkSpacesThinClientClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using WorkSpacesThinClientClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_WORKSPACESTHINCLIENT_API WorkSpacesThinClientBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~WorkSpacesThinClientBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const WorkSpacesThinClientClientConfiguration& config);
  virtual void SetFromClientConfiguration(const WorkSpacesThinClientClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const WorkSpacesThinClientClientConfiguration& config);
};

/**
 * The type for the WorkSpacesThinClient Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using WorkSpacesThinClientEndpointProviderBase =
    EndpointProviderBase<WorkSpacesThinClientClientConfiguration, WorkSpacesThinClientBuiltInParameters,
                         WorkSpacesThinClientClientContextParameters>;

using WorkSpacesThinClientDefaultEpProviderBase =
    BDDEndpointProvider<WorkSpacesThinClientClientConfiguration, WorkSpacesThinClientBuiltInParameters,
                        WorkSpacesThinClientClientContextParameters>;

}  // namespace Endpoint
}  // namespace WorkSpacesThinClient

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_WORKSPACESTHINCLIENT_EXTERN template class AWS_WORKSPACESTHINCLIENT_API
    Aws::Endpoint::EndpointProviderBase<WorkSpacesThinClient::Endpoint::WorkSpacesThinClientClientConfiguration,
                                        WorkSpacesThinClient::Endpoint::WorkSpacesThinClientBuiltInParameters,
                                        WorkSpacesThinClient::Endpoint::WorkSpacesThinClientClientContextParameters>;

AWS_WORKSPACESTHINCLIENT_EXTERN template class AWS_WORKSPACESTHINCLIENT_API
    Aws::Endpoint::BDDEndpointProvider<WorkSpacesThinClient::Endpoint::WorkSpacesThinClientClientConfiguration,
                                       WorkSpacesThinClient::Endpoint::WorkSpacesThinClientBuiltInParameters,
                                       WorkSpacesThinClient::Endpoint::WorkSpacesThinClientClientContextParameters>;
}  // namespace Endpoint

namespace WorkSpacesThinClient {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_WORKSPACESTHINCLIENT_API WorkSpacesThinClientEndpointProvider : public WorkSpacesThinClientDefaultEpProviderBase {
 public:
  using WorkSpacesThinClientResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  WorkSpacesThinClientEndpointProvider();

  ~WorkSpacesThinClientEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace WorkSpacesThinClient
}  // namespace Aws
