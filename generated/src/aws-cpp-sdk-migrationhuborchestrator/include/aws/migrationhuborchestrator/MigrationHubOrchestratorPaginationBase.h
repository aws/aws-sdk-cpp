/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/migrationhuborchestrator/model/ListPluginsPaginationTraits.h>
#include <aws/migrationhuborchestrator/model/ListTemplateStepGroupsPaginationTraits.h>
#include <aws/migrationhuborchestrator/model/ListTemplateStepsPaginationTraits.h>
#include <aws/migrationhuborchestrator/model/ListTemplatesPaginationTraits.h>
#include <aws/migrationhuborchestrator/model/ListWorkflowStepGroupsPaginationTraits.h>
#include <aws/migrationhuborchestrator/model/ListWorkflowStepsPaginationTraits.h>
#include <aws/migrationhuborchestrator/model/ListWorkflowsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace MigrationHubOrchestrator {

class MigrationHubOrchestratorClient;

template <typename DerivedClient>
class MigrationHubOrchestratorPaginationBase {
 public:
  /**
   * Create a paginator for ListPlugins operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPluginsRequest, Pagination::ListPluginsPaginationTraits<DerivedClient>>
  ListPluginsPaginator(const Model::ListPluginsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPluginsRequest,
                                             Pagination::ListPluginsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTemplatesRequest, Pagination::ListTemplatesPaginationTraits<DerivedClient>>
  ListTemplatesPaginator(const Model::ListTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTemplatesRequest,
                                             Pagination::ListTemplatesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListTemplateStepGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTemplateStepGroupsRequest,
                                    Pagination::ListTemplateStepGroupsPaginationTraits<DerivedClient>>
  ListTemplateStepGroupsPaginator(const Model::ListTemplateStepGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTemplateStepGroupsRequest,
                                             Pagination::ListTemplateStepGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTemplateSteps operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTemplateStepsRequest,
                                    Pagination::ListTemplateStepsPaginationTraits<DerivedClient>>
  ListTemplateStepsPaginator(const Model::ListTemplateStepsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTemplateStepsRequest,
                                             Pagination::ListTemplateStepsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
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
   * Create a paginator for ListWorkflowStepGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowStepGroupsRequest,
                                    Pagination::ListWorkflowStepGroupsPaginationTraits<DerivedClient>>
  ListWorkflowStepGroupsPaginator(const Model::ListWorkflowStepGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowStepGroupsRequest,
                                             Pagination::ListWorkflowStepGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWorkflowSteps operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowStepsRequest,
                                    Pagination::ListWorkflowStepsPaginationTraits<DerivedClient>>
  ListWorkflowStepsPaginator(const Model::ListWorkflowStepsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowStepsRequest,
                                             Pagination::ListWorkflowStepsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace MigrationHubOrchestrator
}  // namespace Aws
