/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workmailmessageflow/WorkMailMessageFlowClientConfiguration.h>
#include <aws/workmailmessageflow/WorkMailMessageFlow_EXPORTS.h>

namespace Aws {
namespace WorkMailMessageFlow {
namespace Endpoint {
using WorkMailMessageFlowClientConfiguration = Aws::WorkMailMessageFlow::WorkMailMessageFlowClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using WorkMailMessageFlowClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_WORKMAILMESSAGEFLOW_API WorkMailMessageFlowBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~WorkMailMessageFlowBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const WorkMailMessageFlowClientConfiguration& config);
  virtual void SetFromClientConfiguration(const WorkMailMessageFlowClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const WorkMailMessageFlowClientConfiguration& config);
};

/**
 * The type for the WorkMailMessageFlow Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using WorkMailMessageFlowEndpointProviderBase =
    EndpointProviderBase<WorkMailMessageFlowClientConfiguration, WorkMailMessageFlowBuiltInParameters,
                         WorkMailMessageFlowClientContextParameters>;

using WorkMailMessageFlowDefaultEpProviderBase =
    BDDEndpointProvider<WorkMailMessageFlowClientConfiguration, WorkMailMessageFlowBuiltInParameters,
                        WorkMailMessageFlowClientContextParameters>;

}  // namespace Endpoint
}  // namespace WorkMailMessageFlow

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_WORKMAILMESSAGEFLOW_EXTERN template class AWS_WORKMAILMESSAGEFLOW_API
    Aws::Endpoint::EndpointProviderBase<WorkMailMessageFlow::Endpoint::WorkMailMessageFlowClientConfiguration,
                                        WorkMailMessageFlow::Endpoint::WorkMailMessageFlowBuiltInParameters,
                                        WorkMailMessageFlow::Endpoint::WorkMailMessageFlowClientContextParameters>;

AWS_WORKMAILMESSAGEFLOW_EXTERN template class AWS_WORKMAILMESSAGEFLOW_API
    Aws::Endpoint::BDDEndpointProvider<WorkMailMessageFlow::Endpoint::WorkMailMessageFlowClientConfiguration,
                                       WorkMailMessageFlow::Endpoint::WorkMailMessageFlowBuiltInParameters,
                                       WorkMailMessageFlow::Endpoint::WorkMailMessageFlowClientContextParameters>;
}  // namespace Endpoint

namespace WorkMailMessageFlow {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_WORKMAILMESSAGEFLOW_API WorkMailMessageFlowEndpointProvider : public WorkMailMessageFlowDefaultEpProviderBase {
 public:
  using WorkMailMessageFlowResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  WorkMailMessageFlowEndpointProvider();

  ~WorkMailMessageFlowEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace WorkMailMessageFlow
}  // namespace Aws
