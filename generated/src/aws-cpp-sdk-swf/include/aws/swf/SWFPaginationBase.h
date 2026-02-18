/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/swf/model/GetWorkflowExecutionHistoryPaginationTraits.h>
#include <aws/swf/model/ListActivityTypesPaginationTraits.h>
#include <aws/swf/model/ListClosedWorkflowExecutionsPaginationTraits.h>
#include <aws/swf/model/ListDomainsPaginationTraits.h>
#include <aws/swf/model/ListOpenWorkflowExecutionsPaginationTraits.h>
#include <aws/swf/model/ListWorkflowTypesPaginationTraits.h>
#include <aws/swf/model/PollForDecisionTaskPaginationTraits.h>

#include <memory>

namespace Aws {
namespace SWF {

class SWFClient;

template <typename DerivedClient>
class SWFPaginationBase {
 public:
  /**
   * Create a paginator for GetWorkflowExecutionHistory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetWorkflowExecutionHistoryRequest,
                                    Pagination::GetWorkflowExecutionHistoryPaginationTraits<DerivedClient>>
  GetWorkflowExecutionHistoryPaginator(const Model::GetWorkflowExecutionHistoryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetWorkflowExecutionHistoryRequest,
                                             Pagination::GetWorkflowExecutionHistoryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListActivityTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListActivityTypesRequest,
                                    Pagination::ListActivityTypesPaginationTraits<DerivedClient>>
  ListActivityTypesPaginator(const Model::ListActivityTypesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListActivityTypesRequest,
                                             Pagination::ListActivityTypesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListClosedWorkflowExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClosedWorkflowExecutionsRequest,
                                    Pagination::ListClosedWorkflowExecutionsPaginationTraits<DerivedClient>>
  ListClosedWorkflowExecutionsPaginator(const Model::ListClosedWorkflowExecutionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClosedWorkflowExecutionsRequest,
                                             Pagination::ListClosedWorkflowExecutionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDomains operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainsRequest, Pagination::ListDomainsPaginationTraits<DerivedClient>>
  ListDomainsPaginator(const Model::ListDomainsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainsRequest,
                                             Pagination::ListDomainsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListOpenWorkflowExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOpenWorkflowExecutionsRequest,
                                    Pagination::ListOpenWorkflowExecutionsPaginationTraits<DerivedClient>>
  ListOpenWorkflowExecutionsPaginator(const Model::ListOpenWorkflowExecutionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOpenWorkflowExecutionsRequest,
                                             Pagination::ListOpenWorkflowExecutionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWorkflowTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowTypesRequest,
                                    Pagination::ListWorkflowTypesPaginationTraits<DerivedClient>>
  ListWorkflowTypesPaginator(const Model::ListWorkflowTypesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowTypesRequest,
                                             Pagination::ListWorkflowTypesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for PollForDecisionTask operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::PollForDecisionTaskRequest,
                                    Pagination::PollForDecisionTaskPaginationTraits<DerivedClient>>
  PollForDecisionTaskPaginator(const Model::PollForDecisionTaskRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::PollForDecisionTaskRequest,
                                             Pagination::PollForDecisionTaskPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace SWF
}  // namespace Aws
