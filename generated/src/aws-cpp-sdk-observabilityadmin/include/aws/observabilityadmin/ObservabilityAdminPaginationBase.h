/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/observabilityadmin/model/ListCentralizationRulesForOrganizationPaginationTraits.h>
#include <aws/observabilityadmin/model/ListResourceTelemetryForOrganizationPaginationTraits.h>
#include <aws/observabilityadmin/model/ListResourceTelemetryPaginationTraits.h>
#include <aws/observabilityadmin/model/ListS3TableIntegrationsPaginationTraits.h>
#include <aws/observabilityadmin/model/ListTelemetryPipelinesPaginationTraits.h>
#include <aws/observabilityadmin/model/ListTelemetryRulesForOrganizationPaginationTraits.h>
#include <aws/observabilityadmin/model/ListTelemetryRulesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace ObservabilityAdmin {

class ObservabilityAdminClient;

template <typename DerivedClient>
class ObservabilityAdminPaginationBase {
 public:
  /**
   * Create a paginator for ListCentralizationRulesForOrganization operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCentralizationRulesForOrganizationRequest,
                                    Pagination::ListCentralizationRulesForOrganizationPaginationTraits<DerivedClient>>
  ListCentralizationRulesForOrganizationPaginator(const Model::ListCentralizationRulesForOrganizationRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCentralizationRulesForOrganizationRequest,
                                             Pagination::ListCentralizationRulesForOrganizationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResourceTelemetry operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceTelemetryRequest,
                                    Pagination::ListResourceTelemetryPaginationTraits<DerivedClient>>
  ListResourceTelemetryPaginator(const Model::ListResourceTelemetryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceTelemetryRequest,
                                             Pagination::ListResourceTelemetryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResourceTelemetryForOrganization operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceTelemetryForOrganizationRequest,
                                    Pagination::ListResourceTelemetryForOrganizationPaginationTraits<DerivedClient>>
  ListResourceTelemetryForOrganizationPaginator(const Model::ListResourceTelemetryForOrganizationRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceTelemetryForOrganizationRequest,
                                             Pagination::ListResourceTelemetryForOrganizationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListS3TableIntegrations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListS3TableIntegrationsRequest,
                                    Pagination::ListS3TableIntegrationsPaginationTraits<DerivedClient>>
  ListS3TableIntegrationsPaginator(const Model::ListS3TableIntegrationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListS3TableIntegrationsRequest,
                                             Pagination::ListS3TableIntegrationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTelemetryPipelines operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTelemetryPipelinesRequest,
                                    Pagination::ListTelemetryPipelinesPaginationTraits<DerivedClient>>
  ListTelemetryPipelinesPaginator(const Model::ListTelemetryPipelinesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTelemetryPipelinesRequest,
                                             Pagination::ListTelemetryPipelinesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTelemetryRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTelemetryRulesRequest,
                                    Pagination::ListTelemetryRulesPaginationTraits<DerivedClient>>
  ListTelemetryRulesPaginator(const Model::ListTelemetryRulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTelemetryRulesRequest,
                                             Pagination::ListTelemetryRulesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTelemetryRulesForOrganization operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTelemetryRulesForOrganizationRequest,
                                    Pagination::ListTelemetryRulesForOrganizationPaginationTraits<DerivedClient>>
  ListTelemetryRulesForOrganizationPaginator(const Model::ListTelemetryRulesForOrganizationRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTelemetryRulesForOrganizationRequest,
                                             Pagination::ListTelemetryRulesForOrganizationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ObservabilityAdmin
}  // namespace Aws
