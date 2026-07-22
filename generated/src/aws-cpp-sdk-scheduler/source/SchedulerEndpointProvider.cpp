/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/scheduler/SchedulerEndpointProvider.h>
#include <aws/scheduler/internal/SchedulerEndpointRules.h>

namespace Aws {
namespace Scheduler {
namespace Endpoint {
SchedulerEndpointProvider::SchedulerEndpointProvider()
    : SchedulerDefaultEpProviderBase(Aws::Scheduler::SchedulerEndpointRules::GetRulesBlob(),
                                     Aws::Scheduler::SchedulerEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Scheduler
}  // namespace Aws
