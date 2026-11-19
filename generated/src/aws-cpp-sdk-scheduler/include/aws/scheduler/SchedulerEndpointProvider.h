/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/scheduler/SchedulerClientConfiguration.h>
#include <aws/scheduler/Scheduler_EXPORTS.h>

namespace Aws {
namespace Scheduler {
namespace Endpoint {
using SchedulerClientConfiguration = Aws::Scheduler::SchedulerClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SchedulerClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SCHEDULER_API SchedulerBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SchedulerBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SchedulerClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SchedulerClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SchedulerClientConfiguration& config);
};

/**
 * The type for the Scheduler Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SchedulerEndpointProviderBase =
    EndpointProviderBase<SchedulerClientConfiguration, SchedulerBuiltInParameters, SchedulerClientContextParameters>;

using SchedulerDefaultEpProviderBase =
    BDDEndpointProvider<SchedulerClientConfiguration, SchedulerBuiltInParameters, SchedulerClientContextParameters>;

}  // namespace Endpoint
}  // namespace Scheduler

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SCHEDULER_EXTERN template class AWS_SCHEDULER_API
    Aws::Endpoint::EndpointProviderBase<Scheduler::Endpoint::SchedulerClientConfiguration, Scheduler::Endpoint::SchedulerBuiltInParameters,
                                        Scheduler::Endpoint::SchedulerClientContextParameters>;

AWS_SCHEDULER_EXTERN template class AWS_SCHEDULER_API
    Aws::Endpoint::BDDEndpointProvider<Scheduler::Endpoint::SchedulerClientConfiguration, Scheduler::Endpoint::SchedulerBuiltInParameters,
                                       Scheduler::Endpoint::SchedulerClientContextParameters>;
}  // namespace Endpoint

namespace Scheduler {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SCHEDULER_API SchedulerEndpointProvider : public SchedulerDefaultEpProviderBase {
 public:
  using SchedulerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SchedulerEndpointProvider();

  ~SchedulerEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Scheduler
}  // namespace Aws
