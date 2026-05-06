/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/scheduler/model/ListScheduleGroupsPaginationTraits.h>
#include <aws/scheduler/model/ListSchedulesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Scheduler {

template <typename DerivedClient>
class SchedulerPaginationBase {
 public:
  /**
   * Create a paginator for ListScheduleGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScheduleGroupsRequest,
                                    Pagination::ListScheduleGroupsPaginationTraits<DerivedClient>>
  ListScheduleGroupsPaginator(const Model::ListScheduleGroupsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScheduleGroupsRequest,
                                             Pagination::ListScheduleGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSchedules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSchedulesRequest, Pagination::ListSchedulesPaginationTraits<DerivedClient>>
  ListSchedulesPaginator(const Model::ListSchedulesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSchedulesRequest,
                                             Pagination::ListSchedulesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }
};
}  // namespace Scheduler
}  // namespace Aws
