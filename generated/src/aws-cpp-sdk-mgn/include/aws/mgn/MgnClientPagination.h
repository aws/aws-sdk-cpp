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
#include <aws/mgn/model/ListImportsPaginationTraits.h>
#include <aws/mgn/model/ListManagedAccountsPaginationTraits.h>
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
using ListImportsPaginator =
    Aws::Utils::Pagination::Paginator<MgnClient, Model::ListImportsRequest, Pagination::ListImportsPaginationTraits<MgnClient>>;
using ListManagedAccountsPaginator = Aws::Utils::Pagination::Paginator<MgnClient, Model::ListManagedAccountsRequest,
                                                                       Pagination::ListManagedAccountsPaginationTraits<MgnClient>>;
using ListSourceServerActionsPaginator = Aws::Utils::Pagination::Paginator<MgnClient, Model::ListSourceServerActionsRequest,
                                                                           Pagination::ListSourceServerActionsPaginationTraits<MgnClient>>;
using ListTemplateActionsPaginator = Aws::Utils::Pagination::Paginator<MgnClient, Model::ListTemplateActionsRequest,
                                                                       Pagination::ListTemplateActionsPaginationTraits<MgnClient>>;
using ListWavesPaginator =
    Aws::Utils::Pagination::Paginator<MgnClient, Model::ListWavesRequest, Pagination::ListWavesPaginationTraits<MgnClient>>;

}  // namespace mgn
}  // namespace Aws
