/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/observabilityadmin/ObservabilityAdminClient.h>
#include <aws/observabilityadmin/model/ListCentralizationRulesForOrganizationPaginationTraits.h>
#include <aws/observabilityadmin/model/ListResourceTelemetryForOrganizationPaginationTraits.h>
#include <aws/observabilityadmin/model/ListResourceTelemetryPaginationTraits.h>
#include <aws/observabilityadmin/model/ListS3TableIntegrationsPaginationTraits.h>
#include <aws/observabilityadmin/model/ListTelemetryPipelinesPaginationTraits.h>
#include <aws/observabilityadmin/model/ListTelemetryRulesForOrganizationPaginationTraits.h>
#include <aws/observabilityadmin/model/ListTelemetryRulesPaginationTraits.h>

namespace Aws {
namespace ObservabilityAdmin {

using ListCentralizationRulesForOrganizationPaginator =
    Aws::Utils::Pagination::Paginator<ObservabilityAdminClient, Model::ListCentralizationRulesForOrganizationRequest,
                                      Pagination::ListCentralizationRulesForOrganizationPaginationTraits<ObservabilityAdminClient>>;
using ListResourceTelemetryPaginator =
    Aws::Utils::Pagination::Paginator<ObservabilityAdminClient, Model::ListResourceTelemetryRequest,
                                      Pagination::ListResourceTelemetryPaginationTraits<ObservabilityAdminClient>>;
using ListResourceTelemetryForOrganizationPaginator =
    Aws::Utils::Pagination::Paginator<ObservabilityAdminClient, Model::ListResourceTelemetryForOrganizationRequest,
                                      Pagination::ListResourceTelemetryForOrganizationPaginationTraits<ObservabilityAdminClient>>;
using ListS3TableIntegrationsPaginator =
    Aws::Utils::Pagination::Paginator<ObservabilityAdminClient, Model::ListS3TableIntegrationsRequest,
                                      Pagination::ListS3TableIntegrationsPaginationTraits<ObservabilityAdminClient>>;
using ListTelemetryPipelinesPaginator =
    Aws::Utils::Pagination::Paginator<ObservabilityAdminClient, Model::ListTelemetryPipelinesRequest,
                                      Pagination::ListTelemetryPipelinesPaginationTraits<ObservabilityAdminClient>>;
using ListTelemetryRulesPaginator =
    Aws::Utils::Pagination::Paginator<ObservabilityAdminClient, Model::ListTelemetryRulesRequest,
                                      Pagination::ListTelemetryRulesPaginationTraits<ObservabilityAdminClient>>;
using ListTelemetryRulesForOrganizationPaginator =
    Aws::Utils::Pagination::Paginator<ObservabilityAdminClient, Model::ListTelemetryRulesForOrganizationRequest,
                                      Pagination::ListTelemetryRulesForOrganizationPaginationTraits<ObservabilityAdminClient>>;

}  // namespace ObservabilityAdmin
}  // namespace Aws
