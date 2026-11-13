/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/scheduler/SchedulerEndpointProvider.h>
#include <aws/scheduler/internal/SchedulerEndpointRules.h>

namespace Aws {
#ifndef AWS_SCHEDULER_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Scheduler::Endpoint::SchedulerClientConfiguration,
                                                   Scheduler::Endpoint::SchedulerBuiltInParameters,
                                                   Scheduler::Endpoint::SchedulerClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Scheduler::Endpoint::SchedulerClientConfiguration,
                                                  Scheduler::Endpoint::SchedulerBuiltInParameters,
                                                  Scheduler::Endpoint::SchedulerClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Scheduler {
namespace Endpoint {
SchedulerEndpointProvider::SchedulerEndpointProvider()
    : SchedulerDefaultEpProviderBase(Aws::Scheduler::SchedulerEndpointRules::GetRulesBlob(),
                                     Aws::Scheduler::SchedulerEndpointRules::RulesBlobSize) {}

void SchedulerBuiltInParameters::SetFromClientConfiguration(const SchedulerClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SchedulerClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SchedulerBuiltInParameters::SetFromClientConfiguration(const SchedulerClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SchedulerClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SchedulerBuiltInParameters::SetServiceSpecificParameters(const SchedulerClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Scheduler
}  // namespace Aws
