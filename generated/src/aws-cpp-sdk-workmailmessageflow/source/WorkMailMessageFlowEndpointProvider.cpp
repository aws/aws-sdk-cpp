/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmailmessageflow/WorkMailMessageFlowEndpointProvider.h>
#include <aws/workmailmessageflow/internal/WorkMailMessageFlowEndpointRules.h>

namespace Aws {
#ifndef AWS_WORKMAILMESSAGEFLOW_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<WorkMailMessageFlow::Endpoint::WorkMailMessageFlowClientConfiguration,
                                                   WorkMailMessageFlow::Endpoint::WorkMailMessageFlowBuiltInParameters,
                                                   WorkMailMessageFlow::Endpoint::WorkMailMessageFlowClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<WorkMailMessageFlow::Endpoint::WorkMailMessageFlowClientConfiguration,
                                                  WorkMailMessageFlow::Endpoint::WorkMailMessageFlowBuiltInParameters,
                                                  WorkMailMessageFlow::Endpoint::WorkMailMessageFlowClientContextParameters>;
}  // namespace Endpoint
#endif

namespace WorkMailMessageFlow {
namespace Endpoint {
WorkMailMessageFlowEndpointProvider::WorkMailMessageFlowEndpointProvider()
    : WorkMailMessageFlowDefaultEpProviderBase(Aws::WorkMailMessageFlow::WorkMailMessageFlowEndpointRules::GetRulesBlob(),
                                               Aws::WorkMailMessageFlow::WorkMailMessageFlowEndpointRules::RulesBlobSize) {}

void WorkMailMessageFlowBuiltInParameters::SetFromClientConfiguration(const WorkMailMessageFlowClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const WorkMailMessageFlowClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void WorkMailMessageFlowBuiltInParameters::SetFromClientConfiguration(const WorkMailMessageFlowClientConfiguration& config,
                                                                      const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const WorkMailMessageFlowClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void WorkMailMessageFlowBuiltInParameters::SetServiceSpecificParameters(const WorkMailMessageFlowClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace WorkMailMessageFlow
}  // namespace Aws
