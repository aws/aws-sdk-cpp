/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/storagegateway/StorageGatewayClient.h>
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

namespace Aws {
namespace StorageGateway {

using DescribeTapeArchivesPaginator =
    Aws::Utils::Pagination::Paginator<StorageGatewayClient, Model::DescribeTapeArchivesRequest,
                                      Pagination::DescribeTapeArchivesPaginationTraits<StorageGatewayClient>>;
using DescribeTapeRecoveryPointsPaginator =
    Aws::Utils::Pagination::Paginator<StorageGatewayClient, Model::DescribeTapeRecoveryPointsRequest,
                                      Pagination::DescribeTapeRecoveryPointsPaginationTraits<StorageGatewayClient>>;
using DescribeTapesPaginator = Aws::Utils::Pagination::Paginator<StorageGatewayClient, Model::DescribeTapesRequest,
                                                                 Pagination::DescribeTapesPaginationTraits<StorageGatewayClient>>;
using DescribeVTLDevicesPaginator = Aws::Utils::Pagination::Paginator<StorageGatewayClient, Model::DescribeVTLDevicesRequest,
                                                                      Pagination::DescribeVTLDevicesPaginationTraits<StorageGatewayClient>>;
using ListCacheReportsPaginator = Aws::Utils::Pagination::Paginator<StorageGatewayClient, Model::ListCacheReportsRequest,
                                                                    Pagination::ListCacheReportsPaginationTraits<StorageGatewayClient>>;
using ListFileSharesPaginator = Aws::Utils::Pagination::Paginator<StorageGatewayClient, Model::ListFileSharesRequest,
                                                                  Pagination::ListFileSharesPaginationTraits<StorageGatewayClient>>;
using ListFileSystemAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<StorageGatewayClient, Model::ListFileSystemAssociationsRequest,
                                      Pagination::ListFileSystemAssociationsPaginationTraits<StorageGatewayClient>>;
using ListGatewaysPaginator = Aws::Utils::Pagination::Paginator<StorageGatewayClient, Model::ListGatewaysRequest,
                                                                Pagination::ListGatewaysPaginationTraits<StorageGatewayClient>>;
using ListTagsForResourcePaginator =
    Aws::Utils::Pagination::Paginator<StorageGatewayClient, Model::ListTagsForResourceRequest,
                                      Pagination::ListTagsForResourcePaginationTraits<StorageGatewayClient>>;
using ListTapePoolsPaginator = Aws::Utils::Pagination::Paginator<StorageGatewayClient, Model::ListTapePoolsRequest,
                                                                 Pagination::ListTapePoolsPaginationTraits<StorageGatewayClient>>;
using ListTapesPaginator = Aws::Utils::Pagination::Paginator<StorageGatewayClient, Model::ListTapesRequest,
                                                             Pagination::ListTapesPaginationTraits<StorageGatewayClient>>;
using ListVolumesPaginator = Aws::Utils::Pagination::Paginator<StorageGatewayClient, Model::ListVolumesRequest,
                                                               Pagination::ListVolumesPaginationTraits<StorageGatewayClient>>;

}  // namespace StorageGateway
}  // namespace Aws
