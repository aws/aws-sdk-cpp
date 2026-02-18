/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/scheduler/SchedulerClient.h>
#include <aws/scheduler/model/ListScheduleGroupsPaginationTraits.h>
#include <aws/scheduler/model/ListSchedulesPaginationTraits.h>

namespace Aws {
namespace Scheduler {

using ListScheduleGroupsPaginator = Aws::Utils::Pagination::Paginator<SchedulerClient, Model::ListScheduleGroupsRequest,
                                                                      Pagination::ListScheduleGroupsPaginationTraits<SchedulerClient>>;
using ListSchedulesPaginator = Aws::Utils::Pagination::Paginator<SchedulerClient, Model::ListSchedulesRequest,
                                                                 Pagination::ListSchedulesPaginationTraits<SchedulerClient>>;

}  // namespace Scheduler
}  // namespace Aws
