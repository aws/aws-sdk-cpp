/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces-web/WorkSpacesWebClientConfiguration.h>
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>

namespace Aws {
namespace WorkSpacesWeb {
namespace Endpoint {
using WorkSpacesWebClientConfiguration = Aws::WorkSpacesWeb::WorkSpacesWebClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using WorkSpacesWebClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_WORKSPACESWEB_API WorkSpacesWebBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~WorkSpacesWebBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const WorkSpacesWebClientConfiguration& config);
  virtual void SetFromClientConfiguration(const WorkSpacesWebClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const WorkSpacesWebClientConfiguration& config);
};

/**
 * The type for the WorkSpacesWeb Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using WorkSpacesWebEndpointProviderBase =
    EndpointProviderBase<WorkSpacesWebClientConfiguration, WorkSpacesWebBuiltInParameters, WorkSpacesWebClientContextParameters>;

using WorkSpacesWebDefaultEpProviderBase =
    BDDEndpointProvider<WorkSpacesWebClientConfiguration, WorkSpacesWebBuiltInParameters, WorkSpacesWebClientContextParameters>;

}  // namespace Endpoint
}  // namespace WorkSpacesWeb

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_WORKSPACESWEB_EXTERN template class AWS_WORKSPACESWEB_API Aws::Endpoint::EndpointProviderBase<
    WorkSpacesWeb::Endpoint::WorkSpacesWebClientConfiguration, WorkSpacesWeb::Endpoint::WorkSpacesWebBuiltInParameters,
    WorkSpacesWeb::Endpoint::WorkSpacesWebClientContextParameters>;

AWS_WORKSPACESWEB_EXTERN template class AWS_WORKSPACESWEB_API Aws::Endpoint::BDDEndpointProvider<
    WorkSpacesWeb::Endpoint::WorkSpacesWebClientConfiguration, WorkSpacesWeb::Endpoint::WorkSpacesWebBuiltInParameters,
    WorkSpacesWeb::Endpoint::WorkSpacesWebClientContextParameters>;
}  // namespace Endpoint

namespace WorkSpacesWeb {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_WORKSPACESWEB_API WorkSpacesWebEndpointProvider : public WorkSpacesWebDefaultEpProviderBase {
 public:
  using WorkSpacesWebResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  WorkSpacesWebEndpointProvider();

  ~WorkSpacesWebEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace WorkSpacesWeb
}  // namespace Aws
