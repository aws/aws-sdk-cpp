/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/s3files/S3FilesClient.h>
#include <aws/s3files/model/ListAccessPointsPaginationTraits.h>
#include <aws/s3files/model/ListFileSystemsPaginationTraits.h>
#include <aws/s3files/model/ListMountTargetsPaginationTraits.h>
#include <aws/s3files/model/ListTagsForResourcePaginationTraits.h>

namespace Aws {
namespace S3Files {

using ListAccessPointsPaginator = Aws::Utils::Pagination::Paginator<S3FilesClient, Model::ListAccessPointsRequest,
                                                                    Pagination::ListAccessPointsPaginationTraits<S3FilesClient>>;
using ListFileSystemsPaginator = Aws::Utils::Pagination::Paginator<S3FilesClient, Model::ListFileSystemsRequest,
                                                                   Pagination::ListFileSystemsPaginationTraits<S3FilesClient>>;
using ListMountTargetsPaginator = Aws::Utils::Pagination::Paginator<S3FilesClient, Model::ListMountTargetsRequest,
                                                                    Pagination::ListMountTargetsPaginationTraits<S3FilesClient>>;
using ListTagsForResourcePaginator = Aws::Utils::Pagination::Paginator<S3FilesClient, Model::ListTagsForResourceRequest,
                                                                       Pagination::ListTagsForResourcePaginationTraits<S3FilesClient>>;

}  // namespace S3Files
}  // namespace Aws
