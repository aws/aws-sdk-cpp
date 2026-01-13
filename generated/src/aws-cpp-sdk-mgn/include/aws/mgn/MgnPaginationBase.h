/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

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
#include <aws/mgn/model/ListImportsPaginationTraits.h>
#include <aws/mgn/model/ListManagedAccountsPaginationTraits.h>
#include <aws/mgn/model/ListSourceServerActionsPaginationTraits.h>
#include <aws/mgn/model/ListTemplateActionsPaginationTraits.h>
#include <aws/mgn/model/ListWavesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace mgn {

class MgnClient;

template <typename DerivedClient>
class MgnPaginationBase {
 public:
  /**
   * Create a paginator for DescribeJobLogItems operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeJobLogItemsRequest,
                                    Pagination::DescribeJobLogItemsPaginationTraits<DerivedClient>>
  DescribeJobLogItemsPaginator(const Model::DescribeJobLogItemsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeJobLogItemsRequest,
                                             Pagination::DescribeJobLogItemsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeJobsRequest, Pagination::DescribeJobsPaginationTraits<DerivedClient>>
  DescribeJobsPaginator(const Model::DescribeJobsRequest& request) {
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
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationsRequest,
                                             Pagination::ListApplicationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListConnectors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectorsRequest, Pagination::ListConnectorsPaginationTraits<DerivedClient>>
  ListConnectorsPaginator(const Model::ListConnectorsRequest& request) {
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
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExportErrorsRequest,
                                             Pagination::ListExportErrorsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListExports operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExportsRequest, Pagination::ListExportsPaginationTraits<DerivedClient>>
  ListExportsPaginator(const Model::ListExportsRequest& request) {
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
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImportErrorsRequest,
                                             Pagination::ListImportErrorsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListImports operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImportsRequest, Pagination::ListImportsPaginationTraits<DerivedClient>>
  ListImportsPaginator(const Model::ListImportsRequest& request) {
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
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedAccountsRequest,
                                             Pagination::ListManagedAccountsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSourceServerActions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSourceServerActionsRequest,
                                    Pagination::ListSourceServerActionsPaginationTraits<DerivedClient>>
  ListSourceServerActionsPaginator(const Model::ListSourceServerActionsRequest& request) {
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
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTemplateActionsRequest,
                                             Pagination::ListTemplateActionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWaves operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWavesRequest, Pagination::ListWavesPaginationTraits<DerivedClient>>
  ListWavesPaginator(const Model::ListWavesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWavesRequest, Pagination::ListWavesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace mgn
}  // namespace Aws
