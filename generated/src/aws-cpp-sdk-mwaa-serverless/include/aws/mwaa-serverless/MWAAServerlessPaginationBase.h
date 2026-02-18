/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/mwaa-serverless/model/ListTaskInstancesPaginationTraits.h>
#include <aws/mwaa-serverless/model/ListWorkflowRunsPaginationTraits.h>
#include <aws/mwaa-serverless/model/ListWorkflowVersionsPaginationTraits.h>
#include <aws/mwaa-serverless/model/ListWorkflowsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace MWAAServerless {

class MWAAServerlessClient;

template <typename DerivedClient>
class MWAAServerlessPaginationBase {
 public:
  /**
   * Create a paginator for ListTaskInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTaskInstancesRequest,
                                    Pagination::ListTaskInstancesPaginationTraits<DerivedClient>>
  ListTaskInstancesPaginator(const Model::ListTaskInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTaskInstancesRequest,
                                             Pagination::ListTaskInstancesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWorkflowRuns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowRunsRequest,
                                    Pagination::ListWorkflowRunsPaginationTraits<DerivedClient>>
  ListWorkflowRunsPaginator(const Model::ListWorkflowRunsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowRunsRequest,
                                             Pagination::ListWorkflowRunsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListWorkflows operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowsRequest, Pagination::ListWorkflowsPaginationTraits<DerivedClient>>
  ListWorkflowsPaginator(const Model::ListWorkflowsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowsRequest,
                                             Pagination::ListWorkflowsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListWorkflowVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowVersionsRequest,
                                    Pagination::ListWorkflowVersionsPaginationTraits<DerivedClient>>
  ListWorkflowVersionsPaginator(const Model::ListWorkflowVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowVersionsRequest,
                                             Pagination::ListWorkflowVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace MWAAServerless
}  // namespace Aws
