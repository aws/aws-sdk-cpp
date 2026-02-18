/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/states/model/GetExecutionHistoryPaginationTraits.h>
#include <aws/states/model/ListActivitiesPaginationTraits.h>
#include <aws/states/model/ListExecutionsPaginationTraits.h>
#include <aws/states/model/ListMapRunsPaginationTraits.h>
#include <aws/states/model/ListStateMachinesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace SFN {

class SFNClient;

template <typename DerivedClient>
class SFNPaginationBase {
 public:
  /**
   * Create a paginator for GetExecutionHistory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetExecutionHistoryRequest,
                                    Pagination::GetExecutionHistoryPaginationTraits<DerivedClient>>
  GetExecutionHistoryPaginator(const Model::GetExecutionHistoryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetExecutionHistoryRequest,
                                             Pagination::GetExecutionHistoryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListActivities operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListActivitiesRequest, Pagination::ListActivitiesPaginationTraits<DerivedClient>>
  ListActivitiesPaginator(const Model::ListActivitiesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListActivitiesRequest,
                                             Pagination::ListActivitiesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExecutionsRequest, Pagination::ListExecutionsPaginationTraits<DerivedClient>>
  ListExecutionsPaginator(const Model::ListExecutionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExecutionsRequest,
                                             Pagination::ListExecutionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListMapRuns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMapRunsRequest, Pagination::ListMapRunsPaginationTraits<DerivedClient>>
  ListMapRunsPaginator(const Model::ListMapRunsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMapRunsRequest,
                                             Pagination::ListMapRunsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListStateMachines operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStateMachinesRequest,
                                    Pagination::ListStateMachinesPaginationTraits<DerivedClient>>
  ListStateMachinesPaginator(const Model::ListStateMachinesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStateMachinesRequest,
                                             Pagination::ListStateMachinesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace SFN
}  // namespace Aws
