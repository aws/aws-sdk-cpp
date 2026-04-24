/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorClient.h>
#include <aws/migrationhuborchestrator/model/ListPluginsPaginationTraits.h>
#include <aws/migrationhuborchestrator/model/ListTemplateStepGroupsPaginationTraits.h>
#include <aws/migrationhuborchestrator/model/ListTemplateStepsPaginationTraits.h>
#include <aws/migrationhuborchestrator/model/ListTemplatesPaginationTraits.h>
#include <aws/migrationhuborchestrator/model/ListWorkflowStepGroupsPaginationTraits.h>
#include <aws/migrationhuborchestrator/model/ListWorkflowStepsPaginationTraits.h>
#include <aws/migrationhuborchestrator/model/ListWorkflowsPaginationTraits.h>

namespace Aws {
namespace MigrationHubOrchestrator {

using ListPluginsPaginator = Aws::Utils::Pagination::Paginator<MigrationHubOrchestratorClient, Model::ListPluginsRequest,
                                                               Pagination::ListPluginsPaginationTraits<MigrationHubOrchestratorClient>>;
using ListTemplatesPaginator = Aws::Utils::Pagination::Paginator<MigrationHubOrchestratorClient, Model::ListTemplatesRequest,
                                                                 Pagination::ListTemplatesPaginationTraits<MigrationHubOrchestratorClient>>;
using ListTemplateStepGroupsPaginator =
    Aws::Utils::Pagination::Paginator<MigrationHubOrchestratorClient, Model::ListTemplateStepGroupsRequest,
                                      Pagination::ListTemplateStepGroupsPaginationTraits<MigrationHubOrchestratorClient>>;
using ListTemplateStepsPaginator =
    Aws::Utils::Pagination::Paginator<MigrationHubOrchestratorClient, Model::ListTemplateStepsRequest,
                                      Pagination::ListTemplateStepsPaginationTraits<MigrationHubOrchestratorClient>>;
using ListWorkflowsPaginator = Aws::Utils::Pagination::Paginator<MigrationHubOrchestratorClient, Model::ListWorkflowsRequest,
                                                                 Pagination::ListWorkflowsPaginationTraits<MigrationHubOrchestratorClient>>;
using ListWorkflowStepGroupsPaginator =
    Aws::Utils::Pagination::Paginator<MigrationHubOrchestratorClient, Model::ListWorkflowStepGroupsRequest,
                                      Pagination::ListWorkflowStepGroupsPaginationTraits<MigrationHubOrchestratorClient>>;
using ListWorkflowStepsPaginator =
    Aws::Utils::Pagination::Paginator<MigrationHubOrchestratorClient, Model::ListWorkflowStepsRequest,
                                      Pagination::ListWorkflowStepsPaginationTraits<MigrationHubOrchestratorClient>>;

}  // namespace MigrationHubOrchestrator
}  // namespace Aws
