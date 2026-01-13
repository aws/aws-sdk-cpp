/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/nova-act/model/ListActsPaginationTraits.h>
#include <aws/nova-act/model/ListSessionsPaginationTraits.h>
#include <aws/nova-act/model/ListWorkflowDefinitionsPaginationTraits.h>
#include <aws/nova-act/model/ListWorkflowRunsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace NovaAct {

class NovaActClient;

template <typename DerivedClient>
class NovaActPaginationBase {
 public:
  /**
   * Create a paginator for ListActs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListActsRequest, Pagination::ListActsPaginationTraits<DerivedClient>>
  ListActsPaginator(const Model::ListActsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListActsRequest, Pagination::ListActsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSessions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSessionsRequest, Pagination::ListSessionsPaginationTraits<DerivedClient>>
  ListSessionsPaginator(const Model::ListSessionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSessionsRequest,
                                             Pagination::ListSessionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListWorkflowDefinitions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowDefinitionsRequest,
                                    Pagination::ListWorkflowDefinitionsPaginationTraits<DerivedClient>>
  ListWorkflowDefinitionsPaginator(const Model::ListWorkflowDefinitionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowDefinitionsRequest,
                                             Pagination::ListWorkflowDefinitionsPaginationTraits<DerivedClient>>{
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
};
}  // namespace NovaAct
}  // namespace Aws
