/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/mgn/model/DescribeJobLogItemsPaginationTraits.h>
#include <aws/mgn/model/DescribeJobsPaginationTraits.h>
#include <aws/mgn/model/DescribeLaunchConfigurationTemplatesPaginationTraits.h>
#include <aws/mgn/model/DescribeReplicationConfigurationTemplatesPaginationTraits.h>
#include <aws/mgn/model/DescribeSourceServersPaginationTraits.h>
#include <aws/mgn/model/DescribeVcenterClientsPaginationTraits.h>
#include <aws/mgn/model/ListApplicationsPaginationTraits.h>
#include <aws/mgn/model/ListConnectorsPaginationTraits.h>
#include <aws/mgn/model/ListExportErrorsPaginationTraits.h>
#include <aws/mgn/model/ListExportsPaginationTraits.h>
#include <aws/mgn/model/ListImportErrorsPaginationTraits.h>
#include <aws/mgn/model/ListImportFileEnrichmentsPaginationTraits.h>
#include <aws/mgn/model/ListImportsPaginationTraits.h>
#include <aws/mgn/model/ListManagedAccountsPaginationTraits.h>
#include <aws/mgn/model/ListNetworkMigrationAnalysesPaginationTraits.h>
#include <aws/mgn/model/ListNetworkMigrationAnalysisResultsPaginationTraits.h>
#include <aws/mgn/model/ListNetworkMigrationCodeGenerationSegmentsPaginationTraits.h>
#include <aws/mgn/model/ListNetworkMigrationCodeGenerationsPaginationTraits.h>
#include <aws/mgn/model/ListNetworkMigrationDefinitionsPaginationTraits.h>
#include <aws/mgn/model/ListNetworkMigrationDeployedStacksPaginationTraits.h>
#include <aws/mgn/model/ListNetworkMigrationDeploymentsPaginationTraits.h>
#include <aws/mgn/model/ListNetworkMigrationExecutionsPaginationTraits.h>
#include <aws/mgn/model/ListNetworkMigrationMapperSegmentConstructsPaginationTraits.h>
#include <aws/mgn/model/ListNetworkMigrationMapperSegmentsPaginationTraits.h>
#include <aws/mgn/model/ListNetworkMigrationMappingUpdatesPaginationTraits.h>
#include <aws/mgn/model/ListNetworkMigrationMappingsPaginationTraits.h>
#include <aws/mgn/model/ListSourceServerActionsPaginationTraits.h>
#include <aws/mgn/model/ListTemplateActionsPaginationTraits.h>
#include <aws/mgn/model/ListWavesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace mgn {

template <typename DerivedClient>
class MgnPaginationBase {
 public:
  /**
   * Create a paginator for DescribeJobLogItems operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeJobLogItemsRequest,
                                    Pagination::DescribeJobLogItemsPaginationTraits<DerivedClient>>
  DescribeJobLogItemsPaginator(const Model::DescribeJobLogItemsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeJobLogItemsRequest,
                                             Pagination::DescribeJobLogItemsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeJobsRequest, Pagination::DescribeJobsPaginationTraits<DerivedClient>>
  DescribeJobsPaginator(const Model::DescribeJobsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeJobsRequest,
                                             Pagination::DescribeJobsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for DescribeLaunchConfigurationTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeLaunchConfigurationTemplatesRequest,
                                    Pagination::DescribeLaunchConfigurationTemplatesPaginationTraits<DerivedClient>>
  DescribeLaunchConfigurationTemplatesPaginator(const Model::DescribeLaunchConfigurationTemplatesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeLaunchConfigurationTemplatesRequest,
                                             Pagination::DescribeLaunchConfigurationTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeReplicationConfigurationTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReplicationConfigurationTemplatesRequest,
                                    Pagination::DescribeReplicationConfigurationTemplatesPaginationTraits<DerivedClient>>
  DescribeReplicationConfigurationTemplatesPaginator(const Model::DescribeReplicationConfigurationTemplatesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReplicationConfigurationTemplatesRequest,
                                             Pagination::DescribeReplicationConfigurationTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeSourceServers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSourceServersRequest,
                                    Pagination::DescribeSourceServersPaginationTraits<DerivedClient>>
  DescribeSourceServersPaginator(const Model::DescribeSourceServersRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSourceServersRequest,
                                             Pagination::DescribeSourceServersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeVcenterClients operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVcenterClientsRequest,
                                    Pagination::DescribeVcenterClientsPaginationTraits<DerivedClient>>
  DescribeVcenterClientsPaginator(const Model::DescribeVcenterClientsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVcenterClientsRequest,
                                             Pagination::DescribeVcenterClientsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListApplications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationsRequest,
                                    Pagination::ListApplicationsPaginationTraits<DerivedClient>>
  ListApplicationsPaginator(const Model::ListApplicationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationsRequest,
                                             Pagination::ListApplicationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListConnectors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectorsRequest, Pagination::ListConnectorsPaginationTraits<DerivedClient>>
  ListConnectorsPaginator(const Model::ListConnectorsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectorsRequest,
                                             Pagination::ListConnectorsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListExportErrors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExportErrorsRequest,
                                    Pagination::ListExportErrorsPaginationTraits<DerivedClient>>
  ListExportErrorsPaginator(const Model::ListExportErrorsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExportErrorsRequest,
                                             Pagination::ListExportErrorsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListExports operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExportsRequest, Pagination::ListExportsPaginationTraits<DerivedClient>>
  ListExportsPaginator(const Model::ListExportsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExportsRequest,
                                             Pagination::ListExportsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListImportErrors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImportErrorsRequest,
                                    Pagination::ListImportErrorsPaginationTraits<DerivedClient>>
  ListImportErrorsPaginator(const Model::ListImportErrorsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImportErrorsRequest,
                                             Pagination::ListImportErrorsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListImportFileEnrichments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImportFileEnrichmentsRequest,
                                    Pagination::ListImportFileEnrichmentsPaginationTraits<DerivedClient>>
  ListImportFileEnrichmentsPaginator(const Model::ListImportFileEnrichmentsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImportFileEnrichmentsRequest,
                                             Pagination::ListImportFileEnrichmentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListImports operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImportsRequest, Pagination::ListImportsPaginationTraits<DerivedClient>>
  ListImportsPaginator(const Model::ListImportsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImportsRequest,
                                             Pagination::ListImportsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListManagedAccounts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedAccountsRequest,
                                    Pagination::ListManagedAccountsPaginationTraits<DerivedClient>>
  ListManagedAccountsPaginator(const Model::ListManagedAccountsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedAccountsRequest,
                                             Pagination::ListManagedAccountsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListNetworkMigrationAnalyses operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworkMigrationAnalysesRequest,
                                    Pagination::ListNetworkMigrationAnalysesPaginationTraits<DerivedClient>>
  ListNetworkMigrationAnalysesPaginator(const Model::ListNetworkMigrationAnalysesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworkMigrationAnalysesRequest,
                                             Pagination::ListNetworkMigrationAnalysesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListNetworkMigrationAnalysisResults operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworkMigrationAnalysisResultsRequest,
                                    Pagination::ListNetworkMigrationAnalysisResultsPaginationTraits<DerivedClient>>
  ListNetworkMigrationAnalysisResultsPaginator(const Model::ListNetworkMigrationAnalysisResultsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworkMigrationAnalysisResultsRequest,
                                             Pagination::ListNetworkMigrationAnalysisResultsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListNetworkMigrationCodeGenerations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworkMigrationCodeGenerationsRequest,
                                    Pagination::ListNetworkMigrationCodeGenerationsPaginationTraits<DerivedClient>>
  ListNetworkMigrationCodeGenerationsPaginator(const Model::ListNetworkMigrationCodeGenerationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworkMigrationCodeGenerationsRequest,
                                             Pagination::ListNetworkMigrationCodeGenerationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListNetworkMigrationCodeGenerationSegments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworkMigrationCodeGenerationSegmentsRequest,
                                    Pagination::ListNetworkMigrationCodeGenerationSegmentsPaginationTraits<DerivedClient>>
  ListNetworkMigrationCodeGenerationSegmentsPaginator(const Model::ListNetworkMigrationCodeGenerationSegmentsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworkMigrationCodeGenerationSegmentsRequest,
                                             Pagination::ListNetworkMigrationCodeGenerationSegmentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListNetworkMigrationDefinitions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworkMigrationDefinitionsRequest,
                                    Pagination::ListNetworkMigrationDefinitionsPaginationTraits<DerivedClient>>
  ListNetworkMigrationDefinitionsPaginator(const Model::ListNetworkMigrationDefinitionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworkMigrationDefinitionsRequest,
                                             Pagination::ListNetworkMigrationDefinitionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListNetworkMigrationDeployedStacks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworkMigrationDeployedStacksRequest,
                                    Pagination::ListNetworkMigrationDeployedStacksPaginationTraits<DerivedClient>>
  ListNetworkMigrationDeployedStacksPaginator(const Model::ListNetworkMigrationDeployedStacksRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworkMigrationDeployedStacksRequest,
                                             Pagination::ListNetworkMigrationDeployedStacksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListNetworkMigrationDeployments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworkMigrationDeploymentsRequest,
                                    Pagination::ListNetworkMigrationDeploymentsPaginationTraits<DerivedClient>>
  ListNetworkMigrationDeploymentsPaginator(const Model::ListNetworkMigrationDeploymentsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworkMigrationDeploymentsRequest,
                                             Pagination::ListNetworkMigrationDeploymentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListNetworkMigrationExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworkMigrationExecutionsRequest,
                                    Pagination::ListNetworkMigrationExecutionsPaginationTraits<DerivedClient>>
  ListNetworkMigrationExecutionsPaginator(const Model::ListNetworkMigrationExecutionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworkMigrationExecutionsRequest,
                                             Pagination::ListNetworkMigrationExecutionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListNetworkMigrationMapperSegmentConstructs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworkMigrationMapperSegmentConstructsRequest,
                                    Pagination::ListNetworkMigrationMapperSegmentConstructsPaginationTraits<DerivedClient>>
  ListNetworkMigrationMapperSegmentConstructsPaginator(const Model::ListNetworkMigrationMapperSegmentConstructsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworkMigrationMapperSegmentConstructsRequest,
                                             Pagination::ListNetworkMigrationMapperSegmentConstructsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListNetworkMigrationMapperSegments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworkMigrationMapperSegmentsRequest,
                                    Pagination::ListNetworkMigrationMapperSegmentsPaginationTraits<DerivedClient>>
  ListNetworkMigrationMapperSegmentsPaginator(const Model::ListNetworkMigrationMapperSegmentsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworkMigrationMapperSegmentsRequest,
                                             Pagination::ListNetworkMigrationMapperSegmentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListNetworkMigrationMappings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworkMigrationMappingsRequest,
                                    Pagination::ListNetworkMigrationMappingsPaginationTraits<DerivedClient>>
  ListNetworkMigrationMappingsPaginator(const Model::ListNetworkMigrationMappingsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworkMigrationMappingsRequest,
                                             Pagination::ListNetworkMigrationMappingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListNetworkMigrationMappingUpdates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworkMigrationMappingUpdatesRequest,
                                    Pagination::ListNetworkMigrationMappingUpdatesPaginationTraits<DerivedClient>>
  ListNetworkMigrationMappingUpdatesPaginator(const Model::ListNetworkMigrationMappingUpdatesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNetworkMigrationMappingUpdatesRequest,
                                             Pagination::ListNetworkMigrationMappingUpdatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSourceServerActions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSourceServerActionsRequest,
                                    Pagination::ListSourceServerActionsPaginationTraits<DerivedClient>>
  ListSourceServerActionsPaginator(const Model::ListSourceServerActionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSourceServerActionsRequest,
                                             Pagination::ListSourceServerActionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTemplateActions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTemplateActionsRequest,
                                    Pagination::ListTemplateActionsPaginationTraits<DerivedClient>>
  ListTemplateActionsPaginator(const Model::ListTemplateActionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTemplateActionsRequest,
                                             Pagination::ListTemplateActionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWaves operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWavesRequest, Pagination::ListWavesPaginationTraits<DerivedClient>>
  ListWavesPaginator(const Model::ListWavesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWavesRequest, Pagination::ListWavesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace mgn
}  // namespace Aws
