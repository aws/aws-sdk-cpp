/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/mgn/MgnClient.h>
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

namespace Aws {
namespace mgn {

using DescribeJobLogItemsPaginator = Aws::Utils::Pagination::Paginator<MgnClient, Model::DescribeJobLogItemsRequest,
                                                                       Pagination::DescribeJobLogItemsPaginationTraits<MgnClient>>;
using DescribeJobsPaginator =
    Aws::Utils::Pagination::Paginator<MgnClient, Model::DescribeJobsRequest, Pagination::DescribeJobsPaginationTraits<MgnClient>>;
using DescribeLaunchConfigurationTemplatesPaginator =
    Aws::Utils::Pagination::Paginator<MgnClient, Model::DescribeLaunchConfigurationTemplatesRequest,
                                      Pagination::DescribeLaunchConfigurationTemplatesPaginationTraits<MgnClient>>;
using DescribeReplicationConfigurationTemplatesPaginator =
    Aws::Utils::Pagination::Paginator<MgnClient, Model::DescribeReplicationConfigurationTemplatesRequest,
                                      Pagination::DescribeReplicationConfigurationTemplatesPaginationTraits<MgnClient>>;
using DescribeSourceServersPaginator = Aws::Utils::Pagination::Paginator<MgnClient, Model::DescribeSourceServersRequest,
                                                                         Pagination::DescribeSourceServersPaginationTraits<MgnClient>>;
using DescribeVcenterClientsPaginator = Aws::Utils::Pagination::Paginator<MgnClient, Model::DescribeVcenterClientsRequest,
                                                                          Pagination::DescribeVcenterClientsPaginationTraits<MgnClient>>;
using ListApplicationsPaginator =
    Aws::Utils::Pagination::Paginator<MgnClient, Model::ListApplicationsRequest, Pagination::ListApplicationsPaginationTraits<MgnClient>>;
using ListConnectorsPaginator =
    Aws::Utils::Pagination::Paginator<MgnClient, Model::ListConnectorsRequest, Pagination::ListConnectorsPaginationTraits<MgnClient>>;
using ListExportErrorsPaginator =
    Aws::Utils::Pagination::Paginator<MgnClient, Model::ListExportErrorsRequest, Pagination::ListExportErrorsPaginationTraits<MgnClient>>;
using ListExportsPaginator =
    Aws::Utils::Pagination::Paginator<MgnClient, Model::ListExportsRequest, Pagination::ListExportsPaginationTraits<MgnClient>>;
using ListImportErrorsPaginator =
    Aws::Utils::Pagination::Paginator<MgnClient, Model::ListImportErrorsRequest, Pagination::ListImportErrorsPaginationTraits<MgnClient>>;
using ListImportFileEnrichmentsPaginator =
    Aws::Utils::Pagination::Paginator<MgnClient, Model::ListImportFileEnrichmentsRequest,
                                      Pagination::ListImportFileEnrichmentsPaginationTraits<MgnClient>>;
using ListImportsPaginator =
    Aws::Utils::Pagination::Paginator<MgnClient, Model::ListImportsRequest, Pagination::ListImportsPaginationTraits<MgnClient>>;
using ListManagedAccountsPaginator = Aws::Utils::Pagination::Paginator<MgnClient, Model::ListManagedAccountsRequest,
                                                                       Pagination::ListManagedAccountsPaginationTraits<MgnClient>>;
using ListNetworkMigrationAnalysesPaginator =
    Aws::Utils::Pagination::Paginator<MgnClient, Model::ListNetworkMigrationAnalysesRequest,
                                      Pagination::ListNetworkMigrationAnalysesPaginationTraits<MgnClient>>;
using ListNetworkMigrationAnalysisResultsPaginator =
    Aws::Utils::Pagination::Paginator<MgnClient, Model::ListNetworkMigrationAnalysisResultsRequest,
                                      Pagination::ListNetworkMigrationAnalysisResultsPaginationTraits<MgnClient>>;
using ListNetworkMigrationCodeGenerationsPaginator =
    Aws::Utils::Pagination::Paginator<MgnClient, Model::ListNetworkMigrationCodeGenerationsRequest,
                                      Pagination::ListNetworkMigrationCodeGenerationsPaginationTraits<MgnClient>>;
using ListNetworkMigrationCodeGenerationSegmentsPaginator =
    Aws::Utils::Pagination::Paginator<MgnClient, Model::ListNetworkMigrationCodeGenerationSegmentsRequest,
                                      Pagination::ListNetworkMigrationCodeGenerationSegmentsPaginationTraits<MgnClient>>;
using ListNetworkMigrationDefinitionsPaginator =
    Aws::Utils::Pagination::Paginator<MgnClient, Model::ListNetworkMigrationDefinitionsRequest,
                                      Pagination::ListNetworkMigrationDefinitionsPaginationTraits<MgnClient>>;
using ListNetworkMigrationDeployedStacksPaginator =
    Aws::Utils::Pagination::Paginator<MgnClient, Model::ListNetworkMigrationDeployedStacksRequest,
                                      Pagination::ListNetworkMigrationDeployedStacksPaginationTraits<MgnClient>>;
using ListNetworkMigrationDeploymentsPaginator =
    Aws::Utils::Pagination::Paginator<MgnClient, Model::ListNetworkMigrationDeploymentsRequest,
                                      Pagination::ListNetworkMigrationDeploymentsPaginationTraits<MgnClient>>;
using ListNetworkMigrationExecutionsPaginator =
    Aws::Utils::Pagination::Paginator<MgnClient, Model::ListNetworkMigrationExecutionsRequest,
                                      Pagination::ListNetworkMigrationExecutionsPaginationTraits<MgnClient>>;
using ListNetworkMigrationMapperSegmentConstructsPaginator =
    Aws::Utils::Pagination::Paginator<MgnClient, Model::ListNetworkMigrationMapperSegmentConstructsRequest,
                                      Pagination::ListNetworkMigrationMapperSegmentConstructsPaginationTraits<MgnClient>>;
using ListNetworkMigrationMapperSegmentsPaginator =
    Aws::Utils::Pagination::Paginator<MgnClient, Model::ListNetworkMigrationMapperSegmentsRequest,
                                      Pagination::ListNetworkMigrationMapperSegmentsPaginationTraits<MgnClient>>;
using ListNetworkMigrationMappingsPaginator =
    Aws::Utils::Pagination::Paginator<MgnClient, Model::ListNetworkMigrationMappingsRequest,
                                      Pagination::ListNetworkMigrationMappingsPaginationTraits<MgnClient>>;
using ListNetworkMigrationMappingUpdatesPaginator =
    Aws::Utils::Pagination::Paginator<MgnClient, Model::ListNetworkMigrationMappingUpdatesRequest,
                                      Pagination::ListNetworkMigrationMappingUpdatesPaginationTraits<MgnClient>>;
using ListSourceServerActionsPaginator = Aws::Utils::Pagination::Paginator<MgnClient, Model::ListSourceServerActionsRequest,
                                                                           Pagination::ListSourceServerActionsPaginationTraits<MgnClient>>;
using ListTemplateActionsPaginator = Aws::Utils::Pagination::Paginator<MgnClient, Model::ListTemplateActionsRequest,
                                                                       Pagination::ListTemplateActionsPaginationTraits<MgnClient>>;
using ListWavesPaginator =
    Aws::Utils::Pagination::Paginator<MgnClient, Model::ListWavesRequest, Pagination::ListWavesPaginationTraits<MgnClient>>;

}  // namespace mgn
}  // namespace Aws
