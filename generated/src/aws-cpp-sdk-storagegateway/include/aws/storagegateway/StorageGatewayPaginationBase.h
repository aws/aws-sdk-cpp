/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/storagegateway/model/DescribeTapeArchivesPaginationTraits.h>
#include <aws/storagegateway/model/DescribeTapeRecoveryPointsPaginationTraits.h>
#include <aws/storagegateway/model/DescribeTapesPaginationTraits.h>
#include <aws/storagegateway/model/DescribeVTLDevicesPaginationTraits.h>
#include <aws/storagegateway/model/ListCacheReportsPaginationTraits.h>
#include <aws/storagegateway/model/ListFileSharesPaginationTraits.h>
#include <aws/storagegateway/model/ListFileSystemAssociationsPaginationTraits.h>
#include <aws/storagegateway/model/ListGatewaysPaginationTraits.h>
#include <aws/storagegateway/model/ListTagsForResourcePaginationTraits.h>
#include <aws/storagegateway/model/ListTapePoolsPaginationTraits.h>
#include <aws/storagegateway/model/ListTapesPaginationTraits.h>
#include <aws/storagegateway/model/ListVolumesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace StorageGateway {

class StorageGatewayClient;

template <typename DerivedClient>
class StorageGatewayPaginationBase {
 public:
  /**
   * Create a paginator for DescribeTapeArchives operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTapeArchivesRequest,
                                    Pagination::DescribeTapeArchivesPaginationTraits<DerivedClient>>
  DescribeTapeArchivesPaginator(const Model::DescribeTapeArchivesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTapeArchivesRequest,
                                             Pagination::DescribeTapeArchivesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeTapeRecoveryPoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTapeRecoveryPointsRequest,
                                    Pagination::DescribeTapeRecoveryPointsPaginationTraits<DerivedClient>>
  DescribeTapeRecoveryPointsPaginator(const Model::DescribeTapeRecoveryPointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTapeRecoveryPointsRequest,
                                             Pagination::DescribeTapeRecoveryPointsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeTapes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTapesRequest, Pagination::DescribeTapesPaginationTraits<DerivedClient>>
  DescribeTapesPaginator(const Model::DescribeTapesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTapesRequest,
                                             Pagination::DescribeTapesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for DescribeVTLDevices operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVTLDevicesRequest,
                                    Pagination::DescribeVTLDevicesPaginationTraits<DerivedClient>>
  DescribeVTLDevicesPaginator(const Model::DescribeVTLDevicesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVTLDevicesRequest,
                                             Pagination::DescribeVTLDevicesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCacheReports operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCacheReportsRequest,
                                    Pagination::ListCacheReportsPaginationTraits<DerivedClient>>
  ListCacheReportsPaginator(const Model::ListCacheReportsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCacheReportsRequest,
                                             Pagination::ListCacheReportsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListFileShares operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFileSharesRequest, Pagination::ListFileSharesPaginationTraits<DerivedClient>>
  ListFileSharesPaginator(const Model::ListFileSharesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFileSharesRequest,
                                             Pagination::ListFileSharesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListFileSystemAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFileSystemAssociationsRequest,
                                    Pagination::ListFileSystemAssociationsPaginationTraits<DerivedClient>>
  ListFileSystemAssociationsPaginator(const Model::ListFileSystemAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFileSystemAssociationsRequest,
                                             Pagination::ListFileSystemAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListGateways operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGatewaysRequest, Pagination::ListGatewaysPaginationTraits<DerivedClient>>
  ListGatewaysPaginator(const Model::ListGatewaysRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGatewaysRequest,
                                             Pagination::ListGatewaysPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListTagsForResource operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                    Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>
  ListTagsForResourcePaginator(const Model::ListTagsForResourceRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                             Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTapePools operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTapePoolsRequest, Pagination::ListTapePoolsPaginationTraits<DerivedClient>>
  ListTapePoolsPaginator(const Model::ListTapePoolsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTapePoolsRequest,
                                             Pagination::ListTapePoolsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListTapes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTapesRequest, Pagination::ListTapesPaginationTraits<DerivedClient>>
  ListTapesPaginator(const Model::ListTapesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTapesRequest, Pagination::ListTapesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListVolumes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVolumesRequest, Pagination::ListVolumesPaginationTraits<DerivedClient>>
  ListVolumesPaginator(const Model::ListVolumesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVolumesRequest,
                                             Pagination::ListVolumesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }
};
}  // namespace StorageGateway
}  // namespace Aws
